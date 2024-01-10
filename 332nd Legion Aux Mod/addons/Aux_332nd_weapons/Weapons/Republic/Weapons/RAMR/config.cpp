class cfgPatches
{
    class 332nd_Patch_RAMR
    {
        addonRootClass = "332nd_Patch_Weapons";
        requiredAddons[] =
            {
                "332nd_Patch_Weapons",
                "A3_Weapons_F"};
        units[] = {};
        weapons[] =
            {
                "332nd_weaps_RAMR"};
    };
};

class CowsSlot;

class cfgWeapons
{
    class 332nd_rifle_base;
    class 332nd_rifle_base_stunless : 332nd_rifle_base
    {
        class Single;
        class WeaponSlotsInfo;
    };

    class 332nd_Weaps_RAMR : 332nd_rifle_base_stunless
    {
        scope = 2;
        displayName = "[332nd] RAMR";
        baseWeapon = "332nd_Weaps_RAMR";
        picture = "\MRC\JLTS\weapons\EPL2\data\ui\EPL2_ui_ca.paa";
        model = "\MRC\JLTS\weapons\EPL2\EPL2.p3d";
        handAnim[] = {"OFP2_ManSkeleton", "\MRC\JLTS\weapons\EPL2\anims\EPL2_handanim.rtm"};
        magazines[] =
            {
                "332nd_Weapons_Mags_50mw10"};
        modes[] = {"Single", "AICQB", "AIClose", "AIMedium", "AIFar"};
        class Single : Single
        {
            reloadTime = 0.24;
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
                begin1[] = {"MRC\JLTS\weapons\EPL2\sounds\EPL2_fire", 1, 1, 3000};
                soundBegin[] = {"begin1", 1};
            };
        };
        class aicqb : Single
        {
            showToPlayer = 0;
            dispersion = 0.0021;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 50;
            midRangeProbab = 1;
            maxRange = 100;
            maxRangeProbab = 0.5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 50;
        };
        class aiclose : aicqb
        {
            dispersion = 0.00105;
            minRange = 50;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 1;
            maxRange = 250;
            maxRangeProbably = 0.5;
            aiRateOfFire = 1.5;
            aiRateOfFireDistance = 100;
        };
        class aimedium : aicqb
        {
            dispersion = 0.000525;
            minRange = 250;
            minRangeProbab = 0.5;
            midRange = 350;
            midRangeProbab = 1;
            maxRange = 450;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2.5;
            aiRateOfFireDistance = 250;
            requiredOpticType = 0;
        };
        class aifar : aicqb
        {
            dispersion = 0.00085;
            minRange = 350;
            minRangeProbab = 0.5;
            midRange = 500;
            midRangeProbab = 1;
            maxRange = 600;
            maxRangeProbab = 0.5;
            aiRateOfFire = 3.5;
            aiRateOfFireDistance = 450;
            requiredOpticType = 0;
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
                        ""};
            };
        };
    };
};

class CfgMagazines
{
    class 332nd_Weapons_Mags_40mw5;

    class 332nd_Weapons_Mags_50mw10 : 332nd_Weapons_Mags_40mw5
    {
        displayName = "[332nd] 10Rnd 50MW Cell";
        displayNameShort = "10Rnd 50MW";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
        count = 10;
        ammo = "332nd_Weapons_Ammo_50mw";
        descriptionShort = "RAMR High Power magazine";
        model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
    };
};

class CfgAmmo
{
    class 332nd_Weapons_Ammo_base_blue;

    class 332nd_Weapons_Ammo_50mw : 332nd_Weapons_Ammo_base_blue
    {
        hit = 300;
        explosive = 0.5;
        typicalSpeed = 1100;
        caliber = 5;
        model = "\Aux_332nd_weapons\Weapons\Ammo\data332nd_weapons_Ammo_Tracers_Big_Blue.p3d";
        ExplosionEffects = "3AS_ImpactPlasma";
        craterEffects = "";
    };
};

// Credit to the 501st Aux Team for settings of items
// Credit to 3as for the models