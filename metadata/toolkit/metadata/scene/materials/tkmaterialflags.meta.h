#pragma once
#include "../../../../../pch.h"

enum eMaterialFlag
{
    EMaterialFlag__F01_DIFFUSEMAP = 0,
    EMaterialFlag__F02_SKINNED = 1,
    EMaterialFlag__F03_NORMALMAP = 2,
    EMaterialFlag__F04_FEATURESMAP = 3,
    EMaterialFlag__F05_INVERT_ALPHA = 4,
    EMaterialFlag__F06_BRIGHT_EDGE = 5,
    EMaterialFlag__F07_UNLIT = 6,
    EMaterialFlag__F08_REFLECTIVE = 7,
    EMaterialFlag__F09_TRANSPARENT = 8,
    EMaterialFlag__F10_NORECEIVESHADOW = 9,
    EMaterialFlag__F11_ALPHACUTOUT = 10,
    EMaterialFlag__F12_BATCHED_BILLBOARD = 11,
    EMaterialFlag__F13_UVANIMATION = 12,
    EMaterialFlag__F14_UVSCROLL = 13,
    EMaterialFlag__F15_WIND = 14,
    EMaterialFlag__F16_DIFFUSE2MAP = 15,
    EMaterialFlag__F17_MULTIPLYDIFFUSE2MAP = 16,
    EMaterialFlag__F18_UVTILES = 17,
    EMaterialFlag__F19_BILLBOARD = 18,
    EMaterialFlag__F20_PARALLAXMAP = 19,
    EMaterialFlag__F21_VERTEXCOLOUR = 20,
    EMaterialFlag__F22_TRANSPARENT_SCALAR = 21,
    EMaterialFlag__F23_TRANSLUCENT = 22,
    EMaterialFlag__F24_AOMAP = 23,
    EMaterialFlag__F25_ROUGHNESS_MASK = 24,
    EMaterialFlag__F26_ = 25,
    EMaterialFlag__F27_VBTANGENT = 26,
    EMaterialFlag__F28_VBSKINNED = 27,
    EMaterialFlag__F29_VBCOLOUR = 28,
    EMaterialFlag__F30_REFRACTION = 29,
    EMaterialFlag__F31_DISPLACEMENT = 30,
    EMaterialFlag__F32_REFRACTION_MASK = 31,
    EMaterialFlag__F33_SHELLS = 32,
    EMaterialFlag__F34_GLOW = 33,
    EMaterialFlag__F35_GLOW_MASK = 34,
    EMaterialFlag__F36_DOUBLESIDED = 35,
    EMaterialFlag__F37_ = 36,
    EMaterialFlag__F38_NO_DEFORM = 37,
    EMaterialFlag__F39_METALLIC_MASK = 38,
    EMaterialFlag__F40_SUBSURFACE_MASK = 39,
    EMaterialFlag__F41_DETAIL_DIFFUSE = 40,
    EMaterialFlag__F42_DETAIL_NORMAL = 41,
    EMaterialFlag__F43_NORMAL_TILING = 42,
    EMaterialFlag__F44_IMPOSTER = 43,
    EMaterialFlag__F45_VERTEX_BLEND = 44,
    EMaterialFlag__F46_BILLBOARD_AT = 45,
    EMaterialFlag__F47_REFLECTION_PROBE = 46,
    EMaterialFlag__F48_WARPED_DIFFUSE_LIGHTING = 47,
    EMaterialFlag__F49_DISABLE_AMBIENT = 48,
    EMaterialFlag__F50_DISABLE_POSTPROCESS = 49,
    EMaterialFlag__F51_DECAL_DIFFUSE = 50,
    EMaterialFlag__F52_DECAL_NORMAL = 51,
    EMaterialFlag__F53_COLOURISABLE = 52,
    EMaterialFlag__F54_COLOURMASK = 53,
    EMaterialFlag__F55_MULTITEXTURE = 54,
    EMaterialFlag__F56_MATCH_GROUND = 55,
    EMaterialFlag__F57_ENV_OVERLAY = 56,
    EMaterialFlag__F58_USE_CENTRAL_NORMAL = 57,
    EMaterialFlag__F59_SCREENSPACE_FADE = 58,
    EMaterialFlag__F60_ACUTE_ANGLE_FADE = 59,
    EMaterialFlag__F61_CLAMP_AMBIENT = 60,
    EMaterialFlag__F62_DETAIL_ALPHACUTOUT = 61,
    EMaterialFlag__F63_DISSOLVE = 62,
    EMaterialFlag__F64_ = 63,
};

class cTkMaterialFlags
{
public:
    static const unsigned __int64 muNameHash = 0x71610F70BA400437;
    static const unsigned __int64 muTemplateHash = 0xEA132F026E55C047;
    static const int miNumMembers = 1;

    eMaterialFlag meMaterialFlag;

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
