#pragma once
#include "pch.h"

class cGcResourceElement;
class cGcResourceElement;

class cGcSquadronPilotData
{
public:
    static const unsigned __int64 muNameHash = 0x1B17AE774F200920;
    static const unsigned __int64 muTemplateHash = 0x4366B5FDF0BD2877;
    static const int miNumMembers = 4;

    cGcResourceElement mNPCResource;
    cGcResourceElement mShipResource;
    unsigned __int64 mui64TraitsSeed;
    unsigned __int16 muiPilotRank;

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
