#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/graphics/ngui/metadata/gcvroverride_layout.meta.h"
#include "../../../../../../metadata/source/metadata/graphics/ngui/metadata/gcaccessibleoverride_layout.meta.h"
#include "../../../../../../metadata/toolkit/metadata/ngui/tknguialignment.meta.h"

class cGcNGuiLayoutData
{
public:
    static const unsigned __int64 muNameHash = 0xCEE71E03D7326B71;
    static const unsigned __int64 muTemplateHash = 0x6BF5030552548903;
    static const int miNumMembers = 17;

    cTkDynamicArray<cGcVROverride_Layout> maVROverrides;
    cTkDynamicArray<cGcAccessibleOverride_Layout> maAccessibleOverrides;
    float mfPositionX;
    float mfPositionY;
    float mfWidth;
    float mfHeight;
    float mfConstrainAspect;
    float mfMaxWidth;
    cTkNGuiAlignment mAlign;
    bool mbWidthPercentage;
    bool mbHeightPercentage;
    bool mbConstrainProportions;
    bool mbForceAspect;
    bool mbAnchor;
    bool mbAnchorPercent;
    bool mbSameLine;
    bool mbSlowCursorOnHover;

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
