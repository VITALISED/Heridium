#pragma once

#include "../../../../../../../pch.h"
class cTkInputEnum;
class cTkInputHandEnum;

class cTkButtonPathMapping
{
    static const unsigned __int64 muNameHash = 13589530121151915498;
    static const unsigned __int64 muTemplateHash = 9468149990257752092;
    static const int miNumMembers = 7;

    cTkInputEnum mId;
    TkID<256> mName;
    cTkFixedString<128,char> macSolidIcon;
    cTkFixedString<128,char> macOverlayIcon;
    cTkFixedString<128,char> macSpecialIcon;
    cTkInputHandEnum mHand;
    cTkFixedString<32,char> macOpenVROriginNames;

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