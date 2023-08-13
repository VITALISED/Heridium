#pragma once
#include "pch.h"

class cTkLocalisationEntry
{
public:
    static const unsigned __int64 muNameHash = 0xBCFA2AE11CD16318;
    static const unsigned __int64 muTemplateHash = 0xD21A74F102B57C1A;
    static const int miNumMembers = 18;

    TkID<256> mId;
    cTkDynamicString macEnglish;
    cTkDynamicString macFrench;
    cTkDynamicString macItalian;
    cTkDynamicString macGerman;
    cTkDynamicString macSpanish;
    cTkDynamicString macRussian;
    cTkDynamicString macPolish;
    cTkDynamicString macDutch;
    cTkDynamicString macPortuguese;
    cTkDynamicString macLatinAmericanSpanish;
    cTkDynamicString macBrazilianPortuguese;
    cTkDynamicString macSimplifiedChinese;
    cTkDynamicString macTraditionalChinese;
    cTkDynamicString macTencentChinese;
    cTkDynamicString macKorean;
    cTkDynamicString macJapanese;
    cTkDynamicString macUSEnglish;

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
