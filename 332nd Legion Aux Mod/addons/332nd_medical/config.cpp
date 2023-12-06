class cfgPatches
{
	class 332nd_misc_medical
	{
		author = "332nd_AUX_TEAM";
        
		units[]=
		{
			"332nd_BactaBandage_Item",
			"332nd_BasicBandage_Item",
			"332nd_MorphineStim_Item",
			"332nd_EpinephrineStim_Item",
			"332nd_AdenosineStim_Item",
            "332nd_CombatStim_Item",
			"332nd_Kolto_250_Item",
			"332nd_Kolto_500_Item",
			"332nd_Kolto_1000_Item",
            "332nd_Bacta_250_Item",
			"332nd_Bacta_500_Item",
			"332nd_Bacta_1000_Item",
            "332nd_Cauterizer_Item",
		};
		
        weapons[]=
		{
			"332nd_BactaBandage",
			"332nd_BasicBandage",
			"332nd_MorphineStim",
			"332nd_EpinephrineStim",
			"332nd_AdenosineStim",
            "332nd_CombatStim",
			"332nd_Kolto_1000",
			"332nd_Kolto_500",
			"332nd_Kolto_250",
			"332nd_Bacta_1000",
			"332nd_Bacta_500",
			"332nd_Bacta_250",
			"332nd_Cauterizer",
		};

		requiredAddons[]=
		{
			"kobra_core",
            "ace_medical_treatment",
            "442_misc",
            "JLTS_C_drugs",
		};

        authors[] =
        {
			"332nd_AUX_TEAM",
			"Hawkeye"
        };
	};
};

//Credits to ToxicKrinix, Kripto and the Kobra mod team for the original basework of this medical system. Thank you for making it publicly available for adjustments and repacks. 
//https://discord.com/channels/557687739907047447/593325892982407169/1114936803993075754
//https://discord.com/channels/557687739907047447/593325892982407169/1114938047486767114
//Models and Textures are from Kobra
//Scripts are base ACE
//Leaving Notes for future modders to understand

class CfgEditorCategories
{
	class 332nd_Medical
	{
		displayname = "[332nd] 332nd Legion Medical";
	};
};

class CfgEditorSubcategories
{
	class 332nd_Medical_Assets
	{
		displayName="Medical Assets";
	};
};

class CfgWeapons 
{
    class ItemCore;
	class ACE_ItemCore;
    class ACE_surgicalKit;
	class CBA_MiscItem_ItemInfo;
    class 442_Cauterizer;
	
	class 332nd_BactaBandage: ACE_ItemCore 
    {
        scope = 2;
        author = "Hawkeye";
        displayName ="[332nd] Bacta Bandage";
        model = "kobra\442_misc\medical\BactaBandage.p3d";
        picture="\kobra\442_misc\medical\ui\bactabandage_ui.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
	
	class 332nd_BasicBandage: ACE_ItemCore 
    {
        scope = 2;
        author = "Hawkeye";
        displayName ="[332nd] Bandage (Normal)";
        model = "kobra\442_misc\medical\Bandage.p3d";
        picture="\kobra\442_misc\medical\ui\bandage_ui.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class 332nd_MorphineStim: ACE_ItemCore 
    {
        scope = 2;
        author = "Hawkeye";
        displayName ="[332nd] Morphine Stim";
        model = "kobra\442_misc\medical\StimPerigen.p3d";
        picture="\kobra\442_misc\medical\ui\stim_perigen_ui.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class 332nd_EpinephrineStim: ACE_ItemCore 
    {
        scope = 2;
        author = "Hawkeye";
        displayName ="[332nd] Epinephrine Stim";
        model = "kobra\442_misc\medical\StimPolybiotics.p3d";
        picture="\kobra\442_misc\medical\ui\stim_polybiotics_ui.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class 332nd_AdenosineStim: ACE_ItemCore 
    {
        scope = 2;
        author = "Hawkeye";
        displayName ="[332nd] Adenosine Stim";
        model = "kobra\442_misc\medical\StimMyoplexaril.p3d";
        picture="\kobra\442_misc\medical\ui\stim_myoplexaril_ui.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

	class 332nd_CombatStim: ACE_ItemCore 
    {
        scope = 2;
        author = "Hawkeye";
        displayName ="[332nd] Combat Stim";
        model = "kobra\442_misc\medical\StimPerigen.p3d";
        picture="\kobra\442_misc\medical\ui\stim_perigen_ui.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class 332nd_Kolto_1000: ACE_ItemCore 
    {
        scope = 2;
        author = "Hawkeye";
        displayName ="[332nd] Kolto 1000ml";
        model = "kobra\442_misc\medical\Vasko.p3d";
        picture="\kobra\442_misc\medical\ui\vasko_ui.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 10;
        };
    };

    class 332nd_Kolto_500: 332nd_Kolto_1000 
    {
        displayName ="[332nd] Kolto 500ml";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 5;
        };
    };

    class 332nd_Kolto_250: 332nd_Kolto_1000 
    {
        displayName ="[332nd] Kolto 250ml";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 5;
        };
    };

    class 332nd_Bacta_1000: ACE_ItemCore 
    {
        scope = 2;
        author = "Hawkeye";
        displayName ="[332nd] Bacta 1000ml";
        model = "kobra\442_misc\medical\Bacta.p3d";
        picture="\kobra\442_misc\medical\ui\bacta_ui.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 10;
        };
    };

