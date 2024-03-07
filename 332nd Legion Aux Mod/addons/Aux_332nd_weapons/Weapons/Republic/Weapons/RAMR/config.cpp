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
        displayName = "[332nd] T-7 Ion Disruptor";
        baseWeapon = "332nd_Weaps_RAMR";
        picture="\LF_Weapon_Unit\t7\ui\t7_co.paa";
        model="LF_Weapon_Unit\t7\t7.p3d";
        handAnim[]=
		{
			"OFP2_ManSkeleton",
			"LF_Weapon_Unit\t7\anim\t7.rtm"
		};
        magazines[] =
            {
                "332nd_Weapons_Mags_50mw4"};
        modes[] = {"Single", "AICQB", "AIClose", "AIMedium", "AIFar"};
        class Single : Single
        {
            reloadTime = 2;
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
                begin1[] = {"LF_Weapon_Unit\main\sounds\iond1_01.wss", 1, 1, 3000};
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
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
			class CowsSlot: Cowsslot
			{
				compatibleItems[]=
				{
					""
				};
			};
		};
		modelOptics="LF_Weapon_Unit\westarm5\westarm5optic.p3d";
		class OpticsModes
		{
			class t7scope_sights
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"Default"
				};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=200;
				distanceZoomMax=200;
				cameraDir="";
			};
			class t7scope_scpope: t7scope_sights
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera2",
					"OpticsBlur3"
				};
				opticsZoomMin=0.0625;
				opticsZoomMax=0.125;
				opticsZoomInit=0.125;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex=1;
				distanceZoomMin=300;
				distanceZoomMax=1200;
				discretefov[]=
				{
					"0.25/3",
					"0.25/6",
					"0.25/9",
					"0.25/12",
					"0.25/15",
					"0.25/20"
				};
				discreteInitIndex=0;
				memoryPointCamera="eye";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
			};
        };
    };
};

class CfgMagazines
{
    class 332nd_Weapons_Mags_40mw5;

    class 332nd_Weapons_Mags_50mw4 : 332nd_Weapons_Mags_40mw5
    {
        displayName = "[332nd] 4Rnd Ion Cell";
        displayNameShort = "4Rnd Ion";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
        count = 4;
        mass = 30;
        ammo = "332nd_Weapons_Ammo_50mw4";
        descriptionShort = "T-7 ION magazine";
        model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
    };
};

class CfgAmmo
{
    class 332nd_Weapons_Ammo_base_blue;

    class 332nd_Weapons_Ammo_50mw4 : 332nd_Weapons_Ammo_base_blue
    {
        hit = 600;
        explosive = 0.5;
        typicalSpeed = 1100;
        caliber = 5;
        ExplosionEffects = "3AS_ImpactPlasma";
        craterEffects = ""; 
    };
};

// Credit to the 501st Aux Team for settings of items
// Credit to 3as for the models