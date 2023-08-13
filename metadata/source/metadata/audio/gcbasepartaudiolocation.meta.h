#pragma once

#include "../../../../../../pch.h"
enum eBasePartAudioLocation
{
    EBasePartAudioLocation_None = 0,
    EBasePartAudioLocation_Freighter_SpaceWalk = 1,
    EBasePartAudioLocation_Freighter_BioRoom = 2,
    EBasePartAudioLocation_Freighter_TechRoom = 3,
    EBasePartAudioLocation_Freighter_IndustrialRoom = 4,
};

class cGcBasePartAudioLocation
{
    static const unsigned __int64 muNameHash = 9448932404036913109;
    static const unsigned __int64 muTemplateHash = 3348601496667277785;
    static const int miNumMembers = 1;

    eBasePartAudioLocation meBasePartAudioLocation;

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
