class CfgPatches
{
	class 332nd_Legion_NVGs
	{
		author = "332nd_AUX_TEAM";
		units[]=
		{
			
		};
		weapons[]=
		{
			"332nd_NVGs_NVG_mode",
			"332nd_NVG_Macrobinocular_1",
			"332nd_NVG_Macrobinocular_2",
			"332nd_NVG_Macrobinocular_1_alt",
			"332nd_NVG_Macrobinocular_2_alt",
			"332nd_NVG_Macrobinocular_1_NCO",
			"332nd_NVG_Macrobinocular_2_NCO",
			"332nd_NVG_Macrobinocular_1_alt_NCO",
			"332nd_NVG_Macrobinocular_2_alt_NCO",
			"332nd_NVG_Rangefinder_P1",
			"332nd_NVG_Rangefinder_P2",
			"332nd_NVG_Marshal_Sun_Visor_P1",
			"332nd_NVG_Marshal_Sun_Visor_P2",
			"332nd_NVG_Sun_Visor_p1",
			"332nd_NVG_Sun_Visor_p2",
			"332nd_NVG_Marshal_Sun_Visor_P2_red",
			"332nd_NVG_Marshal_Sun_Visor_P2_grey",
			"332nd_NVG_Marshal_Sun_Visor_P2_orange",
			"332nd_NVG_Sun_Visor_p2_red",
			"332nd_NVG_Sun_Visor_p2_grey",
			"332nd_NVG_Sun_Visor_p2_orange"
		};
	};
	authors[] =
        {
			"332nd_AUX_TEAM",
			"Magic"
        };
};