    class 332nd_Bacta_500: 332nd_Bacta_1000 
    {
        displayName ="[332nd] Bacta 500ml";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 5;
        };
    };

    class 332nd_Bacta_250: 332nd_Bacta_1000 
    {
        displayName ="[332nd] Bacta 250ml";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 5;
        };
    };

    class 332nd_Cauterizer: 442_Cauterizer 
    {
        scope = 2;
        author = "Hawkeye";
        displayName ="[332nd] Cauterizer";
        model = "kobra\442_misc\medical\Cauterizer.p3d";
        picture="\kobra\442_misc\medical\ui\cauterizer_ui.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 15;
        };
    };

};

class ACE_Medical_Treatment
{
    class Morphine;
    class Epinephrine;
    class Adenosine;
    class BloodIV;
    class BasicBandage;

    class Medication
	{
		class 332nd_MorphineStim: Morphine
		{
			// How much does the pain get reduced
            painReduce=1;
            // How much will the heart rate be increased when the HR is low (below 55)
			hrIncreaseLow[]={0}; // _heartRate < 55
			hrIncreaseNormal[]={0}; // 55 <= _heartRate <= 110
			hrIncreaseHigh[]={0}; // 110 < _heartRate
            // How long until this medication has disappeared (in seconds)
			timeInSystem=120;
            // How long until the maximum effect is reached (in seconds)
			timeTillMaxEffect=0;
            // How many of this type of medication can be in the system before the patient overdoses? (in seconds)
			maxDose=40;
            incompatibleMedication[]={};
            // The viscosity of a fluid is a measure of its resistance to gradual deformation by shear stress or tensile stress. 
            // For liquids, it corresponds to the informal concept of "thickness". 
            // This value will increase/decrease the viscoty of the blood with the percentage given. 
            // Where 100 = max. Using the minus will decrease viscosity
			viscosityChange=0;
		};
        class 332nd_EpinephrineStim: Epinephrine
		{
			// How much does the pain get reduced
            painReduce=0;
            // How much will the heart rate be increased when the HR is low (below 55)
			hrIncreaseLow[]={10,20};
			hrIncreaseNormal[]={10,50};
			hrIncreaseHigh[]={10,40};
            // How long until this medication has disappeared (in seconds)
			timeInSystem=120;
            // How long until the maximum effect is reached (in seconds)
			timeTillMaxEffect=0;
            // How many of this type of medication can be in the system before the patient overdoses? (in seconds)
			maxDose=40;
			incompatibleMedication[]={};
            // The viscosity of a fluid is a measure of its resistance to gradual deformation by shear stress or tensile stress. 
            // For liquids, it corresponds to the informal concept of "thickness". 
            // This value will increase/decrease the viscoty of the blood with the percentage given. 
            // Where 100 = max. Using the minus will decrease viscosity
			viscosityChange=0;
		};
        class 332nd_AdenosineStim: Adenosine
		{
			// How much does the pain get reduced
            painReduce=0;
			// How much will the heart rate be increased when the HR is low (below 55)
            hrIncreaseLow[]={-7,-10};
			hrIncreaseNormal[]={-15,-30};
			hrIncreaseHigh[]={-15,-35};
			// How long until this medication has disappeared (in seconds)
            timeInSystem=120;
			// How long until the maximum effect is reached (in seconds)
            timeTillMaxEffect=0;
            // How many of this type of medication can be in the system before the patient overdoses? (in seconds)
			maxDose=40;
			incompatibleMedication[]={};
            // The viscosity of a fluid is a measure of its resistance to gradual deformation by shear stress or tensile stress. 
            // For liquids, it corresponds to the informal concept of "thickness". 
            // This value will increase/decrease the viscoty of the blood with the percentage given. 
            // Where 100 = max. Using the minus will decrease viscosity
			viscosityChange=0;
		};
        
