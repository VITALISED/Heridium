#pragma once
#include "../../../../../../../pch.h"

enum eHazard
{
    EHazard_None = 0,
    EHazard_NoOxygen = 1,
    EHazard_ExtremeHeat = 2,
    EHazard_ExtremeCold = 3,
    EHazard_ToxicGas = 4,
    EHazard_Radiation = 5,
};

class cGcPlayerHazardType
{
    static const unsigned __int64 muNameHash = 0x9699B119759C861B;
    static const unsigned __int64 muTemplateHash = 0xF8CE0E13EB01EA06;
    static const int miNumMembers = 1;

    eHazard meHazard;

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
