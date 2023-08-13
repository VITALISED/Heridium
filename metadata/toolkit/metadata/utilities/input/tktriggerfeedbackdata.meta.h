#pragma once

#include "../../../../../../../pch.h"
enum eFeedbackType
{
    EFeedbackType_None = 0,
    EFeedbackType_Feedback = 1,
    EFeedbackType_Weapon = 2,
    EFeedbackType_Vibration = 3,
};

class cTkTriggerFeedbackData
{
    static const unsigned __int64 muNameHash = 6765168930287558946;
    static const unsigned __int64 muTemplateHash = 6741387714044255851;
    static const int miNumMembers = 4;

    eFeedbackType meFeedbackType;
    float mfStrength;
    float mfPosition;
    float mfFrequency;

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
