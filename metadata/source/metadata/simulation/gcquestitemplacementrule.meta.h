#pragma once

#include "../../../../../../pch.h"
class cGcQuestItemPlacementRule
{
    static const unsigned __int64 muNameHash = 13410676337242685384;
    static const unsigned __int64 muTemplateHash = 8447238792686617353;
    static const int miNumMembers = 6;

    TkID<128> mQuestItemID;
    int miMinRoomIndex;
    int miMaxRoomIndex;
    TkID<128> mMustBeBeforeQuestItem;
    TkID<128> mMustBeAfterQuestItem;
    cTkDynamicArray<TkID<128> > maValidRoomIDs;

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