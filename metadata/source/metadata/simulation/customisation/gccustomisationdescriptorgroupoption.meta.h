#pragma once
#include "../../../../../../../pch.h"

class cGcCustomisationDescriptorGroupOption
{
    static const unsigned __int64 muNameHash = 0xA29C133FB960AEB2;
    static const unsigned __int64 muTemplateHash = 0xA4966141B9DA7E53;
    static const int miNumMembers = 13;

    TkID<128> mDescriptorOption;
    cTkDynamicArray<cGcCustomisationTextureGroup> maTextureGroups;
    bool mbReplaceBaseColours;
    cTkDynamicArray<cGcCustomisationColourGroup> maColourGroups;
    bool mbReplaceBaseBoneScales;
    cTkDynamicArray<cGcCustomisationBoneScales> maBoneScales;
    int miInteractionCameraIndexOverride;
    cTkFixedString<32,char> macInteracttionCameraFocusJointOverride;
    cTkDynamicArray<TkID<128> > maHideIfGroupActive;
    cTkDynamicArray<TkID<128> > maSelectingRemovesGroup;
    cTkDynamicArray<TkID<128> > maSelectingAddsGroup;
    cTkDynamicArray<TkID<128> > maUnselectingRemovesGroup;
    cTkDynamicArray<TkID<128> > maUnselectingAddsGroup;

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
