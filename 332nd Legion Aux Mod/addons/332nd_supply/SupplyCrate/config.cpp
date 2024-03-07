class CfgPatches
{
	class 332nd_Legion_Supply
	{
		author = "332nd_AUX_TEAM";

		units[]=
		{
			"332nd_Ammobox_medical",
			"332nd_Ammobox_Ammo",
			"332nd_Ammobox_rearm",
		};
		
		weapons[]=
		{
			""
		};
				
		requiredAddons[]=
		{
			
		};
		
		authors[] =
        {
			"332nd_AUX_TEAM",
			"Hawkeye"
        };
	};
};

class CfgEditorCategories
{
	class 332nd_Objects
	{
		displayName = "[332nd] 332nd Legion Objects";
	};
};

class CfgEditorSubcategories
{
	class 332nd_Objects_Containers
	{
		displayName = "Resupplies";
	};
};

//reference link https://community.bistudio.com/wiki/CfgVehicles_Config_Reference#magazine
//reference link https://ace3.acemod.org/wiki/framework/dragging-framework.html
//reference link https://wiki.thecoolerserver.com/mission-making/scripts
//reference link https://ace3.acemod.org/wiki/framework/rearm-framework.html#31-make-an-object-into-a-rearm-source
//reference link https://ace3.acemod.org/wiki/framework/refuel-framework.html#21-make-an-object-into-a-refuel-source
//reference link https://ace3.acemod.org/wiki/framework/repair-framework.html#22-make-an-object-into-a-repair-facility

class CfgVehicles
{
	class JLTS_Ammobox_support_GAR;
	class JLTS_Ammobox_ammo_GAR;
	class 3AS_Supply_Large_Medical_Prop;
	class 3AS_Supply_Large_Ammo_Prop;