		class 332nd_CombatStim: Morphine
		{
			// How much does the pain get reduced
            painReduce=0.25;
            // How much will the heart rate be increased when the HR is low (below 55)
			hrIncreaseLow[]={0}; // _heartRate < 55
			hrIncreaseNormal[]={0}; // 55 <= _heartRate <= 110
			hrIncreaseHigh[]={0}; // 110 < _heartRate
            // How long until this medication has disappeared (in seconds)
			timeInSystem=180;
            // How long until the maximum effect is reached (in seconds)
			timeTillMaxEffect=0;
            // How many of this type of medication can be in the system before the patient overdoses? (in seconds)
			maxDose=40;
            incompatibleMedication[]={};
            // The viscosity of a fluid is a measure of its resistance to gradual deformation by shear stress or tensile stress. 
            // For liquids, it corresponds to the informal concept of "thickness". 
            // This value will increase/decrease the viscoty of the blood with the percentage given. 
            // Where 100 = max. Using the minus will decrease viscosity
			viscosityChange=10;
		};
	
	};
    
    class IV
    {
     	volume=1000; // volume is in millileters
		ratio[]={};
		type="Blood";
        class 332nd_Bacta_1000: BloodIV
        {
			volume=1000;
			ratio[]=
			{
				"Blood",
				1
			};
		};
		class 332nd_Bacta_500: 332nd_Bacta_1000
		{
			volume=500;
		};
		class 332nd_Bacta_250: 332nd_Bacta_1000
		{
			volume=250;
		};
        
        class 332nd_Kolto_1000: BloodIV
        {
			volume=1000;
			ratio[]=
			{
				"Blood",
				1
			};
		};
		class 332nd_Kolto_500: 332nd_Kolto_1000
		{
			volume=500;
		};
		class 332nd_Kolto_250: 332nd_Kolto_1000
		{
			volume=250;
		};
    };
	
    class Bandaging
    {
        class 332nd_BasicBandage: BasicBandage
        {
            // Bandage effectiveness
            effectiveness=5;  
			// Reopening chance
            reopeningChance=0; 
			// Reopening delays (in seconds)
            reopeningMinDelay=0; 
			reopeningMaxDelay=0;
            
            class Abrasion
			{
				effectiveness=5;
			};
			class AbrasionMinor: Abrasion
			{
				effectiveness=5;
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=5;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=5;
			};
			class Avulsion: Abrasion
			{
				effectiveness=5;
			};
			class AvulsionMinor: Avulsion
			{
				effectiveness=5;
			};
			class AvulsionMedium: Avulsion
			{
				effectiveness=5;
			};
			class AvulsionLarge: Avulsion
			{
				effectiveness=5;
			};
			class Contusion: Abrasion
			{
				effectiveness=5;
			};
			class ContusionMinor: Contusion
			{
                effectiveness=5;
			};
			class ContusionMedium: Contusion
			{
                effectiveness=5;
			};
			class ContusionLarge: Contusion
			{
                effectiveness=5;
			};
			class Crush: Abrasion
			{
				effectiveness=5;
			};
			class CrushMinor: Crush
			{
				effectiveness=5;
			};
			class CrushMedium: Crush
			{
				effectiveness=5;
			};
			class CrushLarge: Crush
			{
				effectiveness=5;
			};
			class Cut: Abrasion
			{
				effectiveness=5;
			};
			class CutMinor: Cut
			{
				effectiveness=5;
			};
			class CutMedium: Cut
			{
				effectiveness=5;
			};
			class CutLarge: Cut
			{
				effectiveness=5;
			};
			class Laceration: Abrasion
			{
				effectiveness=5;
			};
			class LacerationMinor: Laceration
			{
				effectiveness=5;
			};
			class LacerationMedium: Laceration
			{
				effectiveness=5;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=5;
			};
			class VelocityWound: Abrasion
			{
				effectiveness=5;
			};
			class VelocityWoundMinor: VelocityWound
			{
				effectiveness=5;
			};
			class VelocityWoundMedium: VelocityWound
			{
				effectiveness=5;
			};
			class VelocityWoundLarge: VelocityWound
			{
				effectiveness=5;
			};
			class PunctureWound: Abrasion
			{
				effectiveness=5;
			};
			class PunctureWoundMinor: PunctureWound
			{
				effectiveness=5;
			};
			class PunctureWoundMedium: PunctureWound
			{
				effectiveness=5;
			};
			class PunctureWoundLarge: PunctureWound
			{
				effectiveness=5;
			};
        };
        class 332nd_BactaBandage: BasicBandage
        {
            // Bandage effectiveness
            effectiveness=7.5;  
			// Reopening chance
            reopeningChance=0; 
			// Reopening delays (in seconds)
            reopeningMinDelay=0;
			reopeningMaxDelay=0;
            
