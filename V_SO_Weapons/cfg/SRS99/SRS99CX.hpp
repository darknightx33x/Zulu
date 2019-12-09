class OPTRE_SRS99C;
class SO_SRS_Base: OPTRE_SRS99C
{
	class WeaponSlotsInfo;
};

class OPTRE_SRS99CX: OPTRE_SRS99C
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "SRS99CX-S2 AM Sniper Rifle";
	baseWeapon 					= "OPTRE_SRS99CX";
	model                       = "\OPTRE_Weapons\Sniper\SRS99C.p3d";
	
	magazines[]=
	{
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_Mag_APFSDST",
		"OPTRE_4Rnd_145x114_HEDP_Mag",
		"OPTRE_4Rnd_145x114_Mag_HEDPT",
		"OPTRE_4Rnd_145x114_HVAP_Mag",
		"OPTRE_4Rnd_145x114_Mag_HVAPT",
		"OPTRE_4Rnd_145x114_Mag_SS"
	};
	
	class WeaponSlotsInfo
 	{
		mass = 50;
 		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]=
			{
				"optre_srs99d_suppressor"
			};
		};
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
				"optic_lrps",
				"optic_nightstalker",
				"optic_erco_blk_f",
				"optic_ams",
				"ace_optic_lrps_2d",
				"ace_optic_lrps_pip",
				"ace_optic_sos_2d",
				"ace_optic_sos_pip",
				"ace_optic_mrco_2d",
				"ace_optic_hamr_2d",
				"ace_optic_hamr_pip",
				"optic_ico_01_black_f",
				"optic_aco_smg",
				"optic_aco_grn_smg",
				"optic_holosight_smg_blk_f",
				"optic_mrd_black",

				"optre_srs99_scope",
				"optre_srs99c_scope",
				"optre_ma5_buis",
				"optre_m393_eotech",
				"optre_m73_smartlink",
				"optre_m7_sight",
				"optre_m393_acog",
				"optre_hmg38_carryhandle",
				"optre_m393_scope",
				"optre_m392_scope",
				"optre_br55hb_scope"
			};
		};
		class PointerSlot: PointerSlot
		{
			compatibleitems[]=
			{
				"acc_pointer_ir",
				"ace_acc_pointer_green",
				"acc_flashlight",

				"optre_m45_flashlight",
				"optre_m45_flashlight_red"
			};
		};
	};
};