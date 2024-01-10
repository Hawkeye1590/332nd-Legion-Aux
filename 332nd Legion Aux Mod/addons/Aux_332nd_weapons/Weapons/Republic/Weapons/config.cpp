class cfgPatches
{
    class 332nd_Patch_Weapons
    {
        Name = "332nd Aux Mod - Weapons";
        Author = "332nd Aux Team";
        url = "https://gitlab.com/332nd-legion-starsim/aux-mod-team/332nd-Aux-Mod";
        requiredAddons[] =
            {
                "A3_Weapons_F"};
        units[] = {};
        weapons[] =
            {
                "332nd_rifle_base",
                "332nd_rifle_base_stunless",
                "332nd_pistol_base",
                "332nd_launcher_base",
                "332nd_guided_launcher_base"};
    };
};

class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons
{
    class Rifle_Base_F;
    class Pistol_Base_F;

    class arifle_MX_Base_F : Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class hgun_P07_F : Pistol_Base_F
    {
        class WeaponSlotsInfo;
    };

    class Launcher;
    class Launcher_Base_F : Launcher
    {
        class WeaponSlotsInfo;
    };

    class launch_Titan_base;
    class launch_Titan_short_base : launch_Titan_base
    {
        class WeaponSlotsInfo;
    };

    class 332nd_stun_muzzle : Rifle_Base_F
    {
        aiDispersionCoefX = 2;
        aiDispersionCoefY = 2;
        autoFire = 0;
        ballisticsComputer = 0;
        discreteDistance[] = {50};
        discreteDistanceInitIndex = 0;
        displayName = "[332nd] Stun Mode";
        drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss", 5, 1, 10};
        fireSpreadAngle = 0.95;
        magazines[] =
            {
                "332nd_Weapons_Mags_stun5"};
        magazineWell[] = {};
        maxZeroing = 50;
        reloadAction = "GestureReloadMX";
        reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\Reload_Mx", 1, 1, 10};
        modes[] = {"Single"};
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
                begin1[] = {"MRC\JLTS\weapons\Core\sounds\stun", 5, 1.5, 1800};
                soundBegin[] = {"begin1", 1};
            };
            recoil = "recoil_pistol_light";
            recoilProne = "recoil_prone_pistol_light";
            reloadTime = 0.5;
            dispersion = 0.0029;
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
        };
    };

    class 332nd_rifle_base : arifle_MX_Base_F
    {
        author = "332nd Aux Team";
        ACE_Overheating_mrbs = 0;
        canShootInWater = 1;
        fireLightDuration = 0.05;
        fireLightIntensity = 0.2;
        fireLightDiffuse[] = {0, 0, 1};
        fireLightAmbient[] = {0, 0, 1};
        JLTS_hasElectronics = 0;
        JLTS_hasEMPProtection = 0;
        magazines[] = {};
        magazineWell[] = {};
        modes[] = {"Single", "Burst", "FullAuto"};
        drySound[] = {"swlw_rework\sounds\dc\DC_noAmmo.wss", 5, 1, 20};
        muzzles[] =
            {
                "this",
                "Stun"};
        class Stun : 332nd_stun_muzzle
        {
            displayName = "High Energy Stun Mode";
            magazines[] =
                {
                    "332nd_Weapons_Mags_Stun_5rnd"};
        };
        class Single : Mode_SemiAuto
        {
            reloadTime = 0.096;
            recoil = "recoil_single_mx";
            recoilProne = "recoil_single_prone_mx";
            dispersion = 0.00073;
        };
        class Burst : Mode_Burst
        {
            reloadTime = 0.1;
            dispersion = 0.00066;
            soundContinuous = 0;
            soundBurst = 0;
        };
        class FullAuto : Mode_FullAuto
        {
            reloadTime = 0.125;
            recoil = "recoil_auto_mx";
            recoilProne = "recoil_auto_prone_mx";
            dispersion = 0.00073;
        };
        class fullauto_medium : FullAuto
        {
            dispersion = 0.00073;
            showToPlayer = 0;
            burst = 3;
            aiBurstTerminable = 1;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 0.125;
            aiRateOfFireDistance = 200;
        };
        class single_medium : Single
        {
            showToPlayer = 0;
            dispersion = 0.00073;
            requiredOpticType = 1;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 650;
            maxRangeProbab = 0.2;
            aiRateOfFire = 0.096;
            aiRateOfFireDistance = 600;
        };
        class single_far : single_medium
        {
            dispersion = 0.00073;
            requiredOpticType = 2;
            minRange = 100;
            minRangeProbab = 0.2;
            midRange = 550;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.05;
            aiRateOfFire = 0.096;
            aiRateOfFireDistance = 800;
        };
        class WeaponSlotsInfo
        {
            mass = 30;
            class CowsSlot : CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
                compatibleItems[] = {};
            };
            class MuzzleSlot : MuzzleSlot
            {
                compatibleItems[] = {};
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                iconPosition[] = {0.24, 0.35};
                iconScale = 0.2;
            };
            class PointerSlot : PointerSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                displayName = "Pointer Slot";
                compatibleItems[] = {};
            };
            class UnderBarrelSlot : UnderBarrelSlot
            {
                iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
                iconPinpoint = "Bottom";
                linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
                compatibleItems[] = {};
            };
        };
    };
    class 332nd_rifle_base_stunless : 332nd_rifle_base
    {
        muzzles[] = {"this"};
    };

    class 332nd_pistol_base : hgun_P07_F
    {
        author = "332nd Aux Team";
        ACE_Overheating_mrbs = 0;
        canShootInWater = 1;
        fireLightDuration = 0.05;
        fireLightIntensity = 0.2;
        fireLightDiffuse[] = {0, 0, 1};
        fireLightAmbient[] = {0, 0, 1};
        JLTS_hasElectronics = 0;
        JLTS_hasEMPProtection = 0;
        magazines[] = {};
        magazineWell[] = {};
        modes[] = {"Single"};
        drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss", 5, 1, 10};
        muzzles[] =
            {
                "this",
                "Stun"};
        class Stun : 332nd_stun_muzzle
        {
            displayName = "High Energy Stun Mode";
            magazines[] =
                {
                    "332nd_Weapons_Mags_stun5"};
            reloadAction = "GestureReloadPistol";
        };
        class Single : Mode_SemiAuto
        {
            recoil = "recoil_pistol_light";
            recoilProne = "recoil_prone_pistol_light";
            reloadTime = 0.12;
            dispersion = 0.0029;
            minRange = 1;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 0;
            aiRateOfFireDistance = 25;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 30;
            class CowsSlot : CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
                compatibleItems[] =
                    {
                        "332nd_cows_pistol",
                        "332nd_cows_pistol_2"};
            };
            class MuzzleSlot : MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                compatibleItems[] = {};
            };
            class PointerSlot : PointerSlot
            {
                compatibleItems[] =
                    {
                        "jlts_dc17sa_flashlight"};
            };
            class UnderBarrelSlot : UnderBarrelSlot
            {
                compatibleItems[] = {};
            };
        };
    };

    class 332nd_launcher_base : Launcher_Base_F
    {
        author = "332nd Aux Team";
        _generalMacro = "launch_RPG32_F";
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 132;
        };
        opticsZoomMin = 0.1083;
        opticsZoomMax = 0.1083;
        opticsZoomInit = 0.1083;
        cameraDir = "look";
        ace_overpressure_angle = 60;
        ace_overpressure_damage = 0.7;
        ace_overpressure_priority = 1;
        ace_overpressure_range = 15;
        ace_reloadlaunchers_enabled = 1;
        magazines[] = {};
        magazineWell[] = {};
        modes[] = {"Single"};
        reloadAction = "ReloadRPG";
        recoil = "";
        class Single : Mode_SemiAuto
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"swlw_rework\sounds\launcher\PLX_shot.wss", 10, 1, 2000};
                soundBegin[] = {"begin1", 1};
            };
            recoil = "recoil_single_law";
            aiRateOfFire = 5;
            aiRateOfFireDistance = 500;
            aiRateOfFireDispersion = 2;
            minRange = 10;
            minRangeProbab = 0.3;
            midRange = 40;
            midRangeProbab = 0.85;
            maxRange = 600;
            maxRangeProbab = 0.85;
        };
        drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32", 0.4466836, 1, 20};
        reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32", 0.25118864, 1, 10};
        canLock = 0;
        weaponLockDelay = 3;
        lockAcquire = 0;
        inertia = 0.9;
        aimTransitionSpeed = 0.5;
        dexterity = 1.1;
        initspeed = 30;
        class GunParticles
        {
            class effect1
            {
                positionName = "konec hlavne";
                directionName = "usti hlavne";
                effectName = "RocketBackEffectsRPGNT";
            };
        };
    };
    class 332nd_guided_launcher_base : launch_Titan_short_base
    {
        author = "332nd Aux Team";
        modelSpecial = "";
        magazines[] = {};
        magazineWell[] = {};
        ace_overpressure_angle = 0;
        ace_overpressure_damage = 0;
        ace_overpresssure_priority = 0;
        ace_overpressure_range = 0;
        ace_reloadlaunchers_enabled = 1;
        ace_javelin_enabled = 1;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 220;
        };
    };
};

// Credit to the 501st Aux Team for settings of items
// Credit to 3as for the models