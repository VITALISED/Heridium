#pragma once
#include "../../../../../pch.h"

enum eTextureType
{
    ETextureType_Diffuse = 0,
    ETextureType_Normal = 1,
    ETextureType_Ambient = 2,
    ETextureType_Environment = 3,
};

class cTkMaterialAlternative
{
public:
    static const unsigned __int64 muNameHash = 0xB49AE407F95DCEE4;
    static const unsigned __int64 muTemplateHash = 0xE3B091D0EE62D8B6;
    static const int miNumMembers = 3;

    eTextureType meTextureType;
    cTkFixedString<128,char> macFile;
    TkID<256> mMaterialAlternativeId;

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