class CfgGlasses
{
	class None;
	class 332nd_NVG_Rangefinder_p1_facewear: None
	{
		scope=1;
		displayName="[332nd] Clone Rangefinder [P1]";
		author="Magic";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_range_ui_ca.paa";
		model="\lsd_equipment_bluefor\nvg\gar\lsd_gar_p1Rangefinder_nvg_off.p3d";
		hiddenSelections[] = { "camo1" };
    	hiddenSelectionsTextures[] = { "\lsd_equipment_bluefor\nvg\gar\visor\data\swlb_clone_nvg_co.paa" };
	};
	class 332nd_NVG_Rangefinder_p2_facewear: None
	{
		scope=1;
		displayName="[332nd] Clone Rangefinder [P2]";
		author="Magic";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_range_ui_ca.paa";
		model="\lsd_equipment_bluefor\nvg\gar\lsd_gar_rangefinder_nvg_off.p3d";
		hiddenSelections[] = { "camo1" };
    	hiddenSelectionsTextures[] = { "\lsd_equipment_bluefor\nvg\gar\visor\data\swlb_clone_nvg_co.paa" };
	};
	class 332nd_NVG_Rangefinder_p1_alt_facewear: None
	{
		scope=1;
		displayName="[332nd] Clone Rangefinder [P1 ALT]";
		author="Magic";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_range_ui_ca.paa";
		model="\lsd_equipment_bluefor\nvg\gar\lsd_gar_p1Rangefinder_nvg_on.p3d";
		hiddenSelections[] = { "camo1" };
    	hiddenSelectionsTextures[] = { "\lsd_equipment_bluefor\nvg\gar\visor\data\swlb_clone_nvg_co.paa" };
	};
	class 332nd_NVG_Rangefinder_p2_alt_facewear: None
	{
		scope=1;
		displayName="[332nd] Clone Rangefinder [P2 ALT]";
		author="Magic";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_range_ui_ca.paa";
		model="\lsd_equipment_bluefor\nvg\gar\lsd_gar_rangefinder_nvg_on.p3d";
		hiddenSelections[] = { "camo1" };
    	hiddenSelectionsTextures[] = { "\lsd_equipment_bluefor\nvg\gar\visor\data\swlb_clone_nvg_co.paa" };
	};
};
class CfgWeapons
{
	class ItemInfo;
	class UniformItem;
	class VestItem;
	class HeadgearItem;
	class JLTS_PA_Core_P1_CloneNVG;
	class JLTS_PA_Core_P1_CloneCC;
	class JLTS_PA_Core_P1_CloneMC;
	class JLTS_PA_Core_P1_CloneRangefinder;
	class JLTS_NVG_droid_chip_1;
	class lsd_gar_rangefinder_nvg;
	class lsd_gar_p1Rangefinder_nvg;
	class lsd_gar_p2MarshalCommander_nvg;
	class lsd_gar_p1MarshalCommander_nvg;
	class 332nd_NVGs_NVG_mode: JLTS_NVG_droid_chip_1
	{
		author="Magic";
		displayName="[332nd] Clone Visor NV Mode";
		picture="\SWLB_equipment\facewears\data\ui\icon_SWLB_clone_P1_HUD_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		thermalMode[]={0,1};
		class ItemInfo
		{
			type=616;
			mass=20;
		};
	};
	class 332nd_NVG_Macrobinocular_1: JLTS_NVG_droid_chip_1
	{
		author="Magic";
		displayName="[332nd] Clone Macrobinoculars 1";
		model="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
    	hiddenSelectionsTextures[] = { "\332nd_equipment\nvg\textures\332nd_clone_binos_nvg_1_co.paa" };
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		thermalMode[]={0,1};
		class ItemInfo
		{
			type=616;
			uniformModel="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_off.p3d";
			modelOff="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_off.p3d";
			mass=20;
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class 332nd_NVG_Macrobinocular_2: JLTS_NVG_droid_chip_1
	{
		author="Magic";
		displayName="[332nd] Clone Macrobinoculars 2";
		model="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
    	hiddenSelectionsTextures[] = { "\332nd_equipment\nvg\textures\332nd_clone_binos_nvg_2_co.paa" };
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		thermalMode[]={0,1};
		class ItemInfo
		{
			type=616;
			uniformModel="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_off.p3d";
			modelOff="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_off.p3d";
			mass=20;
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class 332nd_NVG_Macrobinocular_1_alt: JLTS_NVG_droid_chip_1
	{
		author="Magic";
		displayName="[332nd] Clone Macrobinoculars 1 ALT";
		model="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
    	hiddenSelectionsTextures[] = { "\332nd_equipment\nvg\textures\332nd_clone_binos_nvg_1_co.paa" };
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		thermalMode[]={0,1};
		class ItemInfo
		{
			type=616;
			uniformModel="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
			modelOff="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
			mass=20;
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class 332nd_NVG_Macrobinocular_2_alt: JLTS_NVG_droid_chip_1
	{
		author="Magic";
		displayName="[332nd] Clone Macrobinoculars 2 ALT";
		model="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
    	hiddenSelectionsTextures[] = { "\332nd_equipment\nvg\textures\332nd_clone_binos_nvg_2_co.paa" };
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		thermalMode[]={0,1};
		class ItemInfo
		{
			type=616;
			uniformModel="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
			modelOff="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
			mass=20;
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class 332nd_NVG_Macrobinocular_1_NCO: JLTS_NVG_droid_chip_1
	{
		author="Magic";
		displayName="[332nd] Clone NCO Macrobinoculars 1";
		model="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
		hiddenSelections[] = { "camo1" };
    	hiddenSelectionsTextures[] = { "\332nd_equipment\nvg\textures\332nd_clone_binos_nvg_1_co.paa" };
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI",
		};
		thermalMode[]={0,1};
		class ItemInfo
		{
			type=616;
			uniformModel="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_off.p3d";
			modelOff="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_off.p3d";
			mass=20;
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class 332nd_NVG_Macrobinocular_2_NCO: JLTS_NVG_droid_chip_1
	{
		author="Magic";
		displayName="[332nd] Clone NCO Macrobinoculars 2";
		model="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
		hiddenSelections[] = { "camo1" };
    	hiddenSelectionsTextures[] = { "\332nd_equipment\nvg\textures\332nd_clone_binos_nvg_2_co.paa" };
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI",
		};
		thermalMode[]={0,1};
		class ItemInfo
		{
			type=616;
			uniformModel="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_off.p3d";
			modelOff="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_off.p3d";
			mass=20;
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class 332nd_NVG_Macrobinocular_1_alt_NCO: JLTS_NVG_droid_chip_1
	{
		author="Magic";
		displayName="[332nd] Clone NCO Macrobinoculars 1 ALT";
		model="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
		hiddenSelections[] = { "camo1" };
    	hiddenSelectionsTextures[] = { "\332nd_equipment\nvg\textures\332nd_clone_binos_nvg_1_co.paa" };
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI",
		};
		thermalMode[]={0,1};
		class ItemInfo
		{
			type=616;
			uniformModel="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
			modelOff="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
			mass=20;
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class 332nd_NVG_Macrobinocular_2_alt_NCO: JLTS_NVG_droid_chip_1
	{
		author="Magic";
		displayName="[332nd] Clone NCO Macrobinoculars 2 ALT";
		model="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
		hiddenSelections[] = { "camo1" };
    	hiddenSelectionsTextures[] = { "\332nd_equipment\nvg\textures\332nd_clone_binos_nvg_2_co.paa" };
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI",
		};
		thermalMode[]={0,1};
		class ItemInfo
		{
			type=616;
			uniformModel="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
			modelOff="\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
			mass=20;
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class 332nd_NVG_Rangefinder_P1: lsd_gar_p1Rangefinder_nvg
	{
		scope=1
		displayName="[332nd] Clone NCO Rangefinder [P1]";
		model="\lsd_equipment_bluefor\nvg\gar\lsd_gar_p1Rangefinder_nvg_on.p3d";
		modelOptics="-";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
		ace_nightvision_border="data\nvg_mask_binos_4096.paa";
	};
	class 332nd_NVG_Rangefinder_P2: lsd_gar_rangefinder_nvg
	{
		displayName="[332nd] Clone NCO Rangefinder [P2]";
		model="\lsd_equipment_bluefor\nvg\gar\lsd_gar_rangefinder_nvg_on.p3d";
		modelOptics="-";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
		ace_nightvision_border="data\nvg_mask_binos_4096.paa";
	};
	class 332nd_NVG_Marshal_Sun_Visor_P2_red: lsd_gar_p2MarshalCommander_nvg
	{
		displayName="[332nd] Clone Marshal Sun Visor [P2 RED]";
		model="\lsd_equipment_bluefor\nvg\gar\lsd_gar_p1Rangefinder_nvg_on.p3d";
		hiddenSelectionsTextures[]=
		{
			"332nd_equipment\nvg\textures\332nd_Sun_Visor_Red.paa",
			"332nd_equipment\nvg\textures\332nd_Sun_Visor_Red.paa",
			"332nd_equipment\nvg\textures\332nd_Sun_Visor_Red.paa"
		};
		modelOptics="-";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
		ace_nightvision_border="data\nvg_mask_binos_4096.paa";
	};
	class 332nd_NVG_Marshal_Sun_Visor_P2_grey: lsd_gar_p2MarshalCommander_nvg
	{
		displayName="[332nd] Clone Marshal Sun Visor [P2 GREY]";
		model="\lsd_equipment_bluefor\nvg\gar\lsd_gar_p1Rangefinder_nvg_on.p3d";
		hiddenSelectionsTextures[]=
		{
			"332nd_equipment\nvg\textures\332nd_Sun_Visor_Grey.paa",
			"332nd_equipment\nvg\textures\332nd_Sun_Visor_Grey.paa",
			"332nd_equipment\nvg\textures\332nd_Sun_Visor_Grey.paa"
		};
		modelOptics="-";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
		ace_nightvision_border="data\nvg_mask_binos_4096.paa";
	};
	class 332nd_NVG_Marshal_Sun_Visor_P2_orange: lsd_gar_p2MarshalCommander_nvg
	{
		displayName="[332nd] Clone Marshal Sun Visor [P2 ORANGE]";
		model="\lsd_equipment_bluefor\nvg\gar\lsd_gar_p1Rangefinder_nvg_on.p3d";
		hiddenSelectionsTextures[]=
		{
			"332nd_equipment\nvg\textures\332nd_Sun_Visor_Orange.paa",
			"332nd_equipment\nvg\textures\332nd_Sun_Visor_Orange.paa",
			"332nd_equipment\nvg\textures\332nd_Sun_Visor_Orange.paa"
		};
		modelOptics="-";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
		ace_nightvision_border="data\nvg_mask_binos_4096.paa";
	};
	class 332nd_NVG_Marshal_Sun_Visor_P1: lsd_gar_p1MarshalCommander_nvg
	{
		scope=1
		displayName="[332nd] Clone Marshal Sun Visor [P1]";
		model="\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p1Commander_nvg";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\lsd_equipment_bluefor\nvg\gar\visor\data\SWLB_clone_nvg_co.paa",
			"\lsd_equipment_bluefor\nvg\gar\visor\data\SWLB_clone_nvg_co.paa",
			""
		};
		modelOptics="-";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
		ace_nightvision_border="data\nvg_mask_binos_4096.paa";
	};
	class 332nd_NVG_Rangefinder_P2: lsd_gar_rangefinder_nvg
	{
		displayName="[332nd] Clone NCO Rangefinder [P2]";
		model="\lsd_equipment_bluefor\nvg\gar\lsd_gar_rangefinder_nvg_on.p3d";
		modelOptics="-";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
		ace_nightvision_border="data\nvg_mask_binos_4096.paa";
	};
	class 332nd_NVG_Sun_Visor_p1: JLTS_NVG_droid_chip_1
	{
		scope=1
		author="Magic";
		displayName="[332nd] Clone Sun Visor [P1]";
		model="\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p1Commander_nvg";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_equipment\nvg\textures\332nd_Sun_Visor_Red.paa",
			"332nd_equipment\nvg\textures\332nd_Sun_Visor_Red.paa",
			""
		};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
		class ItemInfo
		{
			type=616;
			uniformModel="\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p1Commander_nvg";
			modelOff="\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p1Commander_nvg";
			mass=20;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3"
			};
		};
	};
	class 332nd_NVG_Sun_Visor_p2_red: JLTS_NVG_droid_chip_1
	{
		author="Magic";
		displayName="[332nd] Clone NCO Sun Visor [RED]";
		model="\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p2Commander_nvg";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_equipment\nvg\textures\332nd_Sun_Visor_Red.paa",
			"332nd_equipment\nvg\textures\332nd_Sun_Visor_Red.paa",
			""
		};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
		class ItemInfo
		{
			type=616;
			uniformModel="\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p2Commander_nvg";
			modelOff="\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p2Commander_nvg";
			mass=20;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3"
			};
		};
	};
	class 332nd_NVG_Sun_Visor_p2_grey: JLTS_NVG_droid_chip_1
	{
		author="Magic";
		displayName="[332nd] Clone NCO Sun Visor [GREY]";
		model="\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p2Commander_nvg";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_equipment\nvg\textures\332nd_Sun_Visor_Grey.paa",
			"332nd_equipment\nvg\textures\332nd_Sun_Visor_Grey.paa",
			""
		};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
		class ItemInfo
		{
			type=616;
			uniformModel="\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p2Commander_nvg";
			modelOff="\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p2Commander_nvg";
			mass=20;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3"
			};
		};
	};
	class 332nd_NVG_Sun_Visor_p2_orange: JLTS_NVG_droid_chip_1
	{
		author="Magic";
		displayName="[332nd] Clone NCO Sun Visor [ORANGE]";
		model="\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p2Commander_nvg";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_equipment\nvg\textures\332nd_Sun_Visor_Orange.paa",
			"332nd_equipment\nvg\textures\332nd_Sun_Visor_Orange.paa",
			""
		};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
		class ItemInfo
		{
			type=616;
			uniformModel="\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p2Commander_nvg";
			modelOff="\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p2Commander_nvg";
			mass=20;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3"
			};
		};
	};
};

class cfgMods
{
	author="332nd_AUX_TEAM";
	timepacked="1690008461";
};