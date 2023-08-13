#pragma once
#include "../../../../../../../pch.h"

class cTkCurveType;
class cTkCurveType;

class cGcPlayerSpaceshipWarpData
{
    static const unsigned __int64 muNameHash = 0x69AE13F58EC1B23A;
    static const unsigned __int64 muTemplateHash = 0x31AE5D12112FF00;
    static const int miNumMembers = 5;

    float mfEntryTime;
    cTkCurveType mEntryTunnelCurve;
    float mfTravelTunnelTime;
    float mfExitTime;
    cTkCurveType mExitTunnelCurve;

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
