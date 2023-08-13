#pragma once

#include "../../../../../../../../pch.h"
class cGcMissionSequenceWaitForPhoto
{
    static const unsigned __int64 muNameHash = 3366485143610322879;
    static const unsigned __int64 muTemplateHash = 1058570456907587137;
    static const int miNumMembers = 9;

    cTkFixedString<128,char> macMessage;
    cTkFixedString<128,char> macMessageSecondary;
    cTkFixedString<128,char> macMessageSuccess;
    cTkDynamicArray<cGcBiomeType> maBiomes;
    cTkDynamicArray<cGcPhotoFauna> maFauna;
    cTkDynamicArray<cGcPhotoFlora> maFlora;
    cTkDynamicArray<cGcPhotoBuildings> maBuildings;
    bool mbTakeAmountFromSeasonData;
    cTkFixedString<128,char> macDebugText;

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
