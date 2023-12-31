#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/gameplay/gcantagonistgroup.meta.h"
#include "../../../../../../metadata/source/metadata/gameplay/gcantagonistfriend.meta.h"
#include "../../../../../../metadata/source/metadata/gameplay/gcantagonistenemy.meta.h"
#include "../../../../../../metadata/source/metadata/gameplay/gcantagonistperception.meta.h"

class cGcAntagonistComponentData
{
public:
    static const unsigned __int64 muNameHash = 0xFAE78D5DE55087ED;
    static const unsigned __int64 muTemplateHash = 0xB4F5A3CBC47938A4;
    static const int miNumMembers = 8;

    cGcAntagonistGroup mGroup;
    float mfScarinessFactor;
    float mfShockedFactor;
    float mfComprehensionFactor;
    float mfCommunicationDelay;
    cTkFixedArray<cGcAntagonistFriend, 6> maFriends;
    cTkFixedArray<cGcAntagonistEnemy, 6> maEnemies;
    cTkDynamicArray<cGcAntagonistPerception> maPerceptions;

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
