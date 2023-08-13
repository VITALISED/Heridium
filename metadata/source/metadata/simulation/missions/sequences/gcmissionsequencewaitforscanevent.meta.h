#pragma once

#include "../../../../../../../../pch.h"
class cGcScanEventGPSHint;

class cGcMissionSequenceWaitForScanEvent
{
    static const unsigned __int64 muNameHash = 14981437575264649059;
    static const unsigned __int64 muTemplateHash = 323215354671097530;
    static const int miNumMembers = 12;

    cTkFixedString<128,char> macMessage;
    cTkFixedString<128,char> macGalaxyMapMessage;
    TkID<256> mEvent;
    float mfTimeout;
    bool mbDistanceTimeout;
    cTkFixedString<128,char> macTimeoutOSD;
    cGcScanEventGPSHint mUseGPSInText;
    cTkFixedString<128,char> macSurveyInactiveHint;
    cTkFixedString<128,char> macSurveySwapHint;
    cTkFixedString<128,char> macSurveyHint;
    cTkFixedString<128,char> macSurveyVehicleHint;
    cTkFixedString<128,char> macDebugText;

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
