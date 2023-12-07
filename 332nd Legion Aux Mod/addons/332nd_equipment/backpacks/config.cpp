class CfgPatches
{
	class 332nd_Legion_Backpacks
	{
		author = "332nd_AUX_TEAM";
		
		units[]=
		{
			"332nd_clone_backpack",
			"332nd_clone_engineer_backpack",
			"332nd_clone_heavy_backpack",
			"332nd_clone_medic_backpack",
			"332nd_clone_RTO_backpack",
			"332nd_clone_Mini_RTO_backpack",
			"332nd_clone_bag",
		};
		
		weapons[]=
		{
			"",
		};	
		
		requiredAddons[]=
		{
			"SWLB_equipment",
		};

		authors[] =
        {
			"332nd_AUX_TEAM",
			"Hawkeye",
			"Magic"
        };
	};
};

class CfgVehicles
{
	class SWLB_clone_backpack;
	class SWLB_clone_backpack_eod;
	class SWLB_clone_backpack_heavy;
	class SWLB_clone_backpack_medic;
	class SWLB_clone_backpack_RTO;
	class SWLB_clone_bag;
	class JLTS_Clone_backpack_RTO;
	
	class 332nd_clone_backpack: SWLB_clone_backpack
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Clone Backpack";
		maximumLoad=200;
		hiddenSelections[]=
		{
			"camo1",
			"cover",
			"heavy",
			"medic",
			"RTO"
		};
		hiddenselectionstextures[]=
		{
			"332nd_equipment\backpacks\textures\332nd_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};
	class 332nd_clone_engineer_backpack: SWLB_clone_backpack_eod
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Clone Engineer Backpack";
		maximumLoad=300;
		hiddenSelections[]=
		{
			"camo1",
			"cover",
			"heavy",
			"medic",
			"RTO"
		};
		hiddenselectionstextures[]=
		{
			"332nd_equipment\backpacks\textures\332nd_clone_engineer_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			""
		};
	};
	class 332nd_clone_heavy_backpack: SWLB_clone_backpack_heavy
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Clone Heavy Backpack";
		maximumLoad=400;
		hiddenSelections[]=
		{
			"camo1",
			"cover",
			"heavy",
			"medic",
			"RTO"
		};
		hiddenselectionstextures[]=
		{
			"332nd_equipment\backpacks\textures\332nd_clone_heavy_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};
	class 332nd_clone_medic_backpack: JLTS_Clone_backpack_RTO
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Clone Medic Backpack";
		maximumLoad=400;
		model="\SWLB_equipment\backpacks\swlb_clone_backpack.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"cover",
			"heavy",
			"medic",
			"RTO"
		};
		hiddenselectionstextures[]=
		{
			"332nd_equipment\backpacks\textures\332nd_clone_medic_backpack_co.paa",
			"332nd_equipment\backpacks\textures\332nd_backpack_accessories.paa",
			"",
			"332nd_equipment\backpacks\textures\332nd_backpack_accessories.paa"
		};
	};
	class 332nd_clone_bag: SWLB_clone_bag
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Clone Belt Bag";
		maximumLoad=200;
		hiddenselectionstextures[]=
		{
			"\SWLB_equipment\backpacks\data\bag_co.paa",
			""
		};
	};
	class 332nd_clone_RTO_backpack: JLTS_Clone_backpack_RTO
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Clone RTO Backpack";
		maximumLoad=300;
		model="\SWLB_equipment\backpacks\swlb_clone_backpack.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"cover",
			"heavy",
			"medic",
			"RTO"
		};
		hiddenselectionstextures[]=
		{
			"332nd_equipment\backpacks\textures\332nd_clone_RTO_backpack_co.paa",
			"",
			"",
			"",
			"332nd_equipment\backpacks\textures\332nd_backpack_accessories.paa"
		};
	};
	class 332nd_clone_Mini_RTO_backpack: JLTS_Clone_backpack_RTO
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Clone RTO Minipack";
		maximumLoad=300;
		model="\SWLB_equipment\backpacks\SWLB_clone_RTO_mini_backpack.p3d";
		hiddenSelections[]=
		{
			"main",
			"accumulator"
		};
		hiddenselectionstextures[]=
		{
			"\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_night_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_accumulator_night_co.paa"
		};
	};

};

class cfgMods
{
	author="332nd_AUX_TEAM";
	timepacked="1687930196";
};