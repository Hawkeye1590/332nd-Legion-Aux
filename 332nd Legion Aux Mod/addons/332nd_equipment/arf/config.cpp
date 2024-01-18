class CfgPatches
{
	class 332nd_Legion_ARF
	{
		author= "332nd_AUX_TEAM";
		
		units[]=
		{
			"332nd_ARF_Cadet",
			"332nd_ARF_Trooper",
			"332nd_ARF_Senior",
			"332nd_ARF_Veteran",
			"332nd_ARF_Specialist",
			"332nd_ARF_Corporal",
			"332nd_ARF_Sergeant",
			"332nd_ARF_Sergeant_Major",
			"332nd_ARF_Cadet_Urban",
			"332nd_ARF_Trooper_Urban",
			"332nd_ARF_Senior_Urban",
			"332nd_ARF_Veteran_Urban",
			"332nd_ARF_Specialist_Urban",
			"332nd_ARF_Corporal_Urban",
			"332nd_ARF_Sergeant_Urban",
			"332nd_ARF_Sergeant_Major_Urban",
		};
		
		weapons[]=
		{
			"332nd_ARF_Cadet_Helmet_P2",
			"332nd_ARF_Trooper_Helmet_P2",
			"332nd_ARF_Senior_Helmet_P2",
			"332nd_ARF_Veteran_Helmet_P2",
			"332nd_ARF_Specialist_Helmet_P2",
			"332nd_ARF_Corporal_Helmet_P2",
			"332nd_ARF_Sergeant_Helmet_P2",
			"332nd_ARF_Sergeant_Major_Helmet_P2",
			"332nd_ARF_Cadet_uniform",
			"332nd_ARF_Trooper_uniform",
			"332nd_ARF_Senior_uniform",
			"332nd_ARF_Veteran_uniform",
			"332nd_ARF_Specialist_uniform",
			"332nd_ARF_Corporal_uniform",
			"332nd_ARF_Sergeant_uniform",
			"332nd_ARF_Sergeant_Major_uniform",
			"332nd_ARF_Cadet_Helmet_P2_Urban",
			"332nd_ARF_Trooper_Helmet_P2_Urban",
			"332nd_ARF_Senior_Helmet_P2_Urban",
			"332nd_ARF_Veteran_Helmet_P2_Urban",
			"332nd_ARF_Specialist_Helmet_P2_Urban",
			"332nd_ARF_Corporal_Helmet_P2_Urban",
			"332nd_ARF_Sergeant_Helmet_P2_Urban",
			"332nd_ARF_Sergeant_Major_Helmet_P2_Urban",
			"332nd_ARF_Cadet_Urban_uniform",
			"332nd_ARF_Trooper_Urban_uniform",
			"332nd_ARF_Senior_Urban_uniform",
			"332nd_ARF_Veteran_Urban_uniform",
			"332nd_ARF_Specialist_Urban_uniform",
			"332nd_ARF_Corporal_Urban_uniform",
			"332nd_ARF_Sergeant_Urban_uniform",
			"332nd_ARF_Sergeant_Urban_Major_uniform",
		};	
		
		requiredAddons[]=
		{
			"SWLB_clones",
			"SWLB_CEE",
		};

		authors[] =
        {
			"332nd_AUX_TEAM",
			"Magika"
        };
	};
};

class CfgFactionClasses
{
	class 332nd_Legion
	{
		displayName= "[332nd] 332nd Legion";
	};
};

class CfgEditorSubcategories
{
	class 332nd_Categ_Customs
	{
		displayName= "ARF";
		priority=2;
	};	
};

class CfgWeapons
{
	class SWLB_clone_P2_helmet;
    class ls_gar_phase1Arf_helmet;
    class ls_gar_phase2Arf_helmet;
	class SWLB_clone_uniform;
	class UniformItem;
	class ItemInfo;

