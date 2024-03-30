class cfgPatches
{
    class 332nd_Patch_RGL6
    {
        addonRootClass = "332nd_Patch_Weapons";
        requiredAddons[] =
            {
                "332nd_Patch_Weapons",
                "A3_Weapons_F"};
        units[] = {};
        weapons[] =
            {
                "332nd_Weaps_RGL6"};
    };
};

class CowsSlot;
class Mode_SemiAuto;
class UGL_F;
class CfgWeapons
{
    class 332nd_rifle_base;
    class 332nd_rifle_base_stunless : 332nd_rifle_base
    {
        class Single;
        class WeaponSlotsInfo;
    };
    class 332nd_Weaps_RGL6 : 332nd_rifle_base_stunless
    {
        scope = 2;
        displayName = "[332nd] MPL-2";
        baseWeapon = "332nd_Weaps_RGL6";
        model="3as\3AS_Weapons\MPL\3AS_MPL.p3d";
        handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\3AS\3AS_Weapons\MPL\data\MPLhand.rtm"
		};
        reloadAction="GestureReloadMX";
        picture = "\swlw_clones\rifles\gl\data\ui\GL_ui.paa";
        cameraDir = "OP_look";
        discreteinitindex = 0;
        discreteDistance[]={50,75,100,150,200,250,300};
		discreteDistanceCameraPoint[]=
		{
			"OP_eye_50",
			"OP_eye_75",
			"OP_eye_100",
			"OP_eye_150",
			"OP_eye_200",
			"OP_eye_250",
			"OP_eye_300"
		};
        magazines[] =
            {
                "332nd_Weapons_Mags_RGL_HE6",
                "332nd_Weapons_Mags_RGL_AP6",
                "OPTRE_3Rnd_Smoke_Grenade_shell",
                "OPTRE_3Rnd_SmokeYellow_Grenade_shell",
                "OPTRE_3Rnd_SmokeRed_Grenade_shell",
                "OPTRE_3Rnd_SmokePurple_Grenade_shell",
                "OPTRE_3Rnd_SmokeOrange_Grenade_shell",
                "OPTRE_3Rnd_SmokeGreen_Grenade_shell",
                "OPTRE_3Rnd_SmokeBlue_Grenade_shell"};
        modes[] = {"Single", "close", "short", "medium"};
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
                begin1[] = {"swlw_rework\sounds\shotgun\DP20_shot.wss", +3db, 1, 2200};
                begin2[] = {"swlw_rework\sounds\shotgun\DP20_shot.wss", +3db, 1, 2200};
                begin3[] = {"swlw_rework\sounds\shotgun\DP20_shot.wss", +3db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
            };
            reloadTime = 0.15;
            dispersion = 0.003015;
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
        };
        class close : Single
        {
            showToPlayer = 0;
            aiRateOfFire = 0.25;
            aiRateOfFireDistance = 400;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.2;
        };
        class short : close
        {
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 500;
            minRange = 300;
            minRangeProbab = 0.2;
            midRange = 400;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;
        };
        class medium : close
        {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 900;
            minRange = 400;
            minRangeProbab = 0.2;
            midRange = 700;
            midRangeProbab = 0.7;
            maxRange = 900;
            maxRangeProbab = 0.2;
        };
        initspeed = 80;
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        inertia = 0.5;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 180;
        };
    };
};

class CfgMagazines
{
    class 332nd_Weapons_Mags_GL_HE3;
    class 332nd_Weapons_Mags_GL_AP2;

    class 332nd_Weapons_Mags_RGL_HE6 : 332nd_Weapons_Mags_GL_HE3
    {
        displayName = "[332nd] 6Rnd HE MPL-2 Magazine";
        displayNameShort = "6Rnd HE";
        count = 6;
        descriptionShort = "6Rnd HE MPL-2 Grenades";
    };
    class 332nd_Weapons_Mags_RGL_AP6 : 332nd_Weapons_Mags_GL_AP2
    {
        displayName = "[332nd] 6Rnd AP MPL-2 Magazine";
        displayNameShort = "6Rnd AP";
        count = 6;
        initSpeed = 80;
        descriptionShort = "6Rnd AP MPL-2 Grenades";
    };
};

// Credit to the 501st Aux Team for settings of items
// Credit to 3as for the models