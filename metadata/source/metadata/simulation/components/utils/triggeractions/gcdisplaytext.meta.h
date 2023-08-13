#pragma once
#include "../../../../../../../../../pch.h"

enum eHUDTextDisplayType
{
    EHUDTextDisplayType_Full = 0,
    EHUDTextDisplayType_Compact = 1,
    EHUDTextDisplayType_EyeLevel = 2,
    EHUDTextDisplayType_Prompt = 3,
    EHUDTextDisplayType_Tooltip = 4,
};
class cGcAlienRace;

class cGcDisplayText
{
    static const unsigned __int64 muNameHash = 0x39E3C3DE16466069;
    static const unsigned __int64 muTemplateHash = 0xD668510B347FF09D;
    static const int miNumMembers = 6;

    eHUDTextDisplayType meHUDTextDisplayType;
    cTkFixedString<256,char> macTitle;
    cTkFixedString<256,char> macSubtitle1;
    cTkFixedString<256,char> macSubtitle2;
    cGcAlienRace mUseAlienLanguage;
    cTkDynamicArray<TkID<256> > maChooseRandomTextOptions;

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
