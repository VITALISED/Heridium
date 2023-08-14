#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/gamestate/messages/gcstatusmessagedefinition.meta.h"
#include "../../../../../metadata/source/metadata/gamestate/messages/gcpetvocabularyentry.meta.h"
#include "../../../../../metadata/source/metadata/gamestate/messages/gcfriendlydronevocabularyentry.meta.h"

class cGcStatusMessageDefinitions
{
public:
    static const unsigned __int64 muNameHash = 0x434379BF90DDF679;
    static const unsigned __int64 muTemplateHash = 0x16C04EDC7948B399;
    static const int miNumMembers = 5;

    cTkDynamicArray<cGcStatusMessageDefinition> maMessages;
    cTkColour mMissionMarkupColour;
    cTkFixedArray<cGcPetVocabularyEntry, 15> maPetVocabulary;
    cTkFixedArray<cGcPetVocabularyEntry, 21> maPetChatTemplates;
    cTkFixedArray<cGcFriendlyDroneVocabularyEntry, 5> maFriendlyDroneChatTemplates;

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
