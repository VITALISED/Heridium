#pragma once

#include "../../../../../../pch.h"
enum eViewShape
{
    EViewShape_Pyramid = 0,
    EViewShape_Cone = 1,
};

class cGcAntagonistPerception
{
    static const unsigned __int64 muNameHash = 4960398092451109067;
    static const unsigned __int64 muTemplateHash = 10073660454214665247;
    static const int miNumMembers = 7;

    TkID<128> mId;
    float mfRange;
    float mfXFOV;
    float mfYFOV;
    eViewShape meViewShape;
    bool mbRaycast;
    cTkFixedString<32,char> macSenseLocator;

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
