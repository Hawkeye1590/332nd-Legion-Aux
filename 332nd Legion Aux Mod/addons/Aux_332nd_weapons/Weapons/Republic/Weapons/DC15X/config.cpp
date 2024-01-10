class cfgPatches
{
    class 332nd_Patch_DC15X
    {
        addonRootClass = "332nd_Patch_Weapons";
        requiredAddons[] =
            {
                "332nd_Patch_Weapons",
                "A3_Weapons_F"};
        units[] = {};
        weapons[] =
            {
                "332nd_Weaps_DC15X"};
    };
};

class CowsSlot;
class MuzzleSlot;
class UnderBarrelSlot;

class cfgWeapons
{
    class 332nd_rifle_base;
    class 332nd_rifle_base_stunless : 332nd_rifle_base
    {
        class Single;
        class WeaponSlotsInfo;
    };

    class 332nd_Weaps_DC15X : 332nd_rifle_base_stunless
    {
        scope = 2;
        displayName = "[332nd] DC-15X Marksman Rifle";
        baseWeapon = "332nd_Weaps_DC15X";
        picture = "\MRC\JLTS\weapons\DC15X\data\ui\DC15X_ui_ca.paa";
        model = "\MRC\JLTS\weapons\DC15X\DC15X.p3d";
        handAnim[] = {"OFP2_ManSkeleton", "\MRC\JLTS\weapons\DC15X\anims\DC15X_handanim.rtm"};
        recoil = "recoil_dmr_01";
        recoilProne = "recoil_single_prone_mx";
        magazines[] =
            {
                "332nd_Weapons_Mags_40mw5"};
        modelOptics = "\A3\Weapons_F\acc\reticle_sniper_F";
        modes[] = {"Single", "aicqb", "aiclose", "aimedium", "aifar", "aiopticmode1", "aiopticmode2"};
        class Single : Single
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "";
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
            class StandardSound : BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"MRC\JLTS\weapons\DC15X\sounds\dc15x_fire", +3db, 1, 2200};
                soundBegin[] = {"begin1", 1};
            };
            reloadTime = 1.5;
            dispersion = 0.0003;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 450;
            maxRangeProbab = 0.3;
        };
        class aicqb : Single
        {
            showToPlayer = 0;
            dispersion = 0.00073;
            minRange = 25;
            minRangeProbab = 1;
            midRange = 50;
            midRangeProbab = 1;
            maxRange = 100;
            maxRangeProbab = 0.5;
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
        };
        class aiclose : aicqb
        {
            minRange = 50;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 1;
            maxRange = 250;
            maxRangeProbably = 0.5;
            aiRateOfFireDistance = 150;
        };
        class aimedium : aicqb
        {
            minRange = 150;
            minRangeProbab = 0.5;
            midRange = 250;
            midRangeProbab = 1;
            maxRange = 350;
            maxRangeProbab = 0.1;
            aiRateOfFireDistance = 250;
            requiredOpticType = 0;
        };
        class aifar : aicqb
        {
            minRange = 250;
            minRangeProbab = 0.5;
            midRange = 350;
            midRangeProbab = 1;
            maxRange = 600;
            maxRangeProbab = 0.5;
            aiRateOfFireDistance = 350;
            requiredOpticType = 0;
        };
        class aiopticmode1 : aicqb
        {
            minRange = 400;
            minRangeProbab = 0.5;
            midRange = 500;
            midRangeProbab = 1;
            maxRange = 700;
            maxRangeProbab = 0.5;
            aiRateOfFireDistance = 500;
            requiredOpticType = 1;
        };
        class aiopticmode2 : aicqb
        {
            minRange = 500;
            minRangeProbab = 0.5;
            midRange = 700;
            midRangeProbab = 1;
            maxRange = 900;
            maxRangeProbab = 0.5;
            aiRateOfFireDistance = 700;
            requiredOpticType = 1;
        };
        class OpticsModes
        {
            class Ironsights
            {
                opticsID = 1;
                useModelOptics = 0;
                opticsFlare = "true";
                opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                opticsDisablePeripherialVision = 0.67;
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.1;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye";
                visionMode[] = {};
                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot : CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                compatibleItems[] =
                    {
                        "332nd_cows_LRPS"};
            };
            class MuzzleSlot : MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                compatibleItems[] =
                    {
                        "332nd_muzzle_flash"};
            };
            class UnderBarrelSlot : UnderBarrelSlot
            {
                iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
                iconPinpoint = "Bottom";
                linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
                compatibleItems[] =
                    {
                        "bipod_01_F_blk"};
            };
        };
    };
};

class CfgMagazines
{
    class 332nd_Weapons_Mags_20mw40;

    class 332nd_Weapons_Mags_40mw5 : 332nd_Weapons_Mags_20mw40
    {
        displayName = "[332nd] 5Rnd 40MW Cell";
        displayNameShort = "5Rnd 40MW";
        picture = "\Aux_332nd_weapons\Weapons\Magazines\data\332nd_icon_mag_valken38.paa";
        count = 5;
        ammo = "332nd_Weapons_Ammo_40mw";
        initSpeed = 1100;
        descriptionShort = "DC15X High power magazine";
        model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
    };
    class 332nd_Weapons_Mags_40mwemp1 : 332nd_Weapons_Mags_40mw5
    {
        displayName = "[332nd] 1Rnd 40MW EMP Cell";
        displayNameShort = "1Rnd 40MW EMP";
        picture = "\Aux_332nd_weapons\Weapons\Magazines\data\332nd_icon_mag_valken38.paa";
        count = 1;
        ammo = "332nd_Weapons_Ammo_40mwemp";
        descriptionShort = "DC15X High power magazine";
        model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
    };
};

class CfgAmmo
{
    class 332nd_Weapons_Ammo_base_blue;

    class 332nd_Weapons_Ammo_40mw : 332nd_Weapons_Ammo_base_blue
    {
        hit = 60;
        typicalSpeed = 1100;
        caliber = 3.6;
        airFriction = 0;
        waterFriction = -0.009;
    };
    class 332nd_Weapons_Ammo_40mwemp : 332nd_Weapons_Ammo_40mw
    {
        hit = 0.01;
        caliber = 1;
    };
};

// Credit to the 501st Aux Team for settings of items
// Credit to 3as for the models