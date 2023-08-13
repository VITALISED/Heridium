#pragma once
#include "pch.h"

enum eActionType
{
    EActionType_Repair = 0,
    EActionType_UpdateDamagedComponents = 1,
    EActionType_CargoPhoneCall = 2,
};

class cGcFrigateInteractionAction
{
public:
    static const unsigned __int64 muNameHash = 0xD1183794AF82FF99;
    static const unsigned __int64 muTemplateHash = 0x61DF172F7A9D8DB4;
    static const int miNumMembers = 2;

    eActionType meActionType;
    TkID<256> mCommunicatorDialog;

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
