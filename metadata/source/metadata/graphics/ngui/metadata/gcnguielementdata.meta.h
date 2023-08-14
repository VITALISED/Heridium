#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/toolkit/metadata/ngui/tknguiforcedstyle.meta.h"
#include "../../../../../../metadata/source/metadata/graphics/ngui/metadata/gcnguilayoutdata.meta.h"

class cGcNGuiElementData
{
public:
    static const unsigned __int64 muNameHash = 0xF10587272870E7F4;
    static const unsigned __int64 muTemplateHash = 0xD274DEB39D9026A1;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
