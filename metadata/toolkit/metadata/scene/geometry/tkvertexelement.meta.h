#pragma once
#include "../../../../../../../pch.h"

enum eInstancing
{
    EInstancing_PerVertex = 0,
    EInstancing_PerModel = 1,
};

class cTkVertexElement
{
    static const unsigned __int64 muNameHash = 0x8687A0CA8457FC32;
    static const unsigned __int64 muTemplateHash = 0x1E084E1510B4A072;
    static const int miNumMembers = 7;

    int miSemanticID;
    int miSize;
    int miType;
    int miOffset;
    int miNormalise;
    eInstancing meInstancing;
    __int64 mi64PlatformData;

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
