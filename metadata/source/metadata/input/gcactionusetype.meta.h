#pragma once
#include "../../../../pch.h"

enum eActionUseType
{
    EActionUseType_Active = 0,
    EActionUseType_ActiveVR = 1,
    EActionUseType_ActiveXbox = 2,
    EActionUseType_ActivePS4 = 3,
    EActionUseType_Hidden = 4,
    EActionUseType_Debug = 5,
    EActionUseType_Obsolete = 6,
};

class cGcActionUseType
{
public:
    static const unsigned __int64 muNameHash = 0x498BFDCD029948EF;
    static const unsigned __int64 muTemplateHash = 0x52A5A4E9BF42BBF;
    static const int miNumMembers = 1;

    eActionUseType meActionUseType;

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
