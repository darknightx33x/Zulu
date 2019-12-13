class launch_RPG32_F;
class OPTRE_M48_PAW: Launch_RPG32_F
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M48B 'Cricket' PAW";
	baseWeapon 					= "OPTRE_M48_PAW";
	model                       = "\V_SO_Weapons\data\M48\M48B_Cricket.p3d";
	picture 					= "\A3\Weapons_F_Enoch\Launchers\RPG32\Data\UI\icon_launch_RPG32_green_F_ca.paa";
	
	ODST_1						= "OPTRE_ODST_HUD_AmmoCount_RL";
	Glasses						= "OPTRE_GLASS_HUD_AmmoCount_RL";
	Eye							= "OPTRE_EYE_HUD_AmmoCount_RL";
	HUD_BulletInARows			= 1;
	HUD_TotalPosibleBullet		= 1;
	
	magazines[]=
	{
		"OPTRE_1Rnd_50x137_HEAT",
		"OPTRE_1Rnd_50x137_HEAP"
	};
	magazineWell[] 				= {};
	reloadAction				= "ReloadRPG";
	reloadmagazinesound[]=
	{
		"A3\sounds_f\weapons\rockets\titan_reload_final",
		0.56234097,
		1,
		50
	};
	handAnim[]=
	{
		"OFP2_ManSkeleton",
		"\OPTRE_Weapons\Rockets\Data\Anim\m41_hand_anim.rtm"
	};
	
	class WeaponSlotsInfo
	{
		mass 					= 80;
		class CowsSlot: CowsSlot
		{
			compatibleitems[]=
			{
				"optic_arco_ak_blk_f",
				"optic_dms",
				"optic_aco_grn",
				"optic_aco",
				"optic_arco_blk_f",
				"optic_holosight_blk_f",
				"optic_mrco",
				"optic_khs_blk",
				"optic_hamr",
				"optic_sos",
				"optic_nightstalker",
				"optic_erco_blk_f",
				"optic_ams",
				"optic_yorris",
				"ace_optic_sos_2d",
				"ace_optic_sos_pip",
				"ace_optic_mrco_2d",
				"ace_optic_hamr_2d",
				"ace_optic_hamr_pip",
				"optic_aco_smg",
				"optic_aco_grn_smg",
				"optic_holosight_smg_blk_f",
				"optic_mrd_black",

				"optre_srs99_scope",
				"optre_srs99c_scope",
				"optre_m393_eotech",
				"optre_m7_sight",
				"optre_m393_acog",
				"optre_m392_scope",
				"optre_m6c_scope"
			};
		};
		class PointerSlot: PointerSlot
		{
			compatibleitems[]=
			{
				"acc_pointer_ir",
				"ace_acc_pointer_green",
				"acc_flashlight"
			};
		};
	};
};