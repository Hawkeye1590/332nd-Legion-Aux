class CfgPatches
{
	class Jango_Grunts
	{
		units[]=
		{
			"Jango_Grunt_1",
			"Jango_Grunt_2",
			"Jango_Grunt_3",
			"Jango_Grunt_4",
		};
		weapons[]=
		{
			"Jango_Grunt_traditional_helmet_1",
			"Jango_Grunt_traditional_helmet_2",
			"Jango_Grunt_traditional_helmet_3",
			"Jango_Grunt_traditional_helmet_4",
			"Jango_Grunt_vest_1",
            "Jango_Grunt_vest_2",
            "Jango_Grunt_vest_3",
            "Jango_Grunt_vest_4",
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
	class Mandalorians_Categ_Jango_Grunts
	{
		displayName= "Jango's Grunts";
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
    

	class Jango_Grunt_traditional_helmet_1: ls_mandalorian_traditional_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Jango's Grunt Traditional Helmet 1";    
		hiddenSelections[]=
		{
			"camo1",
			"visor",
			"neckTex"
		};        
        hiddenSelectionsTextures[]=
		{
            "332nd_mandalorians\Jango_Grunts\data\Jango_Grunt_traditional_helmet_1.paa",
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
	class Jango_Grunt_traditional_helmet_2: ls_mandalorian_traditional_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Jango's Grunt Traditional Helmet 2";    
		hiddenSelections[]=
		{
			"camo1",
			"visor",
			"neckTex"
		};        
        hiddenSelectionsTextures[]=
		{
            "332nd_mandalorians\Jango_Grunts\data\Jango_Grunt_traditional_helmet_2.paa",
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
	class Jango_Grunt_traditional_helmet_3: ls_mandalorian_traditional_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Jango's Grunt Traditional Helmet 3";    
		hiddenSelections[]=
		{
			"camo1",
			"visor",
			"neckTex"
		};        
        hiddenSelectionsTextures[]=
		{
            "332nd_mandalorians\Jango_Grunts\data\Jango_Grunt_traditional_helmet_3.paa",
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
	class Jango_Grunt_traditional_helmet_4: ls_mandalorian_traditional_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Jango's Grunt Traditional Helmet 4";    
		hiddenSelections[]=
		{
			"camo1",
			"visor",
			"neckTex"
		};        
        hiddenSelectionsTextures[]=
		{
            "332nd_mandalorians\Jango_Grunts\data\Jango_Grunt_traditional_helmet_4.paa",
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
    class Jango_Grunt_vest_1: ls_mandalorian_traditional_vest
    {
		displayName="Jango's Grunt Vest 1";
		hiddenSelections[]=
		{
			"camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"332nd_mandalorians\Jango_Grunts\data\Jango_Grunt_vest_1.paa"
		};
	};
    class Jango_Grunt_vest_2: ls_mandalorian_traditional_vest
    {
		displayName="Jango's Grunt Vest 2";
		hiddenSelections[]=
		{
			"camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"332nd_mandalorians\Jango_Grunts\data\Jango_Grunt_vest_2.paa"
		};
	};
    class Jango_Grunt_vest_3: ls_mandalorian_traditional_vest
    {
		displayName="Jango's Grunt Vest 3";
		hiddenSelections[]=
		{
			"camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"332nd_mandalorians\Jango_Grunts\data\Jango_Grunt_vest_3.paa"
		};
	};
    class Jango_Grunt_vest_4: ls_mandalorian_traditional_vest
    {
		displayName="Jango's Grunt Vest 4";
		hiddenSelections[]=
		{
			"camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"332nd_mandalorians\Jango_Grunts\data\Jango_Grunt_vest_4.paa"
		};
	};

};       
class CfgVehicles
{
    class ls_mandalorian_base;
    

    class Jango_Grunt_1: ls_mandalorian_base
	{
        author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Jango's Grunt 1";
		faction="Mandalorians";
		editorSubcategory="Mandalorians_Categ_Jango_Grunts";
        linkedItems[]=
		{
			"Jango_Grunt_vest_1",
			"Jango_Grunt_traditional_helmet_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		respawnLinkedItems[]=
		{
			"Jango_Grunt_vest_1",
			"Jango_Grunt_traditional_helmet_1",
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
    };	
    class Jango_Grunt_2: ls_mandalorian_base
	{
        author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Jango's Grunt 2";
		faction="Mandalorians";
		editorSubcategory="Mandalorians_Categ_Jango_Grunts";
        linkedItems[]=
		{
			"Jango_Grunt_vest_2",
			"Jango_Grunt_traditional_helmet_2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		respawnLinkedItems[]=
		{
			"Jango_Grunt_vest_2",
			"Jango_Grunt_traditional_helmet_2",
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
    };
    class Jango_Grunt_3: ls_mandalorian_base
	{
        author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Jango's Grunt 3";
		faction="Mandalorians";
		editorSubcategory="Mandalorians_Categ_Jango_Grunts";
        linkedItems[]=
		{
			"Jango_Grunt_vest_3",
			"Jango_Grunt_traditional_helmet_3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		respawnLinkedItems[]=
		{
			"Jango_Grunt_vest_3",
			"Jango_Grunt_traditional_helmet_3",
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
    };	
    class Jango_Grunt_4: ls_mandalorian_base
	{
        author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Jango's Grunt 4";
		faction="Mandalorians";
		editorSubcategory="Mandalorians_Categ_Jango_Grunts";
        linkedItems[]=
		{
			"Jango_Grunt_vest_4",
			"Jango_Grunt_traditional_helmet_4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		respawnLinkedItems[]=
		{
			"Jango_Grunt_vest_4",
			"Jango_Grunt_traditional_helmet_4",
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
    };	
    
};

class cfgMods
{
	author="Hawkeye";
	timepacked="1686884054";
};