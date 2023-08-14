#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/springattachment/gcspringlink.meta.h"

class cGcSpringAttachmentComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x70622F0C8DD198C;
    static const unsigned __int64 muTemplateHash = 0xDD52EA8B2A261D7;
    static const int miNumMembers = 3;

    bool mbEnabled;
    cTkFixedString<64,char> macName;
    cTkDynamicArray<cGcSpringLink> maSpringLinks;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
