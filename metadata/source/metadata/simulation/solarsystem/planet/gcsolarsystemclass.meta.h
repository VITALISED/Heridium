#pragma once

#include "../../../../../../../../pch.h"
enum eSolarSystemClass
{
    ESolarSystemClass_Default = 0,
    ESolarSystemClass_Initial = 1,
    ESolarSystemClass_Anomaly = 2,
    ESolarSystemClass_GameStart = 3,
};

class cGcSolarSystemClass
{
    static const unsigned __int64 muNameHash = 14297944486433159165;
    static const unsigned __int64 muTemplateHash = 13513921167850731124;
    static const int miNumMembers = 1;

    eSolarSystemClass meSolarSystemClass;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
