class cfgPatches
{
    class 332nd_Patch_RPS1
    {
        addonRootClass = "332nd_Patch_Weapons";
        requiredAddons[] =
            {
                "332nd_Patch_Weapons",
                "A3_Weapons_F"};
        units[] = {};
        weapons[] =
            {
                "332nd_Weaps_RPS1"};
        magazines[] =
            {
                "332nd_Weapons_Mags_rps1_preload",
                "332nd_Weapons_Mags_rps1_preload_fired"};
    };
};

class CBA_DisposableLaunchers
{
    a332nd_Weaps_RPS1_base[] = {"332nd_Weaps_RPS1", "332nd_Weaps_RPS1_used"};
};

class cfgWeapons
{
    class 332nd_launcher_base;
    class a332nd_Weaps_RPS1_base : 332nd_launcher_base
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[332nd] RPS-1 Disposable Launcher";
        baseWeapon = "332nd_Weaps_RPS1";
        model = "\ls_weapons\tertiary\rps6\ls_weapon_rps6";
        hiddenSelectionsTextures[] = {"\Aux_332nd_weapons\Weapons\Republic\Weapons\RPS1\data\rps1_co.paa"};
        hiddenSelections[] = {"camo1"};
        picture = "\Aux_332nd_weapons\Weapons\Republic\Weapons\RPS1\data\rps1_ui.paa";
        uiPicture = "\Aux_332nd_weapons\Weapons\Republic\Weapons\RPS1\data\rps1_ui.paa";
        weaponInfoType = "RscWeaponEmpty";
        handAnim[] =
            {
                "OFP2_ManSkeleton",
                "\SWLW_clones\launchers\rps6\anims\RPS6_handanim.rtm"};
        magazines[] =
            {
                "332nd_Weapons_Mags_rps1"};
        magazineReloadTime = 0.1;
        reloadMagazineSound[] = {"", 1, 1};
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
        class EventHandlers
        {
            fired = "_this call CBA_fnc_firedDisposable";
        };
    };
    class 332nd_Weaps_RPS1 : a332nd_Weaps_RPS1_base
    {
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = "332nd_Weaps_RPS1_loaded";
        magazines[] = {"CBA_FakeLauncherMagazine"};
    };
    class 332nd_Weaps_RPS1_used : a332nd_Weaps_RPS1_base
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[332nd] RPS1 (used)";
        baseWeapon = "332nd_Weaps_RPS1_used";
        magazines[] = {"CBA_FakeLauncherMagazine"};
    };
};

class CfgMagazines
{
    class CA_LauncherMagazine;

    class 332nd_Weapons_Mags_rps1 : CA_LauncherMagazine
    {
        author = "332nd Aux Team";
        displayName = "[332nd] RPS-1 Rocket";
        picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
        model = "\ls_weapons\tertiary\rps6\ls_magazine_rps6";
        modelSpecialIsProxy = 1;
        modelSpecial = "\ls_weapons\tertiary\rps6\ls_magazine_rps6";
        ammo = "332nd_Weapons_Ammo_rps1";
        scope = 2;
        scopearsenal = 2;
        weight = 1;
        mass = 132;
        initSpeed = 140;
        hit = 800;
    };
};

class CfgAmmo
{
    class R_PG32V_F;

    class 332nd_Weapons_Ammo_rps1 : R_PG32V_F
    {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        allowAgainstInfantry = 1;
        hit = 600;
        indirectHit = 100;
        indirectHitRange = 10;
    };
};

// Credit to the 501st Aux Team for settings of items
// Credit to 3as for the models