	//ARF HELMS
	class 332nd_ARF_Cadet_Helmet_P2: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Cadet Helmet (Flaps)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Cadet_helm.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Cadet_Helmet_P1: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Cadet Helmet";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Cadet_helm.paa",
			"",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Trooper_Helmet_P2: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Trooper Helmet (Flaps)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Trooper_helm.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Trooper_Helmet_P1: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Trooper Helmet";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Trooper_helm.paa",
			"",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Senior_Helmet_P2: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Senior Helmet (Flaps)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Senior_helm.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Senior_Helmet_P1: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Senior Helmet";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Senior_helm.paa",
			"",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Veteran_Helmet_P2: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Veteran Helmet (Flaps)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Veteran_helm.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Veteran_Helmet_P1: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Veteran Helmet";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Veteran_helm.paa",
			"",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Specialist_Helmet_P2: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Specialist Helmet (Flaps)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Specialist_helm.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Specialist_Helmet_P1: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Specialist Helmet";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Specialist_helm.paa",
			"",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Corporal_Helmet_P2: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Corporal Helmet (Flaps)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Corporal_helm.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Corporal_Helmet_P1: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Corporal Helmet";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Corporal_helm.paa",
			"",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Sergeant_Helmet_P2: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Sergeant Helmet (Flaps)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Sergeant_helm.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Sergeant_Helmet_P1: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Sergeant Helmet";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Sergeant_helm.paa",
			"",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Sergeant_Major_Helmet_P2: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Sergeant-Major Helmet (Flaps)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Sergeant_Major_helm.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Sergeant_Major_Helmet_P1: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Sergeant-Major Helmet";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Sergeant_Major_helm.paa",
			"",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	// ARF URBAN HELMETS
	class 332nd_ARF_Cadet_Helmet_P2_Urban: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Cadet Helmet (Urban, Flaps)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Cadet_Urban_helm.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Cadet_Helmet_P1_Urban: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Cadet Helmet (Urban)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Cadet_Urban_helm.paa",
			"",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Trooper_Helmet_P2_Urban: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Trooper Helmet (Urban, Flaps)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Trooper_Urban_helm.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Trooper_Helmet_P1_Urban: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Trooper Helmet (Urban)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Trooper_Urban_helm.paa",
			"",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Senior_Helmet_P2_Urban: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Senior Helmet (Urban, Flaps)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Senior_Urban_helm.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Senior_Helmet_P1_Urban: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Senior Helmet (Urban)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Senior_Urban_helm.paa",
			"",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Veteran_Helmet_P2_Urban: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Veteran Helmet (Urban, Flaps)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Veteran_Urban_helm.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Veteran_Helmet_P1_Urban: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Veteran Helmet (Urban)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Veteran_Urban_helm.paa",
			"",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Specialist_Helmet_P2_Urban: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Specialist Helmet (Urban, Flaps)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Specialist_Urban_helm.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Specialist_Helmet_P1_Urban: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Specialist Helmet (Urban)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Specialist_Urban_helm.paa",
			"",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Corporal_Helmet_P2_Urban: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Corporal Helmet (Urban, Flaps)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Corporal_Urban_helm.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Corporal_Helmet_P1_Urban: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Corporal Helmet (Urban)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Corporal_Urban_helm.paa",
			"",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Sergeant_Helmet_P2_Urban: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Sergeant Helmet (Urban, Flaps)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Sergeant_Urban_helm.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Sergeant_Helmet_P1_Urban: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Sergeant Helmet (Urban)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Sergeant_Urban_helm.paa",
			"",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Sergeant_Major_Helmet_P2_Urban: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Sergeant-Major Helmet (Urban, Flaps)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Sergeant_Major_Urban_helm.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	class 332nd_ARF_Sergeant_Major_Helmet_P1_Urban: ls_gar_phase1Arf_helmet
	{
		displayName="[332nd] ARF Sergeant-Major Helmet (Urban)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Sergeant_Major_Urban_helm.paa",
			"",
			"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
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
	//Uniforms
	class 332nd_ARF_Cadet_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] ARF Cadet Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_ARF_Cadet";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 332nd_ARF_Trooper_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] ARF Trooper Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_ARF_Trooper";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 332nd_ARF_Senior_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] ARF Senior Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_ARF_Senior";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 332nd_ARF_Veteran_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] ARF Veteran Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_ARF_Veteran";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 332nd_ARF_Specialist_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] ARF Specialist Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_ARF_Specialist";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 332nd_ARF_Corporal_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] ARF Corporal Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_ARF_Corporal";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 332nd_ARF_Sergeant_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] ARF Sergeant Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_ARF_Sergeant";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 332nd_ARF_Sergeant_Major_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] ARF Sergeant-Major Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_ARF_Sergeant_Major";
			containerClass="Supply150";
			mass=40;
		};
	};
	// Urban Uniforms
	class 332nd_ARF_Cadet_Urban_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] ARF Cadet Uniform (Urban)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_ARF_Cadet_Urban";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 332nd_ARF_Trooper_Urban_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] ARF Trooper Uniform (Urban)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_ARF_Trooper_Urban";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 332nd_ARF_Senior_Urban_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] ARF Senior Uniform (Urban)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_ARF_Senior_Urban";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 332nd_ARF_Veteran_Urban_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] ARF Veteran Uniform (Urban)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_ARF_Veteran_Urban";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 332nd_ARF_Specialist_Urban_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] ARF Specialist Uniform (Urban)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_ARF_Specialist_Urban";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 332nd_ARF_Corporal_Urban_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] ARF Corporal Uniform (Urban)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_ARF_Corporal_Urban";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 332nd_ARF_Sergeant_Urban_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] ARF Sergeant Uniform (Urban)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_ARF_Sergeant_Urban";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 332nd_ARF_Sergeant_Major_Urban_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] ARF Sergeant-Major Uniform (Urban)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_ARF_Sergeant_Major_Urban";
			containerClass="Supply150";
			mass=40;
		};
	};
};

