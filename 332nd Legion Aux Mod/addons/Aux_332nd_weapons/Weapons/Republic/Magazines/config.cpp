class CfgPatches
{
    class 332nd_Patch_Magazines
    {
        addonRootClass = "332nd_Patch_Weapons";
        requiredAddons[] =
            {
                "332nd_Patch_Weapons",
                "A3_Weapons_F"};
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
        magazines[] =
            {
                "332nd_Weapons_Mags_stun5",
                "332nd_Weapons_Mags_GL_smoke_white6",
                "332nd_Weapons_Mags_GL_smoke_purple3",
                "332nd_Weapons_Mags_GL_smoke_yellow3",
                "332nd_Weapons_Mags_GL_smoke_red3",
                "332nd_Weapons_Mags_GL_smoke_green3",
                "332nd_Weapons_Mags_GL_smoke_blue3",
                "332nd_Weapons_Mags_GL_smoke_orange3",
                "332nd_Weapons_Mags_GL_flare_White3",
                "332nd_Weapons_Mags_GL_flare_IR3",
                "332nd_Weapons_Mags_GL_flare_Green3",
                "332nd_Weapons_Mags_GL_flare_Red3",
                "332nd_Weapons_Mags_GL_flare_Yellow3",
                "332nd_Weapons_Mags_GL_flare_Blue3",
                "332nd_Weapons_Mags_GL_flare_Cyan3",
                "332nd_Weapons_Mags_GL_flare_Purple3"};
    };
};

class CfgMagazines
{
    class 332nd_Weapons_Mags_10mw50;
    class 3Rnd_Smoke_Grenade_shell;
    class UGL_FlareWhite_F;

    // Stuns
    class 332nd_Weapons_Mags_stun5 : 332nd_Weapons_Mags_10mw50
    {
        displayName = "[332nd] 5Rnd Stun Cell";
        displayNameShort = "5rnd Stun";
        descriptionShort = "Stun Rounds to stop muhfuckas from running";
        picture = "\MRC\JLTS\weapons\Core\data\ui\stun_mag_ui_ca";
        model = "\MRC\JLTS\weapons\Core\stun_mag.p3d";
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        count = 5;
        mass = 4;
        ammo = "332nd_Weapons_Ammo_Stun";
        initSpeed = 50;
        JLTS_stunDuration = 30;
    };

    // UGL Smokes
    class 332nd_Weapons_Mags_GL_smoke_white6 : 3Rnd_Smoke_Grenade_shell
    {
        author = "332nd Aux Team";
        scope = 2;
        displayName = "[332nd] 6Rnd Smoke (White)";
        displayNameShort = "6Rnd White";
        descriptionShort = "UGL White Smoke Grenade";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
        count = 6;
        ammo = "332nd_Weapons_Ammo_GL_smoke_white";
        model = "kobra\442_weapons\explosive\basic_smoke.p3d";
    };
    class 332nd_Weapons_Mags_GL_smoke_purple3 : 332nd_Weapons_Mags_GL_smoke_white6
    {
        displayName = "[332nd] 3Rnd Smoke (Purple)";
        displayNameShort = "3Rnd Purple";
        descriptionShort = "UGL Purple Smoke Grenade";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_purple_CA.paa";
        count = 3;
        ammo = "332nd_Weapons_Ammo_GL_smoke_purple";
    };
    class 332nd_Weapons_Mags_GL_smoke_yellow3 : 332nd_Weapons_Mags_GL_smoke_purple3
    {
        displayName = "[332nd] 3Rnd Smoke (Yellow)";
        displayNameShort = "3Rnd Yellow";
        descriptionShort = "UGL Yellow Smoke Grenade";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa";
        ammo = "332nd_Weapons_Ammo_GL_smoke_yellow";
    };
    class 332nd_Weapons_Mags_GL_smoke_red3 : 332nd_Weapons_Mags_GL_smoke_purple3
    {
        displayName = "[332nd] 3Rnd Smoke (Red)";
        displayNameShort = "3Rnd Red";
        descriptionShort = "UGL Red Smoke Grenade";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
        ammo = "332nd_Weapons_Ammo_GL_smoke_red";
    };
    class 332nd_Weapons_Mags_GL_smoke_green3 : 332nd_Weapons_Mags_GL_smoke_purple3
    {
        displayName = "[332nd] 3Rnd Smoke (Green)";
        displayNameShort = "3Rnd Green";
        descriptionShort = "UGL Green Smoke Grenade";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
        ammo = "332nd_Weapons_Ammo_GL_smoke_green";
    };
    class 332nd_Weapons_Mags_GL_smoke_blue3 : 332nd_Weapons_Mags_GL_smoke_purple3
    {
        displayName = "[332nd] 3Rnd Smoke (Blue)";
        displayNameShort = "3Rnd Blue";
        descriptionShort = "UGL Blue Smoke Grenade";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_blue_CA.paa";
        ammo = "332nd_Weapons_Ammo_GL_smoke_blue";
    };
    class 332nd_Weapons_Mags_GL_smoke_orange3 : 332nd_Weapons_Mags_GL_smoke_purple3
    {
        displayName = "[332nd] 3Rnd Smoke (Orange)";
        displayNameShort = "3Rnd Orange";
        descriptionShort = "UGL Orange Smoke Grenade";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_orange_CA.paa";
        ammo = "332nd_Weapons_Ammo_GL_smoke_orange";
    };

