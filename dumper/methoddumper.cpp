#include "methoddumper.h"

void MethodDumper::Dump(const char* lpacFilename, const cTkMetaDataClass* lpMetaDataClass)
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
	MethodDumper::DoGenericFunctions(&Source, lpMetaDataClass);

	Source.close();
}

void MethodDumper::DoXMLFunctions(std::ofstream* Source, const cTkMetaDataClass* lpMetaDataClass)
{
	cTkMetaDataXML::GetLookup __GetLookup__ = (cTkMetaDataXML::GetLookup)OFFSET(0x2487970);

	cTkMetaDataXMLFunctionLookup* xmlFunctionData = __GetLookup__(lpMetaDataClass->mpacName);


	std::string XMLRead = "void "; XMLRead.append(lpMetaDataClass->mpacName); XMLRead.append("::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)\n{\n");
	XMLRead.append("    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET("); XMLRead.append(std::to_string((uintptr_t)xmlFunctionData->mReadFunction - __HERIDIUM_BASE));
	XMLRead.append(");\n    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);\n}\n\n");

	*Source << XMLRead.c_str();

	std::string XMLSave = "bool "; XMLSave.append(lpMetaDataClass->mpacName); XMLSave.append("::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)\n{\n");
	XMLSave.append("    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET("); XMLSave.append(std::to_string((uintptr_t)xmlFunctionData->mSaveFunction - __HERIDIUM_BASE));
	XMLSave.append(");\n    return classPtrReadFunc(lPtr, lpacFilename);\n}\n\n");

	*Source << XMLSave.c_str();

	std::string XMLWrite = "void "; XMLWrite.append(lpMetaDataClass->mpacName); XMLWrite.append("::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)\n{\n");
	XMLWrite.append("    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET("); XMLWrite.append(std::to_string((uintptr_t)xmlFunctionData->mWriteFunction - __HERIDIUM_BASE));
	XMLWrite.append(");\n    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);\n}\n\n");

	*Source << XMLWrite.c_str();
}

void MethodDumper::DoGenericFunctions(std::ofstream* Source, const cTkMetaDataClass* lpMetaDataClass)
{
	//cTkMetaData::GetLookup __GetLookup__ = (cTkMetaData::GetLookup)OFFSET(0x2487860);

	//cTkMetaDataFunctionLookup* functionData = __GetLookup__(lpMetaDataClass->muTemplateHash);

	//std::string Compare = "bool "; Compare.append(lpMetaDataClass->mpacName); Compare.append("::ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer* lOtherPtr)\n{\n");
	//Compare.append("    __HERIDIUM_ClassPointerCompare classPtrCompareFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET("); Compare.append(std::to_string((uintptr_t)functionData->mEqualsFunction - __HERIDIUM_BASE));
	//Compare.append(");\n    return classPtrCompareFunc(lPtr, lOtherPtr);\n}\n\n");

	//*Source << Compare.c_str();
}