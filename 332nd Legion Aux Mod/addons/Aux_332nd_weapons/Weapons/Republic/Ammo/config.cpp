class CfgPatches
{
    class 332nd_Patch_Ammo
    {
        addonRootClass = "332nd_Patch_Weapons";
        requiredAddons[] =
            {
                "332nd_Patch_Weapons",
                "JLTS_weapons_Core"};
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
    };
};

class CfgAmmo
{
    class JLTS_bullet_stun;
    class JLTS_bullet_carbine_blue;
    class JLTS_bullet_carbine_red;
    class JLTS_bullet_carbine_yellow;
    class JLTS_bullet_carbine_green;

    class G_40mm_HE;
    class SmokeShell;
    class F_40mm_White;

    // Stuns
    class 332nd_Weapons_Ammo_Stun : JLTS_bullet_stun
    {
        model = "\MRC\JLTS\weapons\Core\effects\stun.p3d";
        hit = 0.9;
        JLTS_isStunAmmo = 1;
        typicalSpeed = 30;
        timetolive = 3;
        aiAmmoUsageFlags = 0;
        // RD501_stunDuration=30;
    };

    // Blaster Ammo Base
    class 332nd_Weapons_Ammo_base_blue : JLTS_bullet_carbine_blue
    {
        ACE_ammoTempMuzzleVelocityShifts = [ -26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19 ];
        ACE_ballisticCoefficients = [0.322];
        ACE_barrelLengths = [ 508, 660.4, 711.2 ];
        ACE_bulletLength = 39.573;
        ACE_bulletMass = 16.2;
        ACE_caliber = 8.585;
        ACE_damageType = "bullet";
        ACE_dragModel = 7;
        ACE_muzzleVelocities = [ 880, 915, 925 ];
        ACE_muzzleVelocityVariationSD = 0.3;
        ACE_standardAtmosphere = "ICAO";
        ace_vehicle_damage_incendiary = 0.1;
        ACE_velocityBoundaries = [];
        aiAmmoUsageFlags = "64 + 128 + 256";
        airfriction = 0;
        airlock = 1;
        animated = 0;
        artilleryCharge = 1;
        artilleryDispersion = 1;
        artilleryLock = 0;
        audibleFire = 80;
        autoSeekTarget = 0;
        caliber = 2;
        cartridge = "";
        cmImmunity = 1;
        coefgravity = 0;
        cost = 6;
        dangerRadiusBulletClose = 10;
        dangerRadiusHit = 14;
        deflecting = 0;
        deflectionSlowDown = 0.8;
        explosive = 0;
        effectFly="3AS_PlasmaBolt_Blue_Fly";
        fuseDistance = 0;
        hit = 16;
        icon = "";
        indirectHit = 0;
        indirectHitRange = 0;
        initTime = 0;
        irLock = 0;
        irtarget = 1;
        laserLock = 0;
        lockSeekRadius = 100;
        lockType = 0;
        maneuvrability = 1;
        manualControl = 0;
        maverickweaponIndexOffset = 0;
        maxControlRange = 350;
        maxSpeed = 0;
        minDamageForCamShakeHit = 0.55;
        mineBoundingDist = 3;
        mineBoundingTime = 3;
        mineDiveSpeed = 1;
        mineFloating = -1;
        mineInconspicuousness = 10;
        minePlaceDist = 0.5;
        mineTrigger = "RangeTrigger";
        minimumSafeZone = 0.1;
        minTimeToLive = 0;
        missileLockCone = 0;
        model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
        nvLock = 0;
        nvgonly = 0;
        shootDistraction = -1;
        sideAirFriction = 1;
        simulation = "shotBullet";
        simulationStep = 0.05;
        submunitionAmmo = "";
        suppressionRadiusBulletClose = 8;
        suppressionRadiusHit = 10;
        thrust = 210;
        thrustTime = 1.5;
        timeToLive = 4;
        tracerscale = 1.5;
        tracerstarttime = 0;
        tracerendtime = 10;
        trackLead = 1;
        trackOversteer = 1;
        typicalSpeed = 890;
        underwaterHitRangeCoef = 1;
        visibleFire = 3;
        visibleFireTime = 3;
        waterEffectOffset = 0.8;
        weaponLockSystem = 0;
        weaponType = "Default";
        whistleDist = 0;
        whistleOnFire = 0;
    };

