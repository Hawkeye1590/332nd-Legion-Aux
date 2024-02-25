class CfgPatches
{
	class 332nd_groups_clan_torra
	{
		author="332nd AUX TEAM";
		name="332nd Clan Torra";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"ls_core",
			"lsd_units_redfor",
			"ls_units_redfor"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgGroups
{
	class East
	{
		name="OPFOR";
		side=0;
		class 332nd_groups_torra_cis
		{
			name="[332nd] Clan Torra";
			class 332nd_torra_Infantry
			{
				name="Infantry";
				class 332nd_torra_fireteam
				{
					Name="Fireteam";
					side=0;
					faction="332nd_CIS";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="332nd_torra_heavy";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="332nd_torra_assault";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="332nd_torra_assault";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="332nd_torra_medic";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class 332nd_torra_squad: 332nd_torra_fireteam
				{
					Name="Squad";
					class Unit0
					{
						side=0;
						vehicle="332nd_torra_sergeant";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="332nd_torra_assault";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="332nd_torra_assault";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="332nd_torra_medic";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="332nd_torra_marksman";
						position[]={-10,-10,0};
					};
					class Unit5: Unit2
					{
						vehicle="332nd_torra_heavy";
						rank="CORPORAL";
						position[]={15,-15,0};
					};
					class Unit6: Unit3
					{
						vehicle="332nd_torra_at";
						position[]={-15,-15,0};
					};
					class Unit7: Unit3
					{
						vehicle="332nd_torra_demo";
						position[]={20,-20,0};
					};
				};
				class 332nd_torra_at_team: 332nd_torra_fireteam
				{
					Name="Anti-Tank Team";
					class Unit0
					{
						side=0;
						vehicle="332nd_torra_assault";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="332nd_torra_at";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="332nd_torra_at";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="332nd_torra_assault";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class 332nd_torra_sentry: 332nd_torra_fireteam
				{
					name="Sentry";
					class Unit0: Unit0
					{
						vehicle="332nd_torra_assault";
						rank="CORPORAL";
					};
					class Unit1: Unit1
					{
						vehicle="332nd_torra_assault";
						rank="PRIVATE";
					};
				};
				class 332nd_torra_marksman_team: 332nd_torra_fireteam
				{
					name="Marksman Team";
					class Unit0: Unit0
					{
						vehicle="332nd_torra_marksman";
					};
					class Unit1: Unit1
					{
						vehicle="332nd_torra_marksman";
					};
				};
			};
		};
	};
};
