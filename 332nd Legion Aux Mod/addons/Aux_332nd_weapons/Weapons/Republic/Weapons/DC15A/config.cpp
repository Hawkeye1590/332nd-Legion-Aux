class cfgPatches
{
    class 332nd_Patch_DC15A
    {
        addonRootClass = "332nd_Patch_Weapons";
        requiredAddons[] =
            {
                "332nd_Patch_Weapons",
                "A3_Weapons_F"};
        units[] = {};
        weapons[] =
            {
                "332nd_Weaps_DC15A",
                "332nd_Weaps_DC15A_UGL"};
    };
};

class CowsSlot;
class MuzzleSlot;
class PointerSlot;

class Mode_SemiAuto;

class cfgWeapons
{
    class 332nd_stun_muzzle;
    class arifle_MX_Base_F;
    class 332nd_rifle_base : arifle_MX_Base_F
    {
        class Single;
        class WeaponSlotsInfo;
    };
    class UGL_F;

    class 332nd_Weaps_DC15A : 332nd_rifle_base
    {
        scope = 2;
        displayName = "[332nd] DC-15A Rifle";
        baseWeapon = "332nd_Weaps_DC15A";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_plastic_ui_ca.paa";
        model = "\MRC\JLTS\weapons\DC15A\DC15A_plastic.p3d";
        handAnim[] = {"OFP2_ManSkeleton", "\MRC\JLTS\weapons\DC15A\anims\DC15A_handanim.rtm"};
        reloadAction = "GestureReload_JLTS_DC15A";
        reloadTime = 0.1;
        recoil = "recoil_mx";
        magazines[] =
            {
                "332nd_Weapons_Mags_20mwdp30",
                "332nd_Weapons_Mags_20mwup30"};
        modelOptics = "3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
        class stun : 332nd_stun_muzzle
        {
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
            class Scope : Ironsights
            {
                opticsID = 2;
                useModelOptics = 1;
                opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                opticsDisablePeripherialVision = 0.67;
                opticsZoomMin = 0.125;
                opticsZoomMax = 0.125;
                opticsZoomInit = 0.125;
                memoryPointCamera = "opticView";
                visionMode[] = {"Normal", "NVG"};
                opticsFlare = "true";
                distanceZoomMin = 100;
                distanceZoomMax = 100;
                cameraDir = "";
            };
        };
        modes[] = {"Single", "aicqb", "aiclose", "aimedium", "aifar", "aiopticmode1", "aiopticmode2"};
        class Single : Single
        {
            reloadTime = 0.1;
            dispersion = 0.0006;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"\Aux_332nd_weapons\Weapons\Republic\Weapons\DC15A\sounds\dc15a_shot.wss", +3db, 1, 2200};
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
            class StandardSound : BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"\Aux_332nd_weapons\Weapons\Republic\Weapons\DC15A\sounds\dc15a_shot.wss", +3db, 1, 2200};
                soundBegin[] = {"begin1", 1};
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
        };
        class aicqb : Single
        {
            showToPlayer = 0;
            burst = 1;
            burstRangeMax = -1;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 50;
            midRangeProbab = 1;
            maxRange = 100;
            maxRangeProbab = 0.5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
        };
        class aiclose : aicqb
        {
            burst = 1;
            burstRangeMax = -1;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 50;
            midRangeProbab = 1;
            maxRange = 100;
            maxRangeProbab = 0.5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
        };
        class aimedium : aicqb
        {
            burst = 1;
            burstRangeMax = -1;
            minRange = 100;
            minRangeProbab = 0.05;
            midRange = 200;
            midRangeProbab = 0.5;
            maxRange = 300;
            maxRangeProbab = 0.04;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 300;
        };
        class aifar : aicqb
        {
            burst = 1;
            burstRangeMax = -1;
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.04;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 500;
        };
        class aiopticmode1 : aicqb
        {
            minRange = 350;
            minRangeProbab = 0.5;
            midRange = 550;
            midRangeProbab = 1;
            maxRange = 650;
            maxRangeProbab = 0.5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 500;
            requiredOpticType = 1;
        };
        class aiopticmode2 : aicqb
        {
            minRange = 550;
            minRangeProbab = 0.5;
            midRange = 650;
            midRangeProbab = 1;
            maxRange = 800;
            maxRangeProbab = 0.5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 700;
            requiredOpticType = 1;
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
                        "332nd_cows_LEScope_DC15A",
                        "Optre_Recon_Sight",
                        "Optre_Recon_Sight_Red",
                        "Optre_Recon_Sight_Green"};
            };
            class MuzzleSlot : MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                compatibleItems[] =
                    {
                        "332nd_muzzle_flash",
                        "332nd_Vibroknife_Bayonet"};
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
    class 332nd_Weaps_DC15A_UGL : 332nd_Weaps_DC15A
    {
        displayName = "[332nd] DC-15A UGL";
        baseWeapon = "332nd_Weaps_DC15A_UGL";
        model = "3AS\3AS_Weapons\DC15A\3AS_DC15A_GL.p3d";
        handAnim[] = {"OFP2_ManSkeleton", "3AS\3AS_Weapons\DC15A\Data\Anim\DC15A_handanim.rtm"};
        reloadAction = "3AS_GestureReloadDC15A";
        muzzles[] =
            {
                "this",
                "Stun",
                "332nd_UGL_F"};
        class 332nd_UGL_F : UGL_F
        {
            displayName = "[332nd] Over-Under Grenade Launcher";
            descriptionShort = "Underbarrel GL Module for DC15A";
            useModelOptics = 0;
            useExternalOptic = 0;
            cameraDir = "OP_look";
            discreteDistance[] = {75, 100, 150, 200, 250, 300, 350, 400};
            discreteDistanceCameraPoint[] = {"OP_eye_75", "OP_eye_100", "OP_eye_150", "OP_eye_200", "OP_eye_250", "OP_eye_300", "OP_eye_350", "OP_eye_400"};
            discreteDistanceInitIndex = 0;
            magazines[] =
                {
                    "332nd_Weapons_Mags_GL_AP2",
                    "332nd_Weapons_Mags_GL_HE3",
                    "332nd_Weapons_Mags_GL_smoke_white6",
                    "332nd_Weapons_Mags_GL_smoke_purple3",
                    "332nd_Weapons_Mags_GL_smoke_yellow3",
                    "332nd_Weapons_Mags_GL_smoke_red3",
                    "332nd_Weapons_Mags_GL_smoke_green3",
                    "332nd_Weapons_Mags_GL_smoke_blue3",
                    "332nd_Weapons_Mags_GL_smoke_orange3",
                    "ACE_HuntIR_M203",
                    "332nd_Weapons_Mags_GL_flare_White3",
                    "332nd_Weapons_Mags_GL_flare_Green3",
                    "332nd_Weapons_Mags_GL_flare_Red3",
                    "332nd_Weapons_Mags_GL_flare_Yellow3",
                    "332nd_Weapons_Mags_GL_flare_Blue3",
                    "332nd_Weapons_Mags_GL_flare_Cyan3",
                    "332nd_Weapons_Mags_GL_flare_Purple3",
                    "332nd_Weapons_Mags_GL_flare_IR3"};
            magazineWell[] = {};
            reloadAction = "GestureReloadMXUGL";
            reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload", 1, 1, 10};
            class Single : Mode_SemiAuto
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
                    begin1[] = {"SWLW_clones\rifles\gl\sounds\gl", 1, 1, 1800};
                    begin2[] = {"SWLW_clones\rifles\gl\sounds\gl", 1, 1, 1800};
                    begin3[] = {"SWLW_clones\rifles\gl\sounds\gl", 1, 1, 1800};
                    soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
                };
            };
        };
    };
};

