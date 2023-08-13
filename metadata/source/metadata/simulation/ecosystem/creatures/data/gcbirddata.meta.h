#pragma once
#include "../../../../../../../../../pch.h"

class cGcBirdData
{
    static const unsigned __int64 muNameHash = 0x840B4D8139B48954;
    static const unsigned __int64 muTemplateHash = 0x7265157B9211E6C8;
    static const int miNumMembers = 10;

    float mfFlapSpeedMin;
    float mfFlapSpeedMax;
    float mfFlapSpeed;
    float mfFlapAccel;
    float mfFlapTurn;
    float mfFlapSpeedMinScale;
    float mfFlapSpeedMaxScale;
    float mfFlapSpeedForMinScale;
    float mfFlapSpeedForMaxScale;
    cTkFixedString<128,char> macCircleAttractor;

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
