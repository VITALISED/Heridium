#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/gamestate/customisation/gccharactercustomisationcolourdata.meta.h"
#include "../../../../../metadata/source/metadata/gamestate/customisation/gccharactercustomisationtextureoptiondata.meta.h"
#include "../../../../../metadata/source/metadata/gamestate/customisation/gccharactercustomisationbonescaledata.meta.h"

class cGcCharacterCustomisationData
{
public:
    static const unsigned __int64 muNameHash = 0xBF5911FBC471448F;
    static const unsigned __int64 muTemplateHash = 0xE5C56396D3246AA4;
    static const int miNumMembers = 5;

    cTkDynamicArray<TkID<128> > maDescriptorGroups;
    cTkDynamicArray<cGcCharacterCustomisationColourData> maColours;
    cTkDynamicArray<cGcCharacterCustomisationTextureOptionData> maTextureOptions;
    cTkDynamicArray<cGcCharacterCustomisationBoneScaleData> maBoneScales;
    float mfScale;

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
