class CfgPatches
{
	class 332nd_patch_laat
	{
		addonRootClass="RD501_patch_vehicles";
		requiredAddons[]=
		{
			"RD501_patch_vehicles",
			"3AS_LAAT"
		};
		requiredVersion=0.1;
		units[]=
		{
			"RD501_Laat_Base",
			"RD501_LAAT_MKIII_Balls",
			"Aux332nd_Laat_Base",
			"Aux332nd_LAAT_MKIII_Balls",
		};
		weapons[]={};
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
	class 332nd_Categ_Air
	{
		displayName= "Air";
		priority=2;
	};	
};
class Extended_init_EventHandlers
{
	class Aux332nd_Laat_Base
	{
		class laat_init_eh
		{
			init="(_this) spawn ls_vehicle_fnc_ImpulsorMonitor; [_this select 0] execVM '332nd_Main\functions\autocrate\autocrate.sqf';";
		};
	};
	class Aux332nd_LAAT_MKIII_Balls
	{
		class laat_init_eh
		{
			init="(_this) spawn ls_vehicle_fnc_ImpulsorMonitor; [_this select 0] execVM '332nd_Main\functions\autocrate\autocrate.sqf';";
		};
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
	class Helicopter
	{
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class Components;
		class RotorLibHelicopterProperties;
	};
	class B_Heli_Attack_01_base_F: Heli_Attack_01_base_F
	{
		class UserActions;
		class CargoTurret;
	};
	class 3AS_Patrol_LAAT_Base: Heli_Attack_01_base_F
	{
		class Turrets;
	};
	class 3as_laat_Base: B_Heli_Attack_01_base_F
	{
		class ACE_SelfActions;
		class UserActions: UserActions
		{
			class rampOpen;
			class rampClose;
		};
		class Components: Components
		{
		};
		class Turrets: Turrets
		{
			class Copilot;
			class LeftDoorgun;
			class RightDoorGun;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
			class CargoTurret_05;
			class CargoTurret_06;
		};
	};
	class 3AS_Patrol_LAAT_Republic: 3AS_Patrol_LAAT_Base
	{
		class Turrets: Turrets
		{
			class Copilot;
		};
	};
	class 3as_laatUnarmed_Base: 3as_laat_Base
	{
		class Turrets: Turrets
		{
			class Copilot;
			class CargoTurret_01;
			class CargoTurret_02;
		};
	};
	class 3as_laatFloodLight_Base: 3as_laat_Base
	{
		class Turrets: Turrets
		{
			class Copilot;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
			class CargoTurret_05;
			class CargoTurret_06;
		};
	};
	class 3as_LAAT_Mk1: 3as_laat_Base
	{
	};
	class 3as_LAAT_Mk1Lights: 3as_laatFloodLight_Base
	{
	};
	class 3as_LAAT_Mk2: 3as_laatUnarmed_Base
	{
	};
	class 3as_LAAT_Mk2Lights: 3as_laatFloodLight_Base
	{
	};
	class 3AS_LAAT_Cargo_Base;
	class 3AS_LAATC: 3AS_LAAT_Cargo_Base
	{
		class Components;
	};
	class Aux332nd_Laat_Base: 3as_LAAT_Mk1
	{
		tas_can_impulse=0;
		ls_impulsor_fuelDrain_1=7.5000004e-005;
		ls_impulsor_fuelDrain_2=0.00019999999;
		ls_impulsor_boostSpeed_1=400;
		ls_impulsor_boostSpeed_2=600;
		ls_hasImpulse=1;
		ace_fastroping_enabled=1;
		ace_fastroping_ropeOrigins[]=
		{
			{1.5,1,-0.2},
			{1.5,2.5,-0.2},
			{1.5,-1,-0.2},
			{-1.5,1,-0.2},
			{-1.5,2.5,-0.2},
			{-1.5,-1,-0.2}
		};
		class ACE_SelfActions: ACE_SelfActions
		{
			class ACE_Passengers
			{
				condition="alive _target";
				displayName="Passengers";
				insertChildren="_this call ace_interaction_fnc_addPassengersActions";
				statement="";
			};
			class RD501_HUD_Changer
			{
				displayName="Change HUD Color :)";
				exceptions[]=
				{
					"isNotInside",
					"isNotSwimming",
					"isNotSitting"
				};
				condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
				showDisabled=0;
				priority=2.5;
				icon="RD501_Main\textures\interaction_Icons\colorWheel.paa";
				class RD501_Red_HUD
				{
					displayName="Red HUD Color";
					exceptions[]=
					{
						"isNotInside",
						"isNotSwimming",
						"isNotSitting"
					};
					condition="!(isNull objectParent player)";
					statement="[1,0,0,1,vehicle player] spawn RD501_fnc_change_hud_color";
					showDisabled=0;
					runOnHover=1;
					priority=2.5;
					icon="RD501_Main\textures\interaction_Icons\red.paa";
				};
				class RD501_Orange_HUD: RD501_Red_HUD
				{
					displayName="Orange HUD Color";
					statement="[1,.05,0,1,vehicle player] spawn RD501_fnc_change_hud_color";
					icon="RD501_Main\textures\interaction_Icons\orange.paa";
				};
				class RD501_Yellow_HUD: RD501_Red_HUD
				{
					displayName="Yellow HUD Color";
					statement="[1,1,0,1,vehicle player] spawn RD501_fnc_change_hud_color";
					icon="RD501_Main\textures\interaction_Icons\yellow.paa";
				};
				class RD501_Green_HUD: RD501_Red_HUD
				{
					displayName="Green HUD Color";
					statement="[0,1,0,1,vehicle player] spawn RD501_fnc_change_hud_color";
					icon="RD501_Main\textures\interaction_Icons\green.paa";
				};
				class RD501_Cyan_HUD: RD501_Red_HUD
				{
					displayName="Cyan HUD Color";
					statement="[0,1,1,1,vehicle player] spawn RD501_fnc_change_hud_color";
					icon="RD501_Main\textures\interaction_Icons\cyan.paa";
				};
				class RD501_Blue_HUD: RD501_Red_HUD
				{
					displayName="Blue HUD Color";
					statement="[0,0,1,1,vehicle player] spawn RD501_fnc_change_hud_color";
					icon="RD501_Main\textures\interaction_Icons\blue.paa";
				};
				class RD501_Purple_HUD: RD501_Red_HUD
				{
					displayName="Purple HUD Color";
					statement="[.5,0,.5,1,vehicle player] spawn RD501_fnc_change_hud_color";
					icon="RD501_Main\textures\interaction_Icons\purple.paa";
				};
				class RD501_White_HUD: RD501_Red_HUD
				{
					displayName="White HUD Color";
					statement="[1,1,1,1,vehicle player] spawn RD501_fnc_change_hud_color";
					icon="RD501_Main\textures\interaction_Icons\white.paa";
				};
				class RD501_Black_HUD: RD501_Red_HUD
				{
					displayName="Black HUD Color";
					statement="[0,0,0,1,vehicle player] spawn RD501_fnc_change_hud_color";
					icon="RD501_Main\textures\interaction_Icons\black.paa";
				};
				class RD501_Clear_HUD: RD501_Red_HUD
				{
					displayName="No HUD Color";
					statement="[1,1,1,0,vehicle player] spawn RD501_fnc_change_hud_color";
					icon="RD501_Main\textures\interaction_Icons\noHud.paa";
				};
			};
		};
		soundSetSonicBoom[]=
		{
			"Plane_Fighter_SonicBoom_SoundSet"
		};
		scope=1;
		scopeCurator=1;
		side=1;
		crew="332nd_Reaper_Pilot_uniform_base_P2";
		author="RD501";
		forceInGarage=0;
		irTarget=1;
		irTargetSize=1;
		radarTarget=1;
		radarTargetSize=1;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		threat[]={0.40000001,0.69999999,0.89999998};
		cost=10000;
		faction="332nd_Legion";
		editorSubcategory="332nd_Categ_Air";
		vehicleClass="332nd_Air_Vehicle_Class_Republic";
		RD501_magclamp_small_forbidden=1;
		RD501_magclamp_small_1[]={0,1,-1};
		RD501_magclamp_large_offset[]={0,1.6,-7.3000002};
		liftForceCoef=2;
		bodyFrictionCoef=5;
		cyclicAsideForceCoef="4*1.2";
		cyclicForwardForceCoef="2*1.2";
		maxSpeed=200;
		fuelCapacity=700;
		fuelConsumptionRate=0.2;
		altFullForce=16000;
		altNoForce=19000;
		armor=500;
		crewCrashProtection=0;
		epeImpulseDamageCoef=0;
		weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"RD501_CMFlareLauncher",
			"SmokeLauncherMK2",
			"RD501_Republic_Aircraft_Laser_AA",
			"RD501_Aircraft_Laser_Cannon",
			"RD501_guided_resupply_pod_launcher"
		};
		magazines[]=
		{
			"Laserbatteries",
			"RD501_CMFlare_Magazine_200",
			"RD501_CMFlare_Magazine_200",
			"RD501_Republic_Aircraft_Laser_AA_Mag_600",
			"RD501_Republic_Aircraft_Laser_Cannon_Mag_100",
			"SmokeLauncherMagMK2",
			"SmokeLauncherMagMK2",
			"SmokeLauncherMagMK2",
			"SmokeLauncherMagMK2",
			"RD501_Guided_Resupply_Ammo_Resupply_Magazine",
			"RD501_Guided_Resupply_Medical_Resupply_Magazine"
		};
		smokeLauncherGrenadeCount=24;
		smokeLauncherAngle=360;
		smokeLauncherVelocity=14;
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=-10;
					maxAngleX=90;
					initAngleY=0;
					minAngleY=-90;
					maxAngleY=90;
					initFov=0.42500001;
					minFov=0.42500001;
					maxFov=0.42500001;
					thermalMode[]={0,1,2,3,4,5};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class zoomx4: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.425/4)";
					minFov="(0.425/4)";
					maxFov="(0.425/4)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX8: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/8)";
					minFov="(0.42/8)";
					maxFov="(0.42/8)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX20: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/20)";
					minFov="(0.42/20)";
					maxFov="(0.42/20)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX50: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/50)";
					minFov="(0.42/50)";
					maxFov="(0.42/50)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX70: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/70)";
					minFov="(0.42/70)";
					maxFov="(0.42/70)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=-10;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=0;
		};
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,8000,16000,300,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,8000,16000,300,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=0;
							maxRange=3500;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=3500;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						componentType="IRSensorComponent";
						typeRecognitionDistance=3000;
						angleRangeHorizontal=120;
						angleRangeVertical=40;
						maxFogSeeThrough=0.85000002;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=0;
						minSpeedThreshold=0;
						maxSpeedThreshold=1000;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=1;
						aimDown=10;
						animDirection="";
						color[]={1,0,0,1};
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=0;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						componentType="ActiveRadarSensorComponent";
						typeRecognitionDistance=4000;
						angleRangeHorizontal=90;
						angleRangeVertical=90;
						maxFogSeeThrough=-1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=0;
						minSpeedThreshold=0;
						maxSpeedThreshold=1000;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=1;
						aimDown=0;
						animDirection="";
						color[]={0,1,1,1};
					};
					class VisualRadarSensorComponent: SensorTemplateVisual
					{
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
						componentType="VisualSensorComponent";
						typeRecognitionDistance=750;
						angleRangeHorizontal=90;
						angleRangeVertical=90;
						maxFogSeeThrough=-1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=0;
						minSpeedThreshold=0;
						maxSpeedThreshold=1000;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=1;
						aimDown=0;
						color[]={1,1,0.5,0.80000001};
					};
					class ManRadarSensorComponent: SensorTemplateMan
					{
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
						componentType="ManSensorComponent";
						typeRecognitionDistance=300;
						angleRangeHorizontal=1800;
						angleRangeVertical=180;
						maxFogSeeThrough=0.69999999;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=0;
						minSpeedThreshold=0;
						maxSpeedThreshold=1000;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=1;
						aimDown=0;
					};
					class LaserSensorComponent: SensorTemplateLaser
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
						componentType="LaserSensorComponent";
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						aimDown=0;
						maxFogSeeThrough=0.85000002;
					};
					class NVSensorComponent: SensorTemplateNV
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
						componentType="NVSensorComponent";
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						aimDown=0;
						maxFogSeeThrough=0.85000002;
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
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_A143_3DEN_CA.paa";
				class Pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"RD501_Republic_Aircraft_Missile_AA_IR_Pylon",
							"RD501_Republic_Aircraft_Missile_AT_IR_Pylon",
							"RD501_Republic_Aircraft_Missile_AT_Wire_Pylon",
							"RD501_Republic_Aircraft_Missile_AP_Pylon"
						};
						attachment="empty";
						priority=6;
						maxweight=75;
						UIposition[]={0.15000001,0.44999999};
					};
					class pylons2: pylons1
					{
						priority=4;
						UIposition[]={0.2,0.34999999};
					};
					class pylons3: pylons1
					{
						priority=2;
						UIposition[]={0.25,0.25};
					};
					class pylons4: pylons1
					{
						priority=1;
						UIposition[]={0.60000002,0.25};
						mirroredMissilePos=3;
					};
					class pylons5: pylons1
					{
						priority=3;
						UIposition[]={0.64999998,0.34999999};
						mirroredMissilePos=2;
					};
					class pylons6: pylons1
					{
						priority=5;
						UIposition[]={0.69999999,0.44999999};
						mirroredMissilePos=1;
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="empty";
						attachment[]={};
					};
					class Standard
					{
						displayName="Standard";
						attachment[]=
						{
							"RD501_Republic_Aircraft_Missile_AA_IR_Pylon",
							"RD501_Republic_Aircraft_Missile_AT_IR_Pylon",
							"RD501_Republic_Aircraft_Missile_AT_Wire_Pylon",
							"RD501_Republic_Aircraft_Missile_AT_Wire_Pylon",
							"RD501_Republic_Aircraft_Missile_AT_IR_Pylon",
							"RD501_Republic_Aircraft_Missile_AA_IR_Pylon"
						};
					};
				};
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
	};
	class Aux332nd_LAAT_MKIII_Balls: Aux332nd_Laat_Base
	{
		displayName="[332nd] LAAT/I MK.I";
		laserScanner=1;
		editorSubcategory="332nd_Categ_Air";
		vehicleClass="332nd_Air_Vehicle_Class_Republic";
		crew="332nd_Reaper_Pilot_uniform_base_P2";
		scope=2;
		scopeCurator=2;
		class UserActions: UserActions
		{
			delete impulseOn;
			delete impulseOff;
			class rampOpen: rampOpen
			{
				condition="(this animationphase 'ramp' == 0) AND (alive this) AND (player in [gunner this, driver this])";
			};
			class rampClose: rampClose
			{
				condition="(this animationphase 'ramp' == 1) AND (alive this) AND (player in [gunner this, driver this])";
			};
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_vehicles\air\laat\textures\332nd_CX_Hull.paa",
			"332nd_vehicles\air\laat\textures\332nd_CX_Wings.paa",
			"3AS\3as_Laat\LAATI\data\weapons_CO.paa",
			"3AS\3as_Laat\LAATI\data\weapon_Details_CO.paa",
			"3AS\3as_Laat\LAATI\data\interior_CO.paa"
		};
		class Turrets: Turrets
		{
			class Gunner: Copilot
			{
				minelev=-60;
				minturn=-240;
				maxelev=40;
				maxturn=-120;
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="WFOV";
						initAngleX=0;
						minAngleX=-10;
						maxAngleX=90;
						initAngleY=0;
						minAngleY=-90;
						maxAngleY=90;
						initFov=0.42500001;
						minFov=0.42500001;
						maxFov=0.42500001;
						thermalMode[]={0,1,2,3,4,5};
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
						opticsPPEffects[]=
						{
							"OpticsCHAbera2",
							"OpticsBlur2"
						};
					};
					class zoomx4: Wide
					{
						opticsDisplayName="NFOV";
						initFov="(0.425/4)";
						minFov="(0.425/4)";
						maxFov="(0.425/4)";
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX8: Wide
					{
						opticsDisplayName="NFOV";
						initFov="(0.42/8)";
						minFov="(0.42/8)";
						maxFov="(0.42/8)";
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX20: Wide
					{
						opticsDisplayName="NFOV";
						initFov="(0.42/20)";
						minFov="(0.42/20)";
						maxFov="(0.42/20)";
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX50: Wide
					{
						opticsDisplayName="NFOV";
						initFov="(0.42/50)";
						minFov="(0.42/50)";
						maxFov="(0.42/50)";
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX70: Wide
					{
						opticsDisplayName="NFOV";
						initFov="(0.42/70)";
						minFov="(0.42/70)";
						maxFov="(0.42/70)";
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					showMiniMapInOptics=1;
					showUAVViewInOptics=0;
					showSlingLoadManagerInOptics=1;
				};
				weapons[]=
				{
					"RD501_generic_republic_aircraft_cannon",
					"Laserdesignator_pilotCamera"
				};
				magazines[]=
				{
					"Laserbatteries",
					"RD501_generic_aircraft_gun_green_x1000_mag",
					"RD501_generic_aircraft_gun_green_x1000_mag",
					"RD501_generic_aircraft_gun_green_x1000_mag"
				};
				memorypointgunneroptics="FIXME";
			};
			class LeftDoorgun: LeftDoorgun
			{
				weapons[]=
				{
					"RD501_turret_laat_ball_beam_l",
					"Laserdesignator_pilotCamera"
				};
				magazines[]=
				{
					"Laserbatteries",
					"RD501_Republic_Aircraft_Laser_Beam_Mag_500",
					"RD501_Republic_Aircraft_Laser_Beam_Mag_500",
					"RD501_Republic_Aircraft_Laser_Beam_Mag_500"
				};
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="WFOV";
						initAngleX=0;
						minAngleX=-10;
						maxAngleX=90;
						initAngleY=0;
						minAngleY=-90;
						maxAngleY=90;
						initFov=0.42500001;
						minFov=0.42500001;
						maxFov=0.42500001;
						thermalMode[]={0,1,2,3,4,5};
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
						opticsPPEffects[]=
						{
							"OpticsCHAbera2",
							"OpticsBlur2"
						};
					};
					class zoomx4: Wide
					{
						opticsDisplayName="NFOV";
						initFov="(0.425/4)";
						minFov="(0.425/4)";
						maxFov="(0.425/4)";
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX8: Wide
					{
						opticsDisplayName="NFOV";
						initFov="(0.42/8)";
						minFov="(0.42/8)";
						maxFov="(0.42/8)";
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX20: Wide
					{
						opticsDisplayName="NFOV";
						initFov="(0.42/20)";
						minFov="(0.42/20)";
						maxFov="(0.42/20)";
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX50: Wide
					{
						opticsDisplayName="NFOV";
						initFov="(0.42/50)";
						minFov="(0.42/50)";
						maxFov="(0.42/50)";
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX70: Wide
					{
						opticsDisplayName="NFOV";
						initFov="(0.42/70)";
						minFov="(0.42/70)";
						maxFov="(0.42/70)";
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					showMiniMapInOptics=1;
					showUAVViewInOptics=0;
					showSlingLoadManagerInOptics=1;
				};
				memorypointgunneroptics="FIXME";
				stabilizedInAxes=3;
			};
			class RightDoorGun: RightDoorGun
			{
				weapons[]=
				{
					"RD501_turret_laat_ball_beam_r",
					"Laserdesignator_pilotCamera"
				};
				magazines[]=
				{
					"Laserbatteries",
					"RD501_Republic_Aircraft_Laser_Beam_Mag_500",
					"RD501_Republic_Aircraft_Laser_Beam_Mag_500",
					"RD501_Republic_Aircraft_Laser_Beam_Mag_500"
				};
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="WFOV";
						initAngleX=0;
						minAngleX=-10;
						maxAngleX=90;
						initAngleY=0;
						minAngleY=-90;
						maxAngleY=90;
						initFov=0.42500001;
						minFov=0.42500001;
						maxFov=0.42500001;
						thermalMode[]={0,1,2,3,4,5};
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
						opticsPPEffects[]=
						{
							"OpticsCHAbera2",
							"OpticsBlur2"
						};
					};
					class zoomx4: Wide
					{
						opticsDisplayName="NFOV";
						initFov="(0.425/4)";
						minFov="(0.425/4)";
						maxFov="(0.425/4)";
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX8: Wide
					{
						opticsDisplayName="NFOV";
						initFov="(0.42/8)";
						minFov="(0.42/8)";
						maxFov="(0.42/8)";
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX20: Wide
					{
						opticsDisplayName="NFOV";
						initFov="(0.42/20)";
						minFov="(0.42/20)";
						maxFov="(0.42/20)";
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX50: Wide
					{
						opticsDisplayName="NFOV";
						initFov="(0.42/50)";
						minFov="(0.42/50)";
						maxFov="(0.42/50)";
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX70: Wide
					{
						opticsDisplayName="NFOV";
						initFov="(0.42/70)";
						minFov="(0.42/70)";
						maxFov="(0.42/70)";
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					showMiniMapInOptics=1;
					showUAVViewInOptics=0;
					showSlingLoadManagerInOptics=1;
				};
				memorypointgunneroptics="FIXME";
				stabilizedInAxes=3;
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
			class CargoTurret_06: CargoTurret_06
			{
			};
		};
		class rd501_jumppackDispenser
		{
			jumppack="RD501_JLTS_Clone_droppack";
		};
		class RD501_Texture_Selector
		{
			class 332nd_Hull_CX
			{
				title="CX Hull";
				submenu="Hulls";
				decals[]=
				{
					"332nd_vehicles\air\laat\textures\332nd_CX_Hull.paa",
					"",
					"",
					"",
					""
				};
				autoApplyNameRegex="";
				restrictNameRegex="";
			};
			class 332nd_Hull_CXT
			{
				title="CX-T Hull";
				submenu="Hulls";
				decals[]=
				{
					"332nd_vehicles\air\laat\textures\332nd_CXT_Hull.paa",
					"",
					"",
					"",
					""
				};
				autoApplyNameRegex="";
				restrictNameRegex="";
			};
			class 332nd_Hull_NCO
			{
				title="NCO Hull";
				submenu="Hulls";
				decals[]=
				{
					"332nd_vehicles\air\laat\textures\332nd_NCO_Hull.paa",
					"",
					"",
					"",
					""
				};
				autoApplyNameRegex="";
				restrictNameRegex="";
			};
			class 332nd_Wings_CX
			{
				title="CX Wings";
				submenu="Wings";
				decals[]=
				{
					"",
					"332nd_vehicles\air\laat\textures\332nd_CX_Wings.paa",
					"",
					"",
					""
				};
				autoApplyNameRegex="";
				restrictNameRegex="";
			};
			class 332nd_Wings_CXT
			{
				title="CX-T Wings";
				submenu="Wings";
				decals[]=
				{
					"",
					"332nd_vehicles\air\laat\textures\332nd_CXT_Wings.paa",
					"",
					"",
					""
				};
				autoApplyNameRegex="";
				restrictNameRegex="";
			};
			class 332nd_Wings_NCO
			{
				title="NCO Wings";
				submenu="Wings";
				decals[]=
				{
					"",
					"332nd_vehicles\air\laat\textures\332nd_NCO_Wings.paa",
					"",
					"",
					""
				};
				autoApplyNameRegex="";
				restrictNameRegex="";
			};
		};
	};
};
