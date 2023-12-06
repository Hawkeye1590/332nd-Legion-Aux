class CfgPatches
{
	class Cuyval_Dar
	{
		units[]=
		{
			"Sergeant_Jaster_Lokarrt",
			"Sergeant_Daneel_Viulf",
			"Sergeant_Kal_Skirata",
			"Sergeant_Joran_Wraith",
			"Sergeant_Mij_Gilamar",
			"Sergeant_Jast_Taloor",
			"Sergeant_Gant_Teggor",
			"Sergeant_Joss_Nazor",
		};
		weapons[]=
		{
			"Sergeant_Jaster_Lokarrt_vest",
			"Sergeant_Jaster_Lokarrt_traditional_helmet",
			"Sergeant_Daneel_Viulf_vest",
			"Sergeant_Daneel_Viulf_traditional_helmet",
			"Sergeant_Kal_Skirata_vest",
			"Sergeant_Kal_Skirata_traditional_helmet",
			"Sergeant_Joran_Wraith_vest",
			"Sergeant_Joran_Wraith_traditional_helmet",
			"Sergeant_Mij_Gilamar_vest",
			"Sergeant_Mij_Gilamar_traditional_helmet",
			"Sergeant_Jast_Taloor_vest",
			"Sergeant_Jast_Taloor_traditional_helmet",
			"Sergeant_Gant_Teggor_vest",
			"Sergeant_Gant_Teggor_traditional_helmet",
			"Sergeant_Joss_Nazor_vest",
			"Sergeant_Joss_Nazor_traditional_helmet",
		};
		author="Hawkeye";
		requiredAddons[]=
		{
			"ls_armor_greenfor",
			"ls_equipment_greenfor"
		};
	};
};
class CfgFactionClasses
{
	class Mandalorians
	{
		displayName= "Mandalorians";
	};
};
class CfgEditorSubcategories
{
	class Mandalorians_Categ_Cuyval_Dar
	{
		displayName= "Cuy'val Dar";
		priority=2;
	};	
};
class CfgWeapons
{
	class ls_mandalorian_traditional_helmet;
	class ls_mandalorian_traditional_vest;
    class ls_mandalorian_standard_backpack;
    class ls_mandalorian_undersuit_uniform;
    class ls_mandalorian_rangefinder_nvg;
	class SWLW_Westar35S;
    class UniformItem;
    class VestItem;
	class ItemInfo;
    

