#pragma once

#include "../../../../../../../../pch.h"
enum ePointState
{
    EPointState_Statement = 0,
    EPointState_ObjectiveIncomplete = 1,
    EPointState_ObjectiveComplete = 2,
};

class cGcMissionSequenceDetailMessagePoint
{
    static const unsigned __int64 muNameHash = 14048128829996334698;
    static const unsigned __int64 muTemplateHash = 1229926587997250740;
    static const int miNumMembers = 3;

    TkID<256> mText;
    ePointState mePointState;
    TkID<128> mInsertItemName;

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
