#pragma once
#include "pch.h"

enum eCreatureHemiSphere
{
    ECreatureHemiSphere_Any = 0,
    ECreatureHemiSphere_Northern = 1,
    ECreatureHemiSphere_Southern = 2,
};

class cGcCreatureHemiSphere
{
public:
    static const unsigned __int64 muNameHash = 0x1BE056BC4F556CAA;
    static const unsigned __int64 muTemplateHash = 0xB74FEC78503E10A1;
    static const int miNumMembers = 1;

    eCreatureHemiSphere meCreatureHemiSphere;

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
