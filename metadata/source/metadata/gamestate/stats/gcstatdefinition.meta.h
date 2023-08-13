#pragma once
#include "../../../../../../../pch.h"

class cGcStatType;
class cGcStatTrackType;
class cGcStatDisplayType;
class cGcStatValueData;

class cGcStatDefinition
{
    static const unsigned __int64 muNameHash = 0xC70BF0DB96EC45A3;
    static const unsigned __int64 muTemplateHash = 0xC7EB0E264D2085A6;
    static const int miNumMembers = 8;

    cGcStatType mType;
    cGcStatTrackType mTrackType;
    cGcStatDisplayType mDisplayType;
    cGcStatValueData mDefaultValue;
    TkID<128> mId;
    bool mbTelemetryUpload;
    bool mbIsProgression;
    int miMissionMessageDecimals;

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
