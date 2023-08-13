#pragma once

#include "../../../../../../../../../pch.h"
class cGcCreatureTypes;
class cGcCreatureTypes;

class cGcCreatureAlertData
{
    static const unsigned __int64 muNameHash = 18443036321045069832;
    static const unsigned __int64 muTemplateHash = 9458881290632597503;
    static const int miNumMembers = 6;

    cGcCreatureTypes mAlertTarget;
    cGcCreatureTypes mAlertInitiator;
    float mfHearingRange;
    float mfSightRange;
    float mfSightAngle;
    float mfFleeRange;

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