	class 332nd_Ammobox_medical : 3AS_Supply_Large_Medical_Prop
	{
		displayName = "[332nd] Medical Supply Crate";
		editorCategory = "332nd_Objects";
		editorSubcategory = "332nd_Objects_Containers";
		author = "Hawkeye";
		ace_dragging_canDrag = 1
		ace_dragging_canCarry = 1
		ace_dragging_dragPosition[] = {0, 1.2, 0};
		ace_dragging_dragDirection = 0;
		ace_dragging_carryDirection = 0;
		transportMaxWeapons = 1200;
		transportMaxMagazines = 666000;
		maximumLoad = 666000;
		armor = 666;
		class TransportItems
		{
			class xx_332nd_BactaBandage
			{
				name = "332nd_BactaBandage";
				count = 120;
			};
			class xx_332nd_BasicBandage
			{
				name = "332nd_BasicBandage";
				count = 120;
			};
			class xx_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 120;
			};
			class xx_332nd_MorphineStim
			{
				name = "332nd_MorphineStim";
				count = 120;
			};
			class xx_332nd_EpinephrineStim
			{
				name = "332nd_EpinephrineStim";
				count = 120;
			};
			class xx_ACE_splint
			{
				name = "ACE_splint";
				count = 120;
			};
			class xx_332nd_AdenosineStim
			{
				name = "332nd_AdenosineStim";
				count = 120;
			};
			class xx_332nd_Kolto_1000
			{
				name = "332nd_Kolto_1000";
				count = 120;
			};
			class xx_332nd_Kolto_500
			{
				name = "332nd_Kolto_500";
				count = 120;
			};
			class xx_332nd_Kolto_250
			{
				name = "332nd_Kolto_250";
				count = 120;
			};
			class xx_332nd_Bacta_1000
			{
				name = "332nd_Bacta_1000";
				count = 120;
			};
			class xx_332nd_Bacta_500
			{
				name = "332nd_Bacta_500";
				count = 120;
			};
			class xx_332nd_Bacta_250
			{
				name = "332nd_Bacta_250";
				count = 120;
			};
			class xx_332nd_Cauterizer
			{
				name = "332nd_Cauterizer";
				count = 20;
			};
		};
	};

		class 332nd_Ammobox_Ammo : 3AS_Supply_Large_Ammo_Prop
	{
		displayName = "[332nd] Ammo Supply Crate";
		editorCategory = "332nd_Objects";
		editorSubcategory = "332nd_Objects_Containers";
		author = "Magika";
		ace_dragging_canDrag = 1
		ace_dragging_canCarry = 1
		ace_dragging_dragPosition[] = {0, 1.2, 0};
		ace_dragging_dragDirection = 0;
		ace_dragging_carryDirection = 0;
		transportMaxWeapons = 1200;
		transportMaxMagazines = 666000;
		maximumLoad = 666000;
		armor = 666;
		class TransportWeapons
		{
			class _transport_rps1
			{
				weapon="332nd_Weaps_RPS1";
				count=5;
			};
		};
		class TransportMagazines
		{
			class _transport_10mw50
			{
				magazine="332nd_Weapons_Mags_10mw50";
				count=60;
			};
			class _transport_20mw40
			{
				magazine="332nd_Weapons_Mags_20mw40";
				count=60;
			};
			class _transport_10mw400
			{
				magazine="332nd_Weapons_Mags_10mw400";
				count=15;
			};
			class _transport_20mwup30
			{
				magazine="332nd_Weapons_Mags_20mwup30";
				count=40;
			};
			class _transport_20mwdp30
			{
				magazine="332nd_Weapons_Mags_20mwdp30";
				count=40;
			};
			class _transport_20mw150
			{
				magazine="332nd_Weapons_Mags_20mw150";
				count=20;
			};
			class _transport_40mw5
			{
				magazine="332nd_Weapons_Mags_40mw5";
				count=10;
			};
			class _transport_50mw4
			{
				magazine="332nd_Weapons_Mags_50mw4";
				count=10;
			};
			class _transport_stun5
			{
				magazine="332nd_Weapons_Mags_stun5";
				count=20;
			};
			class _transport_launcher_RPS6_AT_mags
			{
				magazine="332nd_Weapons_Mags_rps6_at";
				count=20;
			};
			class _transport_launcher_RPS6_AA_mags
			{
				magazine="332nd_Weapons_Mags_rps6_aa";
				count=20;
			};
			class _transport_launcher_RPS4_HEAT_mags
			{
				magazine="332nd_Weapons_Mags_rps4_heat";
				count=20;
			};
			class _transport_launcher_ARPS4_HE_mags
			{
				magazine="332nd_Weapons_Mags_rps4_he";
				count=20;
			};
			class _transport_launcher_PLX_AT_mags
			{
				magazine="332nd_Weapons_Mags_plx1_at";
				count=10;
			};
			class _transport_launcher_PLX_AP_mags
			{
				magazine="332nd_Weapons_Mags_plx1_ap";
				count=10;
			};
			class _transport_DC15a_HE
			{
				magazine="332nd_Weapons_Mags_GL_HE3";
				count=15;
			};
			class _transport_DC15c_HE
			{
				magazine="332nd_Weapons_Mags_GL_HE1";
				count=15;
			};
			class _transport_DC15a_AP
			{
				magazine="332nd_Weapons_Mags_GL_AP2";
				count=15;
			};
			class _transport_HuntIR_M203
			{
				magazine="ACE_HuntIR_M203";
				count=15;
			};
			class _transport_RGL_HE
			{
				magazine="332nd_Weapons_Mags_RGL_HE6";
				count=10;
			};
			class _transport_RGL_AP
			{
				magazine="332nd_Weapons_Mags_RGL_AP6";
				count=10;
			};
			class _transport_Drexl_SP
			{
				magazine="332nd_Weapons_Mags_shotgun_scatter20";
				count=20;
			};
			class _transport_Drexl_HE
			{
				magazine="332nd_Weapons_Mags_shotgun_he10";
				count=10;
			};
			class _transport_Drexl_Slug
			{
				magazine="332nd_Weapons_Mags_shotgun_slug24";
				count=10;
			};
		};
	};

	class 332nd_Ammobox_rearm : JLTS_Ammobox_ammo_GAR
	{
		displayName = "[332nd] Vehicle Rearm Supply Crate";
		editorCategory = "332nd_Objects";
		editorSubcategory = "332nd_Objects_Containers";
		author = "Hawkeye";
		ace_dragging_canDrag = 1
		ace_dragging_canCarry = 1
		ACE_maxWeightCarry = 66600;
		ACE_maxWeightDrag = 66600;
		transportMaxWeapons = 1200;
		transportMaxMagazines = 66600;
		maximumLoad = 66600;
		armor = 666;
		ace_rearm_defaultSupply = 1200;
		ace_refuel_fuelCargo=5000;
		ace_refuel_hooks[]= {{0.38,-3.17,-.7},{-0.41,-3.17,-.7}};
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};	
};
	
class cfgMods
{
	author="332nd_AUX_TEAM";
	timepacked="1687930196";
};