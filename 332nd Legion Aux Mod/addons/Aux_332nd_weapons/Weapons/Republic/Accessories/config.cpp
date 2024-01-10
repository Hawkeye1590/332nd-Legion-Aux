class CfgPatches
{
    class 332nd_Patch_Accessories
    {
        Author = "332nd Aux Team";
        requiredAddons[] = {"332nd_Patch_Weapons", "OPTRE_Weapons"};
        requiredVersion = 0.1;
        units[] = {};
        weapons[] =
            {
                "332nd_muzzle_flash",
                "332nd_muzzle_surpressor",
                "332nd_cows_rco",
                "332nd_cows_rco_2",
                "332nd_cows_rco_3",
                "332nd_cows_mrco",
                "332nd_cows_mrco_2",
                "332nd_cows_mrco_3",
                "332nd_cows_Holosight",
                "332nd_cows_Holosight_2",
                "332nd_cows_Holosight_3",
                "332nd_cows_HoloScope",
                "332nd_cows_HoloScope_2",
                "332nd_cows_HoloScope_3",
                "332nd_cows_DMS",
                "332nd_cows_DMS_2",
                "332nd_cows_DMS_3",
                "332nd_cows_DMS_4",
                "332nd_cows_DMS_TI",
                "332nd_cows_DMS_2_TI",
                "332nd_cows_DMS_3_TI",
                "332nd_cows_DMS_4_TI",
                "332nd_cows_Holoscope_LR",
                "332nd_cows_Holoscope_LR_2",
                "332nd_cows_Holoscope_LR_3",
                "332nd_cows_Holoscope_LR_4",
                "332nd_cows_pistol",
                "332nd_cows_pistol_2",
                "332nd_cows_LRPS",
                "332nd_cows_LEScope_DC15A",
                "332nd_cows_reflex_optic",
                "Optre_Recon_Sight",
                "Optre_Recon_Sight_Red",
                "Optre_Recon_Sight_Green",
            };
    };
};
class CfgWeapons
{
    class InventoryMuzzleItem_Base_F;
    class InventoryOpticsItem_Base_F;
    class ItemCore;
    class optic_DMS : ItemCore
    {
        class ItemInfo;
    };
    class optic_Hamr : ItemCore
    {
        class ItemInfo;
    };
    class optic_MRCO : ItemCore
    {
        class ItemInfo;
    };
    class optic_Holosight : ItemCore
    {
        class ItemInfo;
    };
    class optic_MRD : ItemCore
    {
        class ItemInfo;
    };

    class muzzle_snds_338_black;
    class optic_Aco;

    class 332nd_muzzle_flash : ItemCore
    {
        scope = 2;
        scopeInArsenal = 2;
        author = "332nd Aux Team";
        displayName = "Flash Hider Chip";
        model = "";
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\icon_flashhider.paa";
        class ItemInfo : InventoryMuzzleItem_Base_F
        {
            mass = 10;
            class MagazineCoef
            {
                initSpeed = 1.0;
            };
            class AmmoCoef
            {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 1;
                audibleFire = 1;
                visibleFireTime = 1;
                audibleFireTime = 1;
                cost = 1.0;
            };
            soundTypeIndex = 0;
            muzzleEnd = "zaslehPoint";
            alternativeFire = "Zasleh2";
            class MuzzleCoef
            {
                dispersionCoef = 1.0;
                artilleryDispersionCoef = 1.0;
                fireLightCoef = 0.1;
                recoilCoef = 1.0;
                recoilProneCoef = 1.0;
                minRangeCoef = 1.0;
                minRangeProbabCoef = 1.0;
                midRangeCoef = 1.0;
                midRangeProbabCoef = 1.0;
                maxRangeCoef = 1.0;
                maxRangeProbabCoef = 1.0;
            };
        };
        inertia = 0.1;
    };