            class Abrasion
			{
				effectiveness=7.5;
			};
			class AbrasionMinor: Abrasion
			{
				effectiveness=7.5;
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=7.5;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=7.5;
			};
			class Avulsion: Abrasion
			{
				effectiveness=7.5;
			};
			class AvulsionMinor: Avulsion
			{
				effectiveness=7.5;
			};
			class AvulsionMedium: Avulsion
			{
				effectiveness=7.5;
			};
			class AvulsionLarge: Avulsion
			{
				effectiveness=7.5;
			};
			class Contusion: Abrasion
			{
				effectiveness=7.5;
			};
			class ContusionMinor: Contusion
			{
                effectiveness=7.5;
			};
			class ContusionMedium: Contusion
			{
                effectiveness=7.5;
			};
			class ContusionLarge: Contusion
			{
                effectiveness=7.5;
			};
			class Crush: Abrasion
			{
				effectiveness=7.5;
			};
			class CrushMinor: Crush
			{
				effectiveness=7.5;
			};
			class CrushMedium: Crush
			{
				effectiveness=7.5;
			};
			class CrushLarge: Crush
			{
				effectiveness=7.5;
			};
			class Cut: Abrasion
			{
				effectiveness=7.5;
			};
			class CutMinor: Cut
			{
				effectiveness=7.5;
			};
			class CutMedium: Cut
			{
				effectiveness=7.5;
			};
			class CutLarge: Cut
			{
				effectiveness=7.5;
			};
			class Laceration: Abrasion
			{
				effectiveness=7.5;
			};
			class LacerationMinor: Laceration
			{
				effectiveness=7.5;
			};
			class LacerationMedium: Laceration
			{
				effectiveness=7.5;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=7.5;
			};
			class VelocityWound: Abrasion
			{
				effectiveness=7.5;
			};
			class VelocityWoundMinor: VelocityWound
			{
				effectiveness=7.5;
			};
			class VelocityWoundMedium: VelocityWound
			{
				effectiveness=7.5;
			};
			class VelocityWoundLarge: VelocityWound
			{
				effectiveness=7.5;
			};
			class PunctureWound: Abrasion
			{
				effectiveness=7.5;
			};
			class PunctureWoundMinor: PunctureWound
			{
				effectiveness=7.5;
			};
			class PunctureWoundMedium: PunctureWound
			{
				effectiveness=7.5;
			};
			class PunctureWoundLarge: PunctureWound
			{
				effectiveness=7.5;
			};
        };
    };

};

class ACE_Medical_Treatment_Actions
{
	class Morphine;
    class Epinephrine;
    class Adenosine;
    class BloodIV;
    class BasicBandage;
    class SurgicalKit;
    class PersonalAidKit;


    class 332nd_MorphineStim: Morphine
    {
        displayName="Morphine Stim";
        displayNameProgress="Administering Morphine Stim";
        icon="\332nd_medical\ui\stim_perigen_ui.paa";
        allowedSelections[]=
        {
            "Body",
            "LeftArm",
            "RightArm",
            "LeftLeg",
            "RightLeg"
        };
        items[]=
        {
            "332nd_MorphineStim"
        };
    };
    class 332nd_EpinephrineStim: Epinephrine
    {
        displayName="Epinephrine Stim";
        displayNameProgress="Administering Epinephrine Stim";
        icon="\332nd_medical\ui\stim_polybiotics_ui.paa";
        allowedSelections[]=
        {
            "Body",
            "LeftArm",
            "RightArm",
            "LeftLeg",
            "RightLeg"
        };
        items[]=
        {
            "332nd_EpinephrineStim"
        };
    };
    class 332nd_AdenosineStim: Adenosine
    {
        displayName="Adenosine Stim";
        displayNameProgress="Administering Adenosine Stim";
        icon="\332nd_medical\ui\stim_myoplexaril_ui.paa";
        allowedSelections[]=
        {
            "Body",
            "LeftArm",
            "RightArm",
            "LeftLeg",
            "RightLeg"
        };
        items[]=
        {
            "332nd_AdenosineStim"
        };
    };