    class 332nd_Weapons_Ammo_base_red : JLTS_bullet_carbine_red
    {
        ACE_ammoTempMuzzleVelocityShifts = [ -26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19 ];
        ACE_ballisticCoefficients = [0.322];
        ACE_barrelLengths = [ 508, 660.4, 711.2 ];
        ACE_bulletLength = 39.573;
        ACE_bulletMass = 16.2;
        ACE_caliber = 8.585;
        ACE_damageType = "bullet";
        ACE_dragModel = 7;
        ACE_muzzleVelocities = [ 880, 915, 925 ];
        ACE_muzzleVelocityVariationSD = 0.3;
        ACE_standardAtmosphere = "ICAO";
        ace_vehicle_damage_incendiary = 0.1;
        ACE_velocityBoundaries = [];
        aiAmmoUsageFlags = "64 + 128 + 256";
        airfriction = 0;
        airlock = 1;
        animated = 0;
        artilleryCharge = 1;
        artilleryDispersion = 1;
        artilleryLock = 0;
        audibleFire = 80;
        autoSeekTarget = 0;
        caliber = 2;
        cartridge = "";
        cmImmunity = 1;
        coefgravity = 0;
        cost = 6;
        dangerRadiusBulletClose = 10;
        dangerRadiusHit = 14;
        deflecting = 0;
        deflectionSlowDown = 0.8;
        effectFly = "332nd_particle_effect_blasterbolt_fly_red";
        explosive = 0;
        fuseDistance = 0;
        hit = 16;
        icon = "";
        indirectHit = 0;
        indirectHitRange = 0;
        initTime = 0;
        irLock = 0;
        irtarget = 1;
        laserLock = 0;
        lockSeekRadius = 100;
        lockType = 0;
        maneuvrability = 1;
        manualControl = 0;
        maverickweaponIndexOffset = 0;
        maxControlRange = 350;
        maxSpeed = 0;
        minDamageForCamShakeHit = 0.55;
        mineBoundingDist = 3;
        mineBoundingTime = 3;
        mineDiveSpeed = 1;
        mineFloating = -1;
        mineInconspicuousness = 10;
        minePlaceDist = 0.5;
        mineTrigger = "RangeTrigger";
        minimumSafeZone = 0.1;
        minTimeToLive = 0;
        missileLockCone = 0;
        model = "\Aux_332nd_weapons\Weapons\Ammo\data332nd_weapons_Ammo_Tracers_Medium_Red.p3d";
        nvLock = 0;
        nvgonly = 0;
        shootDistraction = -1;
        sideAirFriction = 1;
        simulation = "shotBullet";
        simulationStep = 0.05;
        submunitionAmmo = "";
        suppressionRadiusBulletClose = 8;
        suppressionRadiusHit = 10;
        thrust = 210;
        thrustTime = 1.5;
        timeToLive = 4;
        tracerScale = 1.5;
        tracerstarttime = 0;
        tracerendtime = 10;
        trackLead = 1;
        trackOversteer = 1;
        typicalSpeed = 890;
        underwaterHitRangeCoef = 1;
        visibleFire = 3;
        visibleFireTime = 3;
        waterEffectOffset = 0.8;
        weaponLockSystem = 0;
        weaponType = "Default";
        whistleDist = 0;
        whistleOnFire = 0;
    };

