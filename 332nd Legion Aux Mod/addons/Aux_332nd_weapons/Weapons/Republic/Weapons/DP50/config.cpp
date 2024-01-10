class cfgPatches
{
    class 332nd_Patch_DP50
    {
        addonRootClass = "332nd_Patch_Weapons";
        requiredAddons[] =
            {
                "332nd_Patch_Weapons",
                "A3_Weapons_F"};
        units[] = {};
        weapons[] =
            {
                "332nd_Weaps_DP50"};
    };
};

class CowsSlot;
class PointerSlot;

class cfgWeapons
{
    class 332nd_rifle_base;
    class 332nd_rifle_base_stunless : 332nd_rifle_base
    {
        class Single;
        class FullAuto;
        class WeaponSlotsInfo;
    };

    class 332nd_Weaps_DP50 : 332nd_rifle_base_stunless
    {
        scope = 2;
        displayName = "[332nd] DP-50 Auto Shotgun";
        baseWeapon = "332nd_Weaps_DP50";
        picture = "\Aux_332nd_weapons\Weapons\Republic\Weapons\DP50\data\textures\UI\dp50_ui.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Weapons\DP50\DP50.p3d";
        handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_beta\Rifles\MK20\Data\Anim\mk20G.rtm"};
        magazines[] =
            {
                "332nd_Weapons_Mags_shotgun_slug24",
                "332nd_Weapons_Mags_shotgun_scatter20",
                "332nd_Weapons_Mags_shotgun_he10"};
        recoil = "recoil_MSBS65_ubs";
        reloadAction = "GestureReloadAK12";
        modes[] = {"FullAuto", "Single", "aiclose", "aimedium"};
        class Single : Single
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"Msbs65_01_Shotgun_Shot_SoundSet", "Msbs65_01_Shotgun_Tail_SoundSet"};
            };
            reloadTime = 0.35;
            dispersion = "5*0.00087";
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 400;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.3;
        };
        class FullAuto : FullAuto
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"Msbs65_01_Shotgun_Shot_SoundSet", "Msbs65_01_Shotgun_Tail_SoundSet"};
            };
            reloadTime = 0.275;
            dispersion = "5*0.00087";
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 25;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class aiclose : FullAuto
        {
            showToPlayer = 0;
            minRange = 50;
            minRangeProbab = 0.1;
            midRange = 130;
            midRangeProbab = 0.8;
            maxRange = 200;
            maxRangeProbab = 0.15;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
        class aimedium : aiclose
        {
            minRange = 150;
            minRangeProbab = 0.1;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.15;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 300;
        };
        inertia = 1.4;
        dexterity = 1.7;
        initSpeed = 300;
        maxRecoilSway = 0.0125;
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
                        "3AS_optic_reflex_DC15C"};
            };
            class PointerSlot : PointerSlot
            {
                compatibleItems[] = {"acc_flashlight", "acc_pointer_IR"};
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                displayName = "Pointer Slot";
            };
        };
    };
};

class CfgMagazines
{
    class 2Rnd_12Gauge_Pellets;

    class 332nd_Weapons_Mags_shotgun_scatter20 : 2Rnd_12Gauge_Pellets
    {
        displayName = "[332nd] 20Rnd SP Magazine";
        displayNameShort = "20Rnd SP Mag";
        author = "332nd Aux Team";
        picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_2rnd_12gauge_slugs_CA.paa";
        count = 20;
        ammo = "332nd_Weapons_Ammo_shotgun_scatter";
        mass = 8;
        initSpeed = 600;
        descriptionShort = "Scatter Plasma Magazine";
        model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
        tracersEvery = 1;
    };
    class 332nd_Weapons_Mags_shotgun_he10 : 332nd_Weapons_Mags_shotgun_scatter20
    {
        scope = 2;
        displayName = "[332nd] 10Rnd UP Magazine";
        displayNameShort = "10Rnd UP Mag";
        picture = "\Aux_332nd_weapons\Weapons\Magazines\data\332nd_icon_mag_shotgun_up.paa";
        count = 10;
        ammo = "332nd_Weapons_Ammo_shotgun_he";
        descriptionShort = "Unstable Plasma Magazine";
    };
    class 332nd_Weapons_Mags_shotgun_slug24 : 332nd_Weapons_Mags_shotgun_scatter20
    {
        scope = 2;
        displayName = "[332nd] 24Rnd Slug Magazine";
        displayNameShort = "24Rnd Slug Mag";
        picture = "\Aux_332nd_weapons\Weapons\Magazines\data\332nd_icon_mag_shotgun_slug.paa";
        initSpeed = 800;
        count = 24;
        ammo = "332nd_Weapons_Ammo_30mw";
        descriptionShort = "30MW Slug Magazine";
    };
};

class CfgAmmo
{
    class B_12Gauge_Pellets_Submunition_Deploy;
    class 332nd_Weapons_Ammo_10mw;

    class 332nd_Weapons_Ammo_shotgun_scatter : 332nd_Weapons_Ammo_10mw
    {
        hit = 20;
        simulation = "shotSpread";
        fireSpreadAngle = 3;
    };
    class 332nd_Weapons_Ammo_shotgun_scatter_sub : B_12Gauge_Pellets_Submunition_Deploy
    {
        hit = 12;
        model = "SWLW_main\Effects\laser_blue.p3d";
    };
    class 332nd_Weapons_Ammo_shotgun_HE : 332nd_Weapons_Ammo_shotgun_scatter
    {
        submunitionConeAngle = 4;
        submunitionAmmo = "332nd_Weapons_Ammo_shotgun_HE_sub";
        model = "SWLW_main\Effects\laser_green.p3d";
    };
    class 332nd_Weapons_Ammo_shotgun_HE_sub : 332nd_Weapons_Ammo_shotgun_scatter_sub
    {
        hit = 8;
        indirectHit = 8;
        indirectHitRange = 0.9;
        model = "SWLW_main\Effects\laser_green.p3d";
    };
};

// Credit to the 501st Aux Team for settings of items
// Credit to 3as for the models