	class 332nd_CombatStim: Morphine
    {
        displayName="Combat Stim";
        displayNameProgress="Administering Combat Stim";
        icon="\332nd_medical\ui\stim_perigen_ui.paa";
        allowedSelections[]=
        {
            "Body",
            "LeftArm",
            "RightArm",
            "LeftLeg",
            "RightLeg"
        };
        items[]=
        {
            "332nd_CombatStim"
        };
    };    

    class 332nd_Bacta_1000: BloodIV
    {
        displayName="Bacta 1000mL";
        displayNameProgress="Administering Bacta 1000mL";	
        icon="\332nd_medical\ui\bacta_ui.paa";
		allowedSelections[]=
		{
			"Body",
            "LeftArm",
			"RightArm",
			"LeftLeg",
			"RightLeg"
		};        	
        items[]=
		{
			"332nd_Bacta_1000"
		};
    };
 	class 332nd_Bacta_500: 332nd_Bacta_1000
	{
        displayName="Bacta 500mL";
        displayNameProgress="Administering Bacta 500mL";
		items[]=
		{
			"332nd_Bacta_500"
		};
	};
	class 332nd_Bacta_250: 332nd_Bacta_1000
	{
		displayName="Bacta 250mL";
        displayNameProgress="Administering Bacta 250mL";
		items[]=
		{
			"332nd_Bacta_250"
		};
	};

    class 332nd_Kolto_1000: BloodIV
    {
        displayName="Kolto 1000mL";
        displayNameProgress="Administering Kolto 1000mL";	
        icon="\332nd_medical\ui\bacta_ui.paa";
		allowedSelections[]=
		{
			"Body",
            "LeftArm",
			"RightArm",
			"LeftLeg",
			"RightLeg"
		};        	
        items[]=
		{
			"332nd_Kolto_1000"
		};    
    };
 	class 332nd_Kolto_500: 332nd_Kolto_1000
	{
        displayName="Kolto 500mL";
        displayNameProgress="Administering Kolto 500mL";
		items[]=
		{
			"332nd_Kolto_500"
		};
	};
	class 332nd_Kolto_250: 332nd_Kolto_1000
	{
		displayName="Kolto 250mL";
        displayNameProgress="Administering Kolto 250mL";
		items[]=
		{
			"332nd_Kolto_250"
		};
	}; 

    class 332nd_BasicBandage: BasicBandage
 	{	
        displayName= "Basic Bandage";
        displayNameProgress="Administering Basic Bandage";
        icon="\332nd_medical\ui\bandage_ui.paa";
		items[]=
		{
			"332nd_BasicBandage"
		};
 		medicRequired=0;
		allowSelfTreatment=1;
		allowedSelections[]=
		{
			"All"
		};
        treatmentLocations=0;
    };    
    class 332nd_BactaBandage: BasicBandage
 	{	
        displayName= "Bacta Bandage";
        displayNameProgress="Administering Bacta Bandage";
        icon="\332nd_medical\ui\bactabandage_ui.paa";
		items[]=
		{
			"332nd_BactaBandage"
		};
 		medicRequired=0;
		allowSelfTreatment=1;
		allowedSelections[]=
		{
			"All"
		};
        treatmentLocations=0;  
    };   
    
	class 332nd_Cauterizer: SurgicalKit
    {
        displayName= "Cauterizer";
        displayNameProgress="Administering Cauterizer";
        icon="\332nd_medical\ui\cauterizer_ui.paa";
		items[]=
		{
			"332nd_Cauterizer"
		};
    };

};

class CfgVehicles 
{
	
	class Item_Base_F;
	
