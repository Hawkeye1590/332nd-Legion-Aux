class cfgPatches
{
    class 332nd_Patch_Valken38X
    {
        addonRootClass = "332nd_Patch_Weapons";
        requiredAddons[] =
            {
                "332nd_Patch_Weapons",
                "A3_Weapons_F"};
        units[] = {};
        weapons[] =
            {
                "332nd_Weaps_Valken38X"};
    };
};

class CowsSlot;
class MuzzleSlot;
class UnderBarrelSlot;

class cfgWeapons
{
    class 332nd_rifle_base;
    class 332nd_rifle_base_stunless : 332nd_rifle_base
    {
        class Single;
        class WeaponSlotsInfo;
    };

    class 332nd_Weaps_Valken38X : 332nd_rifle_base_stunless
    {
        scope = 2;
        displayName = "[332nd] Valken-38X Marksman Rifle";
        baseWeapon = "332nd_Weaps_Valken38X";
        picture="\3AS\3AS_Weapons\DC15A\Data\Textures\DC15A_Arsenal.paa";
        model="3AS\3AS_Weapons\Valken38X\3AS_Valken38X.p3d";
        handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\data\Anim\DMR_02.rtm"
		};
        recoil = "recoil_dmr_01";
        recoilProne = "recoil_single_prone_mx";
        magazines[] =
            {
                "332nd_Weapons_Mags_30mw20"};
        modelOptics="3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
        modes[] = {"Single", "aicqb", "aiclose", "aimedium", "aifar", "aiopticmode1", "aiopticmode2"};
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
                begin1[] = {"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss", +3db, 1, 2200};
                soundBegin[] = {"begin1", 1};
            };
            reloadTime = 0.90;
            dispersion = 0.0003;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 450;
            maxRangeProbab = 0.3;
        };
        class aicqb : Single
        {
            showToPlayer = 0;
            dispersion = 0.00073;
            minRange = 25;
            minRangeProbab = 1;
            midRange = 50;
            midRangeProbab = 1;
            maxRange = 100;
            maxRangeProbab = 0.5;
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
        };
        class aiclose : aicqb
        {
            minRange = 50;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 1;
            maxRange = 250;
            maxRangeProbably = 0.5;
            aiRateOfFireDistance = 150;
        };
        class aimedium : aicqb
        {
            minRange = 150;
            minRangeProbab = 0.5;
            midRange = 250;
            midRangeProbab = 1;
            maxRange = 350;
            maxRangeProbab = 0.1;
            aiRateOfFireDistance = 250;
            requiredOpticType = 0;
        };
        class aifar : aicqb
        {
            minRange = 250;
            minRangeProbab = 0.5;
            midRange = 350;
            midRangeProbab = 1;
            maxRange = 600;
            maxRangeProbab = 0.5;
            aiRateOfFireDistance = 350;
            requiredOpticType = 0;
        };
        class aiopticmode1 : aicqb
        {
            minRange = 400;
            minRangeProbab = 0.5;
            midRange = 500;
            midRangeProbab = 1;
            maxRange = 700;
            maxRangeProbab = 0.5;
            aiRateOfFireDistance = 500;
            requiredOpticType = 1;
        };
        class aiopticmode2 : aicqb
        {
            minRange = 500;
            minRangeProbab = 0.5;
            midRange = 700;
            midRangeProbab = 1;
            maxRange = 900;
            maxRangeProbab = 0.5;
            aiRateOfFireDistance = 700;
            requiredOpticType = 1;
        };
        class OpticsModes
        {
           class Ironsights
			{
				opticsID=1;
				useModelOptics=0;
				opticsFlare="true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.375;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
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
                        "3AS_Optic_VK38X"};
            };
            class MuzzleSlot : MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                compatibleItems[] =
                    {
                        "332nd_muzzle_flash"};
            };
            class UnderBarrelSlot : UnderBarrelSlot
            {
                iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
                iconPinpoint = "Bottom";
                linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
                compatibleItems[] =
                    {
                        "3AS_Bipod_VK38X_f"};
            };
        };
    };
};

class CfgMagazines
{
    class 332nd_Weapons_Mags_20mw40;

    class 332nd_Weapons_Mags_30mw20 : 332nd_Weapons_Mags_20mw40
    {
        displayName = "[332nd] 20Rnd 30MW Cell";
        displayNameShort = "20Rnd 30MW";
        picture = "\Aux_332nd_weapons\Weapons\Magazines\data\332nd_icon_mag_valken38.paa";
        count = 20;
        ammo = "332nd_Weapons_Ammo_30mw";
        initSpeed = 1100;
        descriptionShort = "Valken-38X Magazine";
        model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
    };
};

class CfgAmmo
{
    class 332nd_Weapons_Ammo_base_blue;

    class 332nd_Weapons_Ammo_30mw : 332nd_Weapons_Ammo_base_blue
    {
        hit = 30;
        typicalSpeed = 1100;
        caliber = 1.5;
        airFriction = 0;
        waterFriction = -0.009;
    };
};

// Credit to the 501st Aux Team for settings of items
// Credit to 3as for the models