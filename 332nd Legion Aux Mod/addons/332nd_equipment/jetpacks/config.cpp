class CfgPatches
{
	class 332nd_Legion_JT12
	{
		author = "332nd_AUX_TEAM";
		
		units[]=
		{
			"332nd_clone_jt12",
			"332nd_clone_RTO_jt12",		
			"332nd_clone_heavy_jt12",	
			"332nd_clone_medic_jt12",
			"332nd_clone_crew_chief_jt12",
			"332nd_clone_crew_chief_RTO_jt12",
			"332nd_clone_cdv19",
			"332nd_clone_NCO_cdv19",
			"332nd_clone_Medic_cdv19",
		};
		
		weapons[]=
		{
			"",
		};	
		
		requiredAddons[]=
		{
			"442_equipment",
			"kobra_core",
		};

		authors[] =
        {
			"332nd_AUX_TEAM",
			"Hawkeye",
        };
	};
};

//Credits to the Kobra mod team for the original basework of the JT12s. Thank you for making it publicly available for adjustments and repacks. 

class CfgVehicles
{
	class 442_jt12;
	class 442_jt12_pj;
	class 442_jt12_pj_radio;
	class 442_jt12_radio;
	class 442_cdv_19;
	class JLTS_Clone_backpack_RTO;
	
