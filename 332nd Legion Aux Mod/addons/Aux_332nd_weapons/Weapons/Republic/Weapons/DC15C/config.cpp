class cfgPatches
{
    class 332nd_Patch_DC15C
    {
        addonRootClass = "332nd_Patch_Weapons";
        requiredAddons[] =
            {
                "332nd_Patch_Weapons",
                "A3_Weapons_F"};
        units[] = {};
        weapons[] =
            {
                "332nd_Weaps_DC15C",
                "332nd_Weaps_DC15C_UGL"};
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
        class Burst;
        class WeaponSlotsInfo;
    };
    class UGL_F;

    class 332nd_Weaps_DC15C : 332nd_rifle_base
    {
        scope = 2;
        displayName = "[332nd] DC-15C Carbine";
        author = "332nd Aux Team";
        baseWeapon = "332nd_Weaps_DC15C";
        JLTS_hasElectronics=0;
		JLTS_hasEMPProtection=1;
        picture = "\Aux_332nd_weapons\Weapons\Republic\Weapons\DC15C\dc15c_ui.paa";
        model = "3AS\3AS_Weapons\DC15C\3AS_DC15C_f";
        handAnim[] = {"OFP2_ManSkeleton", "\3AS\3AS_Weapons\DC15C\Data\Anim\DC15C_handanim.rtm"};
        recoil = "3AS_recoil_dc15s";
        reloadAction = "3AS_GestureReloadDC15S";
        reloadTime = 0.1;
        dispersion = 0.00116;
        magazines[] =
            {
                "332nd_Weapons_Mags_20mw40"};
        class stun : 332nd_stun_muzzle
        {
        };
        modes[] = {"Single", "Burst", "aicqb", "aiclose", "aimedium", "aifar", "aiopticmode1", "aiopticmode2"};
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
                begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire.wss", +3db, 1, 2200};
                soundBegin[] = {"begin1", 1};
            };
            reloadTime = 0.12;
            dispersion = 0.00116;
        };
        class Burst : Burst
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
                        "3AS_optic_acog_DC15C",
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
                compatibleItems[] =
                    {
                        "332nd_muzzle_flash",
                        "332nd_Vibroknife_Bayonet"};
            };
            class PointerSlot : PointerSlot
            {
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                displayName = "Pointer Slot";
                compatibleItems[] = {"acc_flashlight", "acc_pointer_IR"};
            };
        };
    };
    class 332nd_Weaps_DC15C_UGL : 332nd_Weaps_DC15C
    {
        displayName = "[332nd] DC-15C UGL";
        baseWeapon = "332nd_Weaps_DC15C_UGL";
        picture = "\Aux_332nd_weapons\Weapons\Republic\Weapons\DC15C\dc15c_ui.paa";
        model = "3AS\3AS_Weapons\DC15C\3AS_DC15C_GL.p3d";
        handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_Exp\Machineguns\LMG_03\Data\Anim\LIM.rtm"};
        muzzles[] =
            {
                "this",
                "Stun",
                "332nd_15c_UGL_muzzle"};
        class 332nd_15c_UGL_muzzle : UGL_F
        {
            displayName = "[332nd] Over-Under Grenade Launcher";
            descriptionShort = "Underbarrel GL Module for DC15C";
            useModelOptics = 0;
            useExternalOptic = 0;
            magazines[] =
                {
                    "332nd_Weapons_Mags_GL_HE1",
                    "OPTRE_3Rnd_Smoke_Grenade_shell",
                    "OPTRE_3Rnd_SmokeYellow_Grenade_shell",
                    "OPTRE_3Rnd_SmokeRed_Grenade_shell",
                    "OPTRE_3Rnd_SmokePurple_Grenade_shell",
                    "OPTRE_3Rnd_SmokeOrange_Grenade_shell",
                    "OPTRE_3Rnd_SmokeGreen_Grenade_shell",
                    "OPTRE_3Rnd_SmokeBlue_Grenade_shell",
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
            cameraDir = "OP_look";
            discreteDistance[] = {50, 75, 100, 150, 200, 250, 300, 350, 400};
            discreteDistanceCameraPoint[] = {"OP_eye_50", "OP_eye_75", "OP_eye_100", "OP_eye_150", "OP_eye_200", "OP_eye_250", "OP_eye_300", "OP_eye_350", "OP_eye_400"};
            discreteDistanceInitIndex = 1;
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
    class 332nd_Weapons_Mags_10mw50;
    class 332nd_Weapons_Mags_GL_HE3;

    class 332nd_Weapons_Mags_20mw40 : 332nd_Weapons_Mags_10mw50
    {
        displayName = "[332nd] 40Rnd 20MW Cell";
        displayNameShort = "40Rnd 20MW";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
        count = 40;
        ammo = "332nd_Weapons_Ammo_20mw";
        initSpeed = 1050;
        descriptionShort = "DC15C magazine";
        model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
    };

    // DC15-UGL
    class 332nd_Weapons_Mags_GL_HE1 : 332nd_Weapons_Mags_GL_HE3
    {
        displayName = "[332nd] 1Rnd HE Grenade";
        displayNameShort = "1Rnd HE";
        count = 1;
        ammo = "332nd_Weapons_Ammo_GL_light_HE";
        descriptionShort = "1Rnd HE Grenade";
    };
};

class CfgAmmo
{
    class 332nd_Weapons_Ammo_base_blue;

    class 332nd_Weapons_Ammo_GL_HE;

    class 332nd_Weapons_Ammo_20mw : 332nd_Weapons_Ammo_base_blue
    {
        hit = 17.5;
        typicalSpeed = 1050;
        caliber = 3.2;
        waterFriction = -0.009;
    };

    // DC15-UGL
    class 332nd_Weapons_Ammo_GL_light_HE : 332nd_Weapons_Ammo_GL_HE
    {
        hit = 30;
        indirectHit = 25;
        model = "\MRC\JLTS\weapons\Core\effects\laser_orange.p3d";
    };
};

// Credit to the 501st Aux Team for settings of items
// Credit to 3as for the models