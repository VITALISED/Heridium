#include "dumper.h"

void Dumper::Dump(const char* lpacFilename, const cTkMetaDataClass* lpMetaDataClass)
{
	std::string localPath = fmt::format("/HERIDIUM/dump/{}", lpacFilename);
	std::string root = std::filesystem::current_path().string();
	std::string fullPath = fmt::format("{}{}", root, localPath);

    std::string dirPath = fullPath.substr(0, fullPath.find_last_of("/"));

	std::filesystem::create_directories(dirPath);

	std::ofstream Header(fullPath);

	Header << "#pragma once\n\n";

	if (lpMetaDataClass->miNumMembers)
	{
		Dumper::ResolveMembersFirstPass(&Header, lpMetaDataClass);
	}

	Header << "class " << lpMetaDataClass->mpacName; Header << "\n{\n";

	Header << "    static const unsigned __int64 muNameHash = " << lpMetaDataClass->muNameHash << ";\n";
	Header << "    static const unsigned __int64 muTemplateHash = " << lpMetaDataClass->muTemplateHash << ";\n";
	Header << "    static const int miNumMembers = " << lpMetaDataClass->miNumMembers << ";\n";

	if (lpMetaDataClass->miNumMembers)
	{
		Dumper::ResolveMembers(&Header, lpMetaDataClass);
	}

	Header << "};\n";

	Header.close();
}

void Dumper::ResolveMembersFirstPass(std::ofstream* Header, const cTkMetaDataClass* lpMetaDataClass)
{
	cTkMetaDataMember* laMember = (cTkMetaDataMember*)lpMetaDataClass->maMembers;

	bool hasIterated = false;

	for (int i = 0; i < lpMetaDataClass->miNumMembers; i++)
	{
		if (!laMember)
			break;

		if (laMember->mType == cTkMetaDataMember::EType_Class && laMember->mpClassMetadata->mpacName)
		{
			hasIterated = true;
			*Header << "class "; *Header << laMember->mpClassMetadata->mpacName; *Header << ";\n";
		} else 

		if (laMember->mType == cTkMetaDataMember::EType_Enum || laMember->mType == cTkMetaDataMember::EType_Flags)
		{
			if (hasIterated)
				*Header << "\n"; //padding

			hasIterated = true;

			// ternary op is for nerds
			if (laMember->mType == cTkMetaDataMember::EType_Enum)
			{
				*Header << "enum"; *Header << " e"; *Header << laMember->mpacName; *Header << "\n{\n";
			}
			else
			{
				*Header << "enum"; *Header << " ex"; *Header << laMember->mpacName; *Header << "\n{\n";
			}

			cTkMetaDataEnumLookup* enumLookup = (cTkMetaDataEnumLookup*)laMember->mpEnumLookup;

			for (int i = 0; i < laMember->miNumEnumMembers; i++)
			{
				if (std::string(enumLookup->mpacName).empty())
				{
					enumLookup++;
					continue;
				}

				*Header << "    "; *Header << "E"; *Header << laMember->mpacName; *Header << "_"; *Header << enumLookup->mpacName;
				*Header << " = "; *Header << enumLookup->miValue;
				*Header << ",\n";

				enumLookup++;
			}

			*Header << "};\n";
		}

		laMember++;
	}

	if (hasIterated)
		*Header << "\n";
}

void Dumper::ResolveMembers(std::ofstream* Header, const cTkMetaDataClass* lpMetaDataClass)
{
	cTkMetaDataMember* laMember = (cTkMetaDataMember*)lpMetaDataClass->maMembers;

	for (int i = 0; i < lpMetaDataClass->miNumMembers; i++)
	{
		if (!laMember)
			break;

		*Header << "    ";
		if (laMember->mType == cTkMetaDataMember::EType_Class)
			*Header << laMember->mpClassMetadata->mpacName;

		std::string* innerString = new std::string();

		innerString->append(Dumper::EnumToChar(laMember->mType));

		if (laMember->mType == cTkMetaDataMember::EType_DynamicArray || laMember->mType == cTkMetaDataMember::EType_StaticArray)
		{
			if (laMember->mInnerType == cTkMetaDataMember::EType_Class)
				innerString->append(laMember->mpClassMetadata->mpacName);

			innerString->append(Dumper::EnumToChar(laMember->mInnerType));
			innerString->append(">");
		}

		if (laMember->mType == cTkMetaDataMember::EType_Enum)
		{
			*Header << "e"; *Header << laMember->mpacName;
		}

		if (laMember->mType == cTkMetaDataMember::EType_Flags)
		{
			*Header << "ex"; *Header << laMember->mpacName;
		}

		if (innerString)
			*Header << innerString->c_str();

		*Header << " m";
		*Header << laMember->mpacName;
		*Header << ";\n";

		laMember++;
	}

	*Header << "\n";

	//Class pointer funcs, will update to have addresses later.
	*Header << "    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);\n";
	*Header << "    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);\n";
	*Header << "    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);\n";
	*Header << "    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);\n";
	*Header << "    static void ClassPointerDestroy(cTkClassPointer* lPtr);\n";
	*Header << "    static void ClassPointerValidateData(cTkClassPointer* lPtr);\n";
	*Header << "    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);\n";
	*Header << "    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);\n";
	*Header << "    static void ClassPointerRender(cTkClassPointer* lPtr);\n";
	*Header << "    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);\n";
	*Header << "    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);\n";
}

