class cfgPatches
{
    class 332nd_Patch_DC15S
    {
        addonRootClass = "332nd_Patch_Weapons";
        requiredAddons[] =
            {
                "332nd_Patch_Weapons",
                "A3_Weapons_F"};
        units[] = {};
        weapons[] =
            {
                "332nd_Weaps_DC15S"};
    };
};

class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;

class cfgWeapons
{
    class 332nd_stun_muzzle;
    class arifle_MX_Base_F;
    class 332nd_rifle_base : arifle_MX_Base_F
    {
        class Single;
        class FullAuto;
        class WeaponSlotsInfo;
    };

    class 332nd_Weaps_DC15S : 332nd_rifle_base
    {
        scope = 2;
        displayName = "[332nd] DC-15S Carbine";
        baseWeapon = "332nd_Weaps_DC15S";
        picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_ui_ca.paa";
        JLTS_canHaveShield = 1;
        JLTS_shieldedWeapon = "332nd_Weaps_DC15S_shield";
        model = "\MRC\JLTS\weapons\DC15S\DC15S.p3d";
        handAnim[] =
            {
                "OFP2_ManSkeleton",
                "\MRC\JLTS\weapons\DC15S\anims\DC15S_handanim.rtm"};
        reloadTime = 0.66;
        reloadAction = "GestureReload_JLTS_DC15S";
        reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\DC15A\DC15aReload", 1, 1, 30};
        recoil = "recoil_SMG_03";
        magazines[] =
            {
                "332nd_Weapons_Mags_10mw50"};
        class stun : 332nd_stun_muzzle
        {
        };
        modes[] = {"FullAuto", "Single", "aicqb", "aiclose", "aimedium", "aifar", "aiopticmode1", "aiopticmode2"};
        class FullAuto : FullAuto
        {
            sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
            class BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"\Aux_332nd_weapons\Weapons\Republic\Weapons\DC15A\sounds\dc15a_shot.wss", +1db, 1, 2200};
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
            class StandardSound : BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"\Aux_332nd_weapons\Weapons\Republic\Weapons\DC15A\sounds\dc15a_shot.wss", +1db, 1, 2200};
                soundBegin[] = {"begin1", 1};
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
            class SilencedSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Aux_332nd_weapons\Weapons\Republic\Weapons\DC15S\sounds\dc15s_shot_silenced.wss",
					1,
					1.1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
            reloadTime = 0.09;
            dispersion = 0.00087;
        };
        class Single : Single
        {
            sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
            class BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"\Aux_332nd_weapons\Weapons\Republic\Weapons\DC15A\sounds\dc15a_shot.wss", +1db, 1, 2200};
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
            class StandardSound : BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"\Aux_332nd_weapons\Weapons\Republic\Weapons\DC15A\sounds\dc15a_shot.wss", +1db, 1, 2200};
                soundBegin[] = {"begin1", 1};
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
            class SilencedSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Aux_332nd_weapons\Weapons\Republic\Weapons\DC15S\sounds\dc15s_shot_silenced.wss",
					1,
					1.1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
            reloadTime = 0.09;
            dispersion = 0.00087;
        };
        class aicqb : Single
        {
            showToPlayer = 0;
            burst = 1;
            burstRangeMax = -1;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 50;
            midRangeProbab = 1;
            maxRange = 100;
            maxRangeProbab = 0.5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
        };
        class aiclose : aicqb
        {
            burst = 1;
            burstRangeMax = -1;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 50;
            midRangeProbab = 1;
            maxRange = 100;
            maxRangeProbab = 0.5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
        };
        class aimedium : aicqb
        {
            burst = 1;
            burstRangeMax = -1;
            minRange = 100;
            minRangeProbab = 0.05;
            midRange = 200;
            midRangeProbab = 0.5;
            maxRange = 300;
            maxRangeProbab = 0.04;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 300;
        };
        class aifar : aicqb
        {
            burst = 1;
            burstRangeMax = -1;
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.04;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 500;
        };
        class aiopticmode1 : aicqb
        {
            minRange = 350;
            minRangeProbab = 0.5;
            midRange = 550;
            midRangeProbab = 1;
            maxRange = 650;
            maxRangeProbab = 0.5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 500;
            requiredOpticType = 1;
        };
        class aiopticmode2 : aicqb
        {
            minRange = 550;
            minRangeProbab = 0.5;
            midRange = 650;
            midRangeProbab = 1;
            maxRange = 800;
            maxRangeProbab = 0.5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 700;
            requiredOpticType = 1;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot : CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                compatibleItems[] =
                    {
                        "OPTRE_M12_Optic",
                        "OPTRE_M12_Optic_Green",
                        "OPTRE_M12_Optic_Red",
                        "Optre_Recon_Sight",
                        "Optre_Recon_Sight_Red",
                        "Optre_Recon_Sight_Green"};
            };
            class MuzzleSlot : MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                compatibleItems[] =
                    {
                        "332nd_muzzle_flash",
                        "OPTRE_MA5Suppressor"};
            };
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
    class 332nd_Weaps_DC15S_shield : 332nd_Weaps_DC15S
    {
        displayName = "[332nd] DC-15S (Shield)";
        baseWeapon = "332nd_Weaps_DC15S_shield";
        JLTS_hasElectronics=0;
		JLTS_hasEMPProtection=1;
        scope = 1;
        JLTS_isShielded = 1;
        JLTS_baseWeapon = "332nd_Weaps_DC15S";
        model = "\MRC\JLTS\weapons\DC15S\DC15S_shielded.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DC15S\data\DC15S_co.paa", "\MRC\JLTS\weapons\Shield\data\shield_co.paa"};
        handAnim[] = {"OFP2_ManSkeleton", "\MRC\JLTS\weapons\DC15S\anims\DC15S_shielded_handanim.rtm"};
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

class CfgMagazines
{
    class 30Rnd_65x39_caseless_mag;

    class 332nd_Weapons_Mags_10mw50 : 30Rnd_65x39_caseless_mag
    {
        displayName = "[332nd] 50Rnd 10MW Cell";
        displayNameShort = "50Rnd 10MW";
        author = "332nd Aux Team";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
        count = 50;
        ammo = "332nd_Weapons_Ammo_10mw";
        initSpeed = 825;
        descriptionShort = "DC15S Medium Power magazine";
        mass = 8;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
        model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
        tracersEvery = 1;
    };
};

class CfgAmmo
{
    class 332nd_Weapons_Ammo_base_blue;

    class 332nd_Weapons_Ammo_10mw : 332nd_Weapons_Ammo_base_blue
    {
        hit = 12.5;
        typicalSpeed = 900;
        caliber = 1;
        waterFriction = -0.009;
    };
};

// Credit to the 501st Aux Team for settings of items
// Credit to 3as for the models