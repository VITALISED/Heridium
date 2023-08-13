#pragma once
#include "pch.h"

class cGcAISpaceshipTypes;
class cGcSpaceshipClasses;
class cGcPrimaryAxis;
class cTkModelResource;

class cGcAISpaceshipComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x4F5433BCFC028B49;
    static const unsigned __int64 muTemplateHash = 0xC53919B53D4EA93E;
    static const int miNumMembers = 5;

    cGcAISpaceshipTypes mType;
    cGcSpaceshipClasses mClass;
    cGcPrimaryAxis mAxis;
    cTkModelResource mHangar;
    bool mbIsSpaceAnomaly;

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
