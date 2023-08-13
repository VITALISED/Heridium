#pragma once
#include "../../../../../../../pch.h"

class cTkAudioComponentData
{
    static const unsigned __int64 muNameHash = 0x43843485E8F56932;
    static const unsigned __int64 muTemplateHash = 0xDFEC3D30BC63BC3A;
    static const int miNumMembers = 5;

    cTkFixedString<128,char> macAmbient;
    TkID<128> mAmbientState;
    cTkFixedString<128,char> macShutdown;
    int miMaxDistance;
    cTkDynamicArray<cTkAudioAnimTrigger> maAnimTriggers;

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
