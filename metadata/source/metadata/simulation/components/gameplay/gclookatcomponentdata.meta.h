#pragma once

#include "../../../../../../../../pch.h"
enum eLookAtType
{
    ELookAtType_Player = 0,
};

class cGcLookAtComponentData
{
    static const unsigned __int64 muNameHash = 14007503301595868341;
    static const unsigned __int64 muTemplateHash = 5986511142363533432;
    static const int miNumMembers = 4;

    eLookAtType meLookAtType;
    cTkFixedString<32,char> macNodeName;
    float mfRotationRateFactor;
    float mfMinRotationRateDegrees;

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
