#pragma once

#include "../../../../../../../../pch.h"
class cGcAlienRace;

class cGcNPCComponentData
{
    static const unsigned __int64 muNameHash = 5947383237680028814;
    static const unsigned __int64 muTemplateHash = 17143443522668674959;
    static const int miNumMembers = 6;

    cGcAlienRace mRace;
    TkID<128> mHologramEffect;
    bool mbIsOldStyleNPC;
    bool mbIsMech;
    cTkDynamicArray<cGcCharacterAlternateAnimation> maAlternateAnims;
    cTkDynamicArray<TkID<128> > maTags;

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
