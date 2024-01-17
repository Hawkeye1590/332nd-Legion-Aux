class CfgPatches
{
	class 332nd_Legion_Customs
	{
		author= "332nd_AUX_TEAM";
		
		units[]=
		{
			"332nd_Riddle_Custom",
			"332nd_Uncle_Custom",
			"332nd_Magika_Custom",
			"332nd_Monty_Custom",
			"332nd_Cosmic_Custom",
			"332nd_Sigma_Custom"
		};
		
		weapons[]=
		{
			"332nd_Magika_Custom_P2_helmet",
			"332nd_Riddle_Custom_P2_helmet",
			"332nd_Sigma_Custom_P2_helmet",
			"332nd_Hammer_Custom_P2_helmet",
			"332nd_Print_Custom_P2_helmet",
			"332nd_Spooks_Custom_P2_helmet",
			"332nd_Uncle_Custom_P2_helmet",
			"332nd_Monty_Custom_P2_helmet",
			"332nd_Sidd_Custom_P2_helmet",
			"332nd_Rock_Custom_P2_helmet",
			"332nd_Mixer_Custom_P2_helmet",
			"332nd_Kirito_Custom_P2_helmet",
			"332nd_Mini_Custom_P2_helmet",
			"332nd_Brotha_Custom_P2_helmet",
			"332nd_Sapphire_Custom_P2_helmet",
			"332nd_Beast_Custom_P2_helmet",
			"332nd_Ginger_Custom_P2_Pilot_helmet",
			"332nd_Shadow_Custom_P2_Pilot_helmet",
			"332nd_Misfit_Custom_P2_SpecOps_helmet",
			"332nd_Undead_Custom_P2_SpecOps_helmet",
			"332nd_Riddle_Custom_uniform",
			"332nd_Uncle_Custom_uniform",
			"332nd_Magika_Custom_uniform",
			"332nd_Monty_Custom_uniform",
			"332nd_Cosmic_Custom_uniform",
			"332nd_Sigma_Custom_uniform",
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
		displayName= "Customs";
		priority=2;
	};	
};

class CfgWeapons
{
	class SWLB_clone_P2_helmet;
	class ls_gar_phase2Pilot_helmet;
	class SWLB_P2_SpecOps_Helmet;
	class ls_gar_arc_helmet;
	class SWLB_clone_uniform;
	class UniformItem;
	class ItemInfo;

	//PHASE 2 GI HELMS
	class 332nd_Magika_Custom_P2_helmet: SWLB_clone_P2_helmet
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Magika's Helmet (Phase 2)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Magika_Helm.paa"
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
	class 332nd_Riddle_Custom_P2_helmet: SWLB_clone_P2_helmet
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Riddle's Helmet (Phase 2)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Riddle_Helm.paa"
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
	class 332nd_Sigma_Custom_P2_helmet: SWLB_clone_P2_helmet
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Sigma's Helmet (Phase 2)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Sigma_Helm.paa"
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
	class 332nd_Hammer_Custom_P2_helmet: SWLB_clone_P2_helmet
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Hammer's Helmet (Phase 2)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Hammer_Helm.paa"
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
	class 332nd_Print_Custom_P2_helmet: SWLB_clone_P2_helmet
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Print's Helmet (Phase 2)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Print_Helm.paa"
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
	class 332nd_Spooks_Custom_P2_helmet: SWLB_clone_P2_helmet
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Spooks's Helmet (Phase 2)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Spooks_Helm.paa"
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
	class 332nd_Uncle_Custom_P2_helmet: SWLB_clone_P2_helmet
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Uncle's Helmet (Phase 2)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Uncle_Helm.paa"
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
	class 332nd_Monty_Custom_P2_helmet: SWLB_clone_P2_helmet
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Monty's Helmet (Phase 2)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Monty_Helm.paa"
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
	class 332nd_Sidd_Custom_P2_helmet: SWLB_clone_P2_helmet
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Sidd's Helmet (Phase 2)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Sidd_Helm.paa"
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
	class 332nd_Rock_Custom_P2_helmet: SWLB_clone_P2_helmet
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Rock's Helmet (Phase 2)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Rock_Helm.paa"
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
	class 332nd_Mixer_Custom_P2_helmet: SWLB_clone_P2_helmet
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Mixer's Helmet (Phase 2)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Mixer_Helm.paa"
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
	class 332nd_Kirito_Custom_P2_helmet: SWLB_clone_P2_helmet
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Kirito's Helmet (Phase 2)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Kirito_Helm.paa"
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
	class 332nd_Mini_Custom_P2_helmet: SWLB_clone_P2_helmet
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Mini's Helmet (Phase 2)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Mini_Helm.paa"
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
	class 332nd_Brotha_Custom_P2_helmet: SWLB_clone_P2_helmet
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Brotha's Helmet (Phase 2)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Brotha_Helm.paa"
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
	class 332nd_Sapphire_Custom_P2_helmet: SWLB_clone_P2_helmet
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Sapphire's Helmet (Phase 2)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Sapphire_Helm.paa"
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
	class 332nd_Beast_Custom_P2_helmet: SWLB_clone_P2_helmet
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Beast's Helmet (Phase 2)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Beast_Helm.paa"
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

	// PHASE 2 PILOT HELMS

	class 332nd_Ginger_Custom_P2_Pilot_helmet: ls_gar_phase2Pilot_helmet
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Ginger's Helmet (Phase 2)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\pilots\332nd_Ginger_Helm.paa",
			"ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
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
                    passThrough=0.5;
                };
			};
	};
	class 332nd_Shadow_Custom_P2_Pilot_helmet: ls_gar_phase2Pilot_helmet
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Shadow's Helmet (Phase 2)";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\pilots\332nd_Shadow_Helm.paa",
			"ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
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
                    passThrough=0.5;
                };
			};
	};

	// GRAVEDIGGER PHASE 2 HELMS
	class 332nd_Misfit_Custom_P2_SpecOps_helmet: SWLB_P2_SpecOps_Helmet
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Misfit's Helmet (Phase 2)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_p1_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gravedigger\332nd_Misfit_Helm.paa"
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
	class 332nd_Undead_Custom_P2_SpecOps_helmet: SWLB_P2_SpecOps_Helmet
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Undead's Helmet (Phase 2)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_p1_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gravedigger\332nd_Undead_Helm.paa"
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
	//Uniforms
	class 332nd_Riddle_Custom_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Riddle's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_Riddle_Custom";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 332nd_Uncle_Custom_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Uncle's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_Uncle_Custom";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 332nd_Magika_Custom_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Magika's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_Magika_Custom";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 332nd_Monty_Custom_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Monty's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_Monty_Custom";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 332nd_Cosmic_Custom_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Cosmic's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_Cosmic_Custom";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 332nd_Sigma_Custom_uniform: SWLB_clone_uniform
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd Custom] Sigma's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_Sigma_Custom";
			containerClass="Supply150";
			mass=40;
		};
	};
};

