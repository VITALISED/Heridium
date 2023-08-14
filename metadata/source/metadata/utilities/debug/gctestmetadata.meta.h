#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/audio/gcaudiowwiseevents.meta.h"

enum eDocOptionalEnum
{
    EDocOptionalEnum_SomeValue1 = 0,
    EDocOptionalEnum_SomeValue2 = 1,
    EDocOptionalEnum_SomeValue3 = 2,
    EDocOptionalEnum_SomeValue4 = 3,
};

enum eTestEnum
{
    ETestEnum_Default = 0,
    ETestEnum_Option1 = 1,
    ETestEnum_Option2 = 2,
    ETestEnum_Option3 = 3,
};

enum exTestFlags
{
    ETestFlags_Flag1 = 1,
    ETestFlags_Flag2 = 2,
    ETestFlags_Flag3 = 4,
};

class cGcTestMetadata
{
public:
    static const unsigned __int64 muNameHash = 0xCE965FAFD6BBF99E;
    static const unsigned __int64 muTemplateHash = 0x73F3D69C8298DC6B;
    static const int miNumMembers = 36;

    bool mbTestBool;
    unsigned __int8 mTestByte;
    int miTestInt;
    __int16 miTestInt16;
    unsigned __int16 muiTestUInt16;
    __int64 mi64TestInt64;
    unsigned __int64 mui64TestUInt64;
    __int64 mi64TestInt64_2;
    unsigned __int64 mui64TestUInt64_2;
    cTkSmartResHandle mTestResource;
    cTkVector3 mTestVector;
    cTkVector2 mTestVector2;
    cTkVector4 mTestVector4;
    cTkColour mTestColour;
    float mfTestFloat;
    cTkSeed mTestSeed;
    cTkFixedString<128,char> macTestModelFilename;
    cTkFixedString<128,char> macTestTextureFilename;
    cTkFixedString<32,char> macTestString;
    cTkFixedString<128,char> macTestString128;
    cTkFixedString<256,char> macTestString256;
    cTkFixedString<512,char> macTestString512;
    TkID<128> mTestID;
    TkID<256> mTestLocID;
    cGcAudioWwiseEvents mTestAudioEvent;
    cTkVector3 mDocOptionalVector;
    cTkFixedString<64,char> macDocRenamedString64;
    TkID<256> mDocOptionalRenamed;
    eDocOptionalEnum meDocOptionalEnum;
    cTkDynamicString macTestDynamicString;
    eTestEnum meTestEnum;
    cTkFixedArray<float, 10> maTestStaticArray;
    cTkDynamicArray<float> maTestDynamicArray;
    cTkFixedArray<float, 4> maTestEnumArray;
    cTkFixedArray<float, 52> maTestExternalEnumArray;
    exTestFlags mexTestFlags;

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