	class 332nd_BactaBandage_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="332nd_Medical";
		editorsubcategory="332nd_Medical_Assets";
        displayName ="[332nd] Bacta Bandage";
        author = "Hawkeye";
        model = "kobra\442_misc\medical\BactaBandage.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_332nd_BactaBandage
			{
				name="332nd_BactaBandage";
				count=1;
			};
		};
    };
	
	class 332nd_BasicBandage_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="332nd_Medical";
		editorsubcategory="332nd_Medical_Assets";
        displayName ="[332nd] Bandage (Normal)";
        author = "Hawkeye";
        model = "kobra\442_misc\medical\Bandage.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_332nd_BasicBandage
			{
				name="332nd_BasicBandage";
				count=1;
			};
		};
    };

    class 332nd_Bacta_250_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="332nd_Medical";
		editorsubcategory="332nd_Medical_Assets";
        displayName ="[332nd] Bacta 250ml";
        author = "Hawkeye";
        model = "kobra\442_misc\medical\Bacta.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_332nd_Bacta_250
			{
				name="332nd_Bacta_250";
				count=1;
			};
		};
    };

    class 332nd_Bacta_500_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="332nd_Medical";
		editorsubcategory="332nd_Medical_Assets";
        displayName ="[332nd] Bacta 500ml";
        author = "Hawkeye";
        model = "kobra\442_misc\medical\Bacta.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_332nd_Bacta_500
			{
				name="332nd_Bacta_500";
				count=1;
			};
		};
    };

    class 332nd_Bacta_1000_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="332nd_Medical";
		editorsubcategory="332nd_Medical_Assets";
        displayName ="[332nd] Bacta 1000ml";
        author = "Hawkeye";
        model = "kobra\442_misc\medical\Bacta.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_332nd_Bacta_1000
			{
				name="332nd_Bacta_1000";
				count=1;
			};
		};
    };

    class 332nd_Cauterizer_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="332nd_Medical";
		editorsubcategory="332nd_Medical_Assets";
        displayName ="[332nd] Cauterizer";
        author = "Hawkeye";
        model = "kobra\442_misc\medical\Cauterizer.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_332nd_Cauterizer
			{
				name="332nd_Cauterizer";
				count=1;
			};
		};
    };

    class 332nd_MorphineStim_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="332nd_Medical";
		editorsubcategory="332nd_Medical_Assets";
        displayName ="[332nd] Morphine Stim";
        author = "Hawkeye";
        model = "kobra\442_misc\medical\StimPerigen.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_332nd_MorphineStim
			{
				name="332nd_MorphineStim";
				count=1;
			};
		};
    };

    class 332nd_EpinephrineStim_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="332nd_Medical";
		editorsubcategory="332nd_Medical_Assets";
        displayName ="[332nd] Epinephrine Stim";
        author = "Hawkeye";
        model = "kobra\442_misc\medical\StimPolybiotics.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_332nd_EpinephrineStim
			{
				name="332nd_EpinephrineStim";
				count=1;
			};
		};
    };

    class 332nd_AdenosineStimStim_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="332nd_Medical";
		editorsubcategory="332nd_Medical_Assets";
        displayName ="[332nd] Adenosine Stim";
        author = "Hawkeye";
        model = "kobra\442_misc\medical\StimMyoplexaril.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_332nd_AdenosineStim
			{
				name="332nd_AdenosineStim";
				count=1;
			};
		};
    };

    class 332nd_CombatStim_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="332nd_Medical";
		editorsubcategory="332nd_Medical_Assets";
        displayName ="[332nd] Combat Stim";
        author = "Hawkeye";
        model = "kobra\442_misc\medical\StimPerigen.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_332nd_CombatStim
			{
				name="332nd_CombatStim";
				count=1;
			};
		};
    };

    class 332nd_Kolto_250_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="332nd_Medical";
		editorsubcategory="332nd_Medical_Assets";
        displayName ="[332nd] Kolto 250ml";
        author = "Hawkeye";
        model = "kobra\442_misc\medical\Vasko.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_332nd_Kolto_250
			{
				name="332nd_Kolto_250";
				count=1;
			};
		};
    };

    class 332nd_Kolto_500_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="332nd_Medical";
		editorsubcategory="332nd_Medical_Assets";
        displayName ="[332nd] Kolto 500ml";
        author = "Hawkeye";
        model = "kobra\442_misc\medical\Vasko.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_332nd_Kolto_500
			{
				name="332nd_Kolto_500";
				count=1;
			};
		};
    };

    class 332nd_Kolto_1000_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="332nd_Medical";
		editorsubcategory="332nd_Medical_Assets";
        displayName ="[332nd] Kolto 1000ml";
        author = "Hawkeye";
        model = "kobra\442_misc\medical\Vasko.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_332nd_Kolto_1000
			{
				name="332nd_Kolto_1000";
				count=1;
			};
		};
    };
};

class cfgMods
{
	author="332nd_AUX_TEAM";
	timepacked="1688755993";
};
