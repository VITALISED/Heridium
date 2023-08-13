#pragma once

#include "../../../../../../../../pch.h"
class cGcMissionCategory;
class cGcAudioWwiseEvents;

enum eOSDMessageStyle
{
    EOSDMessageStyle_Standard = 0,
    EOSDMessageStyle_Fancy = 1,
    EOSDMessageStyle_Stats = 2,
    EOSDMessageStyle_Settlement = 3,
};

class cGcMissionSequenceShowMessage
{
    static const unsigned __int64 muNameHash = 17071090710860095977;
    static const unsigned __int64 muTemplateHash = 274435612777383476;
    static const int miNumMembers = 14;

    cGcMissionCategory mCategory;
    float mfTime;
    cTkFixedString<128,char> macMessage;
    cGcAudioWwiseEvents mAudioEvent;
    float mfOSDTime;
    cTkFixedString<128,char> macOSDMessage;
    cTkFixedString<128,char> macOSDMessageSubtitle;
    cTkColour mOSDMessageColour;
    eOSDMessageStyle meOSDMessageStyle;
    bool mbOSDUseMissionIcon;
    bool mbDisableIcon;
    bool mbDisableTitlePrefix;
    cTkDynamicArray<cTkClassPointer> maUseConditionsForTextFormatting;
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
