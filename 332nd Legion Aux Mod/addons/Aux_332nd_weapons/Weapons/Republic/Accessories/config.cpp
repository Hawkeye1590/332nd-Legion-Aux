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
                "332nd_cows_LEScope_DC15A",
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
};

// Credit to the 501st Aux Team for settings of items
// Credit to 3as for the models