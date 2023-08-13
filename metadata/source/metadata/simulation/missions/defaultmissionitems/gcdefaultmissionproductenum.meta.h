#pragma once

#include "../../../../../../../../pch.h"
enum eDefaultProductType
{
    EDefaultProductType_None = 0,
    EDefaultProductType_PrimaryProduct = 1,
    EDefaultProductType_SecondaryProduct = 2,
};

class cGcDefaultMissionProductEnum
{
    static const unsigned __int64 muNameHash = 2354853122646399616;
    static const unsigned __int64 muTemplateHash = 7378111288977492195;
    static const int miNumMembers = 1;

    eDefaultProductType meDefaultProductType;

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
