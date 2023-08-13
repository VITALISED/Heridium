#pragma once
#include "pch.h"

enum eGraphicDetail
{
    EGraphicDetail_Low = 0,
    EGraphicDetail_Medium = 1,
    EGraphicDetail_High = 2,
    EGraphicDetail_Ultra = 3,
};

class cTkGraphicsDetailTypes
{
public:
    static const unsigned __int64 muNameHash = 0xAACA1A6A0194D948;
    static const unsigned __int64 muTemplateHash = 0x4EF1F56CF5CA5B73;
    static const int miNumMembers = 1;

    eGraphicDetail meGraphicDetail;

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
