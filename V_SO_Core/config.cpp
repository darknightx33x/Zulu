class CfgPatches
{
	class V_SO_Core
	{
		author="Fireteam Zulu";
		name="Fireteam Zulu: Specialized Ordanance";
		url="https://discord.gg/fa7Cguk";
		units[]=
		{
			"OPTRE_Placed_C12",
			"OPTRE_Placed_Mine",
			"OPTRE_Placed_C7",
			"OPTRE_Placed_M168",
			"OPTRE_Placed_M41_IED",
			"OPTRE_Placed_M41_IED_B"
		};
		weapons[]=
		{
			"OPTRE_M6D_Smartlink",
			"M48B_Optic",
			"M48B_Optic_Grid"
		};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"V_SO_Weapons",
			"A3_Data_F_ParticleEffects",
			"A3_Data_F"
		};
	};
};
class CfgWeapons
{
	class NVGoggles;
	class A3_TVG_S_F: NVGoggles
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		class ItemInfo
		{
			type=616;
			uniformModel="";
			modelOff="";
			mass=13;
		};
	};
	class A3_TVG_S_F2: A3_TVG_S_F
	{
		displayName="Mark 3 Interface";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3: A3_TVG_S_F
	{
		displayName="Mark 4 Interface";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45: A3_TVG_S_F
	{
		displayName="Mark 5 Interface";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6: A3_TVG_S_F
	{
		displayName="Mark 6 Interface";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7: A3_TVG_S_F
	{
		displayName="Mark 7 Interface";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8: A3_TVG_S_F
	{
		displayName="Mark 8 Interface";
		thermalMode[]={7};
	};
	class VES_NVG_CNM;
	class A3_TVG_S_F_CNM: VES_NVG_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_CNM: A3_TVG_S_F_CNM
	{
		displayName="Mark 3 Interface (CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_CNM: A3_TVG_S_F_CNM
	{
		displayName="Mark 4 Interface (CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_CNM: A3_TVG_S_F_CNM
	{
		displayName="Mark 5 Interface (CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_CNM: A3_TVG_S_F_CNM
	{
		displayName="Mark 6 Interface (CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_CNM: A3_TVG_S_F_CNM
	{
		displayName="Mark 7 Interface (CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_CNM: A3_TVG_S_F_CNM
	{
		displayName="Mark 8 Interface (CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_HUL;
	class A3_TVG_S_F_HUL: VES_NVG_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_HUL: A3_TVG_S_F_HUL
	{
		displayName="Mark 3 Interface (HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_HUL: A3_TVG_S_F_HUL
	{
		displayName="Mark 4 Interface (HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_HUL: A3_TVG_S_F_HUL
	{
		displayName="Mark 5 Interface (HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_HUL: A3_TVG_S_F_HUL
	{
		displayName="Mark 6 Interface (HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_HUL: A3_TVG_S_F_HUL
	{
		displayName="Mark 7 Interface (HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_HUL: A3_TVG_S_F_HUL
	{
		displayName="Mark 8 Interface (HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_UL;
	class A3_TVG_S_F_UL: VES_NVG_UL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UL: A3_TVG_S_F_UL
	{
		displayName="Mark 3 Interface (UL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UL: A3_TVG_S_F_UL
	{
		displayName="Mark 4 Interface (UL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UL: A3_TVG_S_F_UL
	{
		displayName="Mark 5 Interface (UL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UL: A3_TVG_S_F_UL
	{
		displayName="Mark 6 Interface (UL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UL: A3_TVG_S_F_UL
	{
		displayName="Mark 7 Interface (UL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UL: A3_TVG_S_F_UL
	{
		displayName="Mark 8 Interface (UL)";
		thermalMode[]={7};
	};
	class VES_NVG_HURS;
	class A3_TVG_S_F_HURS: VES_NVG_HURS
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (HURS)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_HURS: A3_TVG_S_F_HURS
	{
		displayName="Mark 3 Interface (HURS)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_HURS: A3_TVG_S_F_HURS
	{
		displayName="Mark 4 Interface (HURS)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_HURS: A3_TVG_S_F_HURS
	{
		displayName="Mark 5 Interface (HURS)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_HURS: A3_TVG_S_F_HURS
	{
		displayName="Mark 6 Interface (HURS)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_HURS: A3_TVG_S_F_HURS
	{
		displayName="Mark 7 Interface (HURS)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_HURS: A3_TVG_S_F_HURS
	{
		displayName="Mark 8 Interface (HURS)";
		thermalMode[]={7};
	};
	class VES_NVG_MVI;
	class A3_TVG_S_F_MVI: VES_NVG_MVI
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (MVI)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_MVI: A3_TVG_S_F_MVI
	{
		displayName="Mark 3 Interface (MVI)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_MVI: A3_TVG_S_F_MVI
	{
		displayName="Mark 4 Interface (MVI)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_MVI: A3_TVG_S_F_MVI
	{
		displayName="Mark 5 Interface (MVI)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_MVI: A3_TVG_S_F_MVI
	{
		displayName="Mark 6 Interface (MVI)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_MVI: A3_TVG_S_F_MVI
	{
		displayName="Mark 7 Interface (MVI)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_MVI: A3_TVG_S_F_MVI
	{
		displayName="Mark 8 Interface (MVI)";
		thermalMode[]={7};
	};
	class VES_NVG_UA;
	class A3_TVG_S_F_UA: VES_NVG_UA
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UA)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA: A3_TVG_S_F_UA
	{
		displayName="Mark 3 Interface (UA)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA: A3_TVG_S_F_UA
	{
		displayName="Mark 4 Interface (UA)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA: A3_TVG_S_F_UA
	{
		displayName="Mark 5 Interface (UA)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA: A3_TVG_S_F_UA
	{
		displayName="Mark 6 Interface (UA)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA: A3_TVG_S_F_UA
	{
		displayName="Mark 7 Interface (UA)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA: A3_TVG_S_F_UA
	{
		displayName="Mark 8 Interface (UA)";
		thermalMode[]={7};
	};
	class VES_NVG_UAB;
	class A3_TVG_S_F_UAB: VES_NVG_UAB
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UAB)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UAB: A3_TVG_S_F_UAB
	{
		displayName="Mark 3 Interface (UAB)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UAB: A3_TVG_S_F_UAB
	{
		displayName="Mark 4 Interface (UAB)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UAB: A3_TVG_S_F_UAB
	{
		displayName="Mark 5 Interface (UAB)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UAB: A3_TVG_S_F_UAB
	{
		displayName="Mark 6 Interface (UAB)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UAB: A3_TVG_S_F_UAB
	{
		displayName="Mark 7 Interface (UAB)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UAB: A3_TVG_S_F_UAB
	{
		displayName="Mark 8 Interface (UAB)";
		thermalMode[]={7};
	};
	class VES_NVG_HURS_CNM;
	class A3_TVG_S_F_HURS_CNM: VES_NVG_HURS_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (HURS/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_HURS_CNM: A3_TVG_S_F_HURS_CNM
	{
		displayName="Mark 3 Interface (HURS/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_HURS_CNM: A3_TVG_S_F_HURS_CNM
	{
		displayName="Mark 4 Interface (HURS/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_HURS_CNM: A3_TVG_S_F_HURS_CNM
	{
		displayName="Mark 5 Interface (HURS/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_HURS_CNM: A3_TVG_S_F_HURS_CNM
	{
		displayName="Mark 6 Interface (HURS/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_HURS_CNM: A3_TVG_S_F_HURS_CNM
	{
		displayName="Mark 7 Interface (HURS/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_HURS_CNM: A3_TVG_S_F_HURS_CNM
	{
		displayName="Mark 8 Interface (HURS/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_HURS_HUL;
	class A3_TVG_S_F_HURS_HUL: VES_NVG_HURS_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (HURS/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_HURS_HUL: A3_TVG_S_F_HURS_HUL
	{
		displayName="Mark 3 Interface (HURS/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_HURS_HUL: A3_TVG_S_F_HURS_HUL
	{
		displayName="Mark 4 Interface (HURS/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_HURS_HUL: A3_TVG_S_F_HURS_HUL
	{
		displayName="Mark 5 Interface (HURS/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_HURS_HUL: A3_TVG_S_F_HURS_HUL
	{
		displayName="Mark 6 Interface (HURS/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_HURS_HUL: A3_TVG_S_F_HURS_HUL
	{
		displayName="Mark 7 Interface (HURS/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_HURS_HUL: A3_TVG_S_F_HURS_HUL
	{
		displayName="Mark 8 Interface (HURS/HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_MVI_CNM;
	class A3_TVG_S_F_MVI_CNM: VES_NVG_MVI_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (MVI/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_MVI_CNM: A3_TVG_S_F_MVI_CNM
	{
		displayName="Mark 3 Interface (MVI/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_MVI_CNM: A3_TVG_S_F_MVI_CNM
	{
		displayName="Mark 4 Interface (MVI/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_MVI_CNM: A3_TVG_S_F_MVI_CNM
	{
		displayName="Mark 5 Interface (MVI/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_MVI_CNM: A3_TVG_S_F_MVI_CNM
	{
		displayName="Mark 6 Interface (MVI/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_MVI_CNM: A3_TVG_S_F_MVI_CNM
	{
		displayName="Mark 7 Interface (MVI/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_MVI_CNM: A3_TVG_S_F_MVI_CNM
	{
		displayName="Mark 8 Interface (MVI/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_MVI_HUL;
	class A3_TVG_S_F_MVI_HUL: VES_NVG_MVI_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (MVI/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_MVI_HUL: A3_TVG_S_F_MVI_HUL
	{
		displayName="Mark 3 Interface (MVI/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_MVI_HUL: A3_TVG_S_F_MVI_HUL
	{
		displayName="Mark 4 Interface (MVI/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_MVI_HUL: A3_TVG_S_F_MVI_HUL
	{
		displayName="Mark 5 Interface (MVI/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_MVI_HUL: A3_TVG_S_F_MVI_HUL
	{
		displayName="Mark 6 Interface (MVI/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_MVI_HUL: A3_TVG_S_F_MVI_HUL
	{
		displayName="Mark 7 Interface (MVI/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_MVI_HUL: A3_TVG_S_F_MVI_HUL
	{
		displayName="Mark 8 Interface (MVI/HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_MVI_UL_CNM;
	class A3_TVG_S_F_MVI_UL_CNM: VES_NVG_MVI_UL_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (MVI/UL/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_MVI_UL_CNM: A3_TVG_S_F_MVI_UL_CNM
	{
		displayName="Mark 3 Interface (MVI/UL/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_MVI_UL_CNM: A3_TVG_S_F_MVI_UL_CNM
	{
		displayName="Mark 4 Interface (MVI/UL/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_MVI_UL_CNM: A3_TVG_S_F_MVI_UL_CNM
	{
		displayName="Mark 5 Interface (MVI/UL/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_MVI_UL_CNM: A3_TVG_S_F_MVI_UL_CNM
	{
		displayName="Mark 6 Interface (MVI/UL/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_MVI_UL_CNM: A3_TVG_S_F_MVI_UL_CNM
	{
		displayName="Mark 7 Interface (MVI/UL/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_MVI_UL_CNM: A3_TVG_S_F_MVI_UL_CNM
	{
		displayName="Mark 8 Interface (MVI/UL/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_MVI_UL_HUL;
	class A3_TVG_S_F_MVI_UL_HUL: VES_NVG_MVI_UL_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (MVI/UL/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_MVI_UL_HUL: A3_TVG_S_F_MVI_UL_HUL
	{
		displayName="Mark 3 Interface (MVI/UL/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_MVI_UL_HUL: A3_TVG_S_F_MVI_UL_HUL
	{
		displayName="Mark 4 Interface (MVI/UL/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_MVI_UL_HUL: A3_TVG_S_F_MVI_UL_HUL
	{
		displayName="Mark 5 Interface (MVI/UL/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_MVI_UL_HUL: A3_TVG_S_F_MVI_UL_HUL
	{
		displayName="Mark 6 Interface (MVI/UL/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_MVI_UL_HUL: A3_TVG_S_F_MVI_UL_HUL
	{
		displayName="Mark 7 Interface (MVI/UL/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_MVI_UL_HUL: A3_TVG_S_F_MVI_UL_HUL
	{
		displayName="Mark 8 Interface (MVI/UL/HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_MVI_UL;
	class A3_TVG_S_F_MVI_UL: VES_NVG_MVI_UL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (MVI/UL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_MVI_UL: A3_TVG_S_F_MVI_UL
	{
		displayName="Mark 3 Interface (MVI/UL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_MVI_UL: A3_TVG_S_F_MVI_UL
	{
		displayName="Mark 4 Interface (MVI/UL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_MVI_UL: A3_TVG_S_F_MVI_UL
	{
		displayName="Mark 5 Interface (MVI/UL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_MVI_UL: A3_TVG_S_F_MVI_UL
	{
		displayName="Mark 6 Interface (MVI/UL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_MVI_UL: A3_TVG_S_F_MVI_UL
	{
		displayName="Mark 7 Interface (MVI/UL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_MVI_UL: A3_TVG_S_F_MVI_UL
	{
		displayName="Mark 8 Interface (MVI/UL)";
		thermalMode[]={7};
	};
	class VES_NVG_UA_CNM;
	class A3_TVG_S_F_UA_CNM: VES_NVG_UA_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UA/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA_CNM: A3_TVG_S_F_UA_CNM
	{
		displayName="Mark 3 Interface (UA/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA_CNM: A3_TVG_S_F_UA_CNM
	{
		displayName="Mark 4 Interface (UA/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA_CNM: A3_TVG_S_F_UA_CNM
	{
		displayName="Mark 5 Interface (UA/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA_CNM: A3_TVG_S_F_UA_CNM
	{
		displayName="Mark 6 Interface (UA/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA_CNM: A3_TVG_S_F_UA_CNM
	{
		displayName="Mark 7 Interface (UA/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA_CNM: A3_TVG_S_F_UA_CNM
	{
		displayName="Mark 8 Interface (UA/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_UA_HUL;
	class A3_TVG_S_F_UA_HUL: VES_NVG_UA_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UA/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA_HUL: A3_TVG_S_F_UA_HUL
	{
		displayName="Mark 3 Interface (UA/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA_HUL: A3_TVG_S_F_UA_HUL
	{
		displayName="Mark 4 Interface (UA/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA_HUL: A3_TVG_S_F_UA_HUL
	{
		displayName="Mark 5 Interface (UA/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA_HUL: A3_TVG_S_F_UA_HUL
	{
		displayName="Mark 6 Interface (UA/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA_HUL: A3_TVG_S_F_UA_HUL
	{
		displayName="Mark 7 Interface (UA/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA_HUL: A3_TVG_S_F_UA_HUL
	{
		displayName="Mark 8 Interface (UA/HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_UA_HURS;
	class A3_TVG_S_F_UA_HURS: VES_NVG_UA_HURS
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UA/HURS)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA_HURS: A3_TVG_S_F_UA_HURS
	{
		displayName="Mark 3 Interface (UA/HURS)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA_HURS: A3_TVG_S_F_UA_HURS
	{
		displayName="Mark 4 Interface (UA/HURS)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA_HURS: A3_TVG_S_F_UA_HURS
	{
		displayName="Mark 5 Interface (UA/HURS)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA_HURS: A3_TVG_S_F_UA_HURS
	{
		displayName="Mark 6 Interface (UA/HURS)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA_HURS: A3_TVG_S_F_UA_HURS
	{
		displayName="Mark 7 Interface (UA/HURS)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA_HURS: A3_TVG_S_F_UA_HURS
	{
		displayName="Mark 8 Interface (UA/HURS)";
		thermalMode[]={7};
	};
	class VES_NVG_UA_HURS_CNM;
	class A3_TVG_S_F_UA_HURS_CNM: VES_NVG_UA_HURS_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UA/HURS/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA_HURS_CNM: A3_TVG_S_F_UA_HURS_CNM
	{
		displayName="Mark 3 Interface (UA/HURS/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA_HURS_CNM: A3_TVG_S_F_UA_HURS_CNM
	{
		displayName="Mark 4 Interface (UA/HURS/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA_HURS_CNM: A3_TVG_S_F_UA_HURS_CNM
	{
		displayName="Mark 5 Interface (UA/HURS/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA_HURS_CNM: A3_TVG_S_F_UA_HURS_CNM
	{
		displayName="Mark 6 Interface (UA/HURS/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA_HURS_CNM: A3_TVG_S_F_UA_HURS_CNM
	{
		displayName="Mark 7 Interface (UA/HURS/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA_HURS_CNM: A3_TVG_S_F_UA_HURS_CNM
	{
		displayName="Mark 8 Interface (UA/HURS/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_UA_HURS_HUL;
	class A3_TVG_S_F_UA_HURS_HUL: VES_NVG_UA_HURS_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UA/HURS/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA_HURS_HUL: A3_TVG_S_F_UA_HURS_HUL
	{
		displayName="Mark 3 Interface (UA/HURS/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA_HURS_HUL: A3_TVG_S_F_UA_HURS_HUL
	{
		displayName="Mark 4 Interface (UA/HURS/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA_HURS_HUL: A3_TVG_S_F_UA_HURS_HUL
	{
		displayName="Mark 5 Interface (UA/HURS/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA_HURS_HUL: A3_TVG_S_F_UA_HURS_HUL
	{
		displayName="Mark 6 Interface (UA/HURS/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA_HURS_HUL: A3_TVG_S_F_UA_HURS_HUL
	{
		displayName="Mark 7 Interface (UA/HURS/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA_HURS_HUL: A3_TVG_S_F_UA_HURS_HUL
	{
		displayName="Mark 8 Interface (UA/HURS/HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_UA_UL;
	class A3_TVG_S_F_UA_UL: VES_NVG_UA_UL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UA/UL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA_UL: A3_TVG_S_F_UA_UL
	{
		displayName="Mark 3 Interface (UA/UL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA_UL: A3_TVG_S_F_UA_UL
	{
		displayName="Mark 4 Interface (UA/UL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA_UL: A3_TVG_S_F_UA_UL
	{
		displayName="Mark 5 Interface (UA/UL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA_UL: A3_TVG_S_F_UA_UL
	{
		displayName="Mark 6 Interface (UA/UL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA_UL: A3_TVG_S_F_UA_UL
	{
		displayName="Mark 7 Interface (UA/UL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA_UL: A3_TVG_S_F_UA_UL
	{
		displayName="Mark 8 Interface (UA/UL)";
		thermalMode[]={7};
	};
	class VES_NVG_UA_UL_CNM;
	class A3_TVG_S_F_UA_UL_CNM: VES_NVG_UA_UL_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UA/UL/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA_UL_CNM: A3_TVG_S_F_UA_UL_CNM
	{
		displayName="Mark 3 Interface (UA/UL/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA_UL_CNM: A3_TVG_S_F_UA_UL_CNM
	{
		displayName="Mark 4 Interface (UA/UL/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA_UL_CNM: A3_TVG_S_F_UA_UL_CNM
	{
		displayName="Mark 5 Interface (UA/UL/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA_UL_CNM: A3_TVG_S_F_UA_UL_CNM
	{
		displayName="Mark 6 Interface (UA/UL/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA_UL_CNM: A3_TVG_S_F_UA_UL_CNM
	{
		displayName="Mark 7 Interface (UA/UL/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA_UL_CNM: A3_TVG_S_F_UA_UL_CNM
	{
		displayName="Mark 8 Interface (UA/UL/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_UAB_CNM;
	class A3_TVG_S_F_UAB_CNM: VES_NVG_UAB_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UAB/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UAB_CNM: A3_TVG_S_F_UAB_CNM
	{
		displayName="Mark 3 Interface (UAB/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UAB_CNM: A3_TVG_S_F_UAB_CNM
	{
		displayName="Mark 4 Interface (UAB/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UAB_CNM: A3_TVG_S_F_UAB_CNM
	{
		displayName="Mark 5 Interface (UAB/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UAB_CNM: A3_TVG_S_F_UAB_CNM
	{
		displayName="Mark 6 Interface (UAB/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UAB_CNM: A3_TVG_S_F_UAB_CNM
	{
		displayName="Mark 7 Interface (UAB/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UAB_CNM: A3_TVG_S_F_UAB_CNM
	{
		displayName="Mark 8 Interface (UAB/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_UAB_HUL;
	class A3_TVG_S_F_UAB_HUL: VES_NVG_UAB_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UAB/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UAB_HUL: A3_TVG_S_F_UAB_HUL
	{
		displayName="Mark 3 Interface (UAB/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UAB_HUL: A3_TVG_S_F_UAB_HUL
	{
		displayName="Mark 4 Interface (UAB/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UAB_HUL: A3_TVG_S_F_UAB_HUL
	{
		displayName="Mark 5 Interface (UAB/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UAB_HUL: A3_TVG_S_F_UAB_HUL
	{
		displayName="Mark 6 Interface (UAB/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UAB_HUL: A3_TVG_S_F_UAB_HUL
	{
		displayName="Mark 7 Interface (UAB/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UAB_HUL: A3_TVG_S_F_UAB_HUL
	{
		displayName="Mark 8 Interface (UAB/HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_UAB_UL;
	class A3_TVG_S_F_UAB_UL: VES_NVG_UAB_UL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UAB/UL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UAB_UL: A3_TVG_S_F_UAB_UL
	{
		displayName="Mark 3 Interface (UAB/UL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UAB_UL: A3_TVG_S_F_UAB_UL
	{
		displayName="Mark 4 Interface (UAB/UL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UAB_UL: A3_TVG_S_F_UAB_UL
	{
		displayName="Mark 5 Interface (UAB/UL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UAB_UL: A3_TVG_S_F_UAB_UL
	{
		displayName="Mark 6 Interface (UAB/UL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UAB_UL: A3_TVG_S_F_UAB_UL
	{
		displayName="Mark 7 Interface (UAB/UL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UAB_UL: A3_TVG_S_F_UAB_UL
	{
		displayName="Mark 8 Interface (UAB/UL)";
		thermalMode[]={7};
	};
	class VES_NVG_UAB_UL_CNM;
	class A3_TVG_S_F_UAB_UL_CNM: VES_NVG_UAB_UL_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UAB/UL/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UAB_UL_CNM: A3_TVG_S_F_UAB_UL_CNM
	{
		displayName="Mark 3 Interface (UAB/UL/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UAB_UL_CNM: A3_TVG_S_F_UAB_UL_CNM
	{
		displayName="Mark 4 Interface (UAB/UL/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UAB_UL_CNM: A3_TVG_S_F_UAB_UL_CNM
	{
		displayName="Mark 5 Interface (UAB/UL/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UAB_UL_CNM: A3_TVG_S_F_UAB_UL_CNM
	{
		displayName="Mark 6 Interface (UAB/UL/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UAB_UL_CNM: A3_TVG_S_F_UAB_UL_CNM
	{
		displayName="Mark 7 Interface (UAB/UL/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UAB_UL_CNM: A3_TVG_S_F_UAB_UL_CNM
	{
		displayName="Mark 8 Interface (UAB/UL/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_UAB_UL_HUL;
	class A3_TVG_S_F_UAB_UL_HUL: VES_NVG_UAB_UL_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UAB/UL/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UAB_UL_HUL: A3_TVG_S_F_UAB_UL_HUL
	{
		displayName="Mark 3 Interface (UAB/UL/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UAB_UL_HUL: A3_TVG_S_F_UAB_UL_HUL
	{
		displayName="Mark 4 Interface (UAB/UL/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UAB_UL_HUL: A3_TVG_S_F_UAB_UL_HUL
	{
		displayName="Mark 5 Interface (UAB/UL/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UAB_UL_HUL: A3_TVG_S_F_UAB_UL_HUL
	{
		displayName="Mark 6 Interface (UAB/UL/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UAB_UL_HUL: A3_TVG_S_F_UAB_UL_HUL
	{
		displayName="Mark 7 Interface (UAB/UL/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UAB_UL_HUL: A3_TVG_S_F_UAB_UL_HUL
	{
		displayName="Mark 8 Interface (UAB/UL/HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_UL_CNM;
	class A3_TVG_S_F_UL_CNM: VES_NVG_UL_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UL/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UL_CNM: A3_TVG_S_F_UL_CNM
	{
		displayName="Mark 3 Interface (UL/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UL_CNM: A3_TVG_S_F_UL_CNM
	{
		displayName="Mark 4 Interface (UL/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UL_CNM: A3_TVG_S_F_UL_CNM
	{
		displayName="Mark 5 Interface (UL/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UL_CNM: A3_TVG_S_F_UL_CNM
	{
		displayName="Mark 6 Interface (UL/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UL_CNM: A3_TVG_S_F_UL_CNM
	{
		displayName="Mark 7 Interface (UL/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UL_CNM: A3_TVG_S_F_UL_CNM
	{
		displayName="Mark 8 Interface (UL/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_UL_HUL;
	class A3_TVG_S_F_UL_HUL: VES_NVG_UL_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UL/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UL_HUL: A3_TVG_S_F_UL_HUL
	{
		displayName="Mark 3 Interface (UL/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UL_HUL: A3_TVG_S_F_UL_HUL
	{
		displayName="Mark 4 Interface (UL/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UL_HUL: A3_TVG_S_F_UL_HUL
	{
		displayName="Mark 5 Interface (UL/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UL_HUL: A3_TVG_S_F_UL_HUL
	{
		displayName="Mark 6 Interface (UL/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UL_HUL: A3_TVG_S_F_UL_HUL
	{
		displayName="Mark 7 Interface (UL/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UL_HUL: A3_TVG_S_F_UL_HUL
	{
		displayName="Mark 8 Interface (UL/HUL)";
		thermalMode[]={7};
	};
	class InventoryOpticsItem_Base_F;
	class OPTRE_M6C_Scope;
	class OPTRE_M6D_Smartlink: OPTRE_M6C_Scope
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="M6D KFA-2 SmartLink Scope";
		model="\V_SO_Weapons\data\M6\M6D_Smartlink";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			opticType=1;
			optics=1;
			modelOptics="\V_SO_Weapons\data\M6\M6D_Smartlink";
			inertia=0.1;
			class OpticsModes
			{
				class OPTRE_M6C_BUIS
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="opticView2";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
				class OPTRE_M6C_BUISZoom: OPTRE_M6C_BUIS
				{
					opticsID=2;
					useModelOptics=1;
					opticsZoomMin=0.15575001;
					opticsZoomMax=0.0623;
					opticsZoomInit=0.0623;
					discretefov[]={0.0623,0.046725001,0.03115,0.015575};
					discreteinitIndex=0;
					discreteDistance[]={25,50,75,100,150,200,250,300,350,400};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=2000;
					memoryPointCamera="opticView2";
					modelOptics[]=
					{
						"\OPTRE_Weapons\Pistol\M6C_Optic_2x.p3d"
					};
					visionMode[]={};
				};
			};
		};
	};
	class optic_Aco;
	class M48B_Optic: optic_Aco
	{
		dlc="SO";
		author="darknightx33x";
		scope=2;
		scopeArsenal=2;
		displayName="M48B scope";
		model="\V_SO_Weapons\data\test_scope\test_scope.p3d";
		picture="\V_SO_Weapons\data\test_scope\data\m48b_scope_ui.paa";
		inertia=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			opticType = 1;
			optics = true;
			modelOptics="\V_SO_Weapons\data\test_scope\test_scope.p3d";
			class OpticsModes
			{
				class Test_scope_Scope
				{
					opticsID = 1;
					useModelOptics = false;
					opticsPPEffects[]={"OpticsCHAbera5","OpticsBlur5"};
					opticsFlare = true;
					opticsDisablePeripherialVision = true;
					opticsZoomMin = .125;
					opticsZoomMax=.125;
					opticsZoomInit=.125;
					memoryPointCamera = "opticView";
					visionMode[] = {};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
	};
	class M48B_Optic_Grid: optic_Aco
	{
		dlc="SO";
		author="darknightx33x";
		scope=2;
		scopeArsenal=2;
		displayName="M48B grid scope";
		model="\V_SO_Weapons\data\test_scope\test_scope_grid.p3d";
		picture="\V_SO_Weapons\data\test_scope\data\m48b_scope_ui.paa";
		inertia=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			opticType = 1;
			optics = true;
			modelOptics="\V_SO_Weapons\data\test_scope\test_scope_grid.p3d";
			class OpticsModes
			{
				class Test_scope_Scope
				{
					opticsID = 1;
					useModelOptics = false;
					opticsPPEffects[]={"OpticsCHAbera5","OpticsBlur5"};
					opticsFlare = true;
					opticsDisablePeripherialVision = true;
					opticsZoomMin = .125;
					opticsZoomMax=.125;
					opticsZoomInit=.125;
					memoryPointCamera = "opticView";
					visionMode[] = {};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
	};
};
class CfgVehicles
{
	class MineGeneric;
	class MineBase: MineGeneric
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=1;
		_generalMacro="MineBase";
		icon="iconExplosiveGP";
	};
	class OPTRE_Placed_C12: MineBase
	{
		DLC="OPTRE";
		author="Fireteam Zulu";
		mapSize=0.43000001;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\SatchelCharge_F.jpg";
		scope=2;
		scopeCurator=2;
		icon="iconExplosiveGP";
		ammo="C12_Remote_Ammo";
		model="\OPTRE_Weapons\charges\c12.p3d";
		displayName="C12 Explosive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Explosives";
	};
	class OPTRE_Placed_Mine: MineBase
	{
		DLC="OPTRE";
		author="Fireteam Zulu";
		mapSize=0.43000001;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\SatchelCharge_F.jpg";
		scope=2;
		scopeCurator=2;
		icon="iconExplosiveGP";
		ammo="UNSC_Mine_Ammo";
		model="\OPTRE_Weapons\charges\UNSCMine.p3d";
		displayName="UNSC Land Mine";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Explosives";
	};
	class OPTRE_Placed_C7: MineBase
	{
		DLC="OPTRE";
		author="Fireteam Zulu";
		mapSize=0.43000001;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\SatchelCharge_F.jpg";
		scope=2;
		scopeCurator=2;
		icon="iconExplosiveGP";
		ammo="C7_Remote_Ammo";
		model="\OPTRE_Weapons\charges\c7.p3d";
		displayName="C7 Explosive Foam";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Explosives";
	};
	class OPTRE_Placed_M168: MineBase
	{
		DLC="OPTRE";
		author="Fireteam Zulu";
		mapSize=0.43000001;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\SatchelCharge_F.jpg";
		scope=2;
		scopeCurator=2;
		icon="iconExplosiveGP";
		ammo="M168_Remote_Ammo";
		model="\OPTRE_Weapons\charges\m168.p3d";
		displayName="M168 Demolition Charge";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Explosives";
	};
	class OPTRE_Placed_M41_IED: OPTRE_Placed_M168
	{
		DLC="OPTRE";
		author="Fireteam Zulu";
		ammo="M41_IED_Remote_Ammo";
		model="\OPTRE_Weapons\charges\m41.p3d";
		displayName="M41 IED";
	};
	class OPTRE_Placed_M41_IED_B: OPTRE_Placed_M41_IED
	{
		DLC="OPTRE";
		author="Fireteam Zulu";
		ammo="M41_IED_B_Remote_Ammo";
		model="\OPTRE_Weapons\charges\m41_b.p3d";
		displayName="M41 IED (Buried)";
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class V_SO_Core
		{
			list[]=
			{
				"V_SO_Core"
			};
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class Humbler
	{
		init="call compile preprocessFileLineNumbers '\V_SO_Core\scripts\XEH_preInit.sqf'; ";
	};
};
class Extended_PreStart_EventHandlers
{
	class Humbler
	{
		init="call compile preprocessFileLineNumbers '\V_SO_Core\scripts\XEH_preStart.sqf'; ";
	};
};
class Extended_Respawn_EventHandlers
{
	class CAManBase
	{
		class Humbler
		{
			respawn="_this call CSW_fnc_TaserOnRespawn";
		};
	};
};
class Extended_Hit_EventHandlers
{
	class CAManBase
	{
		Humbler="_this call CSW_fnc_TaserOnHit;";
	};
};