class CfgVehicles
{
	class SWLB_clone_base_P2;
	class HitPoints;
	
	//Phase 2 Troopers
	class 332nd_Riddle_Custom: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[Phase 2] Riddle";
		uniformclass="332nd_Riddle_Custom_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_Customs";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Riddle_Upper.paa",
			"\332nd_equipment\customs\textures\gi\332nd_Riddle_Lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_Riddle_Custom_P2_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_Riddle_Custom_P2_helmet",
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
	class 332nd_Uncle_Custom: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[Phase 2] Uncle";
		uniformclass="332nd_Uncle_Custom_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_Customs";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Uncle_Upper.paa",
			"\332nd_equipment\customs\textures\gi\332nd_Uncle_Lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_Uncle_Custom_P2_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_Uncle_Custom_P2_helmet",
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
	class 332nd_Magika_Custom: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[Phase 2] Magika";
		uniformclass="332nd_Magika_Custom_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_Customs";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Magika_Upper.paa",
			"\332nd_equipment\customs\textures\gi\332nd_Magika_Lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_Magika_Custom_P2_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_Magika_Custom_P2_helmet",
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
	class 332nd_Riddle_Custom: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[Phase 2] Riddle";
		uniformclass="332nd_Riddle_Custom_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_Customs";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Riddle_Upper.paa",
			"\332nd_equipment\customs\textures\gi\332nd_Riddle_Lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_Riddle_Custom_P2_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_Riddle_Custom_P2_helmet",
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
	class 332nd_Monty_Custom: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[Phase 2] Monty";
		uniformclass="332nd_Monty_Custom_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_Customs";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Monty_Upper.paa",
			"\332nd_equipment\customs\textures\gi\332nd_Monty_Lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_Monty_Custom_P2_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_Monty_Custom_P2_helmet",
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
    class 332nd_Cosmic_Custom: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[Phase 2] Cosmic";
		uniformclass="332nd_Cosmic_Custom_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_Customs";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Cosmic_Upper.paa",
			"\332nd_equipment\customs\textures\gi\332nd_Cosmic_Lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_CR_P2_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_CR_P2_helmet",
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
    class 332nd_Sigma_Custom: SWLB_clone_base_P2
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[Phase 2] Sigma";
		uniformclass="332nd_Sigma_Custom_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_Customs";
		hiddenSelectionsTextures[]=
		{
			"\332nd_equipment\customs\textures\gi\332nd_Sigma_Upper.paa",
			"\332nd_equipment\customs\textures\gi\332nd_Sigma_Lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_Sigma_Custom_P2_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_Sigma_Custom_P2_helmet",
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