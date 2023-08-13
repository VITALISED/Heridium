#pragma once
#include "../../../../../../../pch.h"

class cGcDiscoveryOwner;
class cGcPersistentBaseTypes;
class cGcGameMode;
class cGcPersistentBaseDifficultyData;
class cGcBaseAutoPowerSetting;

class cGcPersistentBase
{
    static const unsigned __int64 muNameHash = 0x732552199A3AE45E;
    static const unsigned __int64 muTemplateHash = 0x856B1B2F38F87437;
    static const int miNumMembers = 22;

    int miBaseVersion;
    int miOriginalBaseVersion;
    unsigned __int64 mui64GalacticAddress;
    cTkVector mPosition;
    cTkVector mForward;
    unsigned __int64 mui64UserData;
    unsigned __int64 mui64LastUpdateTimestamp;
    cTkDynamicArray<cGcPersistentBaseEntry> maObjects;
    cTkFixedString<64,char> macRID;
    cGcDiscoveryOwner mOwner;
    cTkFixedString<64,char> macName;
    cGcPersistentBaseTypes mBaseType;
    cTkFixedString<64,char> macLastEditedById;
    cTkFixedString<64,char> macLastEditedByUsername;
    cTkVector mScreenshotAt;
    cTkVector mScreenshotPos;
    cGcGameMode mGameMode;
    cGcPersistentBaseDifficultyData mDifficulty;
    cTkFixedString<32,char> macPlatformToken;
    bool mbIsReported;
    bool mbIsFeatured;
    cGcBaseAutoPowerSetting mAutoPowerSetting;

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
