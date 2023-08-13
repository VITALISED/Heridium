#pragma once

#include "../../../../../../../pch.h"
class cGcBaseSnapState;

class cGcOutSnapSocketCondition
{
    static const unsigned __int64 muNameHash = 14458433902898959518;
    static const unsigned __int64 muTemplateHash = 5256198481538139863;
    static const int miNumMembers = 6;

    cTkFixedString<128,char> macSnapPoint;
    cTkFixedString<128,char> macOutSocket;
    cGcBaseSnapState mSnapState;
    TkID<128> mObjectId;
    int miSnapPointIndex;
    int miOutSocketIndex;

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
