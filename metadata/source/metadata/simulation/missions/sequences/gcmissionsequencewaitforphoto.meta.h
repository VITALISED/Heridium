#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcbiometype.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/photo/gcphotofauna.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/photo/gcphotoflora.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/photo/gcphotobuildings.meta.h"

class cGcMissionSequenceWaitForPhoto
{
public:
    static const unsigned __int64 muNameHash = 0x2EB82866D685EFBF;
    static const unsigned __int64 muTemplateHash = 0xEB0CC38D5B31E41;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
