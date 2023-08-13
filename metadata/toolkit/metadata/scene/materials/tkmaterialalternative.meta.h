#pragma once

#include "../../../../../../../pch.h"
enum eTextureType
{
    ETextureType_Diffuse = 0,
    ETextureType_Normal = 1,
    ETextureType_Ambient = 2,
    ETextureType_Environment = 3,
};

class cTkMaterialAlternative
{
    static const unsigned __int64 muNameHash = 13013964796140048100;
    static const unsigned __int64 muTemplateHash = 16406773769049397430;
    static const int miNumMembers = 3;

    eTextureType meTextureType;
    cTkFixedString<128,char> macFile;
    TkID<256> mMaterialAlternativeId;

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
