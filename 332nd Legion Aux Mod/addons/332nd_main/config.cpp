class CfgPatches
{
	class 332nd_Main
	{
		author= "332nd_AUX_TEAM";
		units[]=
		{

		};
		weapons[]=
		{

		};
		requiredAddons[]=
		{

		};
		authors[] =
        {
			"332nd_AUX_TEAM",
			"Hawkeye",
        };
	};
};

class Extended_PostInit_EventHandlers
{
	class initPlayerLocal_event
	{
		init="call compile preprocessFileLineNumbers '332nd_main\functions\initPlayerLocal.sqf'";
	};
};

class cfgMods
{
	author="332nd_AUX_TEAM";
	timepacked="1687930196";
};