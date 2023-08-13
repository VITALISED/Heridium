#pragma once
#include "../common/metadata/TkMetaDataClass.h"
#include <string>
#include <filesystem>
#include <fmt/format.h>
#include <fstream>
#include "pch.h"
#include "../common/metadata/TkMetaData.h"
#include "../common/metadata/TkMetaDataXML.h"

namespace MethodDumper
{
	void Dump(const char* lpacFilename, const cTkMetaDataClass* lpMetaDataClass);
	void DoXMLFunctions(std::ofstream* Source, const cTkMetaDataClass* lpMetaDataClass);
	void DoGenericFunctions(std::ofstream* Source, const cTkMetaDataClass* lpMetaDataClass);
}