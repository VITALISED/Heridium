#pragma once
#include "pch.h"

enum eNavAreaType
{
    ENavAreaType_Normal = 0,
    ENavAreaType_BuildingWithExterior = 1,
    ENavAreaType_Debris = 2,
    ENavAreaType_Ship = 3,
    ENavAreaType_Mech = 4,
    ENavAreaType_PlanetMech = 5,
    ENavAreaType_Demo = 6,
    ENavAreaType_WFCBase = 7,
    ENavAreaType_FreighterBase = 8,
};

class cGcNPCNavigationAreaComponentData
{
public:
    static const unsigned __int64 muNameHash = 0xB4FC959D6A910DEB;
    static const unsigned __int64 muTemplateHash = 0xA0E00875B7A6ABD0;
    static const int miNumMembers = 7;

    eNavAreaType meNavAreaType;
    float mfMinRadius;
    float mfMaxRadius;
    float mfSphereCastHeightClearance;
    float mfNeighbourCandidateDistance;
    float mfMaxNeighbourSlope;
    float mfConnectionLengthFactor;

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
