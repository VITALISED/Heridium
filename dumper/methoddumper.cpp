#include "methoddumper.h"

void MethodDumper::Dump(const char* lpacFilename, const cTkMetaDataClass* lpMetaDataClass, std::vector<uintptr_t>* functionLookup)
{
	std::string cppFilename = std::string(lpacFilename).substr(0, std::string(lpacFilename).find_last_of(".h") - 1);
	cppFilename.append(".cpp");

	std::string localPath = fmt::format("/HERIDIUM/{}", cppFilename);
	std::string root = std::filesystem::current_path().string();
	std::string fullPath = fmt::format("{}{}", root, localPath);

	std::string dirPath = fullPath.substr(0, fullPath.find_last_of("/"));

	std::filesystem::create_directories(dirPath);

	std::ofstream Source(fullPath);

	std::string includePath = fmt::format("#include \"{}\"", std::filesystem::path(lpacFilename).filename().string());
	Source << includePath.c_str();

	Source << "\n\n";

	MethodDumper::DoXMLFunctions(&Source, lpMetaDataClass);
	MethodDumper::DoGenericFunctions(&Source, lpMetaDataClass, functionLookup);

	Source.close();
}

void MethodDumper::DoXMLFunctions(std::ofstream* Source, const cTkMetaDataClass* lpMetaDataClass)
{
	cTkMetaDataXML::GetLookup __GetLookup__ = (cTkMetaDataXML::GetLookup)OFFSET(0x250EA40);

	cTkMetaDataXMLFunctionLookup* xmlFunctionData = __GetLookup__(lpMetaDataClass->mpacName);


	std::string XMLRead = "void "; XMLRead.append(lpMetaDataClass->mpacName); XMLRead.append("::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)\n{\n");
	XMLRead.append("    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET("); XMLRead.append(std::to_string((uintptr_t)xmlFunctionData->mReadFunction - __HERIDIUM_BASE));
	XMLRead.append(");\n    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);\n}\n\n");

	*Source << XMLRead.c_str();

	std::string XMLSave = "bool "; XMLSave.append(lpMetaDataClass->mpacName); XMLSave.append("::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)\n{\n");
	XMLSave.append("    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET("); XMLSave.append(std::to_string((uintptr_t)xmlFunctionData->mSaveFunction - __HERIDIUM_BASE));
	XMLSave.append(");\n    return classPtrSaveFunc(lPtr, lpacFilename);\n}\n\n");

	*Source << XMLSave.c_str();

	std::string XMLWrite = "void "; XMLWrite.append(lpMetaDataClass->mpacName); XMLWrite.append("::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)\n{\n");
	XMLWrite.append("    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET("); XMLWrite.append(std::to_string((uintptr_t)xmlFunctionData->mWriteFunction - __HERIDIUM_BASE));
	XMLWrite.append(");\n    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);\n}\n\n");

	*Source << XMLWrite.c_str();
}

void MethodDumper::DoGenericFunctions(std::ofstream* Source, const cTkMetaDataClass* lpMetaDataClass, std::vector<uintptr_t>* functionLookup)
{
	// We can't use cTkMetaData::GetLookup so we settle for getting funcs from cTkMetaData::Register

	std::string Default = "void "; Default.append(lpMetaDataClass->mpacName); Default.append("::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)\n{\n");
	Default.append("    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET("); Default.append(std::to_string(functionLookup->at(0) - __HERIDIUM_BASE));
	Default.append(");\n    return classPtrDefaultFunc(lPtr, lpAllocator);\n}\n\n");

	*Source << Default.c_str();

	std::string Fixing = "void "; Fixing.append(lpMetaDataClass->mpacName); Fixing.append("::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)\n{\n");
	Fixing.append("    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET("); Fixing.append(std::to_string(functionLookup->at(1) - __HERIDIUM_BASE));
	Fixing.append(");\n    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);\n}\n\n");

	*Source << Fixing.c_str();

	// ClassPointerValidate, ClassPointerRender seem to be deprecated, or HG really love cTkAnimVectorBlendNode::ClassPointerRender, but we're gonna skip them.

	std::string Compare = "bool "; Compare.append(lpMetaDataClass->mpacName); Compare.append("::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)\n{\n");
	Compare.append("    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET("); Compare.append(std::to_string(functionLookup->at(4) - __HERIDIUM_BASE));
	Compare.append(");\n    return classPtrEqualsFunc(lPtr, lOtherPtr);\n}\n\n");

	*Source << Compare.c_str();

	std::string Copy = "void "; Copy.append(lpMetaDataClass->mpacName); Copy.append("::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)\n{\n");
	Copy.append("    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET("); Copy.append(std::to_string(functionLookup->at(5) - __HERIDIUM_BASE));
	Copy.append(");\n    return classPtrCopyFunc(lDest, lSource);\n}\n\n");

	*Source << Copy.c_str();

	std::string Create = "cTkClassPointer* "; Create.append(lpMetaDataClass->mpacName); Create.append("::ClassPointerCreate(cTkClassPointer *result)\n{\n");
	Create.append("    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET("); Create.append(std::to_string(functionLookup->at(6) - __HERIDIUM_BASE));
	Create.append(");\n    return classPtrCreateFunc(result);\n}\n\n");

	*Source << Create.c_str();

	std::string Hash = "unsigned __int64 "; Hash.append(lpMetaDataClass->mpacName); Hash.append("::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)\n{\n");
	Hash.append("    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET("); Hash.append(std::to_string(functionLookup->at(7) - __HERIDIUM_BASE));
	Hash.append(");\n    return classPtrHashFunc(lPtr, luHash, lbDeep);\n}\n\n");

	*Source << Hash.c_str();

	std::string Destroy = "void "; Destroy.append(lpMetaDataClass->mpacName); Destroy.append("::ClassPointerDestroy(cTkClassPointer* lPtr)\n{\n");
	Destroy.append("    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET("); Destroy.append(std::to_string(functionLookup->at(8) - __HERIDIUM_BASE));
	Destroy.append(");\n    return classPtrDestroyFunc(lPtr);\n}\n\n");

	*Source << Destroy.c_str();
}