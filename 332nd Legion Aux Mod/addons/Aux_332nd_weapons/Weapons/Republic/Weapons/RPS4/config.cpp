class cfgPatches
{
    class 332nd_Patch_RPS4
    {
        addonRootClass = "332nd_Patch_Weapons";
        requiredAddons[] =
            {
                "332nd_Patch_Weapons",
                "A3_Weapons_F"};
        units[] = {};
        weapons[] =
            {
                "332nd_Weaps_RPS4"};
        magazines[] =
            {
                "332nd_Weapons_Mags_rps4_heat",
                "332nd_Weapons_Mags_rps4_he"};
    };
};

class cfgWeapons
{
    class Launcher_Base_F;
    class 332nd_launcher_base : Launcher_Base_F
    {
        class Single;
    };
    class 332nd_Weaps_RPS4 : 332nd_launcher_base
    {
        scope = 2;
        displayName = "[332nd] RPS-4 Unguided Launcher";
        baseWeapon = "332nd_Weaps_RPS4";
        picture = "\Aux_332nd_weapons\Weapons\Republic\Weapons\RPS4\data\rps4_ui.paa";
        uiPicture = "\Aux_332nd_weapons\Weapons\Republic\Weapons\RPS4\data\rps4_ui.paa";
        model = "\MRC\JLTS\weapons\RPS6\rps6.p3d";
        handAnim[] = {"OFP2_ManSkeleton", "\MRC\JLTS\weapons\RPS6\anims\RPS6_handanim.rtm"};
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\Aux_332nd_weapons\Weapons\Republic\Weapons\RPS4\data\rps4_co.paa"};
        weaponInfoType = "RscOpticsRangeFinderNLAW";
        recoil = "";
        magazines[] =
            {
                "332nd_Weapons_Mags_rps4_heat",
                "332nd_Weapons_Mags_rps4_he"};
        magazineWell[] = {};
        class Single : Single
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32", 1.99526, 1, 1500};
                soundBegin[] = {"begin1", 1};
                soundSetShot[] = {"Launcher_RPG32_Shot_SoundSet", "Launcher_RPG32_Tail_SoundSet"};
            };
            maxRange = 700;
            maxRangeProbab = 0.1;
            midRange = 400;
            midRangeProbab = 0.8;
            minRange = 50;
            minRangeProbab = 0.3;
        };
        modelOptics = "SWLW_clones\launchers\rps6\scope.p3d";
        class OpticsModes
        {
            class optic
            {
                cameraDir = "look";
                distanceZoomMax = 300;
                distanceZoomMin = 300;
                memoryPointCamera = "eye";
                opticsDisablePeripherialVision = 1;
                opticsFlare = 1;
                opticsID = 1;
                opticsPPEffects = [ "OpticsCHAbera1", "OpticsBlur1" ];
                opticsZoomInit = 0.0875;
                opticsZoomMax = 0.0875;
                opticsZoomMin = 0.0875;
                useModelOptics = 1;
                visionMode = [ "Normal", "NVG" ];
            };
        };
    };
};

class CfgMagazines
{
    class RPG32_F;
    class RPG32_HE_F;

    class 332nd_Weapons_Mags_rps4_heat : RPG32_F
    {
        displayName = "[332nd] RPS-4 HEAT Rocket";
        descriptionShort = "HEAT Rocket";
        author = "332nd Aux Team";
        ammo = "332nd_Weapons_Ammo_rps4_heat";
        mass = 70;
    };
    class 332nd_Weapons_Mags_rps4_he : RPG32_HE_F
    {
        displayName = "[332nd] RPS-4 HE Rocket";
        descriptionShort = "HE Rocket";
        author = "332nd Aux Team";
        ammo = "332nd_Weapons_Ammo_rps4_he";
    };
};

class CfgAmmo
{
    class R_PG32V_F;
    class R_TBG32V_F;

    class 332nd_Weapons_Ammo_rps4_heat : R_PG32V_F
    {
        hit = 150;
        submunitionAmmo = "ammo_Penetrator_Titan_AT";
    };
    class 332nd_Weapons_Ammo_rps4_he : R_TBG32V_F{

                                       };
};

// Credit to the 501st Aux Team for settings of items
// Credit to 3as for the models