	class Sergeant_Jaster_Lokarrt_traditional_helmet: ls_mandalorian_traditional_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Sergeant Jaster Lo'karrt Traditional Helmet";    
		hiddenSelections[]=
		{
			"camo1",
			"visor",
			"neckTex"
		};        
        hiddenSelectionsTextures[]=
		{
            "332nd_mandalorians\Cuyval_Dar\data\Sergeant_Jaster_Lokarrt_traditional_helmet.paa",
            "332nd_mandalorians\Basic\visor.paa",
            "332nd_mandalorians\Basic\neckTex.paa"
         };
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		class HitpointsProtectionInfo
            {
                class Head
                {
                    hitPointName ="HitHead";
                    armor=20;
                    passThrough=0.5;
                };
                class Face
                {
                    hitPointName ="HitFace";
                    armor=20;
                    passThrough=0.30000001;
                };
			};
	};
	class Sergeant_Daneel_Viulf_traditional_helmet: ls_mandalorian_traditional_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Sergeant Dan'eel Viulf Traditional Helmet";    
		hiddenSelections[]=
		{
			"camo1",
			"visor",
			"neckTex"
		};        
        hiddenSelectionsTextures[]=
		{
            "332nd_mandalorians\Cuyval_Dar\data\Sergeant_Daneel_Viulf_traditional_helmet.paa",
            "332nd_mandalorians\Basic\visor.paa",
            "332nd_mandalorians\Basic\neckTex.paa"
         };
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		class HitpointsProtectionInfo
            {
                class Head
                {
                    hitPointName ="HitHead";
                    armor=20;
                    passThrough=0.5;
                };
                class Face
                {
                    hitPointName ="HitFace";
                    armor=20;
                    passThrough=0.30000001;
                };
			};
	};
	class Sergeant_Kal_Skirata_traditional_helmet: ls_mandalorian_traditional_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Sergeant Kal Skirata Traditional Helmet";    
		hiddenSelections[]=
		{
			"camo1",
			"visor",
			"neckTex"
		};        
        hiddenSelectionsTextures[]=
		{
            "332nd_mandalorians\Cuyval_Dar\data\Sergeant_Kal_Skirata_traditional_helmet.paa",
            "332nd_mandalorians\Basic\visor.paa",
            "332nd_mandalorians\Basic\neckTex.paa"
         };
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		class HitpointsProtectionInfo
            {
                class Head
                {
                    hitPointName ="HitHead";
                    armor=20;
                    passThrough=0.5;
                };
                class Face
                {
                    hitPointName ="HitFace";
                    armor=20;
                    passThrough=0.30000001;
                };
			};
	};
    class Sergeant_Joran_Wraith_traditional_helmet: ls_mandalorian_traditional_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Sergeant Joran Wraith Traditional Helmet";    
		hiddenSelections[]=
		{
			"camo1",
			"visor",
			"neckTex"
		};        
        hiddenSelectionsTextures[]=
		{
            "332nd_mandalorians\Cuyval_Dar\data\Sergeant_Joran_Wraith_traditional_helmet.paa",
            "332nd_mandalorians\Basic\visor.paa",
            "332nd_mandalorians\Basic\neckTex.paa"
         };
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		class HitpointsProtectionInfo
            {
                class Head
                {
                    hitPointName ="HitHead";
                    armor=20;
                    passThrough=0.5;
                };
                class Face
                {
                    hitPointName ="HitFace";
                    armor=20;
                    passThrough=0.30000001;
                };
			};
	};
	class Sergeant_Mij_Gilamar_traditional_helmet: ls_mandalorian_traditional_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Sergeant Mij Gilamar Traditional Helmet";    
		hiddenSelections[]=
		{
			"camo1",
			"visor",
			"neckTex"
		};        
        hiddenSelectionsTextures[]=
		{
            "332nd_mandalorians\Cuyval_Dar\data\Sergeant_Mij_Gilamar_traditional_helmet.paa",
            "332nd_mandalorians\Basic\visor.paa",
            "332nd_mandalorians\Basic\neckTex.paa"
         };
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		class HitpointsProtectionInfo
            {
                class Head
                {
                    hitPointName ="HitHead";
                    armor=20;
                    passThrough=0.5;
                };
                class Face
                {
                    hitPointName ="HitFace";
                    armor=20;
                    passThrough=0.30000001;
                };
			};
	};
	class Sergeant_Jast_Taloor_traditional_helmet: ls_mandalorian_traditional_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Sergeant Jast Tal'oor Traditional Helmet";    
		hiddenSelections[]=
		{
			"camo1",
			"visor",
			"neckTex"
		};        
        hiddenSelectionsTextures[]=
		{
            "332nd_mandalorians\Cuyval_Dar\data\Sergeant_Jast_Taloor_traditional_helmet.paa",
            "332nd_mandalorians\Basic\visor.paa",
            "332nd_mandalorians\Basic\neckTex.paa"
         };
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		class HitpointsProtectionInfo
            {
                class Head
                {
                    hitPointName ="HitHead";
                    armor=20;
                    passThrough=0.5;
                };
                class Face
                {
                    hitPointName ="HitFace";
                    armor=20;
                    passThrough=0.30000001;
                };
			};
	};
	class Sergeant_Gant_Teggor_traditional_helmet: ls_mandalorian_traditional_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Sergeant Gant Teggor Traditional Helmet";    
		hiddenSelections[]=
		{
			"camo1",
			"visor",
			"neckTex"
		};        
        hiddenSelectionsTextures[]=
		{
            "332nd_mandalorians\Cuyval_Dar\data\Sergeant_Gant_Teggor_traditional_helmet.paa",
            "332nd_mandalorians\Basic\visor.paa",
            "332nd_mandalorians\Basic\neckTex.paa"
         };
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		class HitpointsProtectionInfo
            {
                class Head
                {
                    hitPointName ="HitHead";
                    armor=20;
                    passThrough=0.5;
                };
                class Face
                {
                    hitPointName ="HitFace";
                    armor=20;
                    passThrough=0.30000001;
                };
			};
	};
	class Sergeant_Joss_Nazor_traditional_helmet: ls_mandalorian_traditional_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Sergeant Joss Nazor Traditional Helmet";    
		hiddenSelections[]=
		{
			"camo1",
			"visor",
			"neckTex"
		};        
        hiddenSelectionsTextures[]=
		{
            "332nd_mandalorians\Cuyval_Dar\data\Sergeant_Joss_Nazor_traditional_helmet.paa",
            "332nd_mandalorians\Basic\visor.paa",
            "332nd_mandalorians\Basic\neckTex.paa"
         };
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		class HitpointsProtectionInfo
            {
                class Head
                {
                    hitPointName ="HitHead";
                    armor=20;
                    passThrough=0.5;
                };
                class Face
                {
                    hitPointName ="HitFace";
                    armor=20;
                    passThrough=0.30000001;
                };
			};
	};
	class Sergeant_Jaster_Lokarrt_vest: ls_mandalorian_traditional_vest
    {
		displayName="Sergeant Jaster Lo'karrt Vest";
		hiddenSelections[]=
		{
			"camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"332nd_mandalorians\Cuyval_Dar\data\Sergeant_Jaster_Lokarrt_vest.paa"
		};
	};
    class Sergeant_Daneel_Viulf_vest: ls_mandalorian_traditional_vest
    {
		displayName="Sergeant Dan'eel Viulf Vest";
		hiddenSelections[]=
		{
			"camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"332nd_mandalorians\Cuyval_Dar\data\Sergeant_Daneel_Viulf_vest.paa"
		};
	};
    class Sergeant_Kal_Skirata_vest: ls_mandalorian_traditional_vest
    {
		displayName="Sergeant Kal Skirata Vest";
		hiddenSelections[]=
		{
			"camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"332nd_mandalorians\Cuyval_Dar\data\Sergeant_Kal_Skirata_vest.paa"
		};
	};
	class Sergeant_Joran_Wraith_vest: ls_mandalorian_traditional_vest
    {
		displayName="Sergeant Joran Wraith Vest";
		hiddenSelections[]=
		{
			"camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"332nd_mandalorians\Cuyval_Dar\data\Sergeant_Joran_Wraith_vest.paa"
		};
	};
    class Sergeant_Mij_Gilamar_vest: ls_mandalorian_traditional_vest
    {
		displayName="Sergeant Mij Gilamar Vest";
		hiddenSelections[]=
		{
			"camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"332nd_mandalorians\Cuyval_Dar\data\Sergeant_Mij_Gilamar_vest.paa"
		};
	};
    class Sergeant_Jast_Taloor_vest: ls_mandalorian_traditional_vest
    {
		displayName="Sergeant Jast Tal'oor Vest";
		hiddenSelections[]=
		{
			"camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"332nd_mandalorians\Cuyval_Dar\data\Sergeant_Jast_Taloor_vest.paa"
		};
	};
    class Sergeant_Gant_Teggor_vest: ls_mandalorian_traditional_vest
    {
		displayName="Sergeant Gant Teggor Vest";
		hiddenSelections[]=
		{
			"camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"332nd_mandalorians\Cuyval_Dar\data\Sergeant_Gant_Teggor_vest.paa"
		};
	};
	class Sergeant_Joss_Nazor_vest: ls_mandalorian_traditional_vest
    {
		displayName="Sergeant Joss Nazor Vest";
		hiddenSelections[]=
		{
			"camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"332nd_mandalorians\Cuyval_Dar\data\Sergeant_Joss_Nazor_vest.paa"
		};
	};

};       
class CfgVehicles
{
    class ls_mandalorian_base;
    

