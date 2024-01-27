class cfgPatches
{
    class 332nd_Patch_DC15L
    {
        addonRootClass = "332nd_Patch_Weapons";
        requiredAddons[] =
            {
                "332nd_Patch_Weapons",
                "A3_Weapons_F"};
        units[] = {};
        weapons[] =
            {
                "332nd_Weaps_DC15L"};
    };
};

class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;

class cfgWeapons
{
    class 332nd_rifle_base;
    class 332nd_rifle_base_stunless : 332nd_rifle_base
    {
        class FullAuto;
        class WeaponSlotsInfo;
    };

    class 332nd_Weaps_DC15L : 332nd_rifle_base_stunless
    {
        scope = 2;
        displayName = "[332nd] DC-15L";
        baseWeapon = "332nd_Weaps_DC15L";
        picture = "\Aux_332nd_weapons\Weapons\Republic\Weapons\DC15L\dc15l_ui.paa";
        model = "3AS\3AS_Weapons\DC15L\3AS_DC15L_f.p3d";
        handAnim[] = {"OFP2_ManSkeleton", "\3AS\3AS_Weapons\DC15L\Data\Anim\DC15L_handanim.rtm"};
        recoil = "recoil_SMG_03";
        magazines[] =
            {
                "332nd_Weapons_Mags_20mw240",
                "332nd_Weapons_Mags_20mw40",
                "332nd_Weapons_Mags_20mwdp30",
                "332nd_Weapons_Mags_20mwup30"};
        modes[] = {"FullAuto", "aiclose", "aimedium", "aifar"};
        class FullAuto : FullAuto
        {
            reloadTime = 0.1;
            dispersion = 0.00075;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"\Aux_332nd_weapons\Weapons\Republic\Weapons\DC15L\sounds\DC15LFire.wss", +3db, 1, 2200};
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
            class StandardSound : BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"\Aux_332nd_weapons\Weapons\Republic\Weapons\DC15L\sounds\DC15LFire.wss", +3db, 1, 2200};
                soundBegin[] = {"begin1", 1};
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
        };
        class aiclose : FullAuto
        {
            burst = 10;
            aiRateOfFire = 1e-06;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 70;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class aimedium : aiclose
        {
            burst = 10;
            aiRateOfFireDistance = 300;
            minRange = 75;
            minRangeProbab = 0.05;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.04;
        };
        class aifar : aiclose
        {
            burst = 10;
            aiRateOfFireDistance = 600;
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 700;
            midRangeProbab = 0.6;
            maxRange = 1000;
            maxRangeProbab = 0.1;
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
                opticsZoomMin = 0.375;
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
                scope = 0;
                compatibleItems[] =
                    {
                        "3AS_Optic_DC15L",
                        "OPTRE_M12_Optic",
                        "OPTRE_M12_Optic_Green",
                        "OPTRE_M12_Optic_Red",
                        "Optre_Recon_Sight",
                        "Optre_Recon_Sight_Red",
                        "Optre_Recon_Sight_Green"};
            };
            class MuzzleSlot : MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                iconPosition[] = {0.24, 0.35};
                iconScale = 0.2;
                compatibleItems[] =
                    {
                        "332nd_muzzle_flash"};
            };
            class PointerSlot : PointerSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                displayName = "Pointer Slot";
                compatibleItems[] =
                    {
                        "acc_flashlight",
                        "acc_pointer_IR"};
            };
            class UnderBarrelSlot : UnderBarrelSlot
            {
                iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
                iconPinpoint = "Bottom";
                linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
                compatibleItems[] =
                    {
                        "bipod_01_f_blk",
                        "3AS_Bipod_DC15L_f"};
            };
        };
    };
};

class CfgMagazines
{
    class 332nd_Weapons_Mags_20mw40;

    class 332nd_Weapons_Mags_20mw240 : 332nd_Weapons_Mags_20mw40
    {
        displayName = "[332nd] 240Rnd 20MW Cell";
        displayNameShort = "240Rnd 20MW";
        picture = "\Aux_332nd_weapons\Weapons\Magazines\data\332nd_icon_mag_dc15l.paa";
        count = 240;
        ammo = "332nd_Weapons_Ammo_20mw";
        descriptionShort = "DC15L Box Magazine";
        model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
    };
};

// Credit to the 501st Aux Team for settings of items
// Credit to 3as for the models