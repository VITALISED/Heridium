#pragma once

#include "../../../../../../../../pch.h"
class cTkNGuiForcedStyle;
class cGcNGuiLayoutData;

class cGcNGuiElementData
{
    static const unsigned __int64 muNameHash = 17367436140276148212;
    static const unsigned __int64 muTemplateHash = 15164990708287284897;
    static const int miNumMembers = 5;

    TkID<128> mID;
    TkID<128> mPresetID;
    bool mbIsHidden;
    cTkNGuiForcedStyle mForcedStyle;
    cGcNGuiLayoutData mLayout;

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
