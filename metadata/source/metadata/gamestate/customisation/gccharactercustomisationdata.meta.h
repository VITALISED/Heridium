#pragma once

#include "../../../../../../../pch.h"
class cGcCharacterCustomisationData
{
    static const unsigned __int64 muNameHash = 13788071507201705103;
    static const unsigned __int64 muTemplateHash = 16556749104536119972;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
