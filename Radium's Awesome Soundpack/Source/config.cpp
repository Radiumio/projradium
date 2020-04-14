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
			"RAS_musicchannelradio.ogg",
			"RAS_musicchannelradio2.ogg",
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
			"RAS_signal3.ogg"
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
			15,
			1, 
			250, 
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
			15,
			1, 
			300, 
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

	class RAS_musicchannelradio
	{
		name="[RAS] Radio (Music Channel)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\radio\RAS_musicchannelradio.ogg",
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

	class RAS_musicchannelradio2
	{
		name="[RAS] Radio (Music Channel 2)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\radio\RAS_musicchannelradio2.ogg",
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

	class RAS_thedriller1
	{
		name="[RAS] The Driller (1)";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"RAS\driller\RAS_thedriller1.ogg",
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
			"RAS\driller\RAS_thedriller2.ogg",
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
			15,
			1, 
			300, 
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
	class RAS_musicchannelradio: Sound
	{
		author="Radium";
		_generalMacro="RAS_musicchannelradio_veh";
		scope=2;
		sound="RAS_musicchannelradio";
		displayName="[RAS] Radio (Music Channel)";
	};
	class RAS_musicchannelradio2: Sound
	{
		author="Radium";
		_generalMacro="RAS_musicchannelradio2_veh";
		scope=2;
		sound="RAS_musicchannelradio2";
		displayName="[RAS] Radio (Music Channel 2)";
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
};



