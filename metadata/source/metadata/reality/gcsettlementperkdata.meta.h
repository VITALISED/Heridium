#pragma once

#include "../../../../../../pch.h"
class cGcSettlementPerkData
{
    static const unsigned __int64 muNameHash = 16911004508258190636;
    static const unsigned __int64 muTemplateHash = 16901940172429739717;
    static const int miNumMembers = 8;

    TkID<128> mID;
    TkID<256> mName;
    TkID<256> mDescription;
    bool mbIsNegative;
    bool mbIsStarter;
    bool mbIsProc;
    bool mbIsJob;
    cTkDynamicArray<cGcSettlementStatChange> maStatChanges;

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
