#pragma once

#include "../../../../../../pch.h"
class cGcTradeData;
class cGcTradeData;
class cGcTradeData;
class cGcTradeData;
class cGcTradeData;
class cGcTradeData;
class cGcTradeData;
class cGcTradeData;
class cGcTradeData;
class cGcTradeData;
class cGcTradeData;
class cGcTradeData;
class cGcTradeData;
class cGcTradeData;
class cGcTradeData;
class cGcTradeData;
class cGcTradeData;
class cGcTradeData;
class cGcTradeData;
class cGcTradeData;
class cGcTradeData;
class cGcTradeData;

class cGcTradeSettings
{
    static const unsigned __int64 muNameHash = 5432411092877505956;
    static const unsigned __int64 muTemplateHash = 8379476777307796827;
    static const int miNumMembers = 22;

    cGcTradeData mSpaceStation;
    cGcTradeData mShop;
    cGcTradeData mTechShop;
    cGcTradeData mShipTechSpecialist;
    cGcTradeData mSuitTechSpecialist;
    cGcTradeData mWeapTechSpecialist;
    cGcTradeData mVehicleTechSpecialist;
    cGcTradeData mNexusTechSpecialist;
    cGcTradeData mShip;
    cGcTradeData mExpShip;
    cGcTradeData mTraShip;
    cGcTradeData mWarShip;
    cGcTradeData mLoneExp;
    cGcTradeData mLoneTra;
    cGcTradeData mLoneWar;
    cGcTradeData mMapShop;
    cGcTradeData mIllegalProds;
    cGcTradeData mScrap;
    cGcTradeData mSeasonRewardsShop;
    cGcTradeData mSmugglerStation;
    cGcTradeData mPirateTech;
    cGcTradeData mPirateVisitor;

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
