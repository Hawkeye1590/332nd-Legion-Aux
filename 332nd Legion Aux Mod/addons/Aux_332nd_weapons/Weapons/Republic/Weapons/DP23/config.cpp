class cfgPatches
{
    class 332nd_Patch_DP23
    {
        addonRootClass = "332nd_Patch_Weapons";
        requiredAddons[] =
            {
                "332nd_Patch_Weapons",
                "A3_Weapons_F"};
        units[] = {};
        weapons[] =
            {
                "332nd_Weaps_DP23",
                "332nd_Weaps_DP23_shield"};
    };
};

class PointerSlot;
class UnderBarrelSlot;

class cfgWeapons
{
    class 332nd_stun_muzzle;
    class 332nd_rifle_base;
    class 332nd_rifle_base_stunless : 332nd_rifle_base
    {
        class Single;
        class WeaponSlotsInfo;
    };

    class 332nd_Weaps_DP23 : 332nd_rifle_base_stunless
    {
        scope = 2;
        displayName = "[332nd] DP-23 Shotgun";
        baseWeapon = "332nd_Weaps_DP23";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_ui_ca.paa";
        JLTS_canHaveShield = 1;
        JLTS_shieldedWeapon = "332nd_Weaps_DP23_shield";
        model = "\MRC\JLTS\weapons\DP23\DP23.p3d";
        handAnim[] = {"OFP2_ManSkeleton", "\MRC\JLTS\weapons\DP23\anims\DP23_handanim.rtm"};
        reloadMagazineSound[] = {"swlw_rework\sounds\dc\15\DC15A_reload.wss", 3, 1, 30};
        recoil = "JLTS_recoil_DP23";
        magazines[] =
            {
                "332nd_Weapons_Mags_shotgun_scatter20"};
        modes[] = {"Single", "aiclose", "aimedium"};
        class Single : Single
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "";
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
            class StandardSound : BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"swlw_rework\sounds\shotgun\DP23_shot.wss", +3db, 1, 2200};
                begin2[] = {"swlw_rework\sounds\shotgun\DP23_shot.wss", +3db, 1, 2200};
                begin3[] = {"swlw_rework\sounds\shotgun\DP23_shot.wss", +3db, 1, 2200};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
            };
            reloadTime = 0.5;
            dispersion = 0.00073;
            minRange = 1;
            minRangeProbab = 0.5;
            midRange = 30;
            midRangeProbab = 0.7;
            maxRange = 60;
            maxRangeProbab = 0.3;
        };
        class aiclose : Single
        {
            showToPlayer = 0;
            minRange = 50;
            minRangeProbab = 0.1;
            midRange = 130;
            midRangeProbab = 0.8;
            maxRange = 200;
            maxRangeProbab = 0.15;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
        class aimedium : aiclose
        {
            minRange = 150;
            minRangeProbab = 0.1;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.15;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 300;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class PointerSlot : PointerSlot
            {
                compatibleItems[] = {"acc_flashlight", "acc_pointer_IR"};
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                displayName = "Pointer Slot";
            };
        };
    };
    class 332nd_Weaps_DP23_shield : 332nd_Weaps_DP23
    {
        displayName = "[332nd] DP-23 (Shield)";
        baseWeapon = "332nd_Weaps_DP23_shield";
        scope = 1;
        JLTS_isShielded = 1;
        JLTS_baseWeapon = "332nd_Weaps_DP23";
        model = "\MRC\JLTS\weapons\DP23\DP23_shielded.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DP23\data\DP23_co.paa", "\MRC\JLTS\weapons\Shield\data\shield_co.paa"};
        handAnim[] = {"OFP2_ManSkeleton", "\MRC\JLTS\weapons\DP23\anims\DP23_shielded_handanim.rtm"};
        reloadAction = "GestureReload";
        inertia = 0.8;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 110;
            class UnderBarrelSlot : UnderBarrelSlot
            {
                compatibleItems[] =
                    {
                        "JLTS_riot_shield_attachment",
                        "JLTS_riot_shield_212_attachment",
                        "JLTS_riot_shield_501_attachment",
                        "JLTS_riot_shield_101_attachment",
                        "JLTS_riot_shield_CG_attachment",
                        "JLTS_riot_shield_GD_attachment",
                        "JLTS_riot_shield_droid_attachment"};
            };
        };
    };
};

// Credit to the 501st Aux Team for settings of items
// Credit to 3as for the models