    class 332nd_Weapons_Ammo_base_yellow : JLTS_bullet_carbine_yellow
    {
        ACE_ammoTempMuzzleVelocityShifts = [ -26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19 ];
        ACE_ballisticCoefficients = [0.322];
        ACE_barrelLengths = [ 508, 660.4, 711.2 ];
        ACE_bulletLength = 39.573;
        ACE_bulletMass = 16.2;
        ACE_caliber = 8.585;
        ACE_damageType = "bullet";
        ACE_dragModel = 7;
        ACE_muzzleVelocities = [ 880, 915, 925 ];
        ACE_muzzleVelocityVariationSD = 0.3;
        ACE_standardAtmosphere = "ICAO";
        ace_vehicle_damage_incendiary = 0.1;
        ACE_velocityBoundaries = [];
        aiAmmoUsageFlags = "64 + 128 + 256";
        airfriction = 0;
        airlock = 1;
        animated = 0;
        artilleryCharge = 1;
        artilleryDispersion = 1;
        artilleryLock = 0;
        audibleFire = 80;
        autoSeekTarget = 0;
        caliber = 2;
        cartridge = "";
        cmImmunity = 1;
        coefgravity = 0;
        cost = 6;
        dangerRadiusBulletClose = 10;
        dangerRadiusHit = 14;
        deflecting = 0;
        deflectionSlowDown = 0.8;
        effectFly = "332nd_particle_effect_blasterbolt_fly_yellow";
        explosive = 0;
        fuseDistance = 0;
        hit = 16;
        icon = "";
        indirectHit = 0;
        indirectHitRange = 0;
        initTime = 0;
        irLock = 0;
        irtarget = 1;
        laserLock = 0;
        lockSeekRadius = 100;
        lockType = 0;
        maneuvrability = 1;
        manualControl = 0;
        maverickweaponIndexOffset = 0;
        maxControlRange = 350;
        maxSpeed = 0;
        minDamageForCamShakeHit = 0.55;
        mineBoundingDist = 3;
        mineBoundingTime = 3;
        mineDiveSpeed = 1;
        mineFloating = -1;
        mineInconspicuousness = 10;
        minePlaceDist = 0.5;
        mineTrigger = "RangeTrigger";
        minimumSafeZone = 0.1;
        minTimeToLive = 0;
        missileLockCone = 0;
        model = "\Aux_332nd_weapons\Weapons\Ammo\data332nd_weapons_Ammo_Tracers_Medium_Yellow.p3d";
        nvLock = 0;
        nvgonly = 0;
        shootDistraction = -1;
        sideAirFriction = 1;
        simulation = "shotBullet";
        simulationStep = 0.05;
        submunitionAmmo = "";
        suppressionRadiusBulletClose = 8;
        suppressionRadiusHit = 10;
        thrust = 210;
        thrustTime = 1.5;
        timeToLive = 4;
        tracerScale = 1.5;
        tracerstarttime = 0;
        tracerendtime = 10;
        trackLead = 1;
        trackOversteer = 1;
        typicalSpeed = 890;
        underwaterHitRangeCoef = 1;
        visibleFire = 3;
        visibleFireTime = 3;
        waterEffectOffset = 0.8;
        weaponLockSystem = 0;
        weaponType = "Default";
        whistleDist = 0;
        whistleOnFire = 0;
    };

