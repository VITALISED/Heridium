#pragma once
#include "../../../../../../pch.h"

class cTkAnimationGameData;

enum eAnimType
{
    EAnimType_Loop = 0,
    EAnimType_OneShot = 1,
    EAnimType_Control = 2,
    EAnimType_OneShotBlendable = 3,
};

enum eCreatureSize
{
    ECreatureSize_AllSizes = 0,
    ECreatureSize_SmallOnly = 1,
    ECreatureSize_LargeOnly = 2,
};

class cTkAnimationData
{
    static const unsigned __int64 muNameHash = 0x3A0F3C26A4978A6F;
    static const unsigned __int64 muTemplateHash = 0x2B3F7ACFE888523E;
    static const int miNumMembers = 22;

    TkID<128> mAnim;
    TkID<128> mAdditiveBaseAnim;
    cTkFixedString<128,char> macFilename;
    cTkFixedString<64,char> macStartNode;
    cTkDynamicArray<cTkFixedString<64,char> > maExtraStartNodes;
    cTkAnimationGameData mGameData;
    int miFrameStart;
    int miFrameEnd;
    int miPriority;
    float mfOffsetMin;
    float mfOffsetMax;
    float mfDelay;
    float mfSpeed;
    float mfActionStartFrame;
    float mfActionFrame;
    float mfAdditiveBaseFrame;
    eAnimType meAnimType;
    eCreatureSize meCreatureSize;
    bool mbAdditive;
    bool mbMirrored;
    bool mbActive;
    bool mbHas30HzFrames;

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
