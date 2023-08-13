#pragma once

#include "../../../../../../../pch.h"
class cGcGeneratedBaseRoomTemplate
{
    static const unsigned __int64 muNameHash = 79467239321017935;
    static const unsigned __int64 muTemplateHash = 4148035398814101665;
    static const int miNumMembers = 13;

    TkID<128> mName;
    TkID<256> mLocId;
    cTkColour mPrimaryColour;
    cTkColour mSecondaryColour;
    cTkColour mTernaryColour;
    cTkColour mQuaternaryColour;
    int miMinPathLength;
    int miMaxPathLength;
    int miMinContiguousWidth;
    int miMinContiguousHeight;
    int miMinContiguousDepth;
    float mfShrinkFactor;
    cTkDynamicArray<TkID<128> > maDecorationThemes;

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