    // UGL Flares
    class 332nd_Weapons_Mags_GL_flare_White3 : UGL_FlareWhite_F
    {
        author = "332nd Aux Team";
        scope = 2;
        type = 16;
        displayName = "[332nd] 3Rnd Flare (White)";
        displayNameShort = "White Flares";
        descriptionShort = "UGL White Flares";
        picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
        model = "\A3\Weapons_F\Ammo\UGL_Flare";
        ammo = "332nd_Weapons_Ammo_flare_white";
        initSpeed = 80;
        count = 3;
        nameSound = "";
        weaponPoolAvailable = 1;
        mass = 4;
    };
    class 332nd_Weapons_Mags_GL_flare_IR3 : 332nd_Weapons_Mags_GL_flare_white3
    {
        displayName = "[332nd] 3Rnd Flare (IR)";
        displayNameShort = "IR Flares";
        descriptionShort = "UGL IR Flares";
        ammo = "332nd_Weapons_Ammo_flare_ir";
        picture = "\Aux_332nd_weapons\Weapons\Magazines\data\332nd_icon_mag_ugl_flare_IR.paa";
    };
    class 332nd_Weapons_Mags_GL_flare_Green3 : 332nd_Weapons_Mags_GL_flare_white3
    {
        displayName = "[332nd] 3Rnd Flare (Green)";
        displayNameShort = "Green Flares";
        descriptionShort = "UGL Green Flares";
        ammo = "332nd_Weapons_Ammo_flare_green";
        picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Green_CA.paa";
    };
    class 332nd_Weapons_Mags_GL_flare_Red3 : 332nd_Weapons_Mags_GL_flare_white3
    {
        displayName = "[332nd] 3Rnd Flare (Red)";
        displayNameShort = "Red Flares";
        descriptionShort = "UGL Red Flares";
        ammo = "332nd_Weapons_Ammo_flare_red";
        picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Red_CA.paa";
    };
    class 332nd_Weapons_Mags_GL_flare_Yellow3 : 332nd_Weapons_Mags_GL_flare_white3
    {
        displayName = "[332nd] 3Rnd Flare (Yellow)";
        displayNameShort = "Yellow Flares";
        descriptionShort = "UGL Yellow Flares";
        ammo = "332nd_Weapons_Ammo_flare_yellow";
        picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
    };
    class 332nd_Weapons_Mags_GL_flare_Blue3 : 332nd_Weapons_Mags_GL_flare_white3
    {
        displayName = "[332nd] 3Rnd Flare (Blue)";
        displayNameShort = "Blue Flares";
        descriptionShort = "UGL Blue Flares";
        ammo = "332nd_Weapons_Ammo_flare_blue";
        picture = "\Aux_332nd_weapons\Weapons\Magazines\data\332nd_icon_mag_ugl_flare_blue.paa";
    };
    class 332nd_Weapons_Mags_GL_flare_Cyan3 : 332nd_Weapons_Mags_GL_flare_white3
    {
        displayName = "[332nd] 3Rnd Flare (Cyan)";
        displayNameShort = "Cyan Flares";
        descriptionShort = "UGL Cyan Flares";
        ammo = "332nd_Weapons_Ammo_flare_cyan";
        picture = "\Aux_332nd_weapons\Weapons\Magazines\data\332nd_icon_mag_ugl_flare_cyan.paa";
    };
    class 332nd_Weapons_Mags_GL_flare_Purple3 : 332nd_Weapons_Mags_GL_flare_white3
    {
        displayName = "[332nd] 3Rnd Flare (Purple)";
        displayNameShort = "Purple Flares";
        descriptionShort = "UGL Purple Flares";
        ammo = "332nd_Weapons_Ammo_flare_Purple";
        picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Purple_CA.paa";
    };
};

// Credit to the 332nd Aux Team for settings of items
// Credit to 3as for the models