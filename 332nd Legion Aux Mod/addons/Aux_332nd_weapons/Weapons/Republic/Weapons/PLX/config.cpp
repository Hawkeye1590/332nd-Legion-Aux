class cfgPatches
{
    class 332nd_Patch_PLX
    {
        addonRootClass = "332nd_Patch_Weapons";
        requiredAddons[] =
            {
                "332nd_Patch_Weapons",
                "A3_Weapons_F"};
        units[] = {};
        weapons[] =
            {
                "332nd_Weaps_PLX1"};
        magazines[] =
            {
                "332nd_Weapons_Mags_plx1_at",
                "332nd_Weapons_Mags_plx1_ap"};
    };
};

class cfgWeapons
{
    class launch_Titan_short_base;
    class 332nd_guided_launcher_base : launch_Titan_short_base
    {
        class Single;
        class TopDown;
    };

    class 332nd_Weaps_PLX1 : 332nd_guided_launcher_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[332nd] PLX-1 Guided Launcher";
        picture = "\MRC\JLTS\weapons\PLX1\data\ui\PLX1_ui_ca.paa";
        uiPicture = "MRC\JLTS\weapons\PLX1\data\ui\PLX1_ui_ca.paa";
        model = "\MRC\JLTS\weapons\PLX1\PLX1.p3d";
        modelSpecial = "";
        handAnim[] = {"OFP2_ManSkeleton", "\MRC\JLTS\weapons\PLX1\anims\PLX1_handanim.rtm"};
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\PLX1\data\PLX1_body_co.paa", "\MRC\JLTS\weapons\PLX1\data\PLX1_tube_co.paa", "\MRC\JLTS\weapons\PLX1\data\PLX1_mag_co.paa"};
        canLock = 0;
        ace_javelin_enabled = 1;
        weaponInfoType = "ACE_RscOptics_javelin";
        lockingTargetSound[] = {"", 0, 1};
        lockedTargetSound[] = {"", 0, 1};
        magazines[] =
            {
                "332nd_Weapons_Mags_plx1_at",
                "332nd_Weapons_Mags_plx1_ap"};
        class Single : Single
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\nlaw", 1.99526, 1, 1800};
                soundBegin[] = {"begin1", 1};
                soundSetShot[] = {"Launcher_NLAW_Shot_SoundSet", "Launcher_NLAW_Tail_SoundSet"};
            };
        };
        class TopDown : TopDown
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\nlaw", 1.99526, 1, 1800};
                soundBegin[] = {"begin1", 1};
                soundSetShot[] = {"Launcher_NLAW_Shot_SoundSet", "Launcher_NLAW_Tail_SoundSet"};
            };
        };
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
                opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
                opticsZoomInit = "0.25/1";
                opticsZoomMax = "0.25/1";
                opticsZoomMin = "0.25/15";
                discretefov[] = {"0.25/1", "0.25/5", "0.25/10", "0.25/15"};
                useModelOptics = 1;
                visionMode[] = {"Normal", "NVG", "Ti"};
                discreteInitIndex = 0;
            };
        };
    };
};

class CfgMagazines
{
    class Titan_AT;
    class Titan_AP;

    class 332nd_Weapons_Mags_plx1_at : Titan_AT
    {
        displayName = "[332nd] PLX AT Rocket";
        displayNameShort = "AT";
        author = "332nd Aux Team";
        model = "\MRC\JLTS\weapons\PLX1\PLX1_mag.p3d";
        picture = "\MRC\JLTS\weapons\PLX1\data\ui\PLX1_mag_ui_ca.paa";
        count = 2;
    };
    class 332nd_Weapons_Mags_plx1_ap : Titan_AP
    {
        displayName = "[332nd] PLX AP Rocket";
        displayNameShort = "AP";
        author = "332nd Aux Team";
        model = "\MRC\JLTS\weapons\PLX1\PLX1_mag.p3d";
        picture = "\MRC\JLTS\weapons\PLX1\data\ui\PLX1_mag_ui_ca.paa";
        count = 2;
    };
};

// Credit to the 501st Aux Team for settings of items
// Credit to 3as for the models