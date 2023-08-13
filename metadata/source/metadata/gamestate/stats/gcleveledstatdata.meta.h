#pragma once
#include "pch.h"

enum eStatMessageType
{
    EStatMessageType_Full = 0,
    EStatMessageType_Quick = 1,
    EStatMessageType_Silent = 2,
};
class cTkTextureResource;

class cGcLeveledStatData
{
public:
    static const unsigned __int64 muNameHash = 0x987EE8E8873AED6B;
    static const unsigned __int64 muTemplateHash = 0x975312EAEE5209F4;
    static const int miNumMembers = 11;

    TkID<128> mStatId;
    TkID<256> mStatTitle;
    eStatMessageType meStatMessageType;
    TkID<256> mNotifyMessage;
    TkID<256> mNotifyMessageSingular;
    bool mbShowInTerminal;
    bool mbShowStatLevel;
    cTkTextureResource mIcon;
    cTkFixedArray<cGcStatLevelData, 11> maStatLevels;
    bool mbUseRankNotStats;
    bool mbTelemetryUpload;

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
