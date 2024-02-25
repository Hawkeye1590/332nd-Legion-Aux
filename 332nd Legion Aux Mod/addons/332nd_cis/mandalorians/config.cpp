class CfgPatches
{
	class 332nd_CIS_Clan_Torra
	{
		author="332nd AUX TEAM";
		requiredAddons[]=
		{
			"A3_characters_f",
			"A3_data_f",
			"ls_Core",
			"ls_armor_greenfor",
			"ls_equipment_greenfor",
			"LS_weapon_core"
		};
		requiredVersion=0.1;
		units[]=
		{
			"ls_mandalorian_assault_traditional",
			"ls_mandalorian_rto_traditional",
			"ls_mandalorian_heavy_traditional",
			"ls_mandalorian_medic_traditional",
			"ls_mandalorian_marksman_traditional",
			"ls_mandalorian_support_traditional",
			"ls_mandalorian_at_traditional",
			"ls_mandalorian_heavyAT_traditional",
			"ls_mandalorian_aa_traditional",
			"ls_mandalorian_demo_traditional",
			"332nd_torra_commander",
            "332nd_torra_sergeant",
            "332nd_torra_assault",
            "332nd_torra_heavy",
            "332nd_torra_medic",
            "332nd_torra_marksman",
            "332nd_torra_at",
            "332nd_torra_demo",
		};
		weapons[]=
		{
			"332nd_torra_grunt_helm";
            "332nd_torra_sergeant_helm",
            "332nd_torra_vest",
		};
	};
};
class CfgFactionClasses
{
	class 332nd_CIS
	{
		displayName= "[332nd] CIS";
	};
};

