#pragma once

#include "../../../../../../pch.h"
enum eHotspotType
{
    EHotspotType_Power = 1,
    EHotspotType_Mineral1 = 2,
    EHotspotType_Mineral2 = 4,
    EHotspotType_Mineral3 = 8,
    EHotspotType_Gas1 = 16,
    EHotspotType_Gas2 = 32,
};

class cGcRegionHotspotTypes
{
    static const unsigned __int64 muNameHash = 122235180588452906;
    static const unsigned __int64 muTemplateHash = 3248366920284541658;
    static const int miNumMembers = 1;

    eHotspotType meHotspotType;

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
