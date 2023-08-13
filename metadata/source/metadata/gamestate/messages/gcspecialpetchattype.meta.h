#pragma once
#include "pch.h"

enum eSpecialPetChatType
{
    ESpecialPetChatType_Monster = 0,
    ESpecialPetChatType_Quad = 1,
    ESpecialPetChatType_MiniRobo = 2,
};

class cGcSpecialPetChatType
{
public:
    static const unsigned __int64 muNameHash = 0x3748852F6280E90F;
    static const unsigned __int64 muTemplateHash = 0x4FDA1EC6477A8B8C;
    static const int miNumMembers = 1;

    eSpecialPetChatType meSpecialPetChatType;

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
