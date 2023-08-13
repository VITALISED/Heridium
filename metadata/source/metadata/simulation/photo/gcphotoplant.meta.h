#pragma once

#include "../../../../../../../pch.h"
enum ePhotoPlantType
{
    EPhotoPlantType_Sodium = 0,
    EPhotoPlantType_Oxygen = 1,
    EPhotoPlantType_BluePlant = 2,
};

class cGcPhotoPlant
{
    static const unsigned __int64 muNameHash = 17278338017831962000;
    static const unsigned __int64 muTemplateHash = 12593625988505921545;
    static const int miNumMembers = 1;

    ePhotoPlantType mePhotoPlantType;

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
