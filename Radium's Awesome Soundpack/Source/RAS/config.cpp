class CfgPatches
{
	class RAS
	{
		units[]=
		{
			"RAS_facilityalarm.ogg",
			"RAS_mediumalarm.ogg",
			"RAS_criticalalarm.ogg",
			"RAS_breachalarm.ogg",
			"RAS_musicChannelCalm1.ogg",
			"RAS_musicChannelCalm2.ogg",
			"RAS_thedriller1.ogg",
			"RAS_thedriller2.ogg",
			"RAS_badelectricity.ogg",
			"RAS_radiosilence.ogg",
			"RAS_radiofirefight.ogg",
			"RAS_radiofirefight2.ogg",
			"RAS_radiofirefight3.ogg",
			"RAS_radiofirefightzom.ogg",
			"RAS_radiozombietakeover.ogg",
			"RAS_smallfire.ogg",
			"RAS_mediumfire.ogg",
			"RAS_largefire.ogg",
			"RAS_fan.ogg",
			"RAS_basealarm.ogg",
			"RAS_ancients.ogg",
			"RAS_housefirealarm.ogg",
			"RAS_gasalarm.ogg",
			"RAS_raidsiren.ogg",
			"RAS_echoalarm.ogg",
			"RAS_basealarm2.ogg",
			"RAS_supplycratebeep.ogg",
			"RAS_perimeteralarm.ogg",
			"RAS_ciwsalarm.ogg",
			"RAS_signal1.ogg",
			"RAS_signal2.ogg",
			"RAS_signal3.ogg",
			"RAS_brokenTerminal.ogg",
			"RAS_brokenTerminal2.ogg",
			"RAS_brokenTerminal3.ogg",
			"RAS_hiveHeart.ogg",
			"RAS_rockMusicLoopEcho.ogg",
			"RAS_clubMusicLoopEcho.ogg",
			"RAS_clubMusicLoop.ogg",
			"RAS_automatedMiningExtractorSmall.ogg",
			"RAS_automatedMiningExtractorMedium.ogg",
			"RAS_automatedMiningExtractorLarge.ogg",
			"RAS_atmosphericProcessor.ogg",
			"RAS_modernPhoneVibration.ogg",
			"RAS_nokiaRingtone.ogg",
			"RAS_countdownTimer.ogg",
			"RAS_musicChannelRock1.ogg",
			"RAS_musicChannelRock2.ogg",
			"RAS_heatAlarm.ogg",
			"RAS_stadiumMusic80Mix.ogg",
			"RAS_stadiumMusicElectronicMix.ogg",
			"RAS_lowGeiger.ogg",
			"RAS_medGeiger.ogg",
			"RAS_highGeiger.ogg",
			"RAS_extremeGeiger.ogg",
			"RAS_monsterSounds.ogg",
			"RAS_monsterSoundsCave.ogg",
			"RAS_monsterRoar.ogg",
			"RAS_monsterRoarCave",
			"RAS_monolithPreacher",
			"RAS_monolithPreacherEcho"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Functions_F"
		};
	};
};
class CfgSFX
{
	sounds[]={};
	class RAS_facilityalarm
	{
		name="[RAS] Facility Alarm";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\alarm\RAS_facilityalarm.ogg", 
			20, 
			1, 
			500,
			1,
			1, 
			1,
			0 
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_mediumalarm
	{
		name="[RAS] Medium Alarm";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\alarm\RAS_mediumalarm.ogg",
			20,
			1, 
			500, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_criticalalarm
	{
		name="[RAS] Critical Alarm";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\alarm\RAS_criticalalarm.ogg",
			20,
			1, 
			800, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_breachalarm
	{
		name="[RAS] Breach Alarm";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\alarm\RAS_breachalarm.ogg",
			20,
			1, 
			100, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_musicChannelCalm1
	{
		name="[RAS] Music Channel (Calm 1)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\radio\RAS_musicChannelCalm1.ogg",
			15,
			1, 
			20, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_musicChannelCalm2
	{
		name="[RAS] Music Channel (Calm 2)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\radio\RAS_musicChannelCalm2.ogg",
			15,
			1, 
			20, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_thedriller1
	{
		name="[RAS] The Driller (1)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\machinery\RAS_thedriller1.ogg",
			15,
			1, 
			400, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_thedriller2
	{
		name="[RAS] The Driller (2)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\machinery\RAS_thedriller2.ogg",
			15,
			1, 
			400, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_badelectricity
	{
		name="[RAS] Electrical Sparks";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\electronics\RAS_badelectricity.ogg",
			15,
			1, 
			20, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_radiosilence
	{
		name="[RAS] Radio Silence";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\radio\RAS_radiosilence.ogg",
			15,
			1, 
			10, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_radiofirefight
	{
		name="[RAS] Radio Firefight [NATO]";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\radio\RAS_radiofirefight.ogg",
			15,
			1, 
			10, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_radiofirefight2
	{
		name="[RAS] Radio Firefight [CSAT]";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\radio\RAS_radiofirefight2.ogg",
			15,
			1, 
			10, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_radiofirefight3
	{
		name="[RAS] Radio Firefight [AAF]";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\radio\RAS_radiofirefight3.ogg",
			15,
			1, 
			10, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_radiofirefightzom
	{
		name="[RAS] Radio Firefight [Zombies]";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\radio\RAS_radiofirefightzom.ogg",
			15,
			1, 
			10, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_radiozombietakeover
	{
		name="[RAS] Radio Silence [Zombie Takeover]";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\radio\RAS_radiozombietakeover.ogg",
			15,
			1, 
			10, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_smallfire
	{
		name="[RAS] Small Fire";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\environment\RAS_smallfire.ogg",
			15,
			1, 
			20, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_mediumfire
	{
		name="[RAS] Medium Fire";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\environment\RAS_mediumfire.ogg",
			20,
			1, 
			35, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_largefire
	{
		name="[RAS] Large Fire";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\environment\RAS_largefire.ogg",
			25,
			1, 
			50, 
			1,
	        1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_fan
	{
		name="[RAS] Industrial Fan Loop";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\electronics\RAS_fan.ogg",
			15,
			1, 
			30, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_basealarm
	{
		name="[RAS] Base Alarm";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\alarm\RAS_basealarm.ogg",
			20,
			1, 
			800,
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_ancients
	{
		name="[RAS] Ancient Whispers";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\environment\RAS_ancients.ogg",
			15,
			1, 
			15, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_housefirealarm
	{
		name="[RAS] House Fire Alarm";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\alarm\RAS_housefirealarm.ogg",
			15,
			1, 
			25, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_gasalarm
	{
		name="[RAS] Gas Alarm";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\alarm\RAS_gasalarm.ogg",
			15,
			1, 
			600, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_raidsiren
	{
		name="[RAS] Raid Siren";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\alarm\RAS_raidsiren.ogg",
			15,
			1, 
			1000, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_echoalarm
	{
		name="[RAS] Echoing Alarm";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\alarm\RAS_echoalarm.ogg",
			20,
			1, 
			400, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_basealarm2
	{
		name="[RAS] Base Alarm 2";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\alarm\RAS_basealarm2.ogg",
			20,
			1, 
			800, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_supplycratebeep
	{
		name="[RAS] Supply Crate Beep";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\alarm\RAS_supplycratebeep.ogg",
			15,
			1, 
			15, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_perimeteralarm
	{
		name="[RAS] Perimeter Alarm";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\alarm\RAS_perimeteralarm.ogg",
			20,
			1, 
			400, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_ciwsalarm
	{
		name="[RAS] CIWS Incoming Alarm";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\alarm\RAS_ciwsalarm.ogg",
			20,
			1, 
			1000, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_signal1
	{
		name="[RAS] Alien Signal 1";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\environment\RAS_signal1.ogg",
			15,
			1, 
			20, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_signal2
	{
		name="[RAS] Alien Signal 2";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\environment\RAS_signal2.ogg",
			15,
			1, 
			20, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_signal3
	{
		name="[RAS] Alien Signal 3";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\environment\RAS_signal3.ogg",
			15,
			1, 
			20, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_brokenTerminal
	{
		name="[RAS] Broken Terminal";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\electronics\RAS_brokenTerminal.ogg",
			15,
			1, 
			20, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_brokenTerminal2
	{
		name="[RAS] Broken Terminal 2";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\electronics\RAS_brokenTerminal2.ogg",
			15,
			1, 
			20, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_brokenTerminal3
	{
		name="[RAS] Broken Terminal 3";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\electronics\RAS_brokenTerminal3.ogg",
			15,
			1, 
			20, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_hiveHeart
	{
		name="[RAS] Alien Hive Heart";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\environment\RAS_hiveHeart.ogg",
			25,
			1, 
			50, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_monsterSounds
	{
		name="[RAS] Monster Sounds";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\environment\RAS_monsterSounds.ogg",
			25,
			1, 
			100, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_monsterSoundsCave
	{
		name="[RAS] Monster Sounds (Cave)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\environment\RAS_monsterSoundsCave.ogg",
			25,
			1, 
			200, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_monsterRoarCave
	{
		name="[RAS] Monster Roars (Cave)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\environment\RAS_monsterRoarCave.ogg",
			25,
			1, 
			100, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_monsterRoar
	{
		name="[RAS] Monster Roars";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\environment\RAS_monsterRoar.ogg",
			25,
			1, 
			200, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_monolithPreacher
	{
		name="[RAS] Monolith Preacher";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\environment\RAS_monolithPreacher.ogg",
			25,
			1, 
			100, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_monolithPreacherEcho
	{
		name="[RAS] Monolith Preacher (Echo)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\environment\RAS_monolithPreacherEcho.ogg",
			25,
			1, 
			200, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_rockMusicLoopEcho
	{
		name="[RAS] Rock Music Loop (Echo)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\environment\RAS_rockMusicLoopEcho.ogg",
			50,
			1, 
			350, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_clubMusicLoopEcho
	{
		name="[RAS] Club Music Loop (Echo)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\environment\RAS_clubMusicLoopEcho.ogg",
			50,
			1, 
			350, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_clubMusicLoop
	{
		name="[RAS] Club Music Loop";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\environment\RAS_clubMusicLoop.ogg",
			50,
			1, 
			350, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_automatedMiningExtractorSmall
	{
		name="[RAS] Automated Mining Extractor (Small)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\machinery\RAS_automatedMiningExtractorSmall.ogg",
			15,
			1, 
			40, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_automatedMiningExtractorMedium
	{
		name="[RAS] Automated Mining Extractor (Medium)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\machinery\RAS_automatedMiningExtractorMedium.ogg",
			25,
			1, 
			50, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_automatedMiningExtractorLarge
	{
		name="[RAS] Automated Mining Extractor (Large)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\machinery\RAS_automatedMiningExtractorLarge.ogg",
			30,
			1, 
			80, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_atmosphericProcessor
	{
		name="[RAS] Atmospheric Processor";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\machinery\RAS_atmosphericProcessor.ogg",
		    15,
			1, 
			50, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_modernPhoneVibration
	{
		name="[RAS] Cell Phone Ringtone (Vibrating)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\electronics\RAS_modernPhoneVibration.ogg",
		    10,
			1, 
			15, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_nokiaRingtone
	{
		name="[RAS] Nokia Ringtone";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\electronics\RAS_nokiaRingtone.ogg",
		    10,
			1, 
			15, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class RAS_countdownTimer
	{
		name="[RAS] Countdown Timer";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\electronics\RAS_countdownTimer.ogg",
		    10,
			1, 
			15, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_musicChannelRock1
	{
		name="[RAS] Music Channel (Rock 1)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\radio\RAS_musicChannelRock1.ogg",
			15,
			1, 
			20, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_musicChannelRock2
	{
		name="[RAS] Music Channel (Rock 2)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\radio\RAS_musicChannelRock2.ogg",
			15,
			1, 
			20, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_heatAlarm
	{
		name="[RAS] Heat Alarm";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\alarm\RAS_heatAlarm.ogg",
			20,
			1, 
			100, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_stadiumMusic80Mix
	{
		name="[RAS] Stadium Music (80s Mix)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\environment\RAS_stadiumMusic80Mix.ogg",
			40,
			1, 
			600, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_stadiumMusicElectronicMix
	{
		name="[RAS] Stadium Music (Electronic Mix)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\environment\RAS_stadiumMusicElectronicMix.ogg",
			40,
			1, 
			600, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_lowGeiger
	{
		name="[RAS] Geiger Counter (Low)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\electronics\RAS_lowGeiger.ogg",
			15,
			1, 
			20, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_medGeiger
	{
		name="[RAS] Geiger Counter (Med)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\electronics\RAS_medGeiger.ogg",
			15,
			1, 
			20, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_highGeiger
	{
		name="[RAS] Geiger Counter (High)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\electronics\RAS_highGeiger.ogg",
			15,
			1, 
			20, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};

	class RAS_extremeGeiger
	{
		name="[RAS] Geiger Counter (Extreme)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\electronics\RAS_extremeGeiger.ogg",
			15,
			1, 
			20, 
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
};
class CfgVehicles
{
	class All;
	class Sound: All
	{
		author="Radium";
		mapSize=10;
		_generalMacro="Sound";
		scope=0;
		side=-1;
		animated=0;
		vehicleClass="Sounds";
		icon="iconSound";
		faction="none";
		editorCategory="EdCat_Sounds";
		editorSubcategory="EdSubcat_Sounds";
	};
	class RAS_facilityalarm: Sound
	{
		author="Radium";
		_generalMacro="RAS_facilityalarm_veh";
		scope=2;
		sound="RAS_facilityalarm";
		displayName="[RAS] Facility Alarm";
	};
	class RAS_mediumalarm: Sound
	{
		author="Radium";
		_generalMacro="RAS_mediumalarm_veh";	
		scope=2;
		sound="RAS_mediumalarm";
		displayName="[RAS] Medium Alarm";
	};
	class RAS_criticalalarm: Sound
	{
		author="Radium";
		_generalMacro="RAS_criticalalarm_veh";
		scope=2;
		sound="RAS_criticalalarm";
		displayName="[RAS] Critical Alarm";
	};
	class RAS_breachalarm: Sound
	{
		author="Radium";
		_generalMacro="RAS_breachalarm_veh";
		scope=2;
		sound="RAS_breachalarm";
		displayName="[RAS] Breach Alarm";
	};
	class RAS_musicChannelCalm1: Sound
	{
		author="Radium";
		_generalMacro="RAS_musicChannelCalm1_veh";
		scope=2;
		sound="RAS_musicChannelCalm1";
		displayName="[RAS] Music Channel (Calm 1)";
	};
	class RAS_musicChannelCalm2: Sound
	{
		author="Radium";
		_generalMacro="RAS_musicChannelCalm2_veh";
		scope=2;
		sound="RAS_musicChannelCalm2";
		displayName="[RAS] Music Channel (Calm 2)";
	};
	class RAS_thedriller1: Sound
	{
		author="Radium";
		_generalMacro="RAS_thedriller1_veh";
		scope=2;
		sound="RAS_thedriller1";
		displayName="[RAS] The Driller (1)";
	};
	class RAS_thedriller2: Sound
	{
		author="Radium";
		_generalMacro="RAS_thedriller2_veh";
		scope=2;
		sound="RAS_thedriller2";
		displayName="[RAS] The Driller (2)";
	};
	class RAS_badelectricity: Sound
	{
		author="Radium";
		_generalMacro="RAS_badelectricity_veh";
		scope=2;
		sound="RAS_badelectricity";
		displayName="[RAS] Electrical Sparks";
	};
	class RAS_radiosilence: Sound
	{
		author="Radium";
		_generalMacro="RAS_radiosilence_veh";
		scope=2;
		sound="RAS_radiosilence";
		displayName="[RAS] Radio Silence";
	};
	class RAS_radiofirefight: Sound
	{
		author="Radium";
		_generalMacro="RAS_radiofirefight_veh";
		scope=2;
		sound="RAS_radiofirefight";
		displayName="[RAS] Radio Firefight [NATO]";
	};
	class RAS_radiofirefight2: Sound
	{
		author="Radium";
		_generalMacro="RAS_radiofirefight2_veh";
		scope=2;
		sound="RAS_radiofirefight2";
		displayName="[RAS] Radio Firefight [CSAT]";
	};
	class RAS_radiofirefight3: Sound
	{
		author="Radium";
		_generalMacro="RAS_radiofirefight3_veh";
		scope=2;
		sound="RAS_radiofirefight3";
		displayName="[RAS] Radio Firefight [AAF]";
	};
	class RAS_radiofirefightzom: Sound
	{
		author="Radium";
		_generalMacro="RAS_radiofirefightzom_veh";
		scope=2;
		sound="RAS_radiofirefightzom";
		displayName="[RAS] Radio Firefight [Zombies]";
	};
	class RAS_radiozombietakeover: Sound
	{
		author="Radium";
		_generalMacro="RAS_radiozombietakeover_veh";
		scope=2;
		sound="RAS_radiozombietakeover";
		displayName="[RAS] Radio Silence [Zombie Takeover]";
	};
	class RAS_smallfire: Sound
	{
		author="Radium";
		_generalMacro="RAS_smallfire_veh";
		scope=2;
		sound="RAS_smallfire";
		displayName="[RAS] Small Fire";
	};
	class RAS_mediumfire: Sound
	{
		author="Radium";
		_generalMacro="RAS_mediumfire_veh";
		scope=2;
		sound="RAS_mediumfire";
		displayName="[RAS] Medium Fire";
	};
	class RAS_largefire: Sound
	{
		author="Radium";
		_generalMacro="RAS_largefire_veh";
		scope=2;
		sound="RAS_largefire";
		displayName="[RAS] Large Fire";
	};
	class RAS_fan: Sound
	{
		author="Radium";
		_generalMacro="RAS_fan_veh";
		scope=2;
		sound="RAS_fan";
		displayName="[RAS] Industrial Fan Loop";
	};
	class RAS_basealarm: Sound
	{
		author="Radium";
		_generalMacro="RAS_basealarm_veh";
		scope=2;
		sound="RAS_basealarm";
		displayName="[RAS] Base Alarm";
	};
	class RAS_ancients: Sound
	{
		author="Radium";
		_generalMacro="RAS_ancients_veh";
		scope=2;
		sound="RAS_ancients";
		displayName="[RAS] Ancient Whispers";
	};
	class RAS_housefirealarm: Sound
	{
		author="Radium";
		_generalMacro="RAS_housefirealarm_veh";
		scope=2;
		sound="RAS_housefirealarm";
		displayName="[RAS] House Fire Alarm";
	};
	class RAS_gasalarm: Sound
	{
		author="Radium";
		_generalMacro="RAS_gasalarm_veh";
		scope=2;
		sound="RAS_gasalarm";
		displayName="[RAS] Gas Alarm";
	};
	class RAS_raidsiren: Sound
	{
		author="Radium";
		_generalMacro="RAS_raidsiren_veh";
		scope=2;
		sound="RAS_raidsiren";
		displayName="[RAS] Raid Siren";
	};
	class RAS_echoalarm: Sound
	{
		author="Radium";
		_generalMacro="RAS_echoalarm_veh";
		scope=2;
		sound="RAS_echoalarm";
		displayName="[RAS] Echo Alarm";
	};
	class RAS_basealarm2: Sound
	{
		author="Radium";
		_generalMacro="RAS_basealarm2_veh";
		scope=2;
		sound="RAS_basealarm2";
		displayName="[RAS] Base Alarm 2";
	};
	class RAS_supplycratebeep: Sound
	{
		author="Radium";
		_generalMacro="RAS_supplycratebeep_veh";
		scope=2;
		sound="RAS_supplycratebeep";
		displayName="[RAS] Supply Crate Beep";
	};
	class RAS_perimeteralarm: Sound
	{
		author="Radium";
		_generalMacro="RAS_perimeteralarm_veh";
		scope=2;
		sound="RAS_perimeteralarm";
		displayName="[RAS] Perimeter Alarm";
	};
	class RAS_ciwsalarm: Sound
	{
		author="Radium";
		_generalMacro="RAS_ciwsalarm_veh";
		scope=2;
		sound="RAS_ciwsalarm";
		displayName="[RAS] CIWS Incoming Alarm";
	};
	class RAS_signal1: Sound
	{
		author="Radium";
		_generalMacro="RAS_signal1_veh";
		scope=2;
		sound="RAS_signal1";
		displayName="[RAS] Alien Signal 1";
	};
	class RAS_signal2: Sound
	{
		author="Radium";
		_generalMacro="RAS_signal2_veh";
		scope=2;
		sound="RAS_signal2";
		displayName="[RAS] Alien Signal 2";
	};
	class RAS_signal3: Sound
	{
		author="Radium";
		_generalMacro="RAS_signal3_veh";
		scope=2;
		sound="RAS_signal3";
		displayName="[RAS] Alien Signal 3";
	};
	class RAS_brokenTerminal: Sound
	{
		author="Radium";
		_generalMacro="RAS_brokenTerminal_veh";
		scope=2;
		sound="RAS_brokenTerminal";
		displayName="[RAS] Broken Terminal";
	};
	class RAS_brokenTerminal2: Sound
	{
		author="Radium";
		_generalMacro="RAS_brokenTerminal2_veh";
		scope=2;
		sound="RAS_brokenTerminal2";
		displayName="[RAS] Broken Terminal 2";	
	};
	class RAS_brokenTerminal3: Sound
	{
		author="Radium";
		_generalMacro="RAS_brokenTerminal3_veh";
		scope=2;
		sound="RAS_brokenTerminal3";
		displayName="[RAS] Broken Terminal 3";
	};
	class RAS_hiveHeart: Sound
	{
		author="Radium";
		_generalMacro="RCS_hiveHeart_veh";
		scope=2;
		sound="RAS_hiveHeart";
		displayName="[RAS] Alien Hive Heart";
	};
	class RAS_rockMusicLoopEcho: Sound
	{
		author="Radium";
		_generalMacro="RAS_rockMusicLoopEcho_veh";
		scope=2;
		sound="RAS_rockMusicLoopEcho";
		displayName="[RAS] Rock Music Loop (Echo)";
	};
	class RAS_clubMusicLoopEcho: Sound
	{
		author="Radium";
		_generalMacro="RAS_clubMusicLoopEcho_veh";
		scope=2;
		sound="RAS_clubMusicLoopEcho";
		displayName="[RAS] Club Music Loop (Echo)";
	};
	class RAS_clubMusicLoop: Sound
	{
		author="Radium";
		_generalMacro="RAS_clubMusicLoop_veh";
		scope=2;
		sound="RAS_clubMusicLoop";
		displayName="[RAS] Club Music Loop";
	};
	class RAS_automatedMiningExtractorSmall: Sound
	{
		author="Radium";
		_generalMacro="RAS_automatedMiningExtractorSmall_veh";
		scope=2;
		sound="RAS_automatedMiningExtractorSmall";
		displayName="[RAS] Automated Mining Extractor (Small)";
	};
	class RAS_automatedMiningExtractorMedium: Sound
	{
		author="Radium";
		_generalMacro="RAS_automatedMiningExtractorMedium_veh";
		scope=2;
		sound="RAS_automatedMiningExtractorMedium";
		displayName="[RAS] Automated Mining Extractor (Medium)";
	};
	class RAS_automatedMiningExtractorLarge: Sound
	{
		author="Radium";
		_generalMacro="RAS_automatedMiningExtractorLarge_veh";
		scope=2;
		sound="RAS_automatedMiningExtractorLarge";
		displayName="[RAS] Automated Mining Extractor (Large)";
	};
	class RAS_atmosphericProcessor: Sound
	{
		author="Radium";
		_generalMacro="RAS_atmosphericProcessor_veh";
		scope=2;
		sound="RAS_atmosphericProcessor";
		displayName="[RAS] Atmospheric Processor";
	};
	class RAS_modernPhoneVibration: Sound
	{
		author="Radium";
		_generalMacro="RAS_mdoernPhoneVibration_veh";
		scope=2;
		sound="RAS_modernPhoneVibration";
		displayName="[RAS] Cell Phone Ringtone (Vibrating)";
	};
	class RAS_nokiaRingtone: Sound
	{
		author="Radium";
		_generalMacro="RAS_nokiaRingtone_veh";
		scope=2;
		sound="RAS_nokiaRingtone";
		displayName="[RAS] Nokia Ringtone";
	};
	class RAS_countdownTimer: Sound
	{
		author="Radium";
		_generalMacro="RAS_countdownTimer_veh";
		scope=2;
		sound="RAS_countdownTimer";
		displayName="[RAS] Countdown Timer";
	};
	class RAS_musicChannelRock1: Sound
	{
		author="Radium";
		_generalMacro="RAS_musicChannelRock1_veh";
		scope=2;
		sound="RAS_musicChannelRock1";
		displayName="[RAS] Music Channel (Rock 1)";
	};
	class RAS_musicChannelRock2: Sound
	{
		author="Radium";
		_generalMacro="RAS_musicChannelRock2_veh";
		scope=2;
		sound="RAS_musicChannelRock2";
		displayName="[RAS] Music Channel (Rock 2)";
	};
	class RAS_heatAlarm: Sound
	{
		author="Radium";
		_generalMacro="RAS_heatAlarm_veh";
		scope=2;
		sound="RAS_heatAlarm";
		displayName="[RAS] Heat Alarm";
	};
	class RAS_stadiumMusic80Mix: Sound
	{
		author="Radium";
		_generalMacro="RAS_stadiumMusic80Mix_veh";
		scope=2;
		sound="RAS_stadiumMusic80Mix";
		displayName="[RAS] Stadium Music (80s Mix)";
	};
	class RAS_stadiumMusicElectronicMix: Sound
	{
		author="Radium";
		_generalMacro="RAS_stadiumMusicElectronicMix_veh";
		scope=2;
		sound="RAS_stadiumMusicElectronicMix";
		displayName="[RAS] Stadium Music (Electronic Mix)";
	};
	class RAS_lowGeiger: Sound
	{
		author="Radium";
		_generalMacro="RAS_lowGeiger_veh";
		scope=2;
		sound="RAS_lowGeiger";
		displayName="[RAS] Geiger Counter (Low)";
	};
	class RAS_medGeiger: Sound
	{
		author="Radium";
		_generalMacro="RAS_medGeiger_veh";
		scope=2;
		sound="RAS_medGeiger";
		displayName="[RAS] Geiger Counter (Med)";
	};
	class RAS_highGeiger: Sound
	{
		author="Radium";
		_generalMacro="RAS_highGeiger_veh";
		scope=2;
		sound="RAS_highGeiger";
		displayName="[RAS] Geiger Counter (High)";
	};
	class RAS_extremeGeiger: Sound
	{
		author="Radium";
		_generalMacro="RAS_extremeGeiger_veh";
		scope=2;
		sound="RAS_extremeGeiger";
		displayName="[RAS] Geiger Counter (Extreme)";
	};
	class RAS_monsterSounds: Sound
	{
		author="Radium";
		_generalMacro="RAS_monsterSounds_veh";
		scope=2;
		sound="RAS_monsterSounds";
		displayName="[RAS] Monster Sounds";
	};
	class RAS_monsterSoundsCave: Sound
	{
		author="Radium";
		_generalMacro="RAS_monsterSoundsCave_veh";
		scope=2;
		sound="RAS_monsterSoundsCave";
		displayName="[RAS] Monster Sounds (Cave)";
	};
	class RAS_monsterRoarCave: Sound
	{
		author="Radium";
		_generalMacro="RAS_monsterRoarCave_veh";
		scope=2;
		sound="RAS_monsterRoarCave";
		displayName="[RAS] Monster Roars (Cave)";
	};
	class RAS_monsterRoar: Sound
	{
		author="Radium";
		_generalMacro="RAS_monsterRoar_veh";
		scope=2;
		sound="RAS_monsterRoar";
		displayName="[RAS] Monster Roars";
	};
	class RAS_monolithPreacher: Sound
	{
		author="Radium";
		_generalMacro="RAS_monolithPreacher_veh";
		scope=2;
		sound="RAS_monolithPreacher";
		displayName="[RAS] Monolith Preacher";
	};
	class RAS_monolithPreacherEcho: Sound
	{
		author="Radium";
		_generalMacro="RAS_monolithPreacherEcho_veh";
		scope=2;
		sound="RAS_monolithPreacherEcho";
		displayName="[RAS] Monolith Preacher (Echo)";
	};
};



