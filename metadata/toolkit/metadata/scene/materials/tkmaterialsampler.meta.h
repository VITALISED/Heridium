#pragma once
#include "pch.h"

enum eTextureAddressMode
{
    ETextureAddressMode_Wrap = 0,
    ETextureAddressMode_Clamp = 1,
    ETextureAddressMode_ClampToBorder = 2,
    ETextureAddressMode_Mirror = 3,
};

enum eTextureFilterMode
{
    ETextureFilterMode_None = 0,
    ETextureFilterMode_Bilinear = 1,
    ETextureFilterMode_Trilinear = 2,
};

class cTkMaterialSampler
{
public:
    static const unsigned __int64 muNameHash = 0x330286CE11647D4C;
    static const unsigned __int64 muTemplateHash = 0xB1F00BB1F804178A;
    static const int miNumMembers = 10;

    cTkFixedString<32,char> macName;
    cTkFixedString<128,char> macMap;
    bool mbIsCube;
    bool mbUseCompression;
    bool mbUseMipMaps;
    bool mbIsSRGB;
    TkID<256> mMaterialAlternativeId;
    eTextureAddressMode meTextureAddressMode;
    eTextureFilterMode meTextureFilterMode;
    int miAnisotropy;

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
