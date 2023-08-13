#pragma once
#include "../../../../../../../../pch.h"

enum eTransform
{
    ETransform_None = 0,
    ETransform_Rotated90 = 1,
    ETransform_Rotated180 = 2,
    ETransform_Rotated270 = 3,
    ETransform_FlippedHorizontally = 4,
};

class cGcWFCFace
{
    static const unsigned __int64 muNameHash = 0xAD33210D14B166A3;
    static const unsigned __int64 muTemplateHash = 0x95F7AB7D4A3778A0;
    static const int miNumMembers = 11;

    cTkFixedString<32,char> macConnector;
    bool mbSymmetric;
    eTransform meTransform;
    cTkDynamicArray<TkID<128> > maExcludedNeighboursR0;
    cTkDynamicArray<TkID<128> > maExcludedNeighboursR1;
    cTkDynamicArray<TkID<128> > maExcludedNeighboursR2;
    cTkDynamicArray<TkID<128> > maExcludedNeighboursR3;
    bool mbWalkable;
    bool mbIncomplete;
    bool mbIsEntrance;
    TkID<128> mName;

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
