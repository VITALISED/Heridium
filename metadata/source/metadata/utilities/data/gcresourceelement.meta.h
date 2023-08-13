#pragma once

#include "../../../../../../../pch.h"
class cTkProceduralTextureChosenOptionList;

class cGcResourceElement
{
    static const unsigned __int64 muNameHash = 10505427929821425194;
    static const unsigned __int64 muTemplateHash = 2254205466595977769;
    static const int miNumMembers = 5;

    cTkFixedString<128,char> macFilename;
    cTkSmartResHandle mResHandle;
    cTkSeed mSeed;
    cTkFixedString<512,char> macAltId;
    cTkProceduralTextureChosenOptionList mProceduralTexture;

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
