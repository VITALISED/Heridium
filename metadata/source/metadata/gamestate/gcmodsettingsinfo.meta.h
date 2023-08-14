#pragma once
#include "../../../../pch.h"

class cGcModSettingsInfo
{
public:
    static const unsigned __int64 muNameHash = 0xC0CE6220E5E98BD9;
    static const unsigned __int64 muTemplateHash = 0xF658C5CC0A4A78DE;
    static const int miNumMembers = 9;

    cTkFixedString<128,char> macName;
    cTkFixedString<128,char> macAuthor;
    unsigned __int64 mui64ID;
    unsigned __int64 mui64AuthorID;
    unsigned __int64 mui64LastUpdated;
    unsigned __int16 muiLoadOrder;
    bool mbEnabled;
    bool mbEnabledVR;
    cTkDynamicArray<unsigned __int64> maDependencies;

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
