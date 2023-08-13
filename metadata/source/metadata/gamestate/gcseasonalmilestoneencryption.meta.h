#pragma once
#include "pch.h"

class cTkTextureResource;
class cTkTextureResource;

class cGcSeasonalMilestoneEncryption
{
public:
    static const unsigned __int64 muNameHash = 0x9562AF9028346F05;
    static const unsigned __int64 muTemplateHash = 0x668FCE5B1743986A;
    static const int miNumMembers = 8;

    bool mbIsEncrypted;
    TkID<256> mTitleUpper;
    TkID<256> mSubtitle;
    TkID<256> mDescription;
    cTkTextureResource mPatch;
    cTkTextureResource mHoverPopupIcon;
    TkID<128> mDecryptMissionId;
    int miDecryptMissionSeed;

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
