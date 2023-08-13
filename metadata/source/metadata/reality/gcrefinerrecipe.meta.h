#pragma once
#include "pch.h"

class cGcRefinerRecipeElement;

class cGcRefinerRecipe
{
public:
    static const unsigned __int64 muNameHash = 0x309D52938C546138;
    static const unsigned __int64 muTemplateHash = 0xE6B0B3233CA22BC9;
    static const int miNumMembers = 7;

    TkID<256> mId;
    TkID<256> mRecipeType;
    TkID<256> mRecipeName;
    float mfTimeToMake;
    bool mbCooking;
    cGcRefinerRecipeElement mResult;
    cTkDynamicArray<cGcRefinerRecipeElement1> maIngredients;

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
