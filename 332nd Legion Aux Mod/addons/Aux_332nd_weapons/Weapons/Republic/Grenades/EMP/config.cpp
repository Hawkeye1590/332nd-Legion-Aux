class CfgPatches
{
	class 332nd_EMP_Grenade
	{
		author="Magika";
		name="332nd EMP Grenade";
		requiredAddons[]=
		{
			"A3_data_F",
			"A3_anims_F",
			"A3_weapons_F",
			"A3_characters_F",
			"JLTS_weapons_EPL2"
		};
		weapons[]={};
		units[]={};
		magazines[]=
		{
			"332nd_grenade_emp_mag"
		};
		ammo[]=
		{
			"332nd_grenade_emp_ammo"
		};
	};
};
class CfgAmmo
{
	class GrenadeHand_stone;
	class JLTS_grenade_emp_ammo;
	class GrenadeHand;
	class 332nd_grenade_emp_ammo: JLTS_grenade_emp_ammo
	{
		JLTS_isEMPAmmo=1;
		ace_frag_enabled=0;
		ace_grenades_pullPinSound[]=
		{
			"MRC\JLTS\weapons\Grenades\sounds\grenade_primed.wss",
			1.5,
			1,
			10
		};
		hit=0.0099999998;
		indirectHit=0.0099999998;
		explosive=0.0099999998;
		indirectHitRange=15;
		model="\MRC\JLTS\weapons\Grenades\grenade_emp.p3d";
		explosionEffects="JLTS_fx_exp_EMP";
		grenadeBurningSound[]=
		{
			"EMPSoundLoop1",
			0.5
		};
		EMPSoundLoop1[]=
		{
			"MRC\JLTS\weapons\Grenades\sounds\grenade_burning.wss",
			0.125893,
			1,
			70
		};
		SoundSetExplosion[]=
		{
			"332nd_GrenadeEMP_Exp_SoundSet",
			"332nd_GrenadeEMP_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		aiAmmoUsageFlags=0;
		class CamShakeExplode
		{
			distance=10;
			duration=1;
			frequency=20;
			power=0;
		};
	};
};
class CfgMagazines
{
	class HandGrenade;
	class JLTS_grenade_emp_mag;
	class 332nd_grenade_emp_mag: JLTS_grenade_emp_mag
	{
		scope=2;
		author="332nd";
		model="\MRC\JLTS\weapons\Grenades\grenade_emp.p3d";
		displayName="[332nd] Droid Popper";
		picture="\MRC\JLTS\weapons\grenades\data\ui\grenade_emp_ui_ca.paa";
		descriptionShort="$STR_JLTS_descs_EMPGrenade_mag";
		displayNameShort="$STR_JLTS_names_GrenadeEMP";
		ammo="332nd_grenade_emp_ammo";
	};
};
class CfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[]+=
		{
			"332nd_grenade_emp_muzzle"
		};
		class ThrowMuzzle;
		class 332nd_grenade_emp_muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"332nd_grenade_emp_mag"
			};
		};
	};
};
