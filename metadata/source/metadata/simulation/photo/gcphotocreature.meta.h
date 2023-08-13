#pragma once

#include "../../../../../../../pch.h"
enum ePhotoCreatureType
{
    EPhotoCreatureType_Ground = 0,
    EPhotoCreatureType_Water = 1,
    EPhotoCreatureType_Air = 2,
};

class cGcPhotoCreature
{
    static const unsigned __int64 muNameHash = 11568528065574334657;
    static const unsigned __int64 muTemplateHash = 16127737618874079535;
    static const int miNumMembers = 1;

    ePhotoCreatureType mePhotoCreatureType;

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
