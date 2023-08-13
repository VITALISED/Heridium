#pragma once
#include "pch.h"

enum eVROverride_Text
{
    EVROverride_Text_FontHeight = 0,
    EVROverride_Text_FontIndex = 1,
};

class cGcVROverride_Text
{
public:
    static const unsigned __int64 muNameHash = 0x140DDCF57268A02D;
    static const unsigned __int64 muTemplateHash = 0x96C21BF25C430F0A;
    static const int miNumMembers = 3;

    eVROverride_Text meVROverride_Text;
    int miIntValue;
    float mfFloatValue;

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
