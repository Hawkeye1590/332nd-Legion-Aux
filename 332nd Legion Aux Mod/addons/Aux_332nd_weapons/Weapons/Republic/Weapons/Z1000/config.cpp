class cfgPatches
{
    class 332nd_Patch_z1000
    {
        addonRootClass = "332nd_Patch_Weapons";
        requiredAddons[] =
            {
                "332nd_Patch_Weapons",
                "A3_Weapons_F"};
        units[] = {};
        weapons[] =
            {
                "332nd_Weaps_Z1000"};
    };
};

class Mode_FullAuto;

class cfgWeapons
{
    class 332nd_launcher_base;

    class 332nd_Weaps_Z1000 : 332nd_launcher_base
    {
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = "332nd_Weaps_Z1000";
        displayName = "[332nd] Z-1000 Chaingun";
        model = "\3AS\3AS_Weapons\Chaingun\Chaingun.p3d";
        picture = "\Aux_332nd_weapons\Weapons\Republic\Weapons\Z1000\data\UI\z1000_ui.paa";
        handAnim[] = {"OFP2_ManSkeleton", "\3AS\3as_Weapons\data\anim\chaingun_hold.rtm"};
        reloadAction = "ReloadRPG";
        recoil = "recoil_mxc";
        maxZeroing = 600;
        modelOptics = "";
        weaponInfoType = "RscWeaponEmpty";
        opticsZoomMin = 0.1083;
        opticsZoomMax = 0.1083;
        opticsZoomInit = 0.1083;
        cameraDir = "look";
        class GunParticles
        {
        };
        class OpticsModes
        {
            class optic
            {
                opticsID = 1;
                useModelOptics = 1;
                opticsZoomMin = 0.1083;
                opticsZoomMax = 0.1083;
                opticsZoomInit = 0.1083;
                distanceZoomMin = 300;
                distanceZoomMax = 300;
                memoryPointCamera = "eye";
                opticsFlare = 1;
                opticsDisablePeripherialVision = 0;
                cameraDir = "look";
                visionMode[] = {"Normal"};
                opticsPPEffects[] = {};
            };
        };
        magazines[] = {"332nd_Weapons_Mags_z1000_drum3000"};
        modes[] = {"FullAuto"};
        class FullAuto : Mode_FullAuto
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                closure1[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_2", 0.316228, 1, 20};
                soundClosure[] = {"closure1", 0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"3AS\3AS_Main\Sounds\Z6\Z61.ogg", +3db, 1, 2200};
                soundBegin[] = {"begin1", 0.1};
            };
            reloadTime = 0.033;
            dispersion = 0.00174;
            recoil = "recoil_auto_mk200";
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.05;
            soundBurst = 0;
            burst = 1;
            displayName = "Full";
            textureType = "fullAuto";
        };
        ace_overpressure_angle = 0;
        ace_overpressure_range = 0;
        ace_overpressure_damage = 0;
    };
};

class CfgMagazines
{
    class CA_LauncherMagazine;

    class 332nd_Weapons_Mags_z1000_drum3000 : CA_LauncherMagazine
    {
        scope = 2;
        author = "332nd Aux Team";
        displayName = "[332nd] 3000Rnd Z1000 Drum";
        displayNameShort = "3000Rnd Drum";
        descriptionShort = "Z1000 High Power Drum Magazine";
        model = "SWLW_clones\machineguns\Z7\Z7_mag.p3d";
        picture = "\SWLW_clones\machineguns\Z7\data\ui\SWLW_Z7_mag_ui.paa";
        tracersEvery = 1;
        initSpeed = 860;
        ammo = "332nd_Weapons_Ammo_z1000";
        type = "2*  256";
        mass = 900;
        count = 3000;
    };
};

class CfgAmmo
{
    class M_NLAW_AT_F;

