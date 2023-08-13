#pragma once
#include "pch.h"

enum ePetVocabularyWord
{
    EPetVocabularyWord_Attack = 0,
    EPetVocabularyWord_Dislike = 1,
    EPetVocabularyWord_Cute = 2,
    EPetVocabularyWord_Good = 3,
    EPetVocabularyWord_Happy = 4,
    EPetVocabularyWord_Hostile = 5,
    EPetVocabularyWord_Like = 6,
    EPetVocabularyWord_Lonely = 7,
    EPetVocabularyWord_Loved = 8,
    EPetVocabularyWord_Noise = 9,
    EPetVocabularyWord_OwnerLove = 10,
    EPetVocabularyWord_SummonedTrait = 11,
    EPetVocabularyWord_Hungry = 12,
    EPetVocabularyWord_Tickles = 13,
    EPetVocabularyWord_Yummy = 14,
};

class cGcPetVocabularyWords
{
public:
    static const unsigned __int64 muNameHash = 0xDCBFB26222DD9DE6;
    static const unsigned __int64 muTemplateHash = 0xA041098462C7EC70;
    static const int miNumMembers = 1;

    ePetVocabularyWord mePetVocabularyWord;

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