class CfgEditorSubcategories
{
	class 332nd_Categ_CIS_Mandalorian
	{
		displayName= "Clan Torra";
		priority=2;
	};	
};
class CfgWeapons
{
	class ls_mandalorian_traditional_helmet;
	class ls_mandalorian_traditional_vest;
    class ls_mandalorian_executioner_helmet;
	class ls_mandalorian_stalker_helmet;
	class 332nd_torra_grunt_helm: ls_mandalorian_traditional_helmet
	{
		displayName="[332nd] Clan Torra Grunt Helmet";
		hiddenSelectionsTextures[]=
		{
			"332nd_cis\mandalorians\textures\traditional_helm_cis.paa",
			"ls_armor_greenfor\helmet\mandalorian\traditional\data\visor_co.paa",
			"ls_armor_greenfor\helmet\mandalorian\traditional\data\neck_co.paa"
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
	class 332nd_torra_sergeant_helm: ls_mandalorian_executioner_helmet
	{
		displayName="[332nd] Clan Torra Sergeant Helmet";
		hiddenSelectionsTextures[]=
		{
			"332nd_cis\mandalorians\textures\executioner_helm_cis.paa",
			"ls_armor_greenfor\helmet\mandalorian\traditional\data\visor_co.paa",
			"ls_armor_greenfor\helmet\mandalorian\traditional\data\neck_co.paa"
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
	class 332nd_torra_sergeant_helm: ls_mandalorian_executioner_helmet
	{
		displayName="[332nd] Clan Torra Sergeant Helmet";
		hiddenSelectionsTextures[]=
		{
			"332nd_cis\mandalorians\textures\executioner_helm_cis.paa",
			"ls_armor_greenfor\helmet\mandalorian\traditional\data\visor_co.paa",
			"ls_armor_greenfor\helmet\mandalorian\traditional\data\neck_co.paa"
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
	class 332nd_torra_commander_helm: ls_mandalorian_stalker_helmet
	{
		displayName="[332nd] Clan Torra Commander Helmet";
		hiddenSelectionsTextures[]=
		{
			"332nd_cis\mandalorians\textures\stalker_helm_cis.paa",
			"332nd_cis\mandalorians\textures\stalker_visor_cis.paa",
			"ls_armor_greenfor\helmet\mandalorian\traditional\data\neck_co.paa"
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
	class 332nd_torra_vest: ls_mandalorian_traditional_vest
	{
		displayName="[332nd] Clan Torra Armor";
		hiddenSelectionsTextures[]=
		{
			"332nd_cis\mandalorians\textures\armor_cis.paa"
		};
	};
};
class CfgVehicles
{
	class ls_greenforHeadgear_base;
	class ls_mandalorian_base;
    class ls_mandalorian_heavy_traditional;
    class ls_mandalorian_assault_traditional;
    class ls_mandalorian_medic_traditional;
    class ls_mandalorian_marksman_traditional;
    class ls_mandalorian_at_traditional;
    class ls_mandalorian_demo_traditional;
	class 332nd_torra_commander: ls_mandalorian_heavy_traditional
	{
		displayName="Commander";
		icon="LSiconLeader";
        faction="332nd_CIS";
		side=0;
		editorSubcategory="332nd_Categ_CIS_Mandalorian";
		linkedItems[]=
		{
			"332nd_torra_vest",
			"332nd_torra_commander_helm",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"332nd_NVGs_NVG_mode"
		};
		respawnLinkedItems[]=
		{
			"332nd_torra_vest",
			"332nd_torra_commander_helm",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"332nd_NVGs_NVG_mode"
		};
	};
	class 332nd_torra_sergeant: ls_mandalorian_heavy_traditional
	{
		displayName="Sergeant";
		icon="LSiconLeader";
        faction="332nd_CIS";
		side=0;
		editorSubcategory="332nd_Categ_CIS_Mandalorian";
		linkedItems[]=
		{
			"332nd_torra_vest",
			"332nd_torra_sergeant_helm",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
		respawnLinkedItems[]=
		{
			"332nd_torra_vest",
			"332nd_torra_sergeant_helm",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"ls_mandalorian_rangefinder_nvg"
		};
	};
	class 332nd_torra_assault: ls_mandalorian_assault_traditional
	{
		faction="332nd_CIS";
		editorSubcategory="332nd_Categ_CIS_Mandalorian";
        backpack="ls_mandalorian_PREDEF_standard_backpack";
		linkedItems[]=
		{
			"332nd_torra_vest",
			"332nd_torra_grunt_helm",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"332nd_NVGs_NVG_mode"
		};
		respawnLinkedItems[]=
		{
			"332nd_torra_vest",
			"332nd_torra_grunt_helm",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"332nd_NVGs_NVG_mode"
		};
	};
	class 332nd_torra_heavy: ls_mandalorian_heavy_traditional
	{
		faction="332nd_CIS";
		editorSubcategory="332nd_Categ_CIS_Mandalorian";
		side=0;
		linkedItems[]=
		{
			"332nd_torra_vest",
			"332nd_torra_grunt_helm",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"332nd_NVGs_NVG_mode"
		};
		respawnLinkedItems[]=
		{
			"332nd_torra_vest",
			"332nd_torra_grunt_helm",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"332nd_NVGs_NVG_mode"
		};
	};
	class 332nd_torra_medic: ls_mandalorian_medic_traditional
	{
		faction="332nd_CIS";
		editorSubcategory="332nd_Categ_CIS_Mandalorian";
		side=0;
		linkedItems[]=
		{
			"332nd_torra_vest",
			"332nd_torra_grunt_helm",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"332nd_NVGs_NVG_mode"
		};
		respawnLinkedItems[]=
		{
			"332nd_torra_vest",
			"332nd_torra_grunt_helm",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"332nd_NVGs_NVG_mode"
		};
	};
	class 332nd_torra_marksman: ls_mandalorian_marksman_traditional
	{
		faction="332nd_CIS";
		editorSubcategory="332nd_Categ_CIS_Mandalorian";
		side=0;
        backpack="ls_mandalorian_PREDEF_standard_backpack";
		linkedItems[]=
		{
			"332nd_torra_vest",
			"332nd_torra_grunt_helm",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"332nd_NVGs_NVG_mode"
		};
		respawnLinkedItems[]=
		{
			"332nd_torra_vest",
			"332nd_torra_grunt_helm",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"332nd_NVGs_NVG_mode"
		};
	};
	class 332nd_torra_at: ls_mandalorian_at_traditional
	{
		faction="332nd_CIS";
		editorSubcategory="332nd_Categ_CIS_Mandalorian";
		side=0;
		linkedItems[]=
		{
			"332nd_torra_vest",
			"332nd_torra_grunt_helm",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"332nd_NVGs_NVG_mode"
		};
		respawnLinkedItems[]=
		{
			"332nd_torra_vest",
			"332nd_torra_grunt_helm",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"332nd_NVGs_NVG_mode"
		};
	};
	class 332nd_torra_demo: ls_mandalorian_demo_traditional
	{
		faction="332nd_CIS";
		editorSubcategory="332nd_Categ_CIS_Mandalorian";
		side=0;
        backpack="ls_mandalorian_PREDEF_heavy_backpack";
		linkedItems[]=
		{
			"332nd_torra_vest",
			"332nd_torra_grunt_helm",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"332nd_NVGs_NVG_mode"
		};
		respawnLinkedItems[]=
		{
			"332nd_torra_vest",
			"332nd_torra_grunt_helm",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_hush98",
			"332nd_NVGs_NVG_mode"
		};
	};
};