    class 332nd_Weapons_Ammo_base_green : JLTS_bullet_carbine_green
    {
        ACE_ammoTempMuzzleVelocityShifts = [ -26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19 ];
        ACE_ballisticCoefficients = [0.322];
        ACE_barrelLengths = [ 508, 660.4, 711.2 ];
        ACE_bulletLength = 39.573;
        ACE_bulletMass = 16.2;
        ACE_caliber = 8.585;
        ACE_damageType = "bullet";
        ACE_dragModel = 7;
        ACE_muzzleVelocities = [ 880, 915, 925 ];
        ACE_muzzleVelocityVariationSD = 0.3;
        ACE_standardAtmosphere = "ICAO";
        ace_vehicle_damage_incendiary = 0.1;
        ACE_velocityBoundaries = [];
        aiAmmoUsageFlags = "64 + 128 + 256";
        airfriction = 0;
        airlock = 1;
        animated = 0;
        artilleryCharge = 1;
        artilleryDispersion = 1;
        artilleryLock = 0;
        audibleFire = 80;
        autoSeekTarget = 0;
        caliber = 2;
        cartridge = "";
        cmImmunity = 1;
        coefgravity = 0;
        cost = 6;
        dangerRadiusBulletClose = 10;
        dangerRadiusHit = 14;
        deflecting = 0;
        deflectionSlowDown = 0.8;
        effectFly = "332nd_particle_effect_blasterbolt_fly_green";
        explosive = 0;
        fuseDistance = 0;
        hit = 16;
        icon = "";
        indirectHit = 0;
        indirectHitRange = 0;
        initTime = 0;
        irLock = 0;
        irtarget = 1;
        laserLock = 0;
        lockSeekRadius = 100;
        lockType = 0;
        maneuvrability = 1;
        manualControl = 0;
        maverickweaponIndexOffset = 0;
        maxControlRange = 350;
        maxSpeed = 0;
        minDamageForCamShakeHit = 0.55;
        mineBoundingDist = 3;
        mineBoundingTime = 3;
        mineDiveSpeed = 1;
        mineFloating = -1;
        mineInconspicuousness = 10;
        minePlaceDist = 0.5;
        mineTrigger = "RangeTrigger";
        minimumSafeZone = 0.1;
        minTimeToLive = 0;
        missileLockCone = 0;
        model = "\Aux_332nd_weapons\Weapons\Ammo\data332nd_weapons_Ammo_Tracers_Medium_Green.p3d";
        nvLock = 0;
        nvgonly = 0;
        shootDistraction = -1;
        sideAirFriction = 1;
        simulation = "shotBullet";
        simulationStep = 0.05;
        submunitionAmmo = "";
        suppressionRadiusBulletClose = 8;
        suppressionRadiusHit = 10;
        thrust = 210;
        thrustTime = 1.5;
        timeToLive = 4;
        tracerScale = 1.5;
        tracerstarttime = 0;
        tracerendtime = 10;
        trackLead = 1;
        trackOversteer = 1;
        typicalSpeed = 890;
        underwaterHitRangeCoef = 1;
        visibleFire = 3;
        visibleFireTime = 3;
        waterEffectOffset = 0.8;
        weaponLockSystem = 0;
        weaponType = "Default";
        whistleDist = 0;
        whistleOnFire = 0;
    };

    // UGL Rounds
    class 332nd_Weapons_Ammo_GL_HE : G_40mm_HE
    {
        hit = 60;
        indirectHit = 50;
        indirectHitRange = 5;
        timeToLive = 30;
        fuseDistance = 3;
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
    };
    class 332nd_Weapons_Ammo_GL_AP : 332nd_Weapons_Ammo_GL_HE
    {
        hit = 350;
        indirectHit = 0;
        indirectHitRange = 0.1;
        model = "\MRC\JLTS\weapons\Core\effects\laser_yellow.p3d";
        explosive = 0.0001;
        deflecting = 5;
        caliber = 5;
        ace_frag_enabled = 0;
        ace_frag_force = 0;
        ace_frag_classes[] = {""};
        ace_frag_metal = 0;
        ace_frag_charge = 0;
        ace_frag_gurney_c = 0;
        ace_frag_gurney_k = "0";
        ace_rearm_caliber = 0;
    };

