#pragma once

#include "../../../../../../pch.h"
class cGcByteBeatLibraryData
{
    static const unsigned __int64 muNameHash = 2107663626111975071;
    static const unsigned __int64 muTemplateHash = 8607041009448004584;
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
