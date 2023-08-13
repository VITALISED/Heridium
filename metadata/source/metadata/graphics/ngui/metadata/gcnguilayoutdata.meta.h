#pragma once

#include "../../../../../../../../pch.h"
class cTkNGuiAlignment;

class cGcNGuiLayoutData
{
    static const unsigned __int64 muNameHash = 14908918093277457265;
    static const unsigned __int64 muTemplateHash = 7779127252743391491;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};