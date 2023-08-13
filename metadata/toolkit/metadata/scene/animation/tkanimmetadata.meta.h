#pragma once

#include "../../../../../../../pch.h"
class cTkAnimNodeFrameData;

class cTkAnimMetadata
{
    static const unsigned __int64 muNameHash = 453917503408517594;
    static const unsigned __int64 muTemplateHash = 10361177835387718964;
    static const int miNumMembers = 6;

    cTkDynamicArray<cTkAnimNodeData> maNodeData;
    cTkDynamicArray<cTkAnimNodeFrameData> maAnimFrameData;
    cTkAnimNodeFrameData mStillFrameData;
    int miFrameCount;
    int miNodeCount;
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
