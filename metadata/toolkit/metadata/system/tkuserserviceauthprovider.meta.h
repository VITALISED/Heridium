#pragma once

#include "../../../../../../pch.h"
enum eAuthProvider
{
    EAuthProvider_Null = 0,
    EAuthProvider_PSN = 1,
    EAuthProvider_Steam = 2,
    EAuthProvider_Galaxy = 3,
    EAuthProvider_Xbox = 4,
    EAuthProvider_WeGame = 5,
    EAuthProvider_NSO = 6,
};

class cTkUserServiceAuthProvider
{
    static const unsigned __int64 muNameHash = 10515676881100156855;
    static const unsigned __int64 muTemplateHash = 13761703568455875303;
    static const int miNumMembers = 1;

    eAuthProvider meAuthProvider;

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
