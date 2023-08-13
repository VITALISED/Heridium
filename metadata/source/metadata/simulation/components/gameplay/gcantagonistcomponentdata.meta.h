#pragma once

#include "../../../../../../../../pch.h"
class cGcAntagonistGroup;

class cGcAntagonistComponentData
{
    static const unsigned __int64 muNameHash = 18079574663520880621;
    static const unsigned __int64 muTemplateHash = 13039508391691106468;
    static const int miNumMembers = 8;

    cGcAntagonistGroup mGroup;
    float mfScarinessFactor;
    float mfShockedFactor;
    float mfComprehensionFactor;
    float mfCommunicationDelay;
    cTkFixedArray<cGcAntagonistFriend> maFriends;
    cTkFixedArray<cGcAntagonistEnemy> maEnemies;
    cTkDynamicArray<cGcAntagonistPerception> maPerceptions;

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
