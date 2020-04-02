	class SatchelCharge_Remote_Ammo;
	class ATMine_Range_Ammo;
	class C12_Remote_Ammo: SatchelCharge_Remote_Ammo
	{
		hit=6500;
		indirectHit=4500;
		indirectHitRange=3;
		defaultMagazine="C12_Remote_Mag";
		model="\OPTRE_Weapons\charges\c12.p3d";
		picture="\OPTRE_weapons\charges\icons\c12.paa";
		explosive=1;
		explosionType="bomb";
		mineModelDisabled="\OPTRE_Weapons\charges\c12G.p3d";
		ExplosionEffects="MineNondirectionalExplosion";
		CraterEffects="MineNondirectionalCrater";
		SoundSetExplosion[]=
		{
			"BigIED_Exp_SoundSet",
			"BigIED_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		soundTrigger[]=
		{
			"A3\Sounds_F\weapons\mines\electron_trigger_1",
			0.56234133,
			1,
			50
		};
		soundActivation[]=
		{
			"A3\Sounds_F\weapons\mines\electron_activate_mine_1",
			0.56234133,
			1,
			50
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F\weapons\mines\deactivate_mine_3a",
			0.56234133,
			1,
			50
		};
		whistleDist=10;
		mineInconspicuousness=3;
		mineTrigger="RemoteTrigger";
		triggerWhenDestroyed=1;
	};
	class C7_Remote_Ammo: SatchelCharge_Remote_Ammo
	{
		hit=2500;
		indirectHit=2400;
		indirectHitRange=0.7;
		defaultMagazine="C7_Remote_Mag";
		model="\OPTRE_Weapons\charges\C7.p3d";
		picture="\OPTRE_weapons\charges\icons\c12.paa";
		explosive=1;
		explosionType="bomb";
		mineModelDisabled="\OPTRE_Weapons\charges\C7Can.p3d";
		ExplosionEffects="DirectionalMineExplosion";
		CraterEffects="";
		craterShape="\A3\weapons_f\empty.p3d";
		SoundSetExplosion[]=
		{
			"BigIED_Exp_SoundSet",
			"BigIED_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		soundTrigger[]=
		{
			"A3\Sounds_F\weapons\mines\electron_trigger_1",
			0.56234133,
			1,
			50
		};
		soundActivation[]=
		{
			"A3\Sounds_F\weapons\mines\electron_activate_mine_1",
			0.56234133,
			1,
			50
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F\weapons\mines\deactivate_mine_3a",
			0.56234133,
			1,
			50
		};
		whistleDist=10;
		mineInconspicuousness=3;
		mineTrigger="RemoteTrigger";
		triggerWhenDestroyed=1;
	};
	class M168_Remote_Ammo: SatchelCharge_Remote_Ammo
	{
		hit=9500;
		indirectHit=6500;
		indirectHitRange=10;
		defaultMagazine="M168_Remote_Mag";
		model="\OPTRE_Weapons\charges\m168.p3d";
		picture="\OPTRE_weapons\charges\icons\c12.paa";
		explosive=1;
		explosionType="bomb";
		mineModelDisabled="\OPTRE_Weapons\charges\m168g.p3d";
		ExplosionEffects="MineNondirectionalExplosion";
		CraterEffects="MineNondirectionalCrater";
		SoundSetExplosion[]=
		{
			"BigIED_Exp_SoundSet",
			"BigIED_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		soundTrigger[]=
		{
			"A3\Sounds_F\weapons\mines\electron_trigger_1",
			0.56234133,
			1,
			50
		};
		soundActivation[]=
		{
			"A3\Sounds_F\weapons\mines\electron_activate_mine_1",
			0.56234133,
			1,
			50
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F\weapons\mines\deactivate_mine_3a",
			0.56234133,
			1,
			50
		};
		whistleDist=10;
		mineInconspicuousness=3;
		mineTrigger="RemoteTrigger";
		triggerWhenDestroyed=1;
	};
	class UNSC_Mine_Ammo: ATMine_Range_Ammo
	{
		hit=2000;
		indirectHit=2000;
		indirectHitRange=1.5;
		model="\OPTRE_Weapons\charges\UNSCmine.p3d";
		mineModelDisabled="\OPTRE_Weapons\charges\UNSCmine.p3d";
		defaultMagazine="UNSCMine_Range_Mag";
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\mines\AT_landmine_explosion_01",
			3.1622801,
			1,
			2000
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\mines\AT_landmine_explosion_02",
			3.1622801,
			1,
			2000
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.5,
			"soundHit2",
			0.5
		};
		explosionEffects="ATMineExplosion";
		CraterEffects="ATMineCrater";
		whistleDist=8;
		mineInconspicuousness=40;
		mineTrigger="RangeTrigger";
	};
	class M41_IED_Remote_Ammo: SatchelCharge_Remote_Ammo
	{
		hit=400;
		indirectHit=200;
		indirectHitRange=5;
		defaultMagazine="M41_IED_Remote_Mag";
		model="\OPTRE_Weapons\charges\m41.p3d";
		picture="\OPTRE_weapons\rockets\icons\rocket.paa";
		explosive=1;
		explosionType="bomb";
		mineModelDisabled="\OPTRE_Weapons\charges\m41g.p3d";
		ExplosionEffects="MineNondirectionalExplosionSmall";
		CraterEffects="MineNondirectionalCraterSmall";
		soundHit[]=
		{
			"a3\sounds_f\arsenal\explosives\mines\explosion_claymore",
			3.1622777,
			1,
			1500
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F\weapons\Mines\deactivate_mine_3a",
			1.4125376,
			1,
			20
		};
		soundTrigger[]=
		{
			"A3\Sounds_F\weapons\mines\electron_trigger_1",
			0.56234133,
			1,
			50
		};
		soundActivation[]=
		{
			"A3\Sounds_F\weapons\mines\electron_activate_mine_1",
			0.56234133,
			1,
			50
		};
		whistleDist=10;
		mineInconspicuousness=50;
		mineTrigger="RemoteTrigger";
		triggerWhenDestroyed=1;
	};
	class M41_IED_B_Remote_Ammo: M41_IED_Remote_Ammo
	{
		defaultMagazine="M41_IED_B_Remote_Mag";
		model="\OPTRE_Weapons\charges\m41_b.p3d";
		mineModelDisabled="\OPTRE_Weapons\charges\m41g.p3d";
	};