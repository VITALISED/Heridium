#pragma once
#include "../../../../../pch.h"

enum eStatsType
{
    EStatsType_Unspecified = 0,
    EStatsType_Weapon_Laser = 1,
    EStatsType_Weapon_Laser_Damage = 2,
    EStatsType_Weapon_Laser_Mining_Speed = 3,
    EStatsType_Weapon_Laser_HeatTime = 4,
    EStatsType_Weapon_Laser_Bounce = 5,
    EStatsType_Weapon_Laser_ReloadTime = 6,
    EStatsType_Weapon_Laser_Recoil = 7,
    EStatsType_Weapon_Laser_Drain = 8,
    EStatsType_Weapon_Laser_StrongLaser = 9,
    EStatsType_Weapon_Laser_ChargeTime = 10,
    EStatsType_Weapon_Laser_MiningBonus = 11,
    EStatsType_Weapon_Projectile = 12,
    EStatsType_Weapon_Projectile_Damage = 13,
    EStatsType_Weapon_Projectile_Range = 14,
    EStatsType_Weapon_Projectile_Rate = 15,
    EStatsType_Weapon_Projectile_ClipSize = 16,
    EStatsType_Weapon_Projectile_ReloadTime = 17,
    EStatsType_Weapon_Projectile_Recoil = 18,
    EStatsType_Weapon_Projectile_Bounce = 19,
    EStatsType_Weapon_Projectile_Homing = 20,
    EStatsType_Weapon_Projectile_Dispersion = 21,
    EStatsType_Weapon_Projectile_BulletsPerShot = 22,
    EStatsType_Weapon_Projectile_MinimumCharge = 23,
    EStatsType_Weapon_Projectile_MaximumCharge = 24,
    EStatsType_Weapon_Projectile_BurstCap = 25,
    EStatsType_Weapon_Projectile_BurstCooldown = 26,
    EStatsType_Weapon_ChargedProjectile = 27,
    EStatsType_Weapon_ChargedProjectile_ChargeTime = 28,
    EStatsType_Weapon_ChargedProjectile_CooldownDuration = 29,
    EStatsType_Weapon_ChargedProjectile_Drain = 30,
    EStatsType_Weapon_ChargedProjectile_ExtraSpeed = 31,
    EStatsType_Weapon_Rail = 32,
    EStatsType_Weapon_Shotgun = 33,
    EStatsType_Weapon_Burst = 34,
    EStatsType_Weapon_Flame = 35,
    EStatsType_Weapon_Cannon = 36,
    EStatsType_Weapon_Grenade = 37,
    EStatsType_Weapon_Grenade_Damage = 38,
    EStatsType_Weapon_Grenade_Radius = 39,
    EStatsType_Weapon_Grenade_Speed = 40,
    EStatsType_Weapon_Grenade_Bounce = 41,
    EStatsType_Weapon_Grenade_Homing = 42,
    EStatsType_Weapon_Grenade_Clusterbomb = 43,
    EStatsType_Weapon_TerrainEdit = 44,
    EStatsType_Weapon_SunLaser = 45,
    EStatsType_Weapon_SoulLaser = 46,
    EStatsType_Weapon_MineGrenade = 47,
    EStatsType_Weapon_FrontShield = 48,
    EStatsType_Weapon_Scope = 49,
    EStatsType_Weapon_Spawner = 50,
    EStatsType_Weapon_SpawnerAlt = 51,
    EStatsType_Weapon_Melee = 52,
    EStatsType_Weapon_StunGrenade = 53,
    EStatsType_Weapon_Stealth = 54,
    EStatsType_Weapon_Scan = 55,
    EStatsType_Weapon_Scan_Radius = 56,
    EStatsType_Weapon_Scan_Recharge_Time = 57,
    EStatsType_Weapon_Scan_Types = 58,
    EStatsType_Weapon_Scan_Binoculars = 59,
    EStatsType_Weapon_Scan_Discovery_Creature = 60,
    EStatsType_Weapon_Scan_Discovery_Flora = 61,
    EStatsType_Weapon_Scan_Discovery_Mineral = 62,
    EStatsType_Weapon_Scan_Secondary = 63,
    EStatsType_Weapon_Scan_Terrain_Resource = 64,
    EStatsType_Weapon_Scan_Surveying = 65,
    EStatsType_Weapon_Stun = 66,
    EStatsType_Weapon_Stun_Duration = 67,
    EStatsType_Weapon_Stun_Damage_Multiplier = 68,
    EStatsType_Weapon_FireDOT = 69,
    EStatsType_Weapon_FireDOT_Duration = 70,
    EStatsType_Weapon_FireDOT_DPS = 71,
    EStatsType_Weapon_FireDOT_Damage_Multiplier = 72,
    EStatsType_Suit_Armour_Health = 73,
    EStatsType_Suit_Armour_Shield = 74,
    EStatsType_Suit_Armour_Shield_Strength = 75,
    EStatsType_Suit_Energy = 76,
    EStatsType_Suit_Energy_Regen = 77,
    EStatsType_Suit_Protection = 78,
    EStatsType_Suit_Protection_Cold = 79,
    EStatsType_Suit_Protection_Heat = 80,
    EStatsType_Suit_Protection_Toxic = 81,
    EStatsType_Suit_Protection_Radiation = 82,
    EStatsType_Suit_Underwater = 83,
    EStatsType_Suit_UnderwaterLifeSupport = 84,
    EStatsType_Suit_DamageReduce_Cold = 85,
    EStatsType_Suit_DamageReduce_Heat = 86,
    EStatsType_Suit_DamageReduce_Toxic = 87,
    EStatsType_Suit_DamageReduce_Radiation = 88,
    EStatsType_Suit_Protection_HeatDrain = 89,
    EStatsType_Suit_Protection_ColdDrain = 90,
    EStatsType_Suit_Protection_ToxDrain = 91,
    EStatsType_Suit_Protection_RadDrain = 92,
    EStatsType_Suit_Protection_WaterDrain = 93,
    EStatsType_Suit_Stamina_Strength = 94,
    EStatsType_Suit_Stamina_Speed = 95,
    EStatsType_Suit_Stamina_Recovery = 96,
    EStatsType_Suit_Jetpack = 97,
    EStatsType_Suit_Jetpack_Tank = 98,
    EStatsType_Suit_Jetpack_Drain = 99,
    EStatsType_Suit_Jetpack_Refill = 100,
    EStatsType_Suit_Jetpack_Ignition = 101,
    EStatsType_Suit_Jetpack_DoubleJump = 102,
    EStatsType_Suit_Jetpack_WaterEfficiency = 103,
    EStatsType_Suit_Jetpack_MidairRefill = 104,
    EStatsType_Suit_Refiner = 105,
    EStatsType_Suit_AutoTranslator = 106,
    EStatsType_Suit_Utility = 107,
    EStatsType_Suit_RocketLocker = 108,
    EStatsType_Ship_Weapons_Guns = 109,
    EStatsType_Ship_Weapons_Guns_Damage = 110,
    EStatsType_Ship_Weapons_Guns_Rate = 111,
    EStatsType_Ship_Weapons_Guns_HeatTime = 112,
    EStatsType_Ship_Weapons_Guns_CoolTime = 113,
    EStatsType_Ship_Weapons_Guns_Scale = 114,
    EStatsType_Ship_Weapons_Guns_BulletsPerShot = 115,
    EStatsType_Ship_Weapons_Guns_Dispersion = 116,
    EStatsType_Ship_Weapons_Guns_Range = 117,
    EStatsType_Ship_Weapons_Guns_Damage_Radius = 118,
    EStatsType_Ship_Weapons_Lasers = 119,
    EStatsType_Ship_Weapons_Lasers_Damage = 120,
    EStatsType_Ship_Weapons_Lasers_HeatTime = 121,
    EStatsType_Ship_Weapons_Missiles = 122,
    EStatsType_Ship_Weapons_Missiles_NumPerShot = 123,
    EStatsType_Ship_Weapons_Missiles_Speed = 124,
    EStatsType_Ship_Weapons_Missiles_Damage = 125,
    EStatsType_Ship_Weapons_Missiles_Size = 126,
    EStatsType_Ship_Weapons_Shotgun = 127,
    EStatsType_Ship_Weapons_MiniGun = 128,
    EStatsType_Ship_Weapons_Plasma = 129,
    EStatsType_Ship_Weapons_Rockets = 130,
    EStatsType_Ship_Weapons_ShieldLeech = 131,
    EStatsType_Ship_Armour_Shield = 132,
    EStatsType_Ship_Armour_Shield_Strength = 133,
    EStatsType_Ship_Armour_Health = 134,
    EStatsType_Ship_Scan = 135,
    EStatsType_Ship_Scan_EconomyFilter = 136,
    EStatsType_Ship_Scan_ConflictFilter = 137,
    EStatsType_Ship_Hyperdrive = 138,
    EStatsType_Ship_Hyperdrive_JumpDistance = 139,
    EStatsType_Ship_Hyperdrive_JumpsPerCell = 140,
    EStatsType_Ship_Hyperdrive_QuickWarp = 141,
    EStatsType_Ship_Launcher = 142,
    EStatsType_Ship_Launcher_TakeOffCost = 143,
    EStatsType_Ship_Launcher_AutoCharge = 144,
    EStatsType_Ship_PulseDrive = 145,
    EStatsType_Ship_PulseDrive_MiniJumpFuelSpending = 146,
    EStatsType_Ship_PulseDrive_MiniJumpSpeed = 147,
    EStatsType_Ship_Boost = 148,
    EStatsType_Ship_Maneuverability = 149,
    EStatsType_Ship_BoostManeuverability = 150,
    EStatsType_Ship_LifeSupport = 151,
    EStatsType_Ship_Drift = 152,
    EStatsType_Ship_Teleport = 153,
    EStatsType_Ship_CargoShield = 154,
    EStatsType_Freighter_Hyperdrive = 155,
    EStatsType_Freighter_Hyperdrive_JumpDistance = 156,
    EStatsType_Freighter_Hyperdrive_JumpsPerCell = 157,
    EStatsType_Freighter_MegaWarp = 158,
    EStatsType_Freighter_Teleport = 159,
    EStatsType_Freighter_Fleet_Boost = 160,
    EStatsType_Freighter_Fleet_Speed = 161,
    EStatsType_Freighter_Fleet_Fuel = 162,
    EStatsType_Freighter_Fleet_Combat = 163,
    EStatsType_Freighter_Fleet_Trade = 164,
    EStatsType_Freighter_Fleet_Explore = 165,
    EStatsType_Freighter_Fleet_Mine = 166,
    EStatsType_Vehicle_Boost = 167,
    EStatsType_Vehicle_Engine = 168,
    EStatsType_Vehicle_Scan = 169,
    EStatsType_Vehicle_EngineFuelUse = 170,
    EStatsType_Vehicle_EngineTopSpeed = 171,
    EStatsType_Vehicle_BoostSpeed = 172,
    EStatsType_Vehicle_BoostTanks = 173,
    EStatsType_Vehicle_Grip = 174,
    EStatsType_Vehicle_SkidGrip = 175,
    EStatsType_Vehicle_SubBoostSpeed = 176,
    EStatsType_Vehicle_Laser = 177,
    EStatsType_Vehicle_LaserDamage = 178,
    EStatsType_Vehicle_LaserHeatTime = 179,
    EStatsType_Vehicle_LaserStrongLaser = 180,
    EStatsType_Vehicle_Gun = 181,
    EStatsType_Vehicle_GunDamage = 182,
    EStatsType_Vehicle_GunHeatTime = 183,
    EStatsType_Vehicle_GunRate = 184,
    EStatsType_Vehicle_StunGun = 185,
    EStatsType_Vehicle_TerrainEdit = 186,
    EStatsType_Vehicle_FuelRegen = 187,
    EStatsType_Vehicle_AutoPilot = 188,
};

class cGcStatsTypes
{
public:
    static const unsigned __int64 muNameHash = 0x3E6292A999E2A6;
    static const unsigned __int64 muTemplateHash = 0x4BCEFF83182C4119;
    static const int miNumMembers = 1;

    eStatsType meStatsType;

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
