class CfgPatches
{
	class 332nd_EMP_Grenade_Soundset
	{
		author="Magika";
		name="332nd EMP Grenade Soundset";
		requiredAddons[]=
		{
			"A3_data_F",
			"A3_weapons_F",
			"cba_main",
			"JLTS_functions"
		};
        weapons[]=
		{
			""
		};
		units[]=
		{
			"JLTS_moduleEMP_settings",
			"JLTS_moduleEMP_bomb"
		};
		magazines[]=
		{
			""
		};
		ammo[]=
		{
			"B_65x39_Caseless",
			"B_338_Ball",
			"B_9x21_Ball",
			"B_408_Ball",
			"JLTS_bullet_emp",
		};

	};
};
class CfgSoundSets
{
	class GrenadeHe_Exp_SoundSet;
	class 332nd_GrenadeEMP_Exp_SoundSet: GrenadeHe_Exp_SoundSet
	{
		soundShaders[]=
		{
			"332nd_GrenadeEMP_closeExp_SoundShader",
			"332nd_GrenadeEMP_midExp_SoundShader",
			"332nd_GrenadeEMP_distExp_SoundShader"
		};
	};
	class GrenadeHe_Tail_SoundSet;
	class 332nd_GrenadeEMP_Tail_SoundSet: GrenadeHe_Tail_SoundSet
	{
		soundShaders[]=
		{
			"332nd_GrenadeEMP_tailForest_SoundShader",
			"332nd_GrenadeEMP_tailMeadows_SoundShader",
			"332nd_GrenadeEMP_tailHouses_SoundShader"
		};
	};
};
class CfgSoundShaders
{
	class GrenadeHe_closeExp_SoundShader;
	class 332nd_GrenadeEMP_closeExp_SoundShader: GrenadeHe_closeExp_SoundShader
	{
		samples[]=
		{
			
			{
				"Aux_332nd_weapons\Weapons\Republic\Grenades\EMP\sounds\EMP_grenade.wss",
				0.5
			},
			
			{
				"Aux_332nd_weapons\Weapons\Republic\Grenades\EMP\sounds\EMP_grenade.wss",
				0.5
			}
		};
	};
	class GrenadeHe_midExp_SoundShader;
	class 332nd_GrenadeEMP_midExp_SoundShader: GrenadeHe_midExp_SoundShader
	{
		samples[]=
		{
			
			{
				"Aux_332nd_weapons\Weapons\Republic\Grenades\EMP\sounds\EMP_grenade.wss",
				0.5
			},
			
			{
				"Aux_332nd_weapons\Weapons\Republic\Grenades\EMP\sounds\EMP_grenade.wss",
				0.5
			}
		};
	};
	class GrenadeHe_distExp_SoundShader;
	class 332nd_GrenadeEMP_distExp_SoundShader: GrenadeHe_distExp_SoundShader
	{
		samples[]=
		{
			
			{
				"Aux_332nd_weapons\Weapons\Republic\Grenades\EMP\sounds\EMP_grenade.wss",
				0.5
			},
			
			{
				"Aux_332nd_weapons\Weapons\Republic\Grenades\EMP\sounds\EMP_grenade.wss",
				0.5
			}
		};
	};
	class GrenadeHe_tailForest_SoundShader;
	class 332nd_GrenadeEMP_tailForest_SoundShader: GrenadeHe_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"Aux_332nd_weapons\Weapons\Republic\Grenades\EMP\sounds\EMP_grenade.wss",
				0.5
			},
			
			{
				"Aux_332nd_weapons\Weapons\Republic\Grenades\EMP\sounds\EMP_grenade.wss",
				0.5
			}
		};
	};
	class GrenadeHe_tailMeadows_SoundShader;
	class 332nd_GrenadeEMP_tailMeadows_SoundShader: GrenadeHe_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"Aux_332nd_weapons\Weapons\Republic\Grenades\EMP\sounds\EMP_grenade.wss",
				0.5
			},
			
			{
				"Aux_332nd_weapons\Weapons\Republic\Grenades\EMP\sounds\EMP_grenade.wss",
				0.5
			}
		};
	};
	class GrenadeHe_tailHouses_SoundShader;
	class 332nd_GrenadeEMP_tailHouses_SoundShader: GrenadeHe_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"Aux_332nd_weapons\Weapons\Republic\Grenades\EMP\sounds\EMP_grenade.wss",
				0.5
			},
			
			{
				"Aux_332nd_weapons\Weapons\Republic\Grenades\EMP\sounds\EMP_grenade.wss",
				0.5
			}
		};
	};
};