#pragma once
#include "pch.h"

class cTkNGuiAlignment;

class cGcNGuiLayoutData
{
public:
    static const unsigned __int64 muNameHash = 0xCEE71E03D7326B71;
    static const unsigned __int64 muTemplateHash = 0x6BF5030552548903;
    static const int miNumMembers = 17;

    cTkDynamicArray<cGcVROverride_Layout1> maVROverrides;
    cTkDynamicArray<cGcAccessibleOverride_Layout1> maAccessibleOverrides;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