    // UGL Smoke
    class 332nd_Weapons_Ammo_GL_smoke_white : SmokeShell
    {
        smokeColor[] = {1, 1, 1, 1};
        effectsSmoke = "332nd_particle_effect_SmokeShellWhite";
        model = "kobra\442_weapons\explosive\basic_smoke.p3d";
    };
    class 332nd_Weapons_Ammo_GL_smoke_purple : 332nd_Weapons_Ammo_GL_smoke_white
    {
        smokeColor[] = {0.4341, 0.1388, 0.41439998, 1};
        effectsSmoke = "332nd_particle_effect_SmokePurple";
    };
    class 332nd_Weapons_Ammo_GL_smoke_yellow : 332nd_Weapons_Ammo_GL_smoke_white
    {
        smokeColor[] = {0.9883, 0.8606, 0.0719, 1};
        effectsSmoke = "332nd_particle_effect_SmokeYellow";
    };
    class 332nd_Weapons_Ammo_GL_smoke_red : 332nd_Weapons_Ammo_GL_smoke_white
    {
        smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
        effectsSmoke = "332nd_particle_effect_SmokeRed";
    };
    class 332nd_Weapons_Ammo_GL_smoke_green : 332nd_Weapons_Ammo_GL_smoke_white
    {
        smokeColor[] = {0.1383, 0.8438, 0.1353, 1};
        effectsSmoke = "332nd_particle_effect_SmokeGreen";
    };
    class 332nd_Weapons_Ammo_GL_smoke_blue : 332nd_Weapons_Ammo_GL_smoke_white
    {
        smokeColor[] = {0.1183, 0.1867, 1, 1};
        effectsSmoke = "332nd_particle_effect_SmokeBlue";
    };
    class 332nd_Weapons_Ammo_GL_smoke_orange : 332nd_Weapons_Ammo_GL_smoke_white
    {
        smokeColor[] = {0.6697, 0.2275, 0.10053, 1};
        effectsSmoke = "SmokeShellOrangeEffect";
    };

    // UGL Flare
    class 332nd_Weapons_Ammo_flare_white : F_40mm_White
    {
        lightColor[] = {1, 1, 1, 1};
        useFlare = 1;
        deflecting = 30;
        smokeColor[] = {1, 1, 1, 1};
        brightness = 1200;
        triggerTime = 3;
        triggerSpeedCoef = 1;
        audibleFire = 20;
        intensity = 1000000;
        timeToLive = 120;
        flareMaxDistance = 300;
    };
    class 332nd_Weapons_Ammo_flare_green : 332nd_Weapons_Ammo_flare_white
    {
        lightColor[] = {0, 1, 0, 0};
    };
    class 332nd_Weapons_Ammo_flare_red : 332nd_Weapons_Ammo_flare_white
    {
        lightColor[] = {1, 0, 0, 0};
    };
    class 332nd_Weapons_Ammo_flare_yellow : 332nd_Weapons_Ammo_flare_white
    {
        lightColor[] = {1, 1, 0, 0};
    };
    class 332nd_Weapons_Ammo_flare_ir : 332nd_Weapons_Ammo_flare_white
    {
        lightColor[] = {0.5, 0.5, 0.25, 0};
    };
    class 332nd_Weapons_Ammo_flare_blue : 332nd_Weapons_Ammo_flare_white
    {
        lightColor[] = {0, 0, 1, 0};
    };
    class 332nd_Weapons_Ammo_flare_cyan : 332nd_Weapons_Ammo_flare_white
    {
        lightColor[] = {0, 1, 1, 0};
    };
    class 332nd_Weapons_Ammo_flare_purple : 332nd_Weapons_Ammo_flare_white
    {
        lightColor[] = {.7, 0, 1, 0};
    };
};

class CfgLights
{
    class 332nd_light_heavybolt_blue
    {
        color[] = {0, 0, 0, 0};
        diffuse[] = {2, 0, 255, 0.8};
        ambient[] = {0, 0, 0, 0.5};
        intensity = 30000;
        class Attenuation
        {
            start = 0;
            constant = 0;
            linear = 0;
            quadratic = 255;
            hardLimitStart = "1e20 * 0.7";
            hardLimitEnd = 1e+20;
        };
        dayLight = 1;
        useFlare = 1;
        flareSize = 3;
        flareMaxDistance = 6000;
    };
    class 332nd_light_heavybolt_red : 332nd_light_heavybolt_blue
    {
        diffuse[] = {255, 0, 0, 0.8};
    };
    class 332nd_light_heavybolt_yellow : 332nd_light_heavybolt_blue
    {
        diffuse[] = {255, 255, 0, 1};
    };
    class 332nd_light_heavybolt_green : 332nd_light_heavybolt_blue
    {
        diffuse[] = {21, 1254, 69, 1};
    };
    class 332nd_light_heavybolt_purple : 332nd_light_heavybolt_blue
    {
        diffuse[] = {162, 0, 255, 0.8};
    };
    class 332nd_light_heavybolt_orange : 332nd_light_heavybolt_blue
    {
        diffuse[] = {255, 114, 0, 0.8};
    };

