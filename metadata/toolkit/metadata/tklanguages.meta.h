#pragma once
#include "pch.h"

enum eLanguage
{
    ELanguage_Default = 0,
    ELanguage_English = 1,
    ELanguage_USEnglish = 2,
    ELanguage_French = 3,
    ELanguage_Italian = 4,
    ELanguage_German = 5,
    ELanguage_Spanish = 6,
    ELanguage_Russian = 7,
    ELanguage_Polish = 8,
    ELanguage_Dutch = 9,
    ELanguage_Portuguese = 10,
    ELanguage_LatinAmericanSpanish = 11,
    ELanguage_BrazilianPortuguese = 12,
    ELanguage_Japanese = 13,
    ELanguage_TraditionalChinese = 14,
    ELanguage_SimplifiedChinese = 15,
    ELanguage_TencentChinese = 16,
    ELanguage_Korean = 17,
};

class cTkLanguages
{
public:
    static const unsigned __int64 muNameHash = 0xEA37791FF01A5AF4;
    static const unsigned __int64 muTemplateHash = 0x370D5A3B36E0E0F1;
    static const int miNumMembers = 1;

    eLanguage meLanguage;

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