    class 332nd_Weapons_Ammo_z1000 : M_NLAW_AT_F
    {
        model = "SWLW_main\Effects\laser_blue.p3d";
        tracerscale = 1.5;
        hit = 57.45;
        indirectHit = 3;
        indirectHitRange = 0.5;
        caliber = 3.5999999;
        ACE_caliber = 1;
        cost = 500;
        airFriction = 0;
        sideairFriction = 0;
        coefGravity = 0;
        maxSpeed = 1050;
        typicalSpeed = 860;
        initTime = 0;
        thrustTime = 3.4;
        thrust = 500;
        fuseDistance = 0;
        simulationStep = 0.02;
        timeToLive = 4;
        whistleDist = 20;
        triggerOnImpact = 1;
        triggerDistance = 2.5;
        directionalExplosion = 0;
        dangerRadiusBulletClose = -1;
        dangerRadiusHit = -1;
        warheadName = "";
        deleteParentWhenTriggered = 0;
        submunitionAmmo = "";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;
        submunitionInitialOffset[] = {0, 0, -0.2};
        minTimeToLive = 0;
        simulation = "shotMissile";
        flightProfiles[] = {"Direct"};
        proximityExplosionDistance = 5;
        explosive = 0.2;
        CraterEffects = "ExploAmmoCrater";
        effectFlare = "FlareShell";
        effectFly = "AmmoClassic";
        effectsFire = "CannonFire";
        effectsMissile = "EmptyEffect";
        effectsMissileInit = "";
        effectsSmoke = "SmokeShellWhite";
        explosionAngle = 60;
        explosionEffects = "3AS_ImpactPlasma";
        explosionEffectsDir = "explosionDir";
        airLock = 0;
        aiAmmoUsageFlags = "64 + 128 + 256";
        irLock = 0;
        maneuvrability = 4;
        allowAgainstInfantry = 1;
        trackOversteer = 1;
        maxControlRange = 600;
        class HitEffects
        {
            Hit_Foliage_green = "3AS_ImpactPlasma";
            Hit_Foliage_Dead = "3AS_ImpactPlasma";
            Hit_Foliage_Green_big = "3AS_ImpactPlasma";
            Hit_Foliage_Palm = "3AS_ImpactPlasma";
            Hit_Foliage_Pine = "3AS_ImpactPlasma";
            hitFoliage = "3AS_ImpactPlasma";
            hitGlass = "3AS_ImpactPlasma";
            hitGlassArmored = "3AS_ImpactPlasma";
            hitWood = "3AS_ImpactPlasma";
            hitMetal = "3AS_ImpactPlasma";
            hitMetalPlate = "3AS_ImpactPlasma";
            hitBuilding = "3AS_ImpactPlasma";
            hitPlastic = "3AS_ImpactPlasma";
            hitRubber = "3AS_ImpactPlasma";
            hitTyre = "3AS_ImpactPlasma";
            hitConcrete = "3AS_ImpactPlasma";
            hitMan = "3AS_ImpactPlasma";
            hitGroundSoft = "3AS_ImpactPlasma";
            hitGroundRed = "3AS_ImpactPlasma";
            hitGroundHard = "3AS_ImpactPlasma";
            hitWater = "3AS_ImpactPlasma";
            hitVirtual = "3AS_ImpactPlasma";
            default_mat = "3AS_ImpactPlasma";
        };
        soundHit[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01", 1, 1, 150};
        soundHit1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01", 1, 1, 200};
        soundHit2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01", 1, 1, 200};
        soundHit3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01", 1, 1, 2000};
        soundFly[] = {"", 1, 1, 50};
        SoundSetExplosion[] = {""};
        class CamShakeFire
        {
            power = 0;
            duration = 0;
            frequency = 0;
            distance = 0;
        };
        class CamShakeExplode
        {
            distance = 0;
            duration = 0;
            frequency = 0;
            power = 0;
        };
        class CamShakeHit
        {
            distance = 0;
            duration = 0;
            frequency = 0;
            power = 0;
        };
        class CamShakePlayerFire
        {
            distance = 0;
            duration = 0;
            frequency = 0;
            power = 0;
        };
    };
};

// Credit to the 501st Aux Team for settings of items
// Credit to 3as for the models