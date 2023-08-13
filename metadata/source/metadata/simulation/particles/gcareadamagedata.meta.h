#pragma once
#include "../../../../../../../pch.h"

class cGcAreaDamageData
{
    static const unsigned __int64 muNameHash = 0x38D56749327FCFE6;
    static const unsigned __int64 muTemplateHash = 0xDA0025A12F5C626D;
    static const int miNumMembers = 8;

    TkID<128> mId;
    float mfRadius;
    float mfDelayPerMetre;
    TkID<128> mPlayerDamageId;
    float mfDamage;
    bool mbInstantKill;
    bool mbDamagePlayers;
    bool mbDamageCreatures;

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
