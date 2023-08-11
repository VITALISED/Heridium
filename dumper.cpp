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
	if (lpMetaDataClass->maMembers->mInnerType == cTkMetaDataMember::eType::EType_Class)
		*Header << "class "; *Header << lpMetaDataClass->maMembers->mpClassMetadata->mpacName; *Header << ";\n";

	if (lpMetaDataClass->maMembers->mpClassMetadata)
		Dumper::ResolveMembersFirstPass(Header, lpMetaDataClass->maMembers->mpClassMetadata);
}

void Dumper::ResolveMembers(std::ofstream* Header, const cTkMetaDataClass* lpMetaDataClass)
{
	*Header << "    " << lpMetaDataClass->maMembers->mType << " type" << ";\n";
	if (lpMetaDataClass->maMembers->mpClassMetadata)
		Dumper::ResolveMembers(Header, lpMetaDataClass->maMembers->mpClassMetadata);
}

const char* Dumper::EnumToChar(cTkMetaDataMember::eType leType)
{
	//switch (leType)
	//{
	//case cTkMetaDataMember::eType::EType_Unspecified:
	//	return ""
	//}
	return "";
}