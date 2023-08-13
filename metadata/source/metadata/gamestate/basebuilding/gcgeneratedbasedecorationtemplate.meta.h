#pragma once

#include "../../../../../../../pch.h"
class cTkModelResource;

enum eDecorationLayer
{
    EDecorationLayer_Stairs = 0,
    EDecorationLayer_Corridor = 1,
    EDecorationLayer_Room = 2,
    EDecorationLayer_Door = 3,
    EDecorationLayer_Decoration1 = 4,
    EDecorationLayer_Decoration2 = 5,
    EDecorationLayer_Decoration3 = 6,
    EDecorationLayer_DecorationCorridor = 7,
};

class cGcGeneratedBaseDecorationTemplate
{
    static const unsigned __int64 muNameHash = 7165245757998254034;
    static const unsigned __int64 muTemplateHash = 3607032295471227228;
    static const int miNumMembers = 6;

    TkID<128> mId;
    cTkModelResource mTemplateScene;
    float mfProbability;
    int miMaxPerRoom;
    eDecorationLayer meDecorationLayer;
    cTkDynamicArray<int> maInvalidRoomIndexes;

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
