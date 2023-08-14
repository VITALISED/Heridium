#pragma once

#include "../common/metadata/TkMetaData.h"
#include <fstream>
#include <fmt/format.h>
#include <filesystem>
#include "pch.h"
#include <comdef.h>
#include <string>

namespace Dumper
{
	void Dump(const char* lpacFilename, const cTkMetaDataClass* lpMetaDataClass);
	void ResolveMembers(std::ofstream* Header, const cTkMetaDataClass* lpMetaDataClass);
	const char* EnumToChar(cTkMetaDataMember::eType leType);
	void ResolveMembersFirstPass(std::ofstream* Header, const cTkMetaDataClass* lpMetaDataClass, int depth);
	const char* CreateHungarainNotationForMember(cTkMetaDataMember::eType leType);
}