const char* Dumper::EnumToChar(cTkMetaDataMember::eType leType)
{
	// we prepend the Hungarian notation mostly for parity with class dumps from ida, you can thank me later.
	switch (leType)
	{
		case cTkMetaDataMember::EType_Unspecified:
			return NULL;
		case cTkMetaDataMember::EType_Bool:
			return "bool";
		case cTkMetaDataMember::EType_Byte:
			return "__int8";
		case cTkMetaDataMember::EType_Class:
			return ""; // we resolve classnames elsewhere
		case cTkMetaDataMember::EType_ClassPointer:
			return "cTkClassPointer";
		case cTkMetaDataMember::EType_Colour:
			return "cTkColour";
		case cTkMetaDataMember::EType_DynamicArray:
			return "cTkDynamicArray<";
		case cTkMetaDataMember::EType_DynamicString:
			return "cTkDynamicString";
		case cTkMetaDataMember::EType_DynamicWideString:
			return "cTkDynamicWideString";
		case cTkMetaDataMember::EType_Enum:
			return "";
		case cTkMetaDataMember::EType_Filename:
			return "cTkFixedString<128,char>";
		case cTkMetaDataMember::EType_Flags:
			return "";
		case cTkMetaDataMember::EType_Float:
			return "float";
		case cTkMetaDataMember::EType_HalfVector4:
			return "cTkHalfVector4"; // might be wrong, just a guess
		case cTkMetaDataMember::EType_Id:
			return "TkID<128>";
		case cTkMetaDataMember::EType_Id256:
			return "TkID<256>";
		case cTkMetaDataMember::EType_Int:
			return "int";
		case cTkMetaDataMember::EType_Int16:
			return "__int16";
		case cTkMetaDataMember::EType_Int64:
			return "__int64";
		case cTkMetaDataMember::EType_Int8:
			return "char"; // this is dumb
		case cTkMetaDataMember::EType_LocId:
			return "TkID<256>";
		case cTkMetaDataMember::EType_NodeHandle:
			return "TkHandle";
		case cTkMetaDataMember::EType_PhysRelVec:
			return "cTkPhysRelVec3";
		case cTkMetaDataMember::EType_Resource:
			return "cTkSmartResHandle";
		case cTkMetaDataMember::EType_Seed:
			return "cTkSeed";
		case cTkMetaDataMember::EType_StaticArray:
			return "cTkFixedArray<";
		case cTkMetaDataMember::EType_String1024:
			return "cTkFixedString<1024,char>";
		case cTkMetaDataMember::EType_String128:
			return "cTkFixedString<128,char>";
		case cTkMetaDataMember::EType_String2048:
			return "cTkFixedString<2048,char>";
		case cTkMetaDataMember::EType_String256:
			return "cTkFixedString<256,char>";
		case cTkMetaDataMember::EType_String32:
			return "cTkFixedString<32,char>";
		case cTkMetaDataMember::EType_String512:
			return "cTkFixedString<512,char>";
		case cTkMetaDataMember::EType_String64:
			return "cTkFixedString<64,char>";
		case cTkMetaDataMember::EType_UInt:
			return "unsigned int";
		case cTkMetaDataMember::EType_UInt16:
			return "unsigned __int16";
		case cTkMetaDataMember::EType_UInt64:
			return "unsigned __int64";
		case cTkMetaDataMember::EType_UInt8:
			return "unsigned __int8";
		case cTkMetaDataMember::EType_UniqueId:
			return "cTkNetworkID"; //not sure about this one
		case cTkMetaDataMember::EType_Vector:
			return "cTkVector";
		case cTkMetaDataMember::EType_Vector2:
			return "cTkVector2";
		case cTkMetaDataMember::EType_Vector4:
			return "cTkVector4";
		case cTkMetaDataMember::EType_WideChar:
			return "wchar_t*";
		default:
			return "UNIMPLEMENTED";
	}
}