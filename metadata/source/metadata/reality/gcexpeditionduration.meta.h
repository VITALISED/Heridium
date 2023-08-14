#pragma once
#include "../../../../pch.h"

enum eExpeditionDuration
{
    EExpeditionDuration_VeryShort = 0,
    EExpeditionDuration_Short = 1,
    EExpeditionDuration_Medium = 2,
    EExpeditionDuration_Long = 3,
    EExpeditionDuration_VeryLong = 4,
};

class cGcExpeditionDuration
{
public:
    static const unsigned __int64 muNameHash = 0x406EA68C88F85056;
    static const unsigned __int64 muTemplateHash = 0x1E8C9B82EF4E5E52;
    static const int miNumMembers = 1;

    eExpeditionDuration meExpeditionDuration;

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
