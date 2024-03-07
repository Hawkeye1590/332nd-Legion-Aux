class cfgPatches
{
    class 332nd_Patch_Z6
    {
        Author = "332nd Aux Team";
        addonRootClass = "332nd_Patch_Weapons";
        requiredAddons[] =
            {
                "332nd_Patch_Weapons",
                "A3_Weapons_F"};
        units[] = {};
        weapons[] =
            {
                "332nd_Weaps_Z6"};
    };
};

class Mode_FullAuto;
class MuzzleSlot;

class cfgWeapons
{
    class 332nd_rifle_base;
    class 332nd_rifle_base_stunless : 332nd_rifle_base
    {
        class WeaponSlotsInfo;
    };

    class 332nd_Weaps_Z6 : 332nd_rifle_base_stunless
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[332nd] Z-6 Rotary Blaster Cannon";
        baseWeapon = "332nd_Weaps_Z6";
        picture = "\MRC\JLTS\weapons\Z6\data\ui\Z6_ui_ca.paa";
        model = "\MRC\JLTS\weapons\Z6\Z6.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Z6\data\Z6_1_co.paa", "\MRC\JLTS\weapons\Z6\data\Z6_2_co.paa"};
        handAnim[] = {"OFP2_ManSkeleton", "\MRC\JLTS\weapons\Z6\anims\Z6_handanim.rtm"};
        recoil = "recoil_lim";
        reloadAction = "ReloadMagazine";
        reloadMagazineSound[] = {"swlw_rework\sounds\z-series\z6\Z6_reload.wss", 3, 1, 30};
        magazines[] =
            {
                "332nd_Weapons_Mags_10mw400"};
        modes[] = {"manual", "Overcharge", "close", "short", "medium", "far_optic1", "far_optic2"};
        class manual : Mode_FullAuto
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
                begin1[] = {"3AS\3AS_Main\Sounds\Z6\Z61.ogg", +3db, 1, 2200};
                soundBegin[] = {"begin1", 1};
            };
            reloadTime = 0.075;
            dispersion = 0.00102;
            soundContinuous = 0;
            soundBurst = 0;
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
        };
        class Overcharge : manual
        {
            dispersion = "0.00015*4";
            displayName = "Overcharge";
            reloadTime = "0.015";
            burst = 25;
            textureType = "fastAuto";
        };
        class close : manual
        {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short : close
        {
            burst = 8;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.04;
        };
        class medium : close
        {
            burst = 7;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.1;
        };
        class far_optic1 : medium
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 10;
            aiRateOfFireDistance = 1000;
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.4;
            maxRange = 650;
            maxRangeProbab = 0.01;
        };
        class far_optic2 : far_optic1
        {
            burst = 3;
            requiredOpticType = 2;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 750;
            midRangeProbab = 0.7;
            maxRange = 900;
            maxRangeProbab = 0.01;
            aiRateOfFire = 10;
            aiRateOfFireDistance = 900;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
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
        };
    };
};

class CfgMagazines
{
    class 332nd_Weapons_Mags_10mw50;

    class 332nd_Weapons_Mags_10mw400 : 332nd_Weapons_Mags_10mw50
    {
        displayName = "[332nd] 400Rnd 10MW Cell";
        displayNameShort = "400Rnd 10MW";
        picture = "\MRC\JLTS\weapons\z6\data\ui\z6_mag_ui_ca.paa";
        count = 400;
        mass = 20;
        ammo = "332nd_Weapons_Ammo_10mw";
        descriptionShort = "Z6 Box Magazine";
        model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
    };
};

// Credit to the 501st Aux Team for settings of items
// Credit to 3as for the models