class CfgMagazines
{
    class 1Rnd_HE_Grenade_shell;
    class 332nd_Weapons_Mags_20mw40;

    class 332nd_Weapons_Mags_20mwdp30 : 332nd_Weapons_Mags_20mw40
    {
        displayName = "[332nd] 30Rnd 20MW DP Cell";
        displayNameShort = "30Rnd 20MW DP";
        picture = "\Aux_332nd_weapons\Weapons\Magazines\data\332nd_icon_mag_dc15a_dp.paa";
        count = 30;
        ammo = "332nd_Weapons_Ammo_20mwdp";
        descriptionShort = "DC15A dense plasma magazine";
        model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
    };
    class 332nd_Weapons_Mags_20mwup30 : 332nd_Weapons_Mags_20mwdp30
    {
        displayName = "[332nd] 30Rnd 20MW UP Cell";
        displayNameShort = "30Rnd 20MW UP";
        picture = "\Aux_332nd_weapons\Weapons\Magazines\data\332nd_icon_mag_dc15a_up.paa";
        count = 30;
        ammo = "332nd_Weapons_Ammo_20mwup";
        initSpeed = 900;
        descriptionShort = "DC15A unstable plasma magazine";
        model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
    };

    // UGL Magazines
    class 332nd_Weapons_Mags_GL_AP2 : 1Rnd_HE_Grenade_shell
    {
        author = "332nd Aux Team";
        scope = 2;
        displayName = "[332nd] 2Rnd AP Grenade";
        displayNameShort = "2Rnd AP";
        model = "\SWLW_clones\machineguns\Z6\Z6_g_mag.p3d";
        picture = "\SWLW_clones\machineguns\Z6\data\ui\Z6_g_mag_ui.paa";
        ammo = "332nd_Weapons_Ammo_GL_AP";
        initSpeed = 220;
        count = 2;
        nameSound = "";
        descriptionShort = "2Rnd AP Grenade";
        mass = 15;
    };
    class 332nd_Weapons_Mags_GL_HE3 : 332nd_Weapons_Mags_GL_AP2
    {
        displayName = "[332nd] 3Rnd HE Grenade";
        displayNameShort = "3Rnd HE";
        count = 3;
        initSpeed = 80;
        ammo = "332nd_Weapons_Ammo_GL_HE";
        descriptionShort = "3Rnd HE DC-15A Grenade";
    };
};

class CfgAmmo
{
    class 332nd_Weapons_Ammo_20mw;

    class 332nd_Weapons_Ammo_20mwdp : 332nd_Weapons_Ammo_20mw
    {
        hit = 24;
    };
    class 332nd_Weapons_Ammo_20mwup : 332nd_Weapons_Ammo_20mw
    {
        hit = 20;
        typicalSpeed = 900;
        indirectHit = 3;
        indirectHitRange = 0.5;
        explosive = 0.4;
        caliber = 0.6;
        ExplosionEffects = "3AS_ImpactPlasma";
        craterEffects = "";
    };
};

// Credit to the 332nd Aux Team for settings of items
// Credit to 3as for the models