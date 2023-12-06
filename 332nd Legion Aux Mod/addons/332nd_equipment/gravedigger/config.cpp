class CfgPatches
{
	class 332nd_Legion_Gravedigger
	{
		author= "332nd_AUX_TEAM";
		
		units[]=
		{		
		};
		
		weapons[]=
		{
			"332nd_Gravedigger_Enlisted_P2_helmet",
			"332nd_Gravedigger_Specialist_P2_helmet",
			"332nd_Gravedigger_NCO_P2_helmet",
		};	
		
		requiredAddons[]=
		{
			"SWLB_clones",
			"ls_armor_bluefor",
			"SWLB_CEE",
		};

		authors[] =
        {
			"332nd_AUX_TEAM",
			"Hawkeye"
        };
	};
};

class CfgFactionClasses
{
	class 332nd_Legion
	{
		displayName= "332nd Legion";
	};
};

class CfgWeapons
{
	class SWLB_P2_SpecOps_Helmet;
	class ItemInfo;

	//PHASE 2 HELMS
	class 332nd_Gravedigger_Enlisted_P2_helmet: SWLB_P2_SpecOps_Helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Gravedigger Engineer Helmet (Phase 2)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_p1_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"332nd_equipment\gravedigger\textures\phase_2_helmets\332nd_Gravedigger_Enlisted_P2_helmet_co.paa"
		};
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		class HitpointsProtectionInfo
            {
                class Head
                {
                    hitPointName ="HitHead";
                    armor=28;
                    passThrough=0.5;
                };
                class Face
                {
                    hitPointName ="HitFace";
                    armor=28;
                    passThrough=0.30000001;
                };
			};
	};
	class 332nd_Gravedigger_Specialist_P2_helmet: SWLB_P2_SpecOps_Helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Gravedigger Specialist Helmet (Phase 2)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_p1_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"332nd_equipment\gravedigger\textures\phase_2_helmets\332nd_Gravedigger_Specialist_P2_helmet_co.paa"
		};
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		class HitpointsProtectionInfo
            {
                class Head
                {
                    hitPointName ="HitHead";
                    armor=28;
                    passThrough=0.5;
                };
                class Face
                {
                    hitPointName ="HitFace";
                    armor=28;
                    passThrough=0.30000001;
                };
			};
	};
	class 332nd_Gravedigger_NCO_P2_helmet: SWLB_P2_SpecOps_Helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Gravedigger NCO Helmet (Phase 2)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_p1_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"332nd_equipment\gravedigger\textures\phase_2_helmets\332nd_Gravedigger_NCO_P2_helmet_co.paa"
		};
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		class HitpointsProtectionInfo
            {
                class Head
                {
                    hitPointName ="HitHead";
                    armor=28;
                    passThrough=0.5;
                };
                class Face
                {
                    hitPointName ="HitFace";
                    armor=28;
                    passThrough=0.30000001;
                };
			};
	};
};

class cfgMods
{
	author="332nd_AUX_TEAM";
	timepacked="1687930196";
};