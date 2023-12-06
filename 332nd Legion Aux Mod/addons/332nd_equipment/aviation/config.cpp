class CfgPatches
{
	class 332nd_Legion_Reaper
	{
		author= "332nd_AUX_TEAM";
		
		units[]=
		{
			"332nd_Reaper_Pilot_uniform_base_P2",
			"332nd_Reaper_Technician_uniform_base_P2",
			"332nd_Reaper_NCO_uniform_base_P2",
		};
		
		weapons[]=
		{
			"332nd_Reaper_Pilot_P2_helmet",
			"332nd_Reaper_Technician_P2_helmet",
			"332nd_Reaper_NCO_P2_helmet",
			"332nd_Reaper_Pilot_uniform",
			"332nd_Reaper_Technician_uniform",
			"332nd_Reaper_NCO_uniform",
		};	
		
		requiredAddons[]=
		{
			"SWLB_clones",
			"ls_armor_bluefor",
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
		displayName= "[332nd] 332nd Legion";
	};
};

class CfgEditorSubcategories
{
	class 332nd_Categ_Reaper_Phase_2
	{
		displayName= "Phase 2 Pilots";
		priority=2;
	};	
};

class CfgWeapons
{
	class ls_gar_phase2Pilot_helmet;
	class SWLB_clone_uniform;
	class UniformItem;	
	class ItemInfo;

	//PHASE 2 HELMS
	class 332nd_Reaper_Pilot_P2_helmet: ls_gar_phase2Pilot_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Reaper Pilot Helmet (Phase 2)";
		hiddenSelectionsTextures[]=
		{
			"332nd_equipment\aviation\textures\phase_2_helmets\332nd_Reaper_Pilot_P2_helmet_co.paa",
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
	class 332nd_Reaper_Technician_P2_helmet: ls_gar_phase2Pilot_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Reaper Technician Helmet (Phase 2)";
		hiddenSelectionsTextures[]=
		{
			"332nd_equipment\aviation\textures\phase_2_helmets\332nd_Reaper_Technician_P2_helmet_co.paa",
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
	class 332nd_Reaper_NCO_P2_helmet: ls_gar_phase2Pilot_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Reaper NCO Helmet (Phase 2)";
		hiddenSelectionsTextures[]=
		{
			"332nd_equipment\aviation\textures\phase_2_helmets\332nd_Reaper_NCO_P2_helmet_co.paa",
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

	//Uniforms
	class 332nd_Reaper_Pilot_uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Reaper Pilot Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_Reaper_Pilot_uniform_base_P2";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 332nd_Reaper_Technician_uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Reaper Technician Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_Reaper_Technician_uniform_base_P2";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 332nd_Reaper_NCO_uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[332nd] Reaper NCO Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="332nd_Reaper_NCO_uniform_base_P2";
			containerClass="Supply150";
			mass=40;
		};
	};	
};

class CfgVehicles
{
	class SWLB_clone_base_P2;
	class HitPoints;
	
	//Phase 2 Pilots
	class 332nd_Reaper_Pilot_uniform_base_P2: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[Phase 2] Reaper Pilot";
		uniformclass="332nd_Reaper_Pilot_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_Reaper_Phase_2";
		hiddenSelectionsTextures[]=
		{
			"332nd_equipment\aviation\textures\uniforms\332nd_Reaper_Pilot_upper_co.paa",
			"332nd_equipment\aviation\textures\uniforms\332nd_Reaper_Pilot_lower_co.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_Reaper_Pilot_P2_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_Reaper_Pilot_P2_helmet",
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
		backpack="332nd_clone_backpack";
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
	class 332nd_Reaper_Technician_uniform_base_P2: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[Phase 2] Reaper Technician";
		uniformclass="332nd_Reaper_Technician_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_Reaper_Phase_2";
		hiddenSelectionsTextures[]=
		{
			"332nd_equipment\aviation\textures\uniforms\332nd_Reaper_Technician_upper_co.paa",
			"332nd_equipment\aviation\textures\uniforms\332nd_Reaper_Technician_lower_co.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_Reaper_Technician_P2_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_Reaper_Technician_P2_helmet",
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
		backpack="332nd_clone_backpack";
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
	class 332nd_Reaper_NCO_uniform_base_P2: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[Phase 2] Reaper NCO";
		uniformclass="332nd_Reaper_NCO_uniform";
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_Reaper_Phase_2";
		hiddenSelectionsTextures[]=
		{
			"332nd_equipment\aviation\textures\uniforms\332nd_Reaper_NCO_upper_co.paa",
			"332nd_equipment\aviation\textures\uniforms\332nd_Reaper_NCO_lower_co.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_Reaper_NCO_P2_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"332nd_Reaper_NCO_P2_helmet",
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
		backpack="332nd_clone_backpack";
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