    class 332nd_muzzle_surpressor : muzzle_snds_338_black
    {
        scope = 2;
        displayName = "Surpressor Chip";
        author = "332nd Aux Team";
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\icon_gray_chip_64.paa";
        model = "";
        class ItemInfo : InventoryMuzzleItem_Base_F
        {
            soundTypeIndex = 1;
            class MagazineCoef
            {
                initSpeed = 0.67;
            };
            class AmmoCoef
            {
                hit = 1;
                visibleFire = 0.1;
                audibleFire = 0.1;
                visibleFireTime = 1;
                audibleFireTime = 1;
                cost = 1;
                typicalSpeed = 1;
                airFriction = 1;
            };
            muzzleEnd = "zaslehPoint";
            alternativeFire = "Zasleh2";
            class MuzzleCoef
            {
                dispersionCoef = "1.0f";
                artilleryDispersionCoef = "1.0f";
                fireLightCoef = "0.1f";
                recoilCoef = "1.0f";
                recoilProneCoef = "1.0f";
                minRangeCoef = "1.0f";
                minRangeProbabCoef = "1.0f";
                midRangeCoef = "1.0f";
                midRangeProbabCoef = "1.0f";
                maxRangeCoef = "1.0f";
                maxRangeProbabCoef = "1.0f";
            };
        };
    };
    class 332nd_cows_rco : optic_Hamr
    {
        author = "332nd Aux Team";
        scope = 2;
        displayName = "Short Range Scope A";
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_sr_01_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_hamr_1.p3d";
        descriptionShort = "HAMR SR 2-4x Scope";
        weaponInfoType = "RscOptics_sos";
        class ItemInfo : ItemInfo
        {
            mass = 8;
            opticType = 1;
            optics = 1;
            modelOptics = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_hamr_scope_1";
            class OpticsModes
            {
                class Hamr2Collimator
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsPPEffects[] = {"Default"};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {};
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                };
                class Hamr2Scope
                {
                    opticsID = 2;
                    useModelOptics = 0;
                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    opticsZoomMin = "0.25/2";
                    opticsZoomMax = "0.25/4";
                    opticsZoomInit = "0.25/2";
                    discreteinitIndex = 0;
                    discretefov[] = {"0.25/2", "0.25/4"};
                    discreteDistanceInitIndex = 1;
                    memoryPointCamera = "opticView";
                    visionMode[] = {};
                    distanceZoomMin = 300;
                    distanceZoomMax = 300;
                };
            };
        };
        inertia = 0.1;
    };
    class 332nd_cows_rco_2 : 332nd_cows_rco
    {
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_sr_02_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_hamr_2.p3d";
        displayName = "Short Range Scope B";
        class ItemInfo : ItemInfo
        {
            modelOptics = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_hamr_scope_2";
        };
    };
    class 332nd_cows_rco_3 : 332nd_cows_rco
    {
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_sr_03_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_hamr_3.p3d";
        displayName = "Short Range Scope C";
        class ItemInfo : ItemInfo
        {
            modelOptics = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_hamr_scope_3";
        };
    };
    class 332nd_cows_mrco : optic_mrco
    {
        author = "332nd Aux Team";
        scope = 2;
        displayName = "Medium Range Scope A";
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_mr_01_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_mrco_1.p3d";
        descriptionShort = "MRCO MR 2-6x Scope";
        weaponInfoType = "RscOptics_sos";
        class ItemInfo : ItemInfo
        {
            mass = 8;
            opticType = 1;
            optics = 1;
            modelOptics = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_mrco_scope_1.p3d";
            class OpticsModes
            {
                class MRCOcq
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsPPEffects[] = {"Default"};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {};
                    distanceZoomMin = 300;
                    distanceZoomMax = 300;
                };
                class MRCOscope
                {
                    opticsID = 2;
                    useModelOptics = 0;
                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    opticsZoomMin = "0.25/6";
                    opticsZoomMax = "0.25/2";
                    opticsZoomInit = "0.25/2";
                    discreteinitIndex = 0;
                    discretefov[] = {"0.25/2", "0.25/6"};
                    discreteDistanceInitIndex = 1;
                    memoryPointCamera = "opticView";
                    visionMode[] = {};
                    distanceZoomMin = 300;
                    distanceZoomMax = 300;
                };
            };
        };
        inertia = 0.1;
    };
    class 332nd_cows_mrco_2 : 332nd_cows_mrco
    {
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_mr_02_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_mrco_2.p3d";
        displayName = "Medium Range Scope B";
        class ItemInfo : ItemInfo
        {
            modelOptics = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_MRCO_scope_2";
        };
    };
    class 332nd_cows_mrco_3 : 332nd_cows_mrco
    {
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_mr_03_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_mrco_3.p3d";
        displayName = "Medium Range Scope C";
        class ItemInfo : ItemInfo
        {
            modelOptics = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_MRCO_scope_3";
        };
    };
    class 332nd_cows_Holosight : optic_Holosight
    {
        author = "332nd Aux Team";
        scope = 2;
        displayName = "Holo Sight A";
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_holo_01_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_holo_1.p3d";
        descriptionShort = "Holo 1x Scope";
        weaponInfoType = "RscWeaponZeroing";
        class ItemInfo : ItemInfo
        {
            mass = 6;
            modelOptics = "\A3\Weapons\Republic_F\empty";
            optics = 1;
            class OpticsModes
            {
                class aco
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    cameraDir = "";
                    visionMode[] = {};
                    opticsPPEffects[] = {"OpticsBlur1"};
                };
            };
        };
        inertia = 0;
    };
    class 332nd_cows_Holosight_2 : 332nd_cows_Holosight
    {
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_holo_02_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_holo_2.p3d";
        displayName = "Holo Sight B";
    };
    class 332nd_cows_Holosight_3 : 332nd_cows_Holosight
    {
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_holo_03_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_holo_3.p3d";
        displayName = "Holo Sight C";
    };
    class 332nd_cows_HoloScope : 332nd_cows_Holosight
    {
        author = "332nd Aux Team";
        scope = 2;
        displayName = "Holo Scope A";
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_holo_01_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_holo_1.p3d";
        descriptionShort = "Holo 1x Scope";
        weaponInfoType = "RscWeaponZeroing";
        class ItemInfo : ItemInfo
        {
            mass = 6;
            modelOptics = "\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
            optics = 1;
            class OpticsModes
            {
                class aco
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    cameraDir = "";
                    visionMode[] = {};
                    opticsPPEffects[] = {"OpticsBlur1"};
                };
                class Scope : aco
                {
                    opticsID = 2;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                    opticsDisablePeripherialVision = 0.67;
                    opticsZoomMin = 0.125;
                    opticsZoomMax = 0.125;
                    opticsZoomInit = 0.125;
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal", "NVG"};
                    opticsFlare = "true";
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                    cameraDir = "";
                };
            };
            inertia = 0;
        };
    };
    class 332nd_cows_HoloScope_2 : 332nd_cows_HoloScope
    {
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_holo_02_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_holo_2.p3d";
        displayName = "Holo Scope B";
    };
    class 332nd_cows_HoloScope_3 : 332nd_cows_HoloScope
    {
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_holo_03_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_holo_3.p3d";
        displayName = "Holo Scope C";
    };
    class 332nd_cows_DMS : optic_DMS
    {
        author = "332nd Aux Team";
        scope = 2;
        displayName = "DMS LR 4-6x Scope A";
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_lr_01_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_dms.p3d";
        descriptionShort = "Long Range Scope";
        class ItemInfo : ItemInfo
        {
            mass = 12;
            opticType = 2;
            optics = 1;
            modelOptics = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_scope_DMS";
            class OpticsModes
            {
                class Snip
                {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur3"};
                    opticsZoomMin = "0.25/6";
                    opticsZoomMax = "0.25/4";
                    opticsZoomInit = "0.25/4";
                    discreteinitIndex = 0;
                    discretefov[] = {"0.25/4", "0.25/6"};
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 300;
                    distanceZoomMax = 1200;
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal", "NVG"};
                    thermalMode[] = {5, 6};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 0;
                    cameraDir = "";
                };
                class Iron : Snip
                {
                    opticsID = 2;
                    useModelOptics = 0;
                    opticsPPEffects[] = {"", ""};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "opticView";
                    visionMode[] = {};
                    discretefov[] = {};
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    discreteDistance[] = {200};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
        inertia = 0.2;
    };
    class 332nd_cows_DMS_2 : 332nd_cows_DMS
    {
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_lr_02_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_dms_2.p3d";
        displayName = "DMS LR 4-6x Scope B";
        class ItemInfo : ItemInfo
        {
            modelOptics = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_scope2_DMS";
        };
    };
    class 332nd_cows_DMS_3 : 332nd_cows_DMS
    {
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_lr_03_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_dms_3.p3d";
        displayName = "DMS LR 4-6x Scope C";
        class ItemInfo : ItemInfo
        {
            modelOptics = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_scope3_DMS";
        };
    };
    class 332nd_cows_DMS_4 : 332nd_cows_DMS
    {
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_lr_03_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_dms_4.p3d";
        displayName = "DMS LR 4-6x Scope D";
        class ItemInfo : ItemInfo
        {
            modelOptics = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_scope4_DMS";
        };
    };
    class 332nd_cows_DMS_TI : optic_DMS
    {
        author = "332nd Aux Team";
        scope = 2;
        displayName = "DMS LR 6-12x Scope A";
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_lr_01_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_dms.p3d";
        descriptionShort = "Long Range Scope";
        inertia = 0.2;
        class ItemInfo : ItemInfo
        {
            mass = 12;
            optics = 1;
            modelOptics = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_scope_DMS";
            class OpticsModes
            {
                class Scope
                {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur3"};
                    opticsZoomMin = "0.25/12";
                    opticsZoomMax = "0.25/6";
                    opticsZoomInit = "0.25/6";
                    discreteinitIndex = 0;
                    discretefov[] = {"0.25/6", "0.25/12"};
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 300;
                    distanceZoomMax = 1200;
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal", "NVG", "Ti"};
                    thermalMode[] = {0, 1};
                    opticsFlare = 1;
                    opticsDisplayName = "DMS-A";
                    opticsDisablePeripherialVision = 0;
                    cameraDir = "";
                };
            };
        };
    };
    class 332nd_cows_DMS_2_TI : 332nd_cows_DMS_TI
    {
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_lr_02_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_dms_2.p3d";
        displayName = "DMS LR 6-12x Scope B";
        class ItemInfo : ItemInfo
        {
            modelOptics = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_scope2_DMS";
            opticsDisplayName = "DMS-B";
        };
    };
    class 332nd_cows_DMS_3_TI : 332nd_cows_DMS_TI
    {
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_lr_03_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_dms_3.p3d";
        displayName = "DMS LR 6-12x Scope C";
        class ItemInfo : ItemInfo
        {
            modelOptics = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_scope3_DMS";
            opticsDisplayName = "DMS-C";
        };
    };
    class 332nd_cows_DMS_4_TI : 332nd_cows_DMS_TI
    {
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_lr_03_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_dms_4.p3d";
        displayName = "DMS LR 6-12x Scope D";
        class ItemInfo : ItemInfo
        {
            modelOptics = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_scope4_DMS";
            opticsDisplayName = "DMS-D";
        };
    };
    class 332nd_cows_pistol : optic_MRD
    {
        author = "332nd Aux Team";
        scope = 2;
        displayName = "Pistol Holo A";
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_pistol_01_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_pistol_1.p3d";
        descriptionShort = "Pistol Scope";
        class ItemInfo : ItemInfo
        {
            mass = 2;
            modelOptics = "\A3\Weapons\Republic_F\empty";
            optics = 1;
            class OpticsModes
            {
                class aco
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    distanceZoomMin = 50;
                    distanceZoomMax = 50;
                    cameraDir = "";
                    visionMode[] = {};
                    opticsPPEffects[] = {"Default"};
                };
            };
        };
        inertia = 0;
    };
    class 332nd_cows_pistol_2 : 332nd_cows_pistol
    {
        picture = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_ico_pistol_03_ca.paa";
        model = "\Aux_332nd_weapons\Weapons\Republic\Accessories\data\332nd_pistol_3.p3d";
        displayName = "Pistol Holo B";
    };
    class 332nd_cows_LRPS : optic_DMS
    {
        author = "332nd Aux Team";
        scope = 2;
        displayName = "LRPS LR 12-20x Scope";
        class ItemInfo : ItemInfo
        {
            mass = 16;
            opticType = 2;
            weaponInfoType = "RscWeaponRangeZeroingFOV";
            optics = 1;
            modelOptics = "\A3\Weapons\Republic_F\acc\reticle_sniper_F";
            class OpticsModes
            {
                class Snip
                {
                    opticsID = 1;
                    opticsDisplayName = "WFOV";
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
                    opticsZoomMin = 0.01;
                    opticsZoomMax = 0.042;
                    opticsZoomInit = 0.042;
                    discreteDistance[] = {300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400};
                    discreteDistanceInitIndex = 2;
                    distanceZoomMin = 300;
                    distanceZoomMax = 2400;
                    discretefov[] = {0.042, 0.01};
                    discreteInitIndex = 0;
                    memoryPointCamera = "opticView";
                    modelOptics[] = {"\A3\Weapons\Republic_F\acc\reticle_lrps_F", "\A3\Weapons\Republic_F\acc\reticle_lrps_z_F"};
                    visionMode[] = {"Normal", "NVG", "Ti"};
                    thermalMode[] = {4};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class Iron : Snip
                {
                    opticsID = 2;
                    useModelOptics = 0;
                    opticsPPEffects[] = {"", ""};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {};
                    discretefov[] = {};
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    discreteDistance[] = {200};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };
    class 332nd_cows_LEScope_DC15A : optic_DMS
    {
        author = "332nd Aux Team";
        scope = 2;
        picture = "\MRC\JLTS\Weapons\Republic\DC15X\data\ui\DC15X_scope_ui_ca.paa";
        displayName = "DC-15LE Scope";
        model = "\3AS\3AS_Weapons\DC15A\3AS_DC15A_LE_Scope.p3d";
        class ItemInfo : ItemInfo
        {
            mass = 16;
            opticType = 2;
            weaponInfoType = "RscWeaponRangeZeroingFOV";
            optics = 1;
            modelOptics = "\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
            class OpticsModes
            {
                class IronSights
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsFlare = "true";
                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                    opticsDisablePeripherialVision = 0.67;
                    opticsZoomMin = 0.375;
                    opticsZoomMax = 1.1;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {};
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                };
                class Scope : Ironsights
                {
                    opticsID = 2;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                    opticsDisablePeripherialVision = 0.67;
                    opticsZoomMin = 0.03125;
                    opticsZoomMax = 0.0625;
                    opticsZoomInit = 0.0625;
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal", "NVG"};
                    opticsFlare = "true";
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                    cameraDir = "";
                };
            };
        };
    };
    class 332nd_cows_reflex_optic : ItemCore
    {
        scope = 2;
        author = "332nd Aux Team";
        displayName = "Reflex Optic";
        picture = "\A3\Weapons\Republic_F_EPA\Acc\data\UI\gear_acco_yorris_CA.paa";
        model = "\3AS\3AS_Weapons\DC15C\3AS_DC15C_Reflex_f.p3d";
        weaponInfoType = "RscWeaponZeroing";
        class ItemInfo : InventoryOpticsItem_Base_F
        {
            mass = 6;
            modelOptics = "\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
            optics = 1;
            class OpticsModes
            {
                class aco
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    cameraDir = "";
                    visionMode[] = {};
                    opticsPPEffects[] = {"OpticsBlur1"};
                };
                class Scope : aco
                {
                    opticsID = 2;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                    opticsDisablePeripherialVision = 0.67;
                    opticsZoomMin = 0.125;
                    opticsZoomMax = 0.125;
                    opticsZoomInit = 0.125;
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal", "NVG"};
                    opticsFlare = "true";
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                    cameraDir = "";
                };
            };
        };
    };
};

// Credit to the 501st Aux Team for settings of items
// Credit to 3as for the models