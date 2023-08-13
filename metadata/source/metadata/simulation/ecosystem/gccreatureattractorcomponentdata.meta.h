#pragma once

#include "../../../../../../../pch.h"
enum eAttractorType
{
    EAttractorType_Food = 0,
    EAttractorType_Harvester = 1,
};

class cGcCreatureAttractorComponentData
{
    static const unsigned __int64 muNameHash = 3409325529930184533;
    static const unsigned __int64 muTemplateHash = 6422376942617028969;
    static const int miNumMembers = 4;

    bool mbUniversal;
    bool mbStatic;
    float mfArriveDist;
    eAttractorType meAttractorType;

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