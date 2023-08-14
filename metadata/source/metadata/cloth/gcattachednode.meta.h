#pragma once
#include "../../../../pch.h"

class cGcAttachedNode
{
public:
    static const unsigned __int64 muNameHash = 0x6F644A9834B845DB;
    static const unsigned __int64 muTemplateHash = 0xCE61FFF81577D8E8;
    static const int miNumMembers = 11;

    bool mbEnabled;
    cTkFixedString<64,char> macNodeName;
    float mfMinRenderIFraction;
    float mfMinRenderJFraction;
    float mfMaxRenderIFraction;
    float mfMaxRenderJFraction;
    float mfBlendStrength;
    cTkVector3 mRelativeTransform_Axis0;
    cTkVector3 mRelativeTransform_Axis1;
    cTkVector3 mRelativeTransform_Axis2;
    cTkVector3 mRelativeTransform_Position;

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
