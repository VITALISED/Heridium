#pragma once
#include "pch.h"

class cTkInstanceWindComponentData
{
public:
    static const unsigned __int64 muNameHash = 0xE02A1CA9048E3A96;
    static const unsigned __int64 muTemplateHash = 0x8E9D85406F8942E4;
    static const int miNumMembers = 8;

    bool mbEnableLdsWind;
    float mfBaseMass;
    float mfMassReduction;
    float mfBaseSpring;
    float mfSpringReduction;
    float mfLinearDamping;
    float mfSpringNonDirFactor;
    float mfSpringLengthFactor;

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
