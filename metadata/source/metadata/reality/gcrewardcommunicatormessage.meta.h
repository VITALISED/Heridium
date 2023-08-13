#pragma once

#include "../../../../../../pch.h"
class cGcPlayerCommunicatorMessage;

class cGcRewardCommunicatorMessage
{
    static const unsigned __int64 muNameHash = 4047263910798193155;
    static const unsigned __int64 muTemplateHash = 11236380890899427806;
    static const int miNumMembers = 5;

    cTkFixedString<128,char> macMessage;
    cTkFixedString<128,char> macVRMessage;
    cTkFixedString<128,char> macOSDMessage;
    cGcPlayerCommunicatorMessage mComms;
    bool mbAutoOpen;

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