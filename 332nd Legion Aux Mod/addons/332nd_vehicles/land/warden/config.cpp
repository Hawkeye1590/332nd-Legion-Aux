class CfgPatches
{
	class 332nd_patch_warden_tank
	{
		addonRootClass="RD501_patch_vehicles";
		requiredAddons[]=
		{
			"RD501_patch_vehicles"
		};
		requiredVersion=0.1;
		units[]=
		{
			"RD501_warden_tank_mobile",
			"332nd_warden_tank_mobile"
		};
		weapons[]={};
	};
};
class Extended_init_EventHandlers
{
	class 332nd_warden_tank_mobile
	{
		class warden_tank_init_eh
		{
			init="['RD501_FuelCan', _this select 0, true] call ace_cargo_fnc_loadItem;['RD501_FuelCan', _this select 0, true] call ace_cargo_fnc_loadItem;['RD501_FuelCan', _this select 0, true] call ace_cargo_fnc_loadItem;['RD501_FuelCan', _this select 0, true] call ace_cargo_fnc_loadItem;['RD501_FuelCan', _this select 0, true] call ace_cargo_fnc_loadItem;['RD501_FuelCan', _this select 0, true] call ace_cargo_fnc_loadItem;";
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
	class 332nd_Categ_Land
	{
		displayName= "Land";
		priority=2;
	};	
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultEventhandlers;
class CfgVehicles
{
	class APC_Tracked_01_base_F;
	class B_APC_Tracked_01_base_F: APC_Tracked_01_base_F
	{
		class Turrets;
	};
	class B_APC_Tracked_01_CRV_F: B_APC_Tracked_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
			class CommanderOptics;
		};
		class Components;
	};
	class 332nd_warden_tank_mobile: B_APC_Tracked_01_CRV_F
	{
		displayName="[332nd] WA-10 Overseer ASV";
		ace_refuel_fuelCargo=999999999999;
		ace_rearm_defaultSupply=999999999999;
		ace_cargo_space=170;
		ace_repair_canRepair=1;
		ace_refuel_hooks[]=
		{
			{0.38,-3.1700001,-0.69999999},
			{-0.41,-3.1700001,-0.69999999}
		};
		scopeCurator=2;
		transportSoldier=8;
		LESH_canTow=1;
		crew="332nd_GI_CVT_uniform_base_P2";
		LESH_AxisOffsetTower[]={0,-6,1};
		driverCanSee=31;
		gunnerCanSee=31;
		commanderCanSee=31;
		canUseScanner=1;
		incomingMissileDetectionSystem=16;
		weaponLockSystem="2+4+8";
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_Land";
		vehicleClass="332nd_Vehicle_Class_APC";
		smokeLauncherGrenadeCount=8;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=120;
		class TransportItems
		{
			class xx_332nd_BactaBandage
			{
				name = "332nd_BactaBandage";
				count = 120;
			};
			class xx_332nd_BasicBandage
			{
				name = "332nd_BasicBandage";
				count = 120;
			};
			class xx_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 120;
			};
			class xx_332nd_MorphineStim
			{
				name = "332nd_MorphineStim";
				count = 120;
			};
			class xx_332nd_EpinephrineStim
			{
				name = "332nd_EpinephrineStim";
				count = 120;
			};
			class xx_ACE_splint
			{
				name = "ACE_splint";
				count = 120;
			};
			class xx_332nd_AdenosineStim
			{
				name = "332nd_AdenosineStim";
				count = 120;
			};
			class xx_332nd_Kolto_1000
			{
				name = "332nd_Kolto_1000";
				count = 120;
			};
			class xx_332nd_Kolto_500
			{
				name = "332nd_Kolto_500";
				count = 120;
			};
			class xx_332nd_Kolto_250
			{
				name = "332nd_Kolto_250";
				count = 120;
			};
			class xx_332nd_Bacta_1000
			{
				name = "332nd_Bacta_1000";
				count = 120;
			};
			class xx_332nd_Bacta_500
			{
				name = "332nd_Bacta_500";
				count = 120;
			};
			class xx_332nd_Bacta_250
			{
				name = "332nd_Bacta_250";
				count = 120;
			};
			class xx_332nd_Cauterizer
			{
				name = "332nd_Cauterizer";
				count = 20;
			};
		};
		class TransportWeapons
		{
			class _transport_rps1
			{
				weapon="332nd_Weaps_RPS1";
				count=5;
			};
		};
		class TransportMagazines
		{
			class _transport_10mw50
			{
				magazine="332nd_Weapons_Mags_10mw50";
				count=60;
			};
			class _transport_20mw40
			{
				magazine="332nd_Weapons_Mags_20mw40";
				count=60;
			};
			class _transport_10mw400
			{
				magazine="332nd_Weapons_Mags_10mw400";
				count=15;
			};
			class _transport_20mwup30
			{
				magazine="332nd_Weapons_Mags_20mwup30";
				count=40;
			};
			class _transport_20mwdp30
			{
				magazine="332nd_Weapons_Mags_20mwdp30";
				count=40;
			};
			class _transport_20mw240
			{
				magazine="332nd_Weapons_Mags_20mw240";
				count=20;
			};
			class _transport_40mw5
			{
				magazine="332nd_Weapons_Mags_40mw5";
				count=10;
			};
			class _transport_50mw10
			{
				magazine="332nd_Weapons_Mags_50mw10";
				count=10;
			};
			class _transport_stun5
			{
				magazine="332nd_Weapons_Mags_stun5";
				count=20;
			};
			class _transport_launcher_RPS6_AT_mags
			{
				magazine="332nd_Weapons_Mags_rps6_at";
				count=20;
			};
			class _transport_launcher_RPS6_AA_mags
			{
				magazine="332nd_Weapons_Mags_rps6_aa";
				count=20;
			};
			class _transport_launcher_RPS4_HEAT_mags
			{
				magazine="332nd_Weapons_Mags_rps4_heat";
				count=20;
			};
			class _transport_launcher_ARPS4_HE_mags
			{
				magazine="332nd_Weapons_Mags_rps4_he";
				count=20;
			};
			class _transport_launcher_PLX_AT_mags
			{
				magazine="332nd_Weapons_Mags_plx1_at";
				count=10;
			};
			class _transport_launcher_PLX_AP_mags
			{
				magazine="332nd_Weapons_Mags_plx1_ap";
				count=10;
			};
			class _transport_DC15a_HE
			{
				magazine="332nd_Weapons_Mags_GL_HE3";
				count=15;
			};
			class _transport_DC15c_HE
			{
				magazine="332nd_Weapons_Mags_GL_HE1";
				count=15;
			};
			class _transport_DC15a_AP
			{
				magazine="332nd_Weapons_Mags_GL_AP2";
				count=15;
			};
			class _transport_HuntIR_M203
			{
				magazine="ACE_HuntIR_M203";
				count=15;
			};
			class _transport_RGL_HE
			{
				magazine="332nd_Weapons_Mags_RGL_HE6";
				count=10;
			};
			class _transport_RGL_AP
			{
				magazine="332nd_Weapons_Mags_RGL_AP6";
				count=10;
			};
			class _transport_Drexl_SP
			{
				magazine="332nd_Weapons_Mags_shotgun_scatter20";
				count=20;
			};
			class _transport_Drexl_HE
			{
				magazine="332nd_Weapons_Mags_shotgun_he10";
				count=10;
			};
			class _transport_Drexl_Slug
			{
				magazine="332nd_Weapons_Mags_shotgun_slug24";
				count=10;
			};
		};
		author="RD501";
		scope=2;
		side=1;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_vehicles\land\warden\textures\332nd_apc_tracked_01_body_co.paa",
			"332nd_vehicles\land\warden\textures\332nd_mbt_01_body_co.paa",
			"332nd_vehicles\land\warden\textures\332nd_apc_wheeled_01_crows_co",
			"332nd_vehicles\land\warden\textures\332nd_apc_tracked_01_crv_co",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
		forceInGarage=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"Laserdesignator_pilotCamera",
					"CMFlareLauncher",
					"RD501_CIS_Laser_AA"
				};
				magazines[]=
				{
					"Laserbatteries",
					"300Rnd_CMFlare_Chaff_Magazine",
					"300Rnd_CMFlare_Chaff_Magazine",
					"RD501_CIS_Laster_AA_Mag",
					"RD501_CIS_Laster_AA_Mag",
					"RD501_CIS_Laster_AA_Mag",
					"RD501_CIS_Laster_AA_Mag",
					"RD501_CIS_Laster_AA_Mag"
				};
			};
			class CommanderOptics: CommanderOptics
			{
			};
		};
		class components: Components
		{
			class SensorsManagerComponent
			{
				class components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						typeRecognitionDistance=1000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						maxFogSeeThrough=-1;
						nightRangeCoef=1;
						class AirTarget
						{
							minRange=0;
							maxRange=2000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
							maxFogSeeThrough=-1;
							nightRangeCoef=1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=2000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
							maxFogSeeThrough=-1;
							nightRangeCoef=1;
						};
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						typeRecognitionDistance=750;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=1000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=1000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						typeRecognitionDistance=750;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=1000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=1000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class ManSensorComponent: SensorTemplateMan
					{
						typeRecognitionDistance=300;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=300;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=300;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						componentType="DataLinkSensorComponent";
						allowsMarking=1;
						typeRecognitionDistance=0;
						color[]={1,1,1,0};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight
			{
				componentType="VehicleSystemsDisplayManager";
				defaultDisplay="EmptyDisplay";
				right=1;
				x="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"", ((safezoneX + safezoneW) - (  (10 *    (   ((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 *    (   ((safezoneW / safezoneH) min 1.2) / 40)))])";
				y="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"", (safezoneY + safezoneH - 21 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
					};
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MineDetectorDisplay
					{
						componentType="MineDetectorDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
					};
					class SlingLoadDisplay
					{
						componentType="SlingLoadDisplayComponent";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleCommanderDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Commander";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={32000,16000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft
			{
				componentType="VehicleSystemsDisplayManager";
				defaultDisplay="EmptyDisplay";
				left=1;
				x="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"", (safezoneX + 0.5 *    (   ((safezoneW / safezoneH) min 1.2) / 40))])";
				y="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"", (safezoneY + safezoneH - 21 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
					};
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MineDetectorDisplay
					{
						componentType="MineDetectorDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
					};
					class SlingLoadDisplay
					{
						componentType="SlingLoadDisplayComponent";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleCommanderDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Commander";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={32000,16000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
		class EventHandlers: DefaultEventhandlers
		{
		};
	};
};
class CfgDigVehicles
{
	class 332nd_warden_tank_mobile
	{
		type="animate";
		animation="moveplow";
		selection="plow";
		plowRaised=0;
		plowLowered=0.89999998;
		distanceToTrench=3.3499999;
	};
};
