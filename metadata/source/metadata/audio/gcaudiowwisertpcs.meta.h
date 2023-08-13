#pragma once

#include "../../../../../../pch.h"
enum eAkRTPC
{
    EAkRTPC_INVALID_RTPC = 0,
    EAkRTPC_BASE_BATTERY_CHARGING = 2081665978,
    EAkRTPC_BASE_SPHERE_ROLLSPEED = 3084205441,
    EAkRTPC_BINOCULARS_EFFECT = 1697670405,
    EAkRTPC_BURN_INTENSITY = 2334039880,
    EAkRTPC_BYTEBEAT_FX = 3691066168,
    EAkRTPC_BYTEBEAT_VOLUME = 1903180968,
    EAkRTPC_COMMS_CHATTER_DISTANCE = 2050431636,
    EAkRTPC_COMMS_CHATTER_FREIGHTERATTACKED = 1185036508,
    EAkRTPC_COMMS_CHATTER_PIRATES = 1424501521,
    EAkRTPC_COMMS_CHATTER_POLICE = 3578259387,
    EAkRTPC_CREATURE_EXISTENCE = 3148749219,
    EAkRTPC_CREATURES_STEP_SIZE = 3775298818,
    EAkRTPC_DOPPLER_DROID_SMALL = 520695608,
    EAkRTPC_GAMEOBJECT_DISTANCE = 2394244376,
    EAkRTPC_GLOBAL_HAZARD_LEVEL = 4258379784,
    EAkRTPC_GLOBAL_HEALTH_LEVEL = 711000894,
    EAkRTPC_GLOBAL_SHIELD_LEVEL = 3936348003,
    EAkRTPC_HG_VA_EMOTE = 404305919,
    EAkRTPC_HG_VA_GAMEOBJECTS = 2298792353,
    EAkRTPC_HG_VA_HEADBODYRATIO = 4129897572,
    EAkRTPC_HG_VA_SEED = 590314510,
    EAkRTPC_HG_VA_SIZE = 774176826,
    EAkRTPC_INTERACT_TIMER = 518502437,
    EAkRTPC_JETPACK_HEIGHT = 1890969281,
    EAkRTPC_MAP_STAR_WOOSH = 3162157229,
    EAkRTPC_MASTER_CHAT_LEVEL = 1536050791,
    EAkRTPC_MASTER_MUSIC_LEVEL = 4176915636,
    EAkRTPC_MASTER_SFX_LEVEL = 3385062136,
    EAkRTPC_MECH_IDLE = 3137477943,
    EAkRTPC_METEORITE_INCOMING = 3485432110,
    EAkRTPC_MOTION_DRIVER_A = 1932490940,
    EAkRTPC_MOTION_DRIVER_B = 1932490943,
    EAkRTPC_NPC_SHIP_DISTANCE = 2165297203,
    EAkRTPC_NPC_SHIP_DOPPLER = 3636127990,
    EAkRTPC_NPC_SHIP_SPEED = 2455698775,
    EAkRTPC_PL_AMB_HEIGHT = 317995146,
    EAkRTPC_PL_CAVE_ENCLOSED = 2571588979,
    EAkRTPC_PL_EXERTION = 2623861868,
    EAkRTPC_PL_FALL_SPEED = 1982020859,
    EAkRTPC_PL_FOLEY_CLOTHING_LOCO_SPEED = 2340579866,
    EAkRTPC_PL_HAZARD_PROTECTION = 2130060434,
    EAkRTPC_PL_SHIP_HEIGHT = 4277243060,
    EAkRTPC_PL_SHIP_LANDINGDISTANCE = 3382333075,
    EAkRTPC_PL_SHIP_SPEED = 3530269146,
    EAkRTPC_PL_SHIP_SPEED_REV = 2483547812,
    EAkRTPC_PL_SHIP_SURFACE_WATER = 3382507686,
    EAkRTPC_PL_SHIP_THRUST = 3860371139,
    EAkRTPC_PL_SHIP_VR_EXIT = 2290175096,
    EAkRTPC_PL_SHIP_YAW = 2437074298,
    EAkRTPC_PL_UNDERWATER_DEPTH = 1925728869,
    EAkRTPC_PL_WALK_SPEED = 1542514635,
    EAkRTPC_PL_WPN_LASER_RESOURCEGATHER = 1987818405,
    EAkRTPC_PL_WPN_LASERPOWER = 2568549452,
    EAkRTPC_PL_WPN_NUMBEROFBULLETS = 1022951743,
    EAkRTPC_PL_WPN_OVERHEAT = 2530555100,
    EAkRTPC_PLANET_TIME = 1275284849,
    EAkRTPC_PLAYER_VR_FOLEY_ARMS = 3126959713,
    EAkRTPC_POD_SQUISH = 1205600278,
    EAkRTPC_PROTOROLLER = 2566437297,
    EAkRTPC_PS5_HEADPHONES = 1805558639,
    EAkRTPC_PULSE_BUS01_MASTER_VOLUME = 1122126612,
    EAkRTPC_PULSE_EVENT_PANFR = 4145342657,
    EAkRTPC_PULSE_EVENT_PANLR = 18151427,
    EAkRTPC_PULSE_EVENT_PITCH = 1891889666,
    EAkRTPC_PULSE_EVENT_SENDBUS_00 = 2954454839,
    EAkRTPC_PULSE_EVENT_SENDBUS_01 = 2954454838,
    EAkRTPC_PULSE_EVENT_SENDBUS_02 = 2954454837,
    EAkRTPC_PULSE_EVENT_SENDBUS_03 = 2954454836,
    EAkRTPC_PULSE_EVENT_VOLUME = 3465058902,
    EAkRTPC_QUAD_LASERBUILDUP = 2231318707,
    EAkRTPC_RAIN_INTENSITY = 2520241501,
    EAkRTPC_RAIN_INTENSITY_BUILDING = 2209133296,
    EAkRTPC_RAIN_ROOF = 4207359364,
    EAkRTPC_RAIN_SHIP_EXTERIOR = 3413338877,
    EAkRTPC_RUMBLE_INTENSITY = 2172125472,
    EAkRTPC_SENTINEL_DETECTOR = 2169975102,
    EAkRTPC_SETTLEMENT_DISTANCE = 1266882226,
    EAkRTPC_SETTLEMENT_INTENSITY = 298514682,
    EAkRTPC_SHORELINE = 27371874,
    EAkRTPC_SHUTTLE_THRUST = 1372956193,
    EAkRTPC_SQUADRON_SHIPS = 429575874,
    EAkRTPC_STORM = 1686739424,
    EAkRTPC_THEREMIN_PITCH = 3614757816,
    EAkRTPC_THEREMIN_VOLUME = 640239972,
    EAkRTPC_UI_VR_MENU = 746511756,
    EAkRTPC_VEHICLE_EXIT = 4097279314,
    EAkRTPC_VEHICLE_IMPACTS = 2236782823,
    EAkRTPC_VEHICLE_JUMP = 505273650,
    EAkRTPC_VEHICLE_SKID = 2704293107,
    EAkRTPC_VEHICLE_SPEED = 1501155019,
    EAkRTPC_VEHICLE_SUSPENSION = 806810365,
    EAkRTPC_VEHICLE_TORQUE = 1208829996,
    EAkRTPC_WALKER_MOOD = 4212868635,
    EAkRTPC_WPN_PL_JAVELIN_CHARGE = 4031014832,
    EAkRTPC_WPN_PL_NEUTRON_CANNON_CHARGE = 1623797362,
};

class cGcAudioWwiseRTPCs
{
    static const unsigned __int64 muNameHash = 10580230529070963671;
    static const unsigned __int64 muTemplateHash = 3168871318433726227;
    static const int miNumMembers = 1;

    eAkRTPC meAkRTPC;

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