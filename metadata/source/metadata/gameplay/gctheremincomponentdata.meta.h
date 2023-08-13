#pragma once

#include "../../../../../../pch.h"
class cGcThereminComponentData
{
    static const unsigned __int64 muNameHash = 15052613404996250442;
    static const unsigned __int64 muTemplateHash = 714358107377533731;
    static const int miNumMembers = 12;

    cTkFixedString<32,char> macVolumeBBName;
    float mfVolumeMinDist;
    float mfVolumeMaxDist;
    float mfMinVolume;
    float mfMaxVolume;
    cTkFixedString<32,char> macPitchStartLocator;
    cTkFixedString<32,char> macPitchEndLocator;
    float mfPitchMinDist;
    float mfPitchMaxDist;
    float mfMinPitch;
    float mfMaxPitch;
    float mfIgnorePlayerDistance;

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