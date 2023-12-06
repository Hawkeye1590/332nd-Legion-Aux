class CfgPatches
{
	class 332nd_Legion_Supply
	{
		author = "332nd_AUX_TEAM";

		units[]=
		{
			"332nd_Ammobox_medical",
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

	class 332nd_Ammobox_medical : JLTS_Ammobox_support_GAR
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