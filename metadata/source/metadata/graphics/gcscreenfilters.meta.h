#pragma once
#include "../../../../pch.h"

enum eScreenFilter
{
    EScreenFilter_Default = 0,
    EScreenFilter_DefaultStorm = 1,
    EScreenFilter_Frozen = 2,
    EScreenFilter_FrozenStorm = 3,
    EScreenFilter_Toxic = 4,
    EScreenFilter_ToxicStorm = 5,
    EScreenFilter_Radioactive = 6,
    EScreenFilter_RadioactiveStorm = 7,
    EScreenFilter_Scorched = 8,
    EScreenFilter_ScorchedStorm = 9,
    EScreenFilter_Barren = 10,
    EScreenFilter_BarrenStorm = 11,
    EScreenFilter_Weird1 = 12,
    EScreenFilter_Weird2 = 13,
    EScreenFilter_Weird3 = 14,
    EScreenFilter_Weird4 = 15,
    EScreenFilter_Weird5 = 16,
    EScreenFilter_Weird6 = 17,
    EScreenFilter_Weird7 = 18,
    EScreenFilter_Weird8 = 19,
    EScreenFilter_Vintage = 20,
    EScreenFilter_HyperReal = 21,
    EScreenFilter_Desaturated = 22,
    EScreenFilter_Amber = 23,
    EScreenFilter_GBGreen = 24,
    EScreenFilter_Apocalypse = 25,
    EScreenFilter_Diffusion = 26,
    EScreenFilter_Green = 27,
    EScreenFilter_BlackAndWhite = 28,
    EScreenFilter_Isolation = 29,
    EScreenFilter_Sepia = 30,
    EScreenFilter_Filmic = 31,
    EScreenFilter_GBGrey = 32,
    EScreenFilter_Binoculars = 33,
    EScreenFilter_Surveying = 34,
    EScreenFilter_Nexus = 35,
    EScreenFilter_SpaceStation = 36,
    EScreenFilter_Freighter = 37,
    EScreenFilter_FreighterAbandoned = 38,
    EScreenFilter_Frigate = 39,
    EScreenFilter_MissionSurvey = 40,
    EScreenFilter_NewVibrant = 41,
    EScreenFilter_NewVibrantBright = 42,
    EScreenFilter_NewVibrantWarm = 43,
    EScreenFilter_NewVintageBright = 44,
    EScreenFilter_NewVintageWash = 45,
    EScreenFilter_Drama = 46,
    EScreenFilter_MemoryBold = 47,
    EScreenFilter_Memory = 48,
    EScreenFilter_MemoryWash = 49,
    EScreenFilter_Autumn = 50,
    EScreenFilter_AutumnFade = 51,
    EScreenFilter_ClassicBright = 52,
    EScreenFilter_Classic = 53,
    EScreenFilter_ClassicWash = 54,
    EScreenFilter_BlackAndWhiteDream = 55,
    EScreenFilter_ColourTouchB = 56,
    EScreenFilter_ColourTouchC = 57,
    EScreenFilter_NegativePrint = 58,
    EScreenFilter_SepiaExtreme = 59,
    EScreenFilter_Solarise = 60,
    EScreenFilter_TwoToneStrong = 61,
    EScreenFilter_TwoTone = 62,
    EScreenFilter_Dramatic = 63,
    EScreenFilter_Fuchsia = 64,
    EScreenFilter_Violet = 65,
    EScreenFilter_Cyan = 66,
    EScreenFilter_GreenNew = 67,
    EScreenFilter_AmberNew = 68,
    EScreenFilter_Red = 69,
    EScreenFilter_HueShiftA = 70,
    EScreenFilter_HueShiftB = 71,
    EScreenFilter_HueShiftC = 72,
    EScreenFilter_HueShiftD = 73,
    EScreenFilter_WarmStripe = 74,
    EScreenFilter_NMSRetroA = 75,
    EScreenFilter_NMSRetroB = 76,
    EScreenFilter_NMSRetroC = 77,
    EScreenFilter_NMSRetroD = 78,
    EScreenFilter_NMSRetroE = 79,
    EScreenFilter_NMSRetroF = 80,
    EScreenFilter_NMSRetroG = 81,
};

class cGcScreenFilters
{
public:
    static const unsigned __int64 muNameHash = 0xE50E9B26CC742B3D;
    static const unsigned __int64 muTemplateHash = 0x131CD98CFBBC51F;
    static const int miNumMembers = 1;

    eScreenFilter meScreenFilter;

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
