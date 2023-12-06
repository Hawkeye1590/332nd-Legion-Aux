class CfgPatches
{
	class 332nd_Legion_Vests
	{
		author = "332nd_AUX_TEAM";
		units[]=
		{
			""
		};
		weapons[]=
		{
			"332nd_VEST_CT_1",
			"332nd_VEST_CT_2",
			"332nd_VEST_CT_3",
			"332nd_VEST_CT_4",
			"332nd_VEST_CT_5",
			"332nd_VEST_CT_6",
			"332nd_VEST_NCO_1",
			"332nd_VEST_NCO_2",
			"332nd_VEST_NCO_3",
			"332nd_VEST_OFFICER_1",
			"332nd_VEST_OFFICER_2"
		};
		authors[] =
        {
			"332nd_AUX_TEAM",
			"Magic"
        };
	};
};
class CfgWeapons
{
	class ItemInfo;
	class UniformItem;
	class VestItem;
	class HeadgearItem;
	class SWLB_clone_basic_armor;
	class SWLB_clone_assault_armor;
	class SWLB_clone_cfr_armor;
	class SWLB_clone_specialist_armor;
	class SWLB_CEE_ARF_Vest;
	class SWLB_clone_recon_armor;
	class SWLB_clone_medic_armor;
	class SWLB_clone_kama_armor;
	class SWLB_CEE_Wolffe_Vest;
	class SWLB_CEE_Hazard_Vest;
	class SWLB_clone_officer_armor;
	class SWLB_CEE_Recon_Lieutenant;
	
	class 332nd_VEST_CT_1: SWLB_clone_basic_armor
	{
		displayName="[332nd] Clone Trooper Vest [1]";
		author="Magic";
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_basic_armor.p3d";
			containerClass="Supply70";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 332nd_VEST_CT_2: SWLB_clone_assault_armor
	{
		displayName="[332nd] Clone Trooper Vest [2]";
		author="Magic";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\light_accessories_co.paa",
			"\SWLB_clones\data\heavy_accessories_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_assault_armor.p3d";
			author="Magic";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
			containerClass="Supply70";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 332nd_VEST_CT_3: SWLB_clone_cfr_armor
	{
		displayName="[332nd] Clone Trooper Vest [3]";
		author="Magic";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\heavy_accessories_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_cfr_armor.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			containerClass="Supply70";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 332nd_VEST_CT_4: SWLB_clone_specialist_armor
	{
		displayName="[332nd] Clone Trooper Vest [4]";
		author="Magic";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\light_accessories_co.paa",
			"\SWLB_clones\data\heavy_accessories_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_specialist_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
			containerClass="Supply70";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 332nd_VEST_CT_5: SWLB_CEE_ARF_Vest
	{
		displayName="[332nd] Clone Trooper Vest [5]";
		author="Magic";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"SWLB_clones\data\heavy_accessories_co.paa",
			"SWLB_clones\data\officer_accessories_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_ARF_Vest.p3d";
			containerClass="Supply70";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3"
			};
			mass=80;
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 332nd_VEST_CT_6: SWLB_clone_recon_armor
	{
		displayName="[332nd] Clone Trooper Vest [6]";
		author="Magic";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"holster",
			"pauldron"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\heavy_accessories_co.paa",
			"",
			"\SWLB_clones\data\heavy_accessories_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_recon_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"holster",
				"pauldron"
			};
			mass=80;
			containerClass="Supply70";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 332nd_VEST_Medic: SWLB_clone_medic_armor
	{
		displayName="[332nd] Clone Trooper Medic Vest";
		author="Magic";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\heavy_accessories_medic_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_medic_armor.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			containerClass="Supply70";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 332nd_VEST_NCO_1: SWLB_clone_kama_armor
	{
		displayName="[332nd] Clone Trooper NCO Vest [1]";
		author="Magic";
		hiddenSelections[]=
		{
			"camo1",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\officer_accessories_co.paa",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_kama_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"rank"
			};
			containerClass="Supply70";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 332nd_VEST_NCO_2: SWLB_CEE_Wolffe_Vest
	{
		displayName="[332nd] Clone Trooper NCO Vest [2]";
		author="Magic";
		uniformModel="\SWLB_CEE\data\SWLB_CEE_Wolffe_Vest.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"swlb_clones\data\officer_accessories_co.paa",
			"swlb_clones\data\mc_camo1_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Wolffe_Vest.p3d";
			mass=80;
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			containerClass="Supply70";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 332nd_VEST_NCO_3: SWLB_CEE_Hazard_Vest
	{
		displayName="[332nd] Clone Trooper NCO Vest [3]";
		author="Magic";
		uniformModel="\SWLB_CEE\data\SWLB_CEE_Hazard_Vest.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"SWLB_clones\data\officer_accessories_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Hazard_Vest.p3d";
			mass=80;
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			containerClass="Supply70";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 332nd_VEST_OFFICER_1: SWLB_clone_officer_armor
	{
		displayName="[332nd] Clone Trooper Officer Vest [1]";
		author="Magic";
		uniformModel="\SWLB_clones\SWLB_clone_officer_armor.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\officer_accessories_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_officer_armor.p3d";
			mass=80;
			hiddenSelections[]=
			{
				"camo1"
			};
			containerClass="Supply70";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};	
	class 332nd_VEST_OFFICER_2: SWLB_CEE_Recon_Lieutenant
	{
		displayName="[332nd] Clone Trooper Officer Vest [2]";
		author="Magic";
		uniformModel="\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones\data\officer_accessories_co.paa",
			"SWLB_clones\data\heavy_accessories_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
			mass=80;
			hiddenSelections[]=
			{
				"camo1"
			};
			containerClass="Supply70";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};
};

class cfgMods
{
	author="332nd_AUX_TEAM";
	timepacked="1690008461";
};