	class 332nd_clone_cdv19: 442_cdv_19
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[332nd] CDV-19 Jump Pack";
		picture = "kobra\kobra_core\kobra.paa";
		model = "kobra\442_equipment\backpack\model\clone\k_cdv_19.p3d";
		maximumLoad=200;
		hiddenselections[] = 
		{
			"backpack"
		};
		hiddenselectionstextures[] = 
		{
			"332nd_equipment\jetpacks\textures\332nd_cdv_19.paa"
		};
		NSM_jumppack_is_jumppack=1;
		NSM_jumppack_spam_delay=1;
		NSM_jumppack_energy_capacity=200;
		NSM_jumppack_recharge=5;
		NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = 
		{
			{
				"effect1",
				{0,.6,1} // {side to side , forward, verticle}
			},
			{
				"effect2",
				{0,.6,1}
			}
		};
		NSM_jumppack_sound_ignite[]=
		{
			"NSM_Main\sounds\cdv21Start.ogg"
		};
		NSM_jumppack_sound_land[]=
		{
			"NSM_Main\sounds\cdv21End.ogg"
		};
		NSM_jumppack_sound_idle[]=
		{
			"NSM_Main\sounds\cdv21Idle.ogg"
		};
		NSM_jumppack_jump_types[]=
		{	
			{
				"Short Jump",
				{25,7,50,0,1,1}
			}
		};
	};
	class 332nd_clone_NCO_cdv19: JLTS_Clone_backpack_RTO
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] CDV-19 NCO Jump Pack";
		picture = "kobra\kobra_core\kobra.paa";
		model = "kobra\442_equipment\backpack\model\clone\k_cdv_19.p3d";
		maximumLoad=200;
		hiddenselections[] = 
		{
			"backpack"
		};
		hiddenselectionstextures[] = 
		{
			"332nd_equipment\jetpacks\textures\332nd_cdv_19_nco.paa"
		};
		NSM_jumppack_is_jumppack=1;
		NSM_jumppack_spam_delay=1;
		NSM_jumppack_energy_capacity=200;
		NSM_jumppack_recharge=5;
		NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = 
		{
			{
				"effect1",
				{0,.6,1} // {side to side , forward, verticle}
			},
			{
				"effect2",
				{0,.6,1}
			}
		};
		NSM_jumppack_sound_ignite[]=
		{
			"NSM_Main\sounds\cdv21Start.ogg"
		};
		NSM_jumppack_sound_land[]=
		{
			"NSM_Main\sounds\cdv21End.ogg"
		};
		NSM_jumppack_sound_idle[]=
		{
			"NSM_Main\sounds\cdv21Idle.ogg"
		};
		NSM_jumppack_jump_types[]=
		{	
			{
				"Short Jump",
				{25,7,50,0,1,1}
			}
		};
	};
	class 332nd_clone_Medic_cdv19: 442_cdv_19
	{
		author="Magika";
		scopecurator=2;
		scope=2;
		displayName="[332nd] CDV-19 Medic Jump Pack";
		picture = "kobra\kobra_core\kobra.paa";
		model = "kobra\442_equipment\backpack\model\clone\k_cdv_19.p3d";
		maximumLoad=400;
		hiddenselections[] = 
		{
			"backpack"
		};
		hiddenselectionstextures[] = 
		{
			"332nd_equipment\jetpacks\textures\332nd_cdv_19_medic"
		};
		NSM_jumppack_is_jumppack=1;
		NSM_jumppack_spam_delay=1;
		NSM_jumppack_energy_capacity=200;
		NSM_jumppack_recharge=5;
		NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = 
		{
			{
				"effect1",
				{0,.6,1} // {side to side , forward, verticle}
			},
			{
				"effect2",
				{0,.6,1}
			}
		};
		NSM_jumppack_sound_ignite[]=
		{
			"NSM_Main\sounds\cdv21Start.ogg"
		};
		NSM_jumppack_sound_land[]=
		{
			"NSM_Main\sounds\cdv21End.ogg"
		};
		NSM_jumppack_sound_idle[]=
		{
			"NSM_Main\sounds\cdv21Idle.ogg"
		};
		NSM_jumppack_jump_types[]=
		{	
			{
				"Short Jump",
				{25,7,50,0,1,1}
			}
		};
	};
	class 332nd_clone_medic_jt12: 442_jt12
	{
		author="Hawkeye";
		scopecurator=2;
		scope=1;
		displayName="[332nd] Clone Medic JT12";
		picture = "kobra\kobra_core\kobra.paa";
		model = "kobra\442_equipment\backpack\model\clone\k_jt12.p3d";
		maximumLoad=400;
		hiddenselections[] = 
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"332nd_equipment\jetpacks\textures\332nd_clone_jt12_co.paa"
		};
		NSM_jumppack_is_jumppack=1;
		NSM_jumppack_spam_delay=1;
		NSM_jumppack_energy_capacity=200;
		NSM_jumppack_recharge=5;
		NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = 
		{
			{
				"effect1",
				{0,.6,1} // {side to side , forward, verticle}
			},
			{
				"effect2",
				{0,.6,1}
			}
		};
		NSM_jumppack_sound_ignite[]=
		{
			"NSM_Main\sounds\cdv21Start.ogg"
		};
		NSM_jumppack_sound_land[]=
		{
			"NSM_Main\sounds\cdv21End.ogg"
		};
		NSM_jumppack_sound_idle[]=
		{
			"NSM_Main\sounds\cdv21Idle.ogg"
		};
		NSM_jumppack_jump_types[]=
		{	
			{
				"Short Jump",
				{25,7,50,0,1,1}
			}
		};
	};
	class 332nd_clone_crew_chief_jt12: 442_jt12_pj
	{
		author="Hawkeye";
		scopecurator=2;
		scope=1;
		displayName="[332nd] Clone Crew Chief JT12";
		picture = "kobra\kobra_core\kobra.paa";
		model = "kobra\442_equipment\backpack\model\clone\k_jt12.p3d";
		maximumLoad=800;
		hiddenselections[] = 
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"332nd_equipment\jetpacks\textures\332nd_clone_jt12_co.paa"
		};
		NSM_jumppack_is_jumppack=1;
		NSM_jumppack_spam_delay=1;
		NSM_jumppack_energy_capacity=200;
		NSM_jumppack_recharge=10;
		NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = 
		{
			{
				"effect1",
				{0,.6,1} // {side to side , forward, verticle}
			},
			{
				"effect2",
				{0,.6,1}
			}
		};
		NSM_jumppack_sound_ignite[]=
		{
			"NSM_Main\sounds\cdv21Start.ogg"
		};
		NSM_jumppack_sound_land[]=
		{
			"NSM_Main\sounds\cdv21End.ogg"
		};
		NSM_jumppack_sound_idle[]=
		{
			"NSM_Main\sounds\cdv21Idle.ogg"
		};
		NSM_jumppack_jump_types[]=
		{	
			{
				"Short Jump",
				{25,7,50,0,1,1}
			}
		};
	};
	class 332nd_clone_crew_chief_RTO_jt12: 442_jt12_pj
	{
		author="Hawkeye";
		scopecurator=2;
		scope=1;
		displayName="[332nd] Clone Crew Chief LR JT12";
		picture = "kobra\kobra_core\kobra.paa";
		model = "kobra\442_equipment\backpack\model\clone\k_jt12_radio.p3d";
		maximumLoad=800;
		hiddenselectionstextures[] = 
		{
			"332nd_equipment\jetpacks\textures\332nd_clone_jt12_co.paa",
			"332nd_equipment\jetpacks\textures\332nd_clone_jt12_radio_co.paa"
		};
		NSM_jumppack_is_jumppack=1;
		NSM_jumppack_spam_delay=1;
		NSM_jumppack_energy_capacity=200;
		NSM_jumppack_recharge=10;
		NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = 
		{
			{
				"effect1",
				{0,.6,1} // {side to side , forward, verticle}
			},
			{
				"effect2",
				{0,.6,1}
			}
		};
		NSM_jumppack_sound_ignite[]=
		{
			"NSM_Main\sounds\cdv21Start.ogg"
		};
		NSM_jumppack_sound_land[]=
		{
			"NSM_Main\sounds\cdv21End.ogg"
		};
		NSM_jumppack_sound_idle[]=
		{
			"NSM_Main\sounds\cdv21Idle.ogg"
		};
		NSM_jumppack_jump_types[]=
		{	
			{
				"Short Jump",
				{25,7,50,0,1,1}
			}
		};
	};
};

class cfgMods
{
	author="332nd_AUX_TEAM";
	timepacked="1687930196";
};