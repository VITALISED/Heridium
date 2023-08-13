#pragma once
#include "../../../../../../../pch.h"

class cGcProjectileImpactType;

enum eImpactAlignment
{
    EImpactAlignment_ImpactNormal = 0,
    EImpactAlignment_GravityUp = 1,
};

enum eImpactAttachment
{
    EImpactAttachment_World = 0,
    EImpactAttachment_HitBody = 1,
};

class cGcProjectileImpactData
{
    static const unsigned __int64 muNameHash = 0x2F2FAFA4A7023B71;
    static const unsigned __int64 muTemplateHash = 0xA4AFE56500C79074;
    static const int miNumMembers = 4;

    TkID<128> mEffect;
    cGcProjectileImpactType mImpact;
    eImpactAlignment meImpactAlignment;
    eImpactAttachment meImpactAttachment;

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
