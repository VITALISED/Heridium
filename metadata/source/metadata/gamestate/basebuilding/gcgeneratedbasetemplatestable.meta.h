#pragma once
#include "../../../../../../../pch.h"

class cGcGeneratedBaseTemplatesTable
{
    static const unsigned __int64 muNameHash = 0x7F0943EC9DBC0BDD;
    static const unsigned __int64 muTemplateHash = 0xE28A64C055994FBA;
    static const int miNumMembers = 4;

    cTkDynamicArray<cGcGeneratedBaseDecorationTemplate> maDecorationTemplates;
    cTkDynamicArray<cGcGeneratedBaseRoomTemplate> maRoomTemplates;
    cTkDynamicArray<cGcGeneratedBaseThemeTemplate> maThemeTemplates;
    cTkDynamicArray<cGcGeneratedBasePruningRule> maPruningRules;

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
