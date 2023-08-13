#pragma once
#include "../../../../../../../pch.h"

class cTkMaterialShaderMillLink
{
    static const unsigned __int64 muNameHash = 0xFC506DC8F06CBE6D;
    static const unsigned __int64 muTemplateHash = 0xB4E29DBAD60FA279;
    static const int miNumMembers = 7;

    int miInputNode;
    cTkFixedString<32,char> macInputConnect;
    TkID<128> mInputShuffle;
    int miOutputNode;
    cTkFixedString<32,char> macOutputConnect;
    TkID<128> mOutputShuffle;
    int miCount;

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
