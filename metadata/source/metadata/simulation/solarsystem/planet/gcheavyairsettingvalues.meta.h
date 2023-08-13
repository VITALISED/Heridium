#pragma once
#include "../../../../../../../../pch.h"

class cTkPaletteTexture;
class cTkPaletteTexture;

class cGcHeavyAirSettingValues
{
    static const unsigned __int64 muNameHash = 0xF53E6F170BCA9237;
    static const unsigned __int64 muTemplateHash = 0x5A9F0129EFF1FE8A;
    static const int miNumMembers = 6;

    float mfThickness;
    float mfSpeed;
    float mfAlpha1;
    float mfAlpha2;
    cTkPaletteTexture mColour1;
    cTkPaletteTexture mColour2;

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