class CfgVehicles
{
	class SWLB_clone_base_P2;
	class HitPoints;
	
	//ARF Troopers
	class 332nd_ARF_Cadet: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Banshee Cadet";
		uniformclass="332nd_ARF_Cadet_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_ARF";
		camouflage=0.4;
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Cadet_upper.paa",
			"\332nd_equipment\arf\textures\332nd_ARF_Cadet_lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Cadet_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Cadet_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="";
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
    };
	class 332nd_ARF_Trooper: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Banshee Trooper";
		uniformclass="332nd_ARF_Trooper_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_ARF";
		camouflage=0.4;
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Trooper_upper.paa",
			"\332nd_equipment\arf\textures\332nd_ARF_Trooper_lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Trooper_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Trooper_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="";
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
    };
	class 332nd_ARF_Senior: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Banshee Senior";
		uniformclass="332nd_ARF_Senior_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_ARF";
		camouflage=0.4;
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Senior_upper.paa",
			"\332nd_equipment\arf\textures\332nd_ARF_Senior_lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Senior_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Senior_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="";
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
    };
	class 332nd_ARF_Veteran: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Banshee Veteran";
		uniformclass="332nd_ARF_Veteran_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_ARF";
		camouflage=0.4;
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Veteran_upper.paa",
			"\332nd_equipment\arf\textures\332nd_ARF_Veteran_lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Veteran_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Veteran_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="";
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
    };
	class 332nd_ARF_Specialist: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Banshee Specialist";
		uniformclass="332nd_ARF_Specialist_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_ARF";
		camouflage=0.4;
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Specialist_upper.paa",
			"\332nd_equipment\arf\textures\332nd_ARF_Specialist_lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Specialist_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Specialist_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="";
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
    };
	class 332nd_ARF_Corporal: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Banshee Corporal";
		uniformclass="332nd_ARF_Corporal_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_ARF";
		camouflage=0.4;
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Corporal_upper.paa",
			"\332nd_equipment\arf\textures\332nd_ARF_Corporal_lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Cadet_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Cadet_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="";
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
    };
	class 332nd_ARF_Sergeant: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Banshee Sergeant";
		uniformclass="332nd_ARF_Sergeant_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_ARF";
		camouflage=0.4;
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Sergeant_upper.paa",
			"\332nd_equipment\arf\textures\332nd_ARF_Sergeant_lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Cadet_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Cadet_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="";
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
    };
	class 332nd_ARF_Sergeant_Major: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Banshee Sergeant Major";
		uniformclass="332nd_ARF_Sergeant_Major_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_ARF";
		camouflage=0.4;
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\332nd_ARF_Sergeant_Major_upper.paa",
			"\332nd_equipment\arf\textures\332nd_ARF_Sergeant_Major_lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Cadet_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Cadet_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="";
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
	};
	// Urban ARF Troopers
    class 332nd_ARF_Cadet_Urban: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Banshee Cadet (Urban)";
		uniformclass="332nd_ARF_Cadet_Urban_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_ARF";
		camouflage=0.4;
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Cadet_Urban_upper.paa",
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Cadet_Urban_lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Cadet_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Cadet_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="";
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
    };
	class 332nd_ARF_Trooper_Urban: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Banshee Trooper (Urban)";
		uniformclass="332nd_ARF_Trooper_Urban_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_ARF";
		camouflage=0.4;
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Trooper_Urban_upper.paa",
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Trooper_Urban_lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Trooper_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Trooper_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="";
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
    };
	class 332nd_ARF_Senior_Urban: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Banshee Senior (Urban)";
		uniformclass="332nd_ARF_Senior_Urban_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_ARF";
		camouflage=0.4;
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Senior_Urban_upper.paa",
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Senior_Urban_lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Senior_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Senior_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="";
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
    };
	class 332nd_ARF_Veteran_Urban: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Banshee Veteran (Urban)";
		uniformclass="332nd_ARF_Veteran_Urban_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_ARF";
		camouflage=0.4;
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Veteran_Urban_upper.paa",
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Veteran_Urban_lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Veteran_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Veteran_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="";
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
    };
	class 332nd_ARF_Specialist_Urban: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Banshee Specialist (Urban)";
		uniformclass="332nd_ARF_Specialist_Urban_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_ARF";
		camouflage=0.4;
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Specialist_Urban_upper.paa",
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Specialist_Urban_lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Specialist_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Specialist_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="";
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
    };
	class 332nd_ARF_Corporal_Urban: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Banshee Corporal (Urban)";
		uniformclass="332nd_ARF_Corporal_Urban_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_ARF";
		camouflage=0.4;
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Corporal_Urban_upper.paa",
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Corporal_Urban_lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Cadet_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Cadet_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="";
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
    };
	class 332nd_ARF_Sergeant_Urban: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Banshee Sergeant (Urban)";
		uniformclass="332nd_ARF_Sergeant_Urban_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_ARF";
		camouflage=0.4;
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Sergeant_Urban_upper.paa",
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Sergeant_Urban_lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Cadet_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Cadet_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="";
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
    };
	class 332nd_ARF_Sergeant_Major_Urban: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Banshee Sergeant Major (Urban)";
		uniformclass="332nd_ARF_Sergeant_Major_Urban_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_ARF";
		camouflage=0.4;
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Sergeant_Major_Urban_upper.paa",
			"\332nd_equipment\arf\textures\urban\332nd_ARF_Sergeant_Major_Urban_lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Cadet_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_ARF_Cadet_Helmet_P1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="";
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
    };
};

class cfgMods
{
	author="332nd_AUX_TEAM";
	timepacked="1687930196";
};