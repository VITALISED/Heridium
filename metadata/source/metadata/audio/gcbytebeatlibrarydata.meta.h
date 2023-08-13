#pragma once
#include "../../../../../../pch.h"

class cGcByteBeatLibraryData
{
    static const unsigned __int64 muNameHash = 0x1D3FECE6AC6A7E9F;
    static const unsigned __int64 muTemplateHash = 0x77725A322F5E2BE8;
    static const int miNumMembers = 6;

    cTkFixedArray<cGcByteBeatSong> maMySongs;
    cTkFixedArray<TkID<128> > maPlaylist;
    bool mbShuffle;
    bool mbAutoplayOnFoot;
    bool mbAutoplayInShip;
    bool mbAutoplayInVehicle;

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
