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
		Header << "\n";
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

	for (int i = 0; i < lpMetaDataClass->miNumMembers; i++)
	{
		if (!laMember)
			break;

		if (laMember->mType == cTkMetaDataMember::eType::EType_Class && laMember->mpClassMetadata->mpacName)
		{
			*Header << "class "; *Header << laMember->mpClassMetadata->mpacName; *Header << ";\n";
		}

		laMember++;
	}
}

void Dumper::ResolveMembers(std::ofstream* Header, const cTkMetaDataClass* lpMetaDataClass)
{
	*Header << "    " << lpMetaDataClass->maMembers->mType << " type" << ";\n";
	*Header << "    " << lpMetaDataClass->maMembers->miOffset << " offset" << ";\n";
	
	cTkMetaDataMember* laMember = (cTkMetaDataMember*)lpMetaDataClass->maMembers;

	for (int i = 0; i < lpMetaDataClass->miNumMembers; i++)
	{

	}
}

const char* Dumper::EnumToChar(cTkMetaDataMember::eType leType)
{
	// we prepend the Hungarian notation mostly for parity with class dumps from ida, you can thank me later.
	switch (leType)
	{
		case cTkMetaDataMember::EType_Unspecified:
			return NULL;
		case cTkMetaDataMember::EType_Bool:
			return "bool mb";
		case cTkMetaDataMember::EType_Byte:
			return "__int8 m";
		case cTkMetaDataMember::EType_Class:
			return " m"; // we resolve classnames elsewhere
		case cTkMetaDataMember::EType_ClassPointer:
			return "cTkClassPointer m";
		case cTkMetaDataMember::EType_Colour:
			return "cTkColour m";
		case cTkMetaDataMember::EType_DynamicArray:
			return "cTkDynamicArray<{}> ma";
		case cTkMetaDataMember::EType_DynamicString:
			return "cTkDynamicString mac";
		case cTkMetaDataMember::EType_DynamicWideString:
			return "cTkDynamicWideString mac";
		case cTkMetaDataMember::EType_Enum:
			return " e";
		case cTkMetaDataMember::EType_Filename:
			return "cTkFixedString<128,char> mac";
		case cTkMetaDataMember::EType_Flags:
			return " ex";
		case cTkMetaDataMember::EType_Float:
			return "float mf";
		case cTkMetaDataMember::EType_HalfVector4:
			return "cTkHalfVector4 m"; // might be wrong, just a guess
		case cTkMetaDataMember::EType_Id:
			return "TkID<128> m";
		case cTkMetaDataMember::EType_Id256:
			return "TkID<256> m";
		case cTkMetaDataMember::EType_Int:
			return "int mi";
		case cTkMetaDataMember::EType_Int16:
			return "__int16 mi16";
		case cTkMetaDataMember::EType_Int64:
			return "__int64 mi64";
		case cTkMetaDataMember::EType_Int8:
			return "char mi8"; // this is dumb
		case cTkMetaDataMember::EType_LocId:
			return "TkID<256> m";
		case cTkMetaDataMember::EType_NodeHandle:
			return "TkHandle m";
		case cTkMetaDataMember::EType_PhysRelVec:
			return "cTkPhysRelVec3 m";
		case cTkMetaDataMember::EType_Resource:
			return "cTkSmartResHandle m";
		case cTkMetaDataMember::EType_Seed:
			return "cTkSeed m";
		case cTkMetaDataMember::EType_StaticArray:
			return "cTkFixedArray<{}> ma";
		case cTkMetaDataMember::EType_String1024:
			return "cTkFixedString<1024,char> mac";
		case cTkMetaDataMember::EType_String128:
			return "cTkFixedString<128,char> mac";
		case cTkMetaDataMember::EType_String2048:
			return "cTkFixedString<2048,char> mac";
		case cTkMetaDataMember::EType_String256:
			return "cTkFixedString<256,char> mac";
		case cTkMetaDataMember::EType_String32:
			return "cTkFixedString<32,char> mac";
		case cTkMetaDataMember::EType_String512:
			return "cTkFixedString<512,char> mac";
		case cTkMetaDataMember::EType_String64:
			return "cTkFixedString<64,char> mac";
		case cTkMetaDataMember::EType_UInt:
			return "unsigned int mui";
		case cTkMetaDataMember::EType_UInt16:
			return "unsigned __int16 mui";
		case cTkMetaDataMember::EType_UInt64:
			return "unsigned __int64 mui";
		case cTkMetaDataMember::EType_UInt8:
			return "unsigned __int8 mui";
		case cTkMetaDataMember::EType_UniqueId:
			return "cTkNetworkID m"; //not sure about this one
		case cTkMetaDataMember::EType_Vector:
			return "cTkVector m";
		case cTkMetaDataMember::EType_Vector2:
			return "cTkVector2 m";
		case cTkMetaDataMember::EType_Vector4:
			return "cTkVector4 m";
		case cTkMetaDataMember::EType_WideChar:
			return "wchar_t *mpac";
		default:
			return "UNIMPLEMENTED";
	}
}