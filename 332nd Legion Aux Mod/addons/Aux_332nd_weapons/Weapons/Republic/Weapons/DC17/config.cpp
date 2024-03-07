class cfgPatches
{
	class 332nd_Patch_DC17
	{
		addonRootClass="332nd_Patch_Weapons";
		requiredAddons[]=
		{
			"332nd_Patch_Weapons",
			"A3_Weapons_F"
		};
		units[]={};
		weapons[]=
		{
			"332nd_Weaps_DC17",
		};
		magazines[]={};
	};
};
class Mode_FullAuto;
class cfgWeapons
{
	class Pistol_Base_F;
	class hgun_P07_F;
	class 332nd_stun_muzzle;
	class 332nd_pistol_base: hgun_P07_F
	{
		class Single;
		class WeaponSlotsInfo;
	};
	class 332nd_Weaps_DC17: 332nd_pistol_base
	{
		scope=2;
		displayName="[332nd] DC-17 Sidearm";
		baseWeapon="332nd_Weaps_DC17";
		picture="\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_ui_ca.paa";
		model="SWLW_clones\pistols\dc17\DC17.p3d";
		reloadAction="GestureReloadPistol";
		magazines[]=
		{
			"332nd_Weapons_Mags_20mwdp20"
		};
		minRange=0;
		minRangeProbab=0.1;
		midRange=50;
		midRangeProbab=0.30000001;
		maxRange=180;
		maxRangeProbab=0.039999999;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=50;
		class Single: Single
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Aux_332nd_weapons\Weapons\Republic\Weapons\DC17\sounds\DC17Fire.wss",
					"+3db",
					1,
					2200
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			aiDispersionCoefY=1.7;
			aiDispersionCoefX=1.4;
			minRange=1;
			minRangeProbab=0.30000001;
			midRange=30;
			midRangeProbab=0.60000002;
			maxRange=75;
			maxRangeProbab=0.1;
			aiRateOfFire=1;
			aiRateOfFireDistance=30;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		};
	};
};
class CfgMagazines
{
	class 332nd_Weapons_Mags_20mw40;
	class 332nd_Weapons_Mags_20mwdp30;
	class 332nd_Weapons_Mags_20mwdp20: 332nd_Weapons_Mags_20mwdp30
	{
		displayName="[332nd] 20Rnd 20MW DP Cell";
		displayNameShort="20Rnd 20MW DP";
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
		count=20;
		mass=4;
		descriptionShort="DC17 Pistol Magazine";
		model="\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
	};
};
