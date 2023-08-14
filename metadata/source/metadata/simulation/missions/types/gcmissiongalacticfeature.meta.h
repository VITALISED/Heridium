#pragma once
#include "../../../../../../pch.h"

enum eGalacticFeature
{
    EGalacticFeature_Anomaly = 0,
    EGalacticFeature_Atlas = 1,
    EGalacticFeature_BlackHole = 2,
};

class cGcMissionGalacticFeature
{
public:
    static const unsigned __int64 muNameHash = 0x60EEF97D074917CD;
    static const unsigned __int64 muTemplateHash = 0xC98E74091146C414;
    static const int miNumMembers = 1;

    eGalacticFeature meGalacticFeature;

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
