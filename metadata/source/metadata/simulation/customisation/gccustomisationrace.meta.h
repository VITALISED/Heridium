#pragma once
#include "pch.h"

class cGcCustomisationRace
{
public:
    static const unsigned __int64 muNameHash = 0x231919D5AE192450;
    static const unsigned __int64 muTemplateHash = 0x78FC4D1015162EDB;
    static const int miNumMembers = 5;

    TkID<128> mDescriptorGroupOption;
    bool mbIsGek;
    float mfScale;
    cTkDynamicArray<cGcCustomisationGroup1> maCustomisationGroups;
    cTkDynamicArray<TkID<128>1> maPresets;

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
