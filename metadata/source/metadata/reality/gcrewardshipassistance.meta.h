#pragma once

#include "../../../../../../pch.h"
enum eAssistanceType
{
    EAssistanceType_Police = 0,
    EAssistanceType_Wingmen = 1,
};

class cGcRewardShipAssistance
{
    static const unsigned __int64 muNameHash = 5907345467665434610;
    static const unsigned __int64 muTemplateHash = 12542135695816573651;
    static const int miNumMembers = 2;

    eAssistanceType meAssistanceType;
    float mfTime;

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