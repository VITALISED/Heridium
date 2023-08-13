#pragma once
#include "../../../../../../../pch.h"

class cTkNoiseSuperPrimitiveData
{
    static const unsigned __int64 muNameHash = 0x863E7456C3844AC;
    static const unsigned __int64 muTemplateHash = 0x946DADD6FB678EAA;
    static const int miNumMembers = 7;

    float mfWidth;
    float mfHeight;
    float mfDepth;
    float mfThickness;
    float mfCornerRadiusXY;
    float mfCornerRadiusZ;
    float mfBottomRadiusOffset;

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