    class Sergeant_Jaster_Lokarrt: ls_mandalorian_base
	{
        author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Sergeant Jaster Lo'karrt";
		faction="Mandalorians";
		editorSubcategory="Mandalorians_Categ_Cuyval_Dar";
        linkedItems[]=
		{
			"Sergeant_Jaster_Lokarrt_vest",
			"Sergeant_Jaster_Lokarrt_traditional_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		respawnLinkedItems[]=
		{
			"Sergeant_Jaster_Lokarrt_vest",
			"Sergeant_Jaster_Lokarrt_traditional_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		weapons[]=
		{
			"SWLW_Westar35C",
			"SWLW_Westar35SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_Westar35C",
			"SWLW_Westar35SA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag"
		};
		respawnMagazines[]=
		{
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag"
		};
		items[]=
		{
			"ACE_flashlight_MX991",
			"ACE_MapTools",
			"ACE_microDAGR",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"ACE_flashlight_MX991",
			"ACE_MapTools",
			"ACE_microDAGR",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		armor=20;
        explosionShielding= 5;
		class HitpointsProtectionInfo
		{
			class Chest
				{
					hitPointName ="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
			class Neck
				{
					hitPointName ="HitNeck";
					armor=80;
					PassThrough=0.30000001;
				};
			class Body
				{
					hitPointName ="HitBody";
					armor=80;
					PassThrough=0.30000001;
				};
			class Pelvis
				{
					hitPointName ="HitPelvis";
					armor=80;
					PassThrough=0.30000001;
				};
			class Diaphragm
				{
					hitPointName ="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
			class Legs
				{
					hitPointName ="HitLegs";
					armor=45;
					passThrough=0.30000001;
				};
			class Arms
				{
					hitPointName ="HitArms";
					armor=45;
					passThrough=0.30000001;
				};
		};
    };	
    class Sergeant_Daneel_Viulf: ls_mandalorian_base
	{
        author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Sergeant Dan'eel Viulf";
		faction="Mandalorians";
		editorSubcategory="Mandalorians_Categ_Cuyval_Dar";
        linkedItems[]=
		{
			"Sergeant_Daneel_Viulf_vest",
			"Sergeant_Daneel_Viulf_traditional_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		respawnLinkedItems[]=
		{
			"Sergeant_Daneel_Viulf_vest",
			"Sergeant_Daneel_Viulf_traditional_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		weapons[]=
		{
			"SWLW_Westar35C",
			"SWLW_Westar35SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_Westar35C",
			"SWLW_Westar35SA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag"
		};
		respawnMagazines[]=
		{
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag"
		};
		items[]=
		{
			"ACE_flashlight_MX991",
			"ACE_MapTools",
			"ACE_microDAGR",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"ACE_flashlight_MX991",
			"ACE_MapTools",
			"ACE_microDAGR",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		armor=20;
        explosionShielding= 5;
		class HitpointsProtectionInfo
		{
			class Chest
				{
					hitPointName ="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
			class Neck
				{
					hitPointName ="HitNeck";
					armor=80;
					PassThrough=0.30000001;
				};
			class Body
				{
					hitPointName ="HitBody";
					armor=80;
					PassThrough=0.30000001;
				};
			class Pelvis
				{
					hitPointName ="HitPelvis";
					armor=80;
					PassThrough=0.30000001;
				};
			class Diaphragm
				{
					hitPointName ="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
			class Legs
				{
					hitPointName ="HitLegs";
					armor=45;
					passThrough=0.30000001;
				};
			class Arms
				{
					hitPointName ="HitArms";
					armor=45;
					passThrough=0.30000001;
				};
		};
    };	
    class Sergeant_Kal_Skirata: ls_mandalorian_base
	{
        author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Sergeant Kal Skirata";
		faction="Mandalorians";
		editorSubcategory="Mandalorians_Categ_Cuyval_Dar";
        linkedItems[]=
		{
			"Sergeant_Kal_Skirata_vest",
			"Sergeant_Kal_Skirata_traditional_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		respawnLinkedItems[]=
		{
			"Sergeant_Kal_Skirata_vest",
			"Sergeant_Kal_Skirata_traditional_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		weapons[]=
		{
			"SWLW_Westar35C",
			"SWLW_Westar35SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_Westar35C",
			"SWLW_Westar35SA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag"
		};
		respawnMagazines[]=
		{
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag"
		};
		items[]=
		{
			"ACE_flashlight_MX991",
			"ACE_MapTools",
			"ACE_microDAGR",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"ACE_flashlight_MX991",
			"ACE_MapTools",
			"ACE_microDAGR",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		armor=20;
        explosionShielding= 5;
		class HitpointsProtectionInfo
		{
			class Chest
				{
					hitPointName ="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
			class Neck
				{
					hitPointName ="HitNeck";
					armor=80;
					PassThrough=0.30000001;
				};
			class Body
				{
					hitPointName ="HitBody";
					armor=80;
					PassThrough=0.30000001;
				};
			class Pelvis
				{
					hitPointName ="HitPelvis";
					armor=80;
					PassThrough=0.30000001;
				};
			class Diaphragm
				{
					hitPointName ="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
			class Legs
				{
					hitPointName ="HitLegs";
					armor=45;
					passThrough=0.30000001;
				};
			class Arms
				{
					hitPointName ="HitArms";
					armor=45;
					passThrough=0.30000001;
				};
		};
    };	
	class Sergeant_Joran_Wraith: ls_mandalorian_base
	{
        author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Sergeant Joran Wraith";
		faction="Mandalorians";
		editorSubcategory="Mandalorians_Categ_Cuyval_Dar";
        linkedItems[]=
		{
			"Sergeant_Joran_Wraith_vest",
			"Sergeant_Joran_Wraith_traditional_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		respawnLinkedItems[]=
		{
			"Sergeant_Joran_Wraith_vest",
			"Sergeant_Joran_Wraith_traditional_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		weapons[]=
		{
			"SWLW_Westar35C",
			"SWLW_Westar35SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_Westar35C",
			"SWLW_Westar35SA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag"
		};
		respawnMagazines[]=
		{
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag"
		};
		items[]=
		{
			"ACE_flashlight_MX991",
			"ACE_MapTools",
			"ACE_microDAGR",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"ACE_flashlight_MX991",
			"ACE_MapTools",
			"ACE_microDAGR",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		armor=20;
        explosionShielding= 5;
		class HitpointsProtectionInfo
		{
			class Chest
				{
					hitPointName ="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
			class Neck
				{
					hitPointName ="HitNeck";
					armor=80;
					PassThrough=0.30000001;
				};
			class Body
				{
					hitPointName ="HitBody";
					armor=80;
					PassThrough=0.30000001;
				};
			class Pelvis
				{
					hitPointName ="HitPelvis";
					armor=80;
					PassThrough=0.30000001;
				};
			class Diaphragm
				{
					hitPointName ="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
			class Legs
				{
					hitPointName ="HitLegs";
					armor=45;
					passThrough=0.30000001;
				};
			class Arms
				{
					hitPointName ="HitArms";
					armor=45;
					passThrough=0.30000001;
				};
		};
    };	
    class Sergeant_Mij_Gilamar: ls_mandalorian_base
	{
        author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Sergeant Mij Gilamar";
		faction="Mandalorians";
		editorSubcategory="Mandalorians_Categ_Cuyval_Dar";
        linkedItems[]=
		{
			"Sergeant_Mij_Gilamar_vest",
			"Sergeant_Mij_Gilamar_traditional_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		respawnLinkedItems[]=
		{
			"Sergeant_Mij_Gilamar_vest",
			"Sergeant_Mij_Gilamar_traditional_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		weapons[]=
		{
			"SWLW_Westar35C",
			"SWLW_Westar35SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_Westar35C",
			"SWLW_Westar35SA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag"
		};
		respawnMagazines[]=
		{
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag"
		};
		items[]=
		{
			"ACE_flashlight_MX991",
			"ACE_MapTools",
			"ACE_microDAGR",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"ACE_flashlight_MX991",
			"ACE_MapTools",
			"ACE_microDAGR",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		armor=20;
        explosionShielding= 5;
		class HitpointsProtectionInfo
		{
			class Chest
				{
					hitPointName ="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
			class Neck
				{
					hitPointName ="HitNeck";
					armor=80;
					PassThrough=0.30000001;
				};
			class Body
				{
					hitPointName ="HitBody";
					armor=80;
					PassThrough=0.30000001;
				};
			class Pelvis
				{
					hitPointName ="HitPelvis";
					armor=80;
					PassThrough=0.30000001;
				};
			class Diaphragm
				{
					hitPointName ="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
			class Legs
				{
					hitPointName ="HitLegs";
					armor=45;
					passThrough=0.30000001;
				};
			class Arms
				{
					hitPointName ="HitArms";
					armor=45;
					passThrough=0.30000001;
				};
		};
    };
    class Sergeant_Jast_Taloor: ls_mandalorian_base
	{
        author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Sergeant Jast Tal'oor";
		faction="Mandalorians";
		editorSubcategory="Mandalorians_Categ_Cuyval_Dar";
        linkedItems[]=
		{
			"Sergeant_Jast_Taloor_vest",
			"Sergeant_Jast_Taloor_traditional_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		respawnLinkedItems[]=
		{
			"Sergeant_Jast_Taloor_vest",
			"Sergeant_Jast_Taloor_traditional_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		weapons[]=
		{
			"SWLW_Westar35C",
			"SWLW_Westar35SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_Westar35C",
			"SWLW_Westar35SA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag"
		};
		respawnMagazines[]=
		{
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag"
		};
		items[]=
		{
			"ACE_flashlight_MX991",
			"ACE_MapTools",
			"ACE_microDAGR",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"ACE_flashlight_MX991",
			"ACE_MapTools",
			"ACE_microDAGR",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		armor=20;
        explosionShielding= 5;
		class HitpointsProtectionInfo
		{
			class Chest
				{
					hitPointName ="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
			class Neck
				{
					hitPointName ="HitNeck";
					armor=80;
					PassThrough=0.30000001;
				};
			class Body
				{
					hitPointName ="HitBody";
					armor=80;
					PassThrough=0.30000001;
				};
			class Pelvis
				{
					hitPointName ="HitPelvis";
					armor=80;
					PassThrough=0.30000001;
				};
			class Diaphragm
				{
					hitPointName ="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
			class Legs
				{
					hitPointName ="HitLegs";
					armor=45;
					passThrough=0.30000001;
				};
			class Arms
				{
					hitPointName ="HitArms";
					armor=45;
					passThrough=0.30000001;
				};
		};
    };	
    class Sergeant_Gant_Teggor: ls_mandalorian_base
	{
        author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Sergeant Gant Teggor";
		faction="Mandalorians";
		editorSubcategory="Mandalorians_Categ_Cuyval_Dar";
        linkedItems[]=
		{
			"Sergeant_Gant_Teggor_vest",
			"Sergeant_Gant_Teggor_traditional_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		respawnLinkedItems[]=
		{
			"Sergeant_Gant_Teggor_vest",
			"Sergeant_Gant_Teggor_traditional_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		weapons[]=
		{
			"SWLW_Westar35C",
			"SWLW_Westar35SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_Westar35C",
			"SWLW_Westar35SA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag"
		};
		respawnMagazines[]=
		{
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag"
		};
		items[]=
		{
			"ACE_flashlight_MX991",
			"ACE_MapTools",
			"ACE_microDAGR",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"ACE_flashlight_MX991",
			"ACE_MapTools",
			"ACE_microDAGR",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		armor=20;
        explosionShielding= 5;
		class HitpointsProtectionInfo
		{
			class Chest
				{
					hitPointName ="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
			class Neck
				{
					hitPointName ="HitNeck";
					armor=80;
					PassThrough=0.30000001;
				};
			class Body
				{
					hitPointName ="HitBody";
					armor=80;
					PassThrough=0.30000001;
				};
			class Pelvis
				{
					hitPointName ="HitPelvis";
					armor=80;
					PassThrough=0.30000001;
				};
			class Diaphragm
				{
					hitPointName ="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
			class Legs
				{
					hitPointName ="HitLegs";
					armor=45;
					passThrough=0.30000001;
				};
			class Arms
				{
					hitPointName ="HitArms";
					armor=45;
					passThrough=0.30000001;
				};
		};
    };	
	class Sergeant_Joss_Nazor: ls_mandalorian_base
	{
        author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Sergeant Joss Nazor";
		faction="Mandalorians";
		editorSubcategory="Mandalorians_Categ_Cuyval_Dar";
        linkedItems[]=
		{
			"Sergeant_Joss_Nazor_vest",
			"Sergeant_Joss_Nazor_traditional_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		respawnLinkedItems[]=
		{
			"Sergeant_Joss_Nazor_vest",
			"Sergeant_Joss_Nazor_traditional_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		weapons[]=
		{
			"SWLW_Westar35C",
			"SWLW_Westar35SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_Westar35C",
			"SWLW_Westar35SA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag"
		};
		respawnMagazines[]=
		{
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35C_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag",
			"SWLW_Westar35SA_mag"
		};
		items[]=
		{
			"ACE_flashlight_MX991",
			"ACE_MapTools",
			"ACE_microDAGR",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"ACE_flashlight_MX991",
			"ACE_MapTools",
			"ACE_microDAGR",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		armor=20;
        explosionShielding= 5;
		class HitpointsProtectionInfo
		{
			class Chest
				{
					hitPointName ="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
			class Neck
				{
					hitPointName ="HitNeck";
					armor=80;
					PassThrough=0.30000001;
				};
			class Body
				{
					hitPointName ="HitBody";
					armor=80;
					PassThrough=0.30000001;
				};
			class Pelvis
				{
					hitPointName ="HitPelvis";
					armor=80;
					PassThrough=0.30000001;
				};
			class Diaphragm
				{
					hitPointName ="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
			class Legs
				{
					hitPointName ="HitLegs";
					armor=45;
					passThrough=0.30000001;
				};
			class Arms
				{
					hitPointName ="HitArms";
					armor=45;
					passThrough=0.30000001;
				};
		};
    };
		
    
};

class cfgMods
{
	author="Hawkeye";
	timepacked="1686884054";
};