    class 332nd_light_blasterbolt_blue : 332nd_light_heavybolt_blue
    {
        intensity = 625;
        flareSize = 0.35;
    };
    class 332nd_light_blasterbolt_red : 332nd_light_blasterbolt_blue
    {
        diffuse[] = {255, 0, 0, 0.8};
    };
    class 332nd_light_blasterbolt_yellow : 332nd_light_blasterbolt_blue
    {
        diffuse[] = {255, 255, 0, 1};
    };
    class 332nd_light_blasterbolt_green : 332nd_light_blasterbolt_blue
    {
        diffuse[] = {21, 1254, 69, 1};
    };
    class 332nd_light_blasterbolt_purple : 332nd_light_blasterbolt_blue
    {
        diffuse[] = {162, 0, 255, 0.8};
    };
    class 332nd_light_blasterbolt_orange : 332nd_light_blasterbolt_blue
    {
        diffuse[] = {255, 114, 0, 0.8};
    };
};

class 332nd_particle_effect_heavybolt_fly_blue
{
    class Light
    {
        simulation = "light";
        type = "332nd_light_heavybolt_blue";
        position[] = {0, 0, 0};
    };
};
class 332nd_particle_effect_heavybolt_fly_red
{
    class Light
    {
        simulation = "light";
        type = "332nd_light_heavybolt_red";
        position[] = {0, 0, 0};
    };
};
class 332nd_particle_effect_heavybolt_fly_yellow
{
    class Light
    {
        simulation = "light";
        type = "332nd_light_heavybolt_yellow";
        position[] = {0, 0, 0};
    };
};
class 332nd_particle_effect_heavybolt_fly_green
{
    class Light
    {
        simulation = "light";
        type = "332nd_light_heavybolt_green";
        position[] = {0, 0, 0};
    };
};
class 332nd_particle_effect_heavybolt_fly_purple
{
    class Light
    {
        simulation = "light";
        type = "332nd_light_heavybolt_purple";
        position[] = {0, 0, 0};
    };
};
class 332nd_particle_effect_heavybolt_fly_orange
{
    class Light
    {
        simulation = "light";
        type = "332nd_light_heavybolt_orange";
        position[] = {0, 0, 0};
    };
};

class 332nd_particle_effect_blasterbolt_fly_blue
{
    class Light
    {
        simulation = "light";
        type = "332nd_light_blasterbolt_blue";
        position[] = {0, 0, 0};
    };
};
class 332nd_particle_effect_blasterbolt_fly_red
{
    class Light
    {
        simulation = "light";
        type = "332nd_light_blasterbolt_red";
        position[] = {0, 0, 0};
    };
};
class 332nd_particle_effect_blasterbolt_fly_yellow
{
    class Light
    {
        simulation = "light";
        type = "332nd_light_blasterbolt_yellow";
        position[] = {0, 0, 0};
    };
};
class 332nd_particle_effect_blasterbolt_fly_green
{
    class Light
    {
        simulation = "light";
        type = "332nd_light_blasterbolt_green";
        position[] = {0, 0, 0};
    };
};
class 332nd_particle_effect_blasterbolt_fly_purple
{
    class Light
    {
        simulation = "light";
        type = "332nd_light_blasterbolt_purple";
        position[] = {0, 0, 0};
    };
};
class 332nd_particle_effect_blasterbolt_fly_orange
{
    class Light
    {
        simulation = "light";
        type = "332nd_light_blasterbolt_orange";
        position[] = {0, 0, 0};
    };
};

// Credit to the 501st Aux Team for settings of items
// Credit to 3as for the models