class CfgPatches
{
	class True_Mandalorians
	{
		units[]=
		{
			"True_Mandalorian_Recruit", //Evaar`la Verd
            "True_Mandalorian_Private", //Verd`ika
            "True_Mandalorian_Sergeant", //Ruus'alor
            "True_Mandalorian_Lieutenant", //Ver`alor
            "True_Mandalorian_Captain", //Alor`ad
		};
		weapons[]=
		{
			"True_Mandalorians_traditional_helmet",
			"True_Mandalorians_vest_1", //Recruit
            "True_Mandalorians_vest_2", //Private
            "True_Mandalorians_vest_3", //Sergeant
            "True_Mandalorians_vest_4", //Lieutenant
            "True_Mandalorians_vest_5", //Captain
		};
		author="Hawkeye";
		requiredAddons[]=
		{
			"ls_armor_greenfor",
			"ls_equipment_greenfor"
		};
	};
};

//

class CfgFactionClasses
{
	class Mandalorians
	{
		displayName= "Mandalorians";
	};
};
class CfgEditorSubcategories
{
	class Mandalorians_Categ_True_Mandalorians
	{
		displayName= "True Mandalorians";
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
    

	class True_Mandalorians_traditional_helmet: ls_mandalorian_traditional_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="True Mandalorians Traditional Helmet";    
		hiddenSelections[]=
		{
			"camo1",
			"visor",
			"neckTex"
		};        
        hiddenSelectionsTextures[]=
		{
            "332nd_mandalorians\True_Mandalorians\data\True_Mandalorians_traditional_helmet.paa",
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
    class True_Mandalorians_vest_1: ls_mandalorian_traditional_vest
    {
		displayName="True Mandalorians Evaar`la Verd Vest";
		hiddenSelections[]=
		{
			"camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"332nd_mandalorians\True_Mandalorians\data\True_Mandalorians_vest_1.paa"
		};
	};
    class True_Mandalorians_vest_2: ls_mandalorian_traditional_vest
    {
		displayName="True Mandalorians Verd`ika Vest";
		hiddenSelections[]=
		{
			"camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"332nd_mandalorians\True_Mandalorians\data\True_Mandalorians_vest_2.paa"
		};
	};
    class True_Mandalorians_vest_3: ls_mandalorian_traditional_vest
    {
		displayName="True Mandalorians Ruus'alor Vest";
		hiddenSelections[]=
		{
			"camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"332nd_mandalorians\True_Mandalorians\data\True_Mandalorians_vest_3.paa"
		};
	};
    class True_Mandalorians_vest_4: ls_mandalorian_traditional_vest
    {
		displayName="True Mandalorians Ver`alor Vest";
		hiddenSelections[]=
		{
			"camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"332nd_mandalorians\True_Mandalorians\data\True_Mandalorians_vest_4.paa"
		};
	};
    class True_Mandalorians_vest_5: ls_mandalorian_traditional_vest
    {
		displayName="True Mandalorians Alor`ad Vest";
		hiddenSelections[]=
		{
			"camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"332nd_mandalorians\True_Mandalorians\data\True_Mandalorians_vest_5.paa"
		};
	};

};       
class CfgVehicles
{
    class ls_mandalorian_base;
    

    class True_Mandalorian_Recruit: ls_mandalorian_base
	{
        author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="True Mandalorians Evaar`la Verd";
		faction="Mandalorians";
		editorSubcategory="Mandalorians_Categ_True_Mandalorians";
        linkedItems[]=
		{
			"True_Mandalorians_vest_1",
			"True_Mandalorians_traditional_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		respawnLinkedItems[]=
		{
			"True_Mandalorians_vest_1",
			"True_Mandalorians_traditional_helmet",
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
    class True_Mandalorian_Private: ls_mandalorian_base
	{
        author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="True Mandalorians Verd`ika";
		faction="Mandalorians";
		editorSubcategory="Mandalorians_Categ_True_Mandalorians";
        linkedItems[]=
		{
			"True_Mandalorians_vest_2",
			"True_Mandalorians_traditional_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		respawnLinkedItems[]=
		{
			"True_Mandalorians_vest_2",
			"True_Mandalorians_traditional_helmet",
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
    class True_Mandalorian_Sergeant: ls_mandalorian_base
	{
        author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="True Mandalorians Ruus'alor";
		faction="Mandalorians";
		editorSubcategory="Mandalorians_Categ_True_Mandalorians";
        linkedItems[]=
		{
			"True_Mandalorians_vest_3",
			"True_Mandalorians_traditional_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		respawnLinkedItems[]=
		{
			"True_Mandalorians_vest_3",
			"True_Mandalorians_traditional_helmet",
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
    class True_Mandalorian_Lieutenant: ls_mandalorian_base
	{
        author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="True Mandalorians Ver`alor";
		faction="Mandalorians";
		editorSubcategory="Mandalorians_Categ_True_Mandalorians";
        linkedItems[]=
		{
			"True_Mandalorians_vest_4",
			"True_Mandalorians_traditional_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		respawnLinkedItems[]=
		{
			"True_Mandalorians_vest_4",
			"True_Mandalorians_traditional_helmet",
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
    class True_Mandalorian_Captain: ls_mandalorian_base
	{
        author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="True Mandalorians Alor`ad";
		faction="Mandalorians";
		editorSubcategory="Mandalorians_Categ_True_Mandalorians";
        linkedItems[]=
		{
			"True_Mandalorians_vest_5",
			"True_Mandalorians_traditional_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		respawnLinkedItems[]=
		{
			"True_Mandalorians_vest_5",
			"True_Mandalorians_traditional_helmet",
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