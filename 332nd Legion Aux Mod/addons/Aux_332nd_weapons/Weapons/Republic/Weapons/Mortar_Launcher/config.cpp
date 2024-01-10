class cfgPatches
{
    class 332nd_Patch_81mm_mortar_launcher
    {
        addonRootClass = "332nd_Patch_Weapons";
        requiredAddons[] =
            {
                "332nd_Patch_Weapons",
                "A3_Weapons_F"};
        units[] = {};
        weapons[] =
            {
                "332nd_Weaps_81mm_plasma_Mortar",
                "332nd_Weaps_81mm_plasma_Mortar_Carry"};
        magazines[] =
            {
                "332nd_Weapons_Mags_81mm_mortar_HE_csw",
                "332nd_Weapons_Mags_81mm_mortar_smoke_csw",
                "332nd_Weapons_Mags_81mm_mortar_illum_csw",
                "332nd_Weapons_Mags_81mm_mortar_guided_HE_csw",
                "332nd_Weapons_Mags_81mm_mortar_laserguided_HE_csw"};
    };
};

class Mode_SemiAuto;
class Mode_Burst;

class cfgWeapons
{
    class MGun;
    class ACE_mortar_82mm;
    class Launcher_Base_F;

    class 332nd_Weaps_81mm_plasma_Mortar : ACE_mortar_82mm
    {
        displayname = "[332nd] DX-5 Plasma Mortar";
        author = "332nd Aux Team";
        nameSound = "CannonCore";
        cursor = "mortar";
        cursorAim = "EmptyCursor";
        sounds[] = {"StandardSound"};
        ballisticsComputer = 8;
        class StandardSound
        {
            begin1[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot1.wss", db + 5, 1, 2200};
            begin2[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot2.wss", db + 5, 1, 2200};
            begin3[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot3.wss", db + 5, 1, 2200};
            begin4[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot4.wss", db + 5, 1, 2200};
            begin5[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot5.wss", db + 5, 1, 2200};
            soundBegin[] = {"begin1", 0.15, "begin2", 0.25, "begin3", 0.1, "begin4", 0.3, "begin5", 0.2};
        };
        reloadSound[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_reload.wss", 1, 1, 20};
        reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar", 1, 1, 20};
        soundServo[] = {"", 0.0001, 1};
        reloadTime = 1.8;
        magazineReloadTime = 2;
        autoReload = 1;
        canLock = 0;
        magazines[] =
            {
                "332nd_Weapons_Mags_81mm_mortar_HE",
                "332nd_Weapons_Mags_81mm_mortar_smoke",
                "332nd_Weapons_Mags_81mm_mortar_illum",
                "332nd_Weapons_Mags_81mm_mortar_guided_HE",
                "332nd_Weapons_Mags_81mm_mortar_laserguided_HE"};
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "MortarFired";
                positionName = "Usti Hlavne";
                directionName = "Konec Hlavne";
            };
        };
        modes[] = {"Single1", "Single2", "Single3", "Burst1", "Burst2", "Burst3"};
        class Single1 : Mode_SemiAuto
        {
            displayName = "$STR_A3_mortar_82mm_Single10";
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                begin1[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot1.wss", db + 5, 1, 2200};
                begin2[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot2.wss", db + 5, 1, 2200};
                begin3[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot3.wss", db + 5, 1, 2200};
                begin4[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot4.wss", db + 5, 1, 2200};
                begin5[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot5.wss", db + 5, 1, 2200};
                soundBegin[] = {"begin1", 0.15, "begin2", 0.25, "begin3", 0.1, "begin4", 0.3, "begin5", 0.2};
            };
            reloadSound[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_reload.wss", 1, 1, 20};
            reloadTime = 1.8;
            artilleryDispersion = 1.9;
            artilleryCharge = 0.35;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class Single2 : Single1
        {
            displayName = "$STR_A3_mortar_82mm_Single20";
            artilleryCharge = 0.7;
        };
        class Single3 : Single1
        {
            displayName = "$STR_A3_mortar_82mm_Single30";
            artilleryCharge = 1;
        };
        class Burst1 : Mode_Burst
        {
            showToPlayer = 0;
            displayName = "$STR_A3_mortar_82mm_Burst10";
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                begin1[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot1.wss", db + 5, 1, 2200};
                begin2[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot2.wss", db + 5, 1, 2200};
                begin3[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot3.wss", db + 5, 1, 2200};
                begin4[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot4.wss", db + 5, 1, 2200};
                begin5[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot5.wss", db + 5, 1, 2200};
                soundBegin[] = {"begin1", 0.15, "begin2", 0.25, "begin3", 0.1, "begin4", 0.3, "begin5", 0.2};
            };
            reloadSound[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_reload.wss", 1, 1, 20};
            soundServo[] = {"", 0.0001, 1};
            soundBurst = 0;
            burst = 4;
            aiBurstTerminable = 1;
            reloadTime = 1.8;
            artilleryDispersion = 2.2;
            artilleryCharge = 0.01;
            minRange = 60;
            minRangeProbab = 0.5;
            midRange = 290;
            midRangeProbab = 0.7;
            maxRange = 665;
            maxRangeProbab = 0.5;
        };
        class Burst2 : Burst1
        {
            showToPlayer = 0;
            displayName = "$STR_A3_mortar_82mm_Burst20";
            artilleryCharge = 0.7;
            minRange = 230;
            minRangeProbab = 0.4;
            midRange = 1175;
            midRangeProbab = 0.6;
            maxRange = 2660;
            maxRangeProbab = 0.4;
        };
        class Burst3 : Burst1
        {
            showToPlayer = 0;
            displayName = "$STR_A3_mortar_82mm_Burst30";
            artilleryCharge = 1;
            minRange = 540;
            minRangeProbab = 0.3;
            midRange = 2355;
            midRangeProbab = 0.4;
            maxRange = 5500;
            maxRangeProbab = 0.3;
        };
    };

    class 332nd_Weaps_81mm_plasma_Mortar_Carry : Launcher_Base_F
    {
        scope = 2;
        displayName = "[332nd] DX-5 Plasma Mortar";
        picture = "\Aux_332nd_weapons\Weapons\Republic\Weapons\Mortar_Launcher\data\UI\mortar_launcher_ui.paa";
        author = "332nd Aux Team";
        model = "A3\Weapons_F_Tank\Launchers\Vorona\Vorona_launcher_F.p3d";
        hiddenSelections[] = {"camo_launcher", "camo_tube"};
        hiddenSelectionsTextures[] =
            {
                "\Aux_332nd_weapons\Weapons\Republic\Weapons\Mortar_Launcher\data\textures\332nd_mortar_launcher.paa",
                "\Aux_332nd_weapons\Weapons\Republic\Weapons\Mortar_Launcher\data\textures\332nd_mortar_launcher.paa"};
        mass = 450;
        class ACE_CSW
        {
            type = "mount";
            deployTime = 1;
            pickupTime = 1;
            deploy = "332nd_stat_81mm_plasma_mortar";
        };
    };
};

class ACE_CSW_Groups
{
    class 332nd_Weapons_Mags_81mm_mortar_HE_csw
    {
        332nd_Weapons_Mags_81mm_mortar_HE = 1;
    };
    class 332nd_Weapons_Mags_81mm_mortar_smoke_csw
    {
        332nd_Weapons_Mags_81mm_mortar_smoke = 1;
    };
    class 332nd_Weapons_Mags_81mm_mortar_illum_csw
    {
        332nd_Weapons_Mags_81mm_mortar_illum = 1;
    };
    class 332nd_Weapons_Mags_81mm_mortar_guided_HE_csw
    {
        332nd_Weapons_Mags_81mm_mortar_guided_HE = 1;
    };
    class 332nd_Weapons_Mags_81mm_mortar_laserguided_HE_csw
    {
        332nd_Weapons_Mags_81mm_mortar_laserguided_HE = 1;
    };
};

class CfgMagazines
{
    class 8Rnd_82mm_Mo_shells;
    class 8Rnd_82mm_Mo_Smoke_white;
    class 8Rnd_82mm_Mo_Flare_white;
    class 8Rnd_82mm_Mo_guided;
    class 8Rnd_82mm_Mo_LG;

    class 332nd_Weapons_Mags_81mm_mortar_HE : 8Rnd_82mm_Mo_shells
    {
        author = "332nd Aux Team";
        displayName = "[332nd] DX-5 HE Rounds";
        displayNameShort = "81mm HE";
        displayNameMFDFormat = "HE";
        model = "\z\ace\addons\mk6mortar\data\l16_ammo_he.p3d";
        picture = "\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
        ammo = "332nd_Weapons_Ammo_81mm_HE";
        mass = 50;
    };
    class 332nd_Weapons_Mags_81mm_mortar_smoke : 8Rnd_82mm_Mo_Smoke_white
    {
        author = "332nd Aux Team";
        displayName = "[332nd] DX-5 Smoke Rounds";
        displayNameShort = "81mm Smoke";
        displayNameMFDFormat = "Smoke";
        ammo = "332nd_Weapons_Ammo_81mm_smoke";
        model = "\z\ace\addons\mk6mortar\data\l16_ammo_smk_white.p3d";
        picture = "\z\ace\addons\mk6mortar\UI\w_l16_ammo_smk_white_ca.paa";
        mass = 50;
    };
    class 332nd_Weapons_Mags_81mm_mortar_illum : 8Rnd_82mm_Mo_Flare_white
    {
        author = "332nd Aux Team";
        displayName = "[332nd] DX-5 Illum Rounds";
        displayNameShort = "81mm Illum";
        displayNameMFDFormat = "Illum";
        model = "\z\ace\addons\mk6mortar\data\l16_ammo_illum.p3d";
        picture = "\z\ace\addons\mk6mortar\UI\w_l16_ammo_illum_ca.paa";
        ammo = "332nd_Weapons_Ammo_81mm_flare";
        mass = 50;
    };
    class 332nd_Weapons_Mags_81mm_mortar_guided_HE : 8Rnd_82mm_Mo_guided
    {
        author = "332nd Aux Team";
        displayName = "[332nd] DX-5 Guided Rounds";
        displayNameShort = "81mm Guided";
        displayNameMFDFormat = "Guided HE";
        model = "\z\ace\addons\mk6mortar\data\l16_ammo_he.p3d";
        picture = "\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
        ammo = "332nd_Weapons_Ammo_81mm_guided";
        mass = 50;
    };
    class 332nd_Weapons_Mags_81mm_mortar_laserguided_HE : 8Rnd_82mm_Mo_LG
    {
        author = "332nd Aux Team";
        displayName = "[332nd] DX-5 LasGuided Rounds";
        displayNameShort = "81mm LasGuided";
        displayNameMFDFormat = "LasGuided HE";
        model = "\z\ace\addons\mk6mortar\data\l16_ammo_he.p3d";
        picture = "\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
        ammo = "332nd_Weapons_Ammo_81mm_laser_guided";
        mass = 50;
    };

    class 332nd_Weapons_Mags_81mm_mortar_HE_csw : 332nd_Weapons_Mags_81mm_mortar_HE
    {
        scope = 2;
        scopeArsenal = 2;
        type = 256;
        ACE_isBelt = 1;
    };
    class 332nd_Weapons_Mags_81mm_mortar_smoke_csw : 332nd_Weapons_Mags_81mm_mortar_smoke
    {
        scope = 2;
        scopeArsenal = 2;
        type = 256;
        ACE_isBelt = 1;
    };
    class 332nd_Weapons_Mags_81mm_mortar_illum_csw : 332nd_Weapons_Mags_81mm_mortar_illum
    {
        scope = 2;
        scopeArsenal = 2;
        type = 256;
        ACE_isBelt = 1;
    };
    class 332nd_Weapons_Mags_81mm_mortar_guided_HE_csw : 332nd_Weapons_Mags_81mm_mortar_guided_HE
    {
        scope = 2;
        scopeArsenal = 2;
        type = 256;
        ACE_isBelt = 1;
    };
    class 332nd_Weapons_Mags_81mm_mortar_laserguided_HE_csw : 332nd_Weapons_Mags_81mm_mortar_laserguided_HE
    {
        scope = 2;
        scopeArsenal = 2;
        type = 256;
        ACE_isBelt = 1;
    };
};

class cfgAmmo
{
    class Sh_82mm_AMOS;
    class Sh_82mm_AMOS_guided;
    class Sh_82mm_AMOS_LG;
    class Flare_82mm_AMOS_White;
    class Smoke_82mm_AMOS_White;
    class SmokeShellArty;

    class 332nd_Weapons_Ammo_81mm_HE : Sh_82mm_AMOS
    {
        effectFly = "332nd_particle_effect_heavybolt_fly_blue";
        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        tracerScale = 3;
        tracerStartTime = 0.1;
        whistleDist = 2000;
        whistleOnFire = 1;
        soundFly[] = {"\SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss", 3, 1, 2000};
        SoundSetExplosion[] =
            {
                "332nd_SoundSet_Mortar_Exp",
                "Mortar_Tail_SoundSet",
                "Explosion_Debris_SoundSet"};
    };
    class 332nd_Weapons_Ammo_81mm_guided : Sh_82mm_AMOS_guided
    {
        effectFly = "332nd_particle_effect_heavybolt_fly_blue";
        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        tracerScale = 3;
        tracerStartTime = 0.1;
        whistleDist = 2000;
        whistleOnFire = 1;
        soundFly[] = {"\SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss", 3, 1, 2000};
        SoundSetExplosion[] =
            {
                "332nd_SoundSet_Mortar_Exp",
                "Mortar_Tail_SoundSet",
                "Explosion_Debris_SoundSet"};
    };
    class 332nd_Weapons_Ammo_81mm_laser_guided : Sh_82mm_AMOS_LG
    {
        effectFly = "332nd_particle_effect_heavybolt_fly_blue";
        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        tracerScale = 3;
        tracerStartTime = 0.1;
        whistleDist = 2000;
        whistleOnFire = 1;
        soundFly[] = {"\SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss", 3, 1, 2000};
        SoundSetExplosion[] =
            {
                "332nd_SoundSet_Mortar_Exp",
                "Mortar_Tail_SoundSet",
                "Explosion_Debris_SoundSet"};
    };
    class 332nd_Weapons_Ammo_81mm_flare : Flare_82mm_AMOS_White
    {
        effectFly = "332nd_particle_effect_heavybolt_fly_green";
        model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
        lightColor[] = {0, 1, 0, 0};
        tracerScale = 3;
        tracerStartTime = 0.1;
        whistleDist = 2000;
        whistleOnFire = 1;
    };
    class 332nd_Weapons_Ammo_81mm_smoke : Smoke_82mm_AMOS_White
    {
        effectFly = "332nd_particle_effect_heavybolt_fly_gray";
        tracerScale = 1;
        tracerStartTime = 0;
        whistleDist = 200;
        whistleOnFire = 1;
        submunitionAmmo = "332nd_Weapons_subAmmo_smokeshell_arty";
        soundFly[] = {"swlw_rework\sounds\launcher\PLX_fly.wss", 3, 1, 2000};
    };
    class 332nd_Weapons_subAmmo_smokeshell_arty : SmokeShellArty
    {
        smokeColor[] = {1, 1, 1, 1};
        effectsSmoke = "k_SmokeShellwhiteEffect";
    };
};

class CfgSoundShaders
{
    class 332nd_SoundShader_Mortar_closeExp
    {
        samples[] =
            {
                {"\SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit1.wss", 1}};
        volume = 1.0;
        range = 250;
        rangeCurve = "CannonCloseShotCurve";
    };
    class 332nd_SoundShader_Mortar_MideExp
    {
        samples[] =
            {
                {"\SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit1.wss", 1}};
        volume = 1.0;
        range = 1000;
        rangeCurve = "CannonMidShotCurve";
    };
};

class cfgsoundsets
{
    class Mortar_Exp_SoundSet;

    class 332nd_SoundSet_Mortar_Exp : Mortar_Exp_SoundSet
    {
        soundShaders[] =
            {
                "332nd_SoundShader_Mortar_closeExp",
                "332nd_SoundShader_Mortar_MideExp",
                "Mortar_distExp_SoundShader"};
    };
};

class CfgLights
{
    class 332nd_light_heavybolt_blue;
    class 332nd_light_heavybolt_gray : 332nd_light_heavybolt_blue
    {
        diffuse[] = {45, 45, 45, 0.57};
    };
};

class 332nd_particle_effect_heavybolt_fly_gray
{
    class Light
    {
        simulation = "light";
        type = "332nd_light_heavybolt_gray";
        position[] = {0, 0, 0};
    };
};

// Credit to the 501st Aux Team for settings of items
// Credit to 3as for the models