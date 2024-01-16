class CfgPatches
{
	class 332nd_Knife
	{
		author="Magika";
		units[]=
		{
			"332nd_VibroKnife",
			"332nd_VibroKnife_2",
			"332nd_Vibroknife_Bayonet",
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"a3_anims_f"
		};
	};
};
class CfgVehicles
{
	class House;
};
class Cfgweapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class WBK_Dutch_Vibro;	
	class InventoryMuzzleItem_Base_F;
	class muzzle_snds_H;
	class 332nd_Vibroknife_Bayonet: muzzle_snds_H
	{
		scope=2;
		displayName="K-2 Bayonet";
		picture="\WBK_SciFiWeapons\Katarn_Icon.paa";
		author="Magika";
		model="\Aux_332nd_weapons\Weapons\Republic\Weapons\Knife\ModernVibro_bayonet.p3d";
		IMS_Bayonet_Item="true";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=0.40000001;
			class MagazineCoef
			{
				initSpeed=1.01;
			};
			class AmmoCoef
			{
				hit=1;
				visibleFire=0.2;
				audibleFire=0.40000001;
				visibleFireTime=0.5;
				audibleFireTime=1;
				cost=1;
				typicalSpeed=1;
				airFriction=1;
			};
			class MuzzleCoef
			{
				dispersionCoef="0.8f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			soundTypeIndex=0;
			inertia=0.2;
		};
	};
	class 332nd_VibroKnife: WBK_Dutch_Vibro
	{
		IMS_Melee_Param_Damage=0.5;
		scope=0
		author = "332nd || Wallace";
		displayName="[332nd] K-2 Vibroknife (Reversed)";
		descriptionShort="A standard issue Vibroblade manufactured by Antrech Arms";
        picture="\WBK_SciFiWeapons\Katarn_Icon.paa";
		model="\Aux_332nd_weapons\Weapons\Republic\Weapons\Knife\ModernVibro.p3d";
		IMS_Bayonet_Item="true";
		IMS_ExecutionType="ReversedKnife";
		IMS_WeaponType="Knife";
	};

	class 332nd_VibroKnife_2: WBK_Dutch_Vibro
	{
		IMS_Melee_Param_Damage=0.5;
		scope=0
		author = "332nd || Wallace";
		displayName="[332nd] K-2 Vibroknife";
		descriptionShort="A standard issue Vibroblade manufactured by Antrech Arms";
        picture="\WBK_SciFiWeapons\Katarn_Icon.paa";
		model="\Aux_332nd_weapons\Weapons\Republic\Weapons\Knife\ModernVibro.p3d";
		IMS_ExecutionType="Knife";
		IMS_WeaponType="Knife";
	};
};