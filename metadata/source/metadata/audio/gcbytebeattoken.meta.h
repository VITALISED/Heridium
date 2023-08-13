#pragma once

#include "../../../../../../pch.h"
enum eByteBeatToken
{
    EByteBeatToken_T = 0,
    EByteBeatToken_AND = 1,
    EByteBeatToken_OR = 2,
    EByteBeatToken_XOR = 3,
    EByteBeatToken_Plus = 4,
    EByteBeatToken_Minus = 5,
    EByteBeatToken_Multiply = 6,
    EByteBeatToken_Divide = 7,
    EByteBeatToken_Modulo = 8,
    EByteBeatToken_ShiftLeft = 9,
    EByteBeatToken_ShiftRight = 10,
    EByteBeatToken_Greater = 11,
    EByteBeatToken_GreaterEqual = 12,
    EByteBeatToken_Less = 13,
    EByteBeatToken_LessEqual = 14,
    EByteBeatToken_Number = 15,
    EByteBeatToken_OpenParenthesis = 16,
    EByteBeatToken_CloseParenthesis = 17,
};

class cGcByteBeatToken
{
    static const unsigned __int64 muNameHash = 2289894330627902537;
    static const unsigned __int64 muTemplateHash = 11813788147543107117;
    static const int miNumMembers = 1;

    eByteBeatToken meByteBeatToken;

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
