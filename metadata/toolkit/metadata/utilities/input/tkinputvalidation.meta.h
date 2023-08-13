#pragma once
#include "pch.h"

enum eInputValidation
{
    EInputValidation_Held = 0,
    EInputValidation_Pressed = 1,
    EInputValidation_Released = 2,
    EInputValidation_HeldOver = 3,
};

class cTkInputValidation
{
public:
    static const unsigned __int64 muNameHash = 0xE57F8ACB51D80972;
    static const unsigned __int64 muTemplateHash = 0x30AC58313BDDBA37;
    static const int miNumMembers = 1;

    eInputValidation meInputValidation;

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
