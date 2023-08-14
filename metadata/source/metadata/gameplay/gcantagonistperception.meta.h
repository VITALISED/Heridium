#pragma once
#include "../../../../pch.h"

enum eViewShape
{
    EViewShape_Pyramid = 0,
    EViewShape_Cone = 1,
};

class cGcAntagonistPerception
{
public:
    static const unsigned __int64 muNameHash = 0x44D6DFC8A512D8CB;
    static const unsigned __int64 muTemplateHash = 0x8BCCD4CF815D841F;
    static const int miNumMembers = 7;

    TkID<128> mId;
    float mfRange;
    float mfXFOV;
    float mfYFOV;
    eViewShape meViewShape;
    bool mbRaycast;
    cTkFixedString<32,char> macSenseLocator;

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
