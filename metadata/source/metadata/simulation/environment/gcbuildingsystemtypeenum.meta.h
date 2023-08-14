#pragma once
#include "../../../../../pch.h"

enum eBuildingSystemType
{
    EBuildingSystemType_Normal = 0,
    EBuildingSystemType_AbandonedSystem = 1,
};

class cGcBuildingSystemTypeEnum
{
public:
    static const unsigned __int64 muNameHash = 0xB4AC262382F5910E;
    static const unsigned __int64 muTemplateHash = 0xD529A470EDDCF735;
    static const int miNumMembers = 1;

    eBuildingSystemType meBuildingSystemType;

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
