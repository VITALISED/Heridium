#pragma once
#include "../../../../../pch.h"

enum ePhotoPlantType
{
    EPhotoPlantType_Sodium = 0,
    EPhotoPlantType_Oxygen = 1,
    EPhotoPlantType_BluePlant = 2,
};

class cGcPhotoPlant
{
public:
    static const unsigned __int64 muNameHash = 0xEFC8FCE1F6004590;
    static const unsigned __int64 muTemplateHash = 0xAEC58C1CD705E809;
    static const int miNumMembers = 1;

    ePhotoPlantType mePhotoPlantType;

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
