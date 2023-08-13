#pragma once

#include "../../../../../../pch.h"
class cGcAttachedNode
{
    static const unsigned __int64 muNameHash = 8026622453461042651;
    static const unsigned __int64 muTemplateHash = 14871448885531236584;
    static const int miNumMembers = 11;

    bool mbEnabled;
    cTkFixedString<64,char> macNodeName;
    float mfMinRenderIFraction;
    float mfMinRenderJFraction;
    float mfMaxRenderIFraction;
    float mfMaxRenderJFraction;
    float mfBlendStrength;
    cTkVector mRelativeTransform_Axis0;
    cTkVector mRelativeTransform_Axis1;
    cTkVector mRelativeTransform_Axis2;
    cTkVector mRelativeTransform_Position;

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
