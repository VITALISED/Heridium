#pragma once
#include "../../../../../../../pch.h"

enum eBaseAutoPowerSetting
{
    EBaseAutoPowerSetting_UseDefault = 0,
    EBaseAutoPowerSetting_ForceDisabled = 1,
    EBaseAutoPowerSetting_ForceEnabled = 2,
};

class cGcBaseAutoPowerSetting
{
    static const unsigned __int64 muNameHash = 0x801DCAAD4B4FAC26;
    static const unsigned __int64 muTemplateHash = 0xD00027FD44908DFE;
    static const int miNumMembers = 1;

    eBaseAutoPowerSetting meBaseAutoPowerSetting;

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
