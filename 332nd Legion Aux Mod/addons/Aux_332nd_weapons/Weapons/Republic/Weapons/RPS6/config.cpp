class cfgPatches
{
    class 332nd_Patch_RPS6
    {
        addonRootClass = "332nd_Patch_Weapons";
        requiredAddons[] =
            {
                "332nd_Patch_Weapons",
                "A3_Weapons_F"};
        units[] = {};
        weapons[] =
            {
                "332nd_Weaps_RPS6"};
        magazines[] =
            {
                "332nd_Weapons_Mags_rps6_at",
                "332nd_Weapons_Mags_rps6_aa"};
    };
};

class cfgWeapons
{
    class Launcher_Base_F;
    class 332nd_launcher_base : Launcher_Base_F
    {
        class Single;
    };
    class 332nd_Weaps_RPS6 : 332nd_launcher_base
    {
        scope = 2;
        canLock = 2;
        airLock = 2;
        displayName = "[332nd] RPS-6 Rocket Launcher";
        baseWeapon = "332nd_Weaps_RPS6";
        picture = "\Aux_332nd_weapons\Weapons\Republic\Weapons\RPS6\data\rps6_ui.paa";
        uiPicture = "\Aux_332nd_weapons\Weapons\Republic\Weapons\RPS6\data\rps6_ui.paa";
        model = "\3AS\3AS_Weapons\RPS6\3AS_RPS6_F.p3d";
        weaponInfoType = "RscOptics_titan";
        nameSound = "aalauncher";
        handAnim[] =
            {
                "OFP2_ManSkeleton",
                "3as\3as_weapons\data\anim\rps6_hold.rtm"};
        magazines[] =
            {
                "332nd_Weapons_Mags_rps6_at",
                "332nd_Weapons_Mags_rps6_aa"};
        lockedTargetSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\locked_NLAW", 0.316228, 2.5};
        lockingTargetSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\locking_NLAW", 0.316228, 1};
        class Single : Single
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\nlaw", 1.99526, 1, 1800};
                soundBegin[] = {"begin1", 1};
                soundSetShot[] = {"Launcher_RPG7_Shot_SoundSet", "Launcher_RPG7_Tail_SoundSet"};
            };
        };
        modelOptics = "\A3\Weapons_F_Beta\acc\reticle_titan.p3d";
        class OpticsModes
        {
            class StepScope
            {
                opticsID = 1;
                useModelOptics = 1;
                opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
                opticsFlare = 0;
                opticsZoomInit = "0.25/1";
                opticsZoomMax = "0.25/1";
                opticsZoomMin = "0.25/6";
                distanceZoomMin = 300;
                distanceZoomMax = 300;
                memoryPointCamera = "eye";
                cameraDir = "look";
                visionMode[] = {"Normal", "NVG", "Ti"};
                thermalMode[] = {0};
                opticsDisablePeripherialVision = 1;
                discretefov[] = {"0.25/1", "0.25/3", "0.25/6"};
                discreteInitIndex = 0;
            };
        };
    };
};

class CfgMagazines
{
    class Titan_AT;
    class Titan_AA;

    class 332nd_Weapons_Mags_rps6_at : Titan_AT
    {
        scope = 2;
        displayName = "[332nd] RPS-6 AT Rocket";
        author = "332nd Aux Team";
        ammo = "332nd_Weapons_Ammo_rps6_at";
        picture = "\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HEAT_F_ca.paa";
        model = "\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT_F_item.p3d";
        type = "2 *   256";
        count = 1;
        initSpeed = 60;
        maxLeadSpeed = 60;
        mass = 70;
    };
    class 332nd_Weapons_Mags_rps6_aa : Titan_AA
    {
        scope = 2;
        displayName = "[332nd] RPS-6 AA Rocket";
        displayNameShort = "AA";
        author = "332nd Aux Team";
        ammo = "332nd_Weapons_Ammo_rps6_aa";
        type = "6 *		256";
        picture = "\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_atl_CA.paa";
        model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl";
        initSpeed = 18;
        maxLeadSpeed = 277.778;
        mass = 100;
    };
};

class CfgAmmo
{
    class M_Titan_AT;
    class M_Titan_AA;

    class 332nd_Weapons_Ammo_rps6_at : M_Titan_AT
    {
        aiAmmoUsageFlags = "128 + 256 +512";
        hit = 95;
        thrust = 130;
        thrustTime = 3.5;
        timeToLive = 20;
        indirectHit = 20;
        indirectHitRange = 2;
        soundFly[] = {"swlw_rework\sounds\launcher\plx_fly.wss", 6, 1.5, 700};
    };
    class 332nd_Weapons_Ammo_rps6_aa : M_Titan_AA
    {
        hit = 900;
        indirectHit = 400;
        indirectHitRange = 1;
        soundFly[] = {"swlw_rework\sounds\launcher\plx_fly.wss", 6, 1.5, 700};
        airLock = 2;
    };
};

// Credit to the 501st Aux Team for settings of items
// Credit to 3as for the models