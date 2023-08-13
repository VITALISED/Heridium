#pragma once
#include "../../../../../../../pch.h"

class cGcCustomisationCameraData;
class cGcCustomisationGroups;

class cGcCustomisationUI
{
    static const unsigned __int64 muNameHash = 0x9391BB23A2DA934;
    static const unsigned __int64 muTemplateHash = 0x37661AA774E72C52;
    static const int miNumMembers = 3;

    cGcCustomisationCameraData mRacesCameraData;
    cTkDynamicArray<cGcCustomisationRace> maRaces;
    cGcCustomisationGroups mCommon;

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
