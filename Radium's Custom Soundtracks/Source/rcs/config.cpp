class cfgPatches
{
    class RCS
    {
        author[] = {"Radium"};
        requiredAddons[] = {};
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
    };
};

class cfgMusicClasses
{
    class RCTACTION
    {
        displayName = "[RCT] Action";
    };

    class RCTSTEALTH
    {
        displayName = "[RCT] Stealth/Suspense";
    };

    class RCTRELAX
    {
        displayName = "[RCT] Relax";
    };

    class RCTSAD
    {
        displayName = "[RCT] Sad";
    };

    class RCTCONTACT
    {
        displayName = "[RCT] Contact";
    };

    class RCTMISC
    {
        displayName = "[RCT] Misc";
    };
};

class CfgMusic
{
    class RCS_neosphere
    {
        name = "Neosphere";
        sound[] = {"\rcs\ACTION\RCS_neosphere.ogg", 1, 1};
        theme = "Lead";
        duration = 217;
        musicClass = "RCTACTION";
    };
    class RCS_cutToTheChase
    {
        name = "Cut To The Chase";
        sound[] = {"\rcs\ACTION\RCS_cutToTheChase.ogg", 1, 1};
        theme = "Lead";
        duration = 179;
        musicClass = "RCTACTION";
    };
    class RCS_inShadows
    {
        name = "In Shadows";
        sound[] = {"\rcs\STEALTH\RCS_inShadows.ogg", 1, 1};
        theme = "Lead";
        duration = 204;
        musicClass = "RCTSTEALTH";
    };
    class RCS_badMoonRising
    {
        name = "Bad Moon Rising";
        sound[] = {"\rcs\MISC\RCS_badMoonRising.ogg", 1, 1};
        theme = "Lead";
        duration = 139;
        musicClass = "RCTMISC";
    };
    class RCS_haveYouSeenTheRain
    {
        name = "Have You Seen The Rain?";
        sound[] = {"\rcs\MISC\RCS_haveYouSeenTheRain.ogg", 1, 1};
        theme = "Lead";
        duration = 158;
        musicClass = "MISC";
    };
    class RCS_contaminatedWater
    {
        name = "Contaminated Water";
        sound[] = {"\rcs\STEALTH\RCS_contaminatedWater.ogg", 1, 1};
        theme = "Lead";
        duration = 145;
        musicClass = "RCTSTEALTH";
    };
    class RCS_viperTeam
    {
        name = "Viper Team";
        sound[] = {"\rcs\STEALTH\RCS_viperTeam.ogg", 1, 1};
        theme = "Lead";
        duration = 176;
        musicClass = "RCTSTEALTH";
    };
    class RCS_communicationsDown
    {
        name = "Communications Down";
        sound[] = {"\rcs\STEALTH\RCS_communicationsDown.ogg", 1, 1};
        theme = "Lead";
        duration = 193;
        musicClass = "RCTSTEALTH";
    };
    class RCS_remnants
    {
        name = "Remnants";
        sound[] = {"\rcs\STEALTH\RCS_remnants.ogg", 1, 1};
        theme = "Lead";
        duration = 266;
        musicClass = "RCTSTEALTH";
    };
    class RCS_bikeToTheSaturn
    {
        name = "Sophi Lu - Bike To The Saturn";
        sound[] = {"\rcs\SAD\RCS_bikeToTheSaturn.ogg", 1, 1};
        theme = "Lead";
        duration = 76;
        musicClass = "RCTSAD";
    };
    class RCS_combatTechnology
    {
        name = "Combat Technology";
        sound[] = {"\rcs\STEALTH\RCS_combatTechnology.ogg", 1, 1};
        theme = "Lead";
        duration = 213;
        musicClass = "RCTSTEALTH";
    };
    class RCS_syndicateDoubleCross
    {
        name = "Syndicate Double Cross";
        sound[] = {"\rcs\STEALTH\RCS_syndicateDoubleCross.ogg", 1, 1};
        theme = "Lead";
        duration = 138;
        musicClass = "RCTSTEALTH";
    };
    class RCS_iWantYouBack
    {
        name = "I Want You Back";
        sound[] = {"\rcs\MISC\RCS_iWantYouBack.ogg", 1, 1};
        theme = "Lead";
        duration = 179;
        musicClass = "RCTMISC";
    };
    class RCS_warfare
    {
        name = "Warfare";
        sound[] = {"\rcs\ACTION\RCS_warfare.ogg", 1, 1};
        theme = "Lead";
        duration = 169;
        musicClass = "RCTACTION";
    };
    class RCS_sixShooter
    {
        name = "Six Shooter";
        sound[] = {"\rcs\MISC\RCS_sixShooter.ogg", 1, 1};
        theme = "Lead";
        duration = 212;
        musicClass = "RCTMISC";
    };
    class RCS_thinking
    {
        name = "Thinking";
        sound[] = {"\rcs\RELAX\RCS_thinking.ogg", 1, 1};
        theme = "Lead";
        duration = 164;
        musicClass = "RCTRELAX";
    };
    class RCS_thisEndsHere
    {
        name = "This Ends Here";
        sound[] = {"\rcs\STEALTH\RCS_thisEndsHere.ogg", 1, 1};
        theme = "Lead";
        duration = 165;
        musicClass = "RCTSTEALTH";
    };
    class RCS_apocalypse
    {
        name = "Apocalypse";
        sound[] = {"\rcs\STEALTH\RCS_apocalypse.ogg", 1, 1};
        theme = "Lead";
        duration = 66;
        musicClass = "RCTSTEALTH";
    };
    class RCS_warmOrange
    {
        name = "Warm Orange";
        sound[] = {"\rcs\RELAX\RCS_warmOrange.ogg", 1, 1};
        theme = "Lead";
        duration = 384;
        musicClass = "RCTRELAX";
    };
    class RCS_itsOver
    {
        name = "It's Over";
        sound[] = {"\rcs\RELAX\RCS_itsOver.ogg", 1, 1};
        theme = "Lead";
        duration = 202;
        musicClass = "RCTRELAX";
    };
    class RCS_fury
    {
        name = "Fury";
        sound[] = {"\rcs\ACTION\RCS_fury.ogg", 1, 1};
        theme = "Lead";
        duration = 343;
        musicClass = "RCTACTION";
    };
    class RCS_allGone
    {
        name = "All Gone";
        sound[] = {"\rcs\SAD\RCS_allGone.ogg", 1, 1};
        theme = "Lead";
        duration = 174;
        musicClass = "RCTSAD";
    };
    class RCS_lostPages
    {
        name = "Left Behind";
        sound[] = {"\rcs\SAD\RCS_lostPages.ogg", 1, 1};
        theme = "Lead";
        duration = 182;
        musicClass = "RCTSAD";
    };
    class RCS_valleys
    {
        name = "Valleys";
        sound[] = {"\rcs\STEALTH\RCS_valleys.ogg", 1, 1};
        theme = "Lead";
        duration = 125;
        musicClass = "RCTSTEALTH";
    };
    class RCS_inTheDarkness
    {
        name = "In The Darkness";
        sound[] = {"\rcs\STEALTH\RCS_inTheDarkness.ogg", 1, 1};
        theme = "Lead";
        duration = 159;
        musicClass = "RCTSTEALTH";
    };
    class RCS_rightBehindYou
    {
        name = "Right Behind You";
        sound[] = {"\rcs\STEALTH\RCS_rightBehindYou.ogg", 1, 1};
        theme = "Lead";
        duration = 176;
        musicClass = "RCTSTEALTH";
    };
    class RCS_hunted
    {
        name = "Hunted";
        sound[] = {"\rcs\STEALTH\RCS_hunted.ogg", 1, 1};
        theme = "Lead";
        duration = 124;
        musicClass = "RCTSTEALTH";
    };
    class RCS_thisIsIt
    {
        name = "This Is It";
        sound[] = {"\rcs\SAD\RCS_thisIsIt.ogg", 1, 1};
        theme = "Lead";
        duration = 124;
        musicClass = "RCTSAD";
    };
    class RCS_neverTurnBack
    {
        name = "Never Turn Back";
        sound[] = {"\rcs\STEALTH\RCS_neverTurnBack.ogg", 1, 1};
        theme = "Lead";
        duration = 249;
        musicClass = "RCTSTEALTH";
    };
    class RCS_neverTurnBackAmbient
    {
        name = "Never Turn Back - Ambient";
        sound[] = {"\rcs\STEALTH\RCS_neverTurnBackAmbient.ogg", 1, 1};
        theme = "Lead";
        duration = 165;
        musicClass = "RCTSTEALTH";
    };
    class RCS_followUp
    {
        name = "Follow-Up";
        sound[] = {"\rcs\STEALTH\RCS_followUp.ogg", 1, 1};
        theme = "Lead";
        duration = 274;
        musicClass = "RCTSTEALTH";
    };
    class RCS_evacuation
    {
        name = "Evacuation";
        sound[] = {"\rcs\STEALTH\RCS_evacuation.ogg", 1, 1};
        theme = "Lead";
        duration = 141;
        musicClass = "RCTSTEALTH";
    };
    class RCS_theDepression
    {
        name = "The Depression";
        sound[] = {"\rcs\SAD\RCS_theDepression.ogg", 1, 1};
        theme = "Lead";
        duration = 113;
        musicClass = "RCTSAD";
    };
    class RCS_loyal
    {
        name = "Loyal";
        sound[] = {"\rcs\ACTION\RCS_loyal.ogg", 1, 1};
        theme = "Lead";
        duration = 75;
        musicClass = "RCTACTION";
    };
    class RCS_theMarch
    {
        name = "The March";
        sound[] = {"\rcs\ACTION\RCS_theMarch.ogg", 1, 1};
        theme = "Lead";
        duration = 147;
        musicClass = "RCTACTION";
    };
    class RCS_motherBaseAttacked
    {
        name = "Mother Base Is Attacked";
        sound[] = {"\rcs\ACTION\RCS_motherBaseAttacked.ogg", 1, 1};
        theme = "Lead";
        duration = 213;
        musicClass = "RCTACTION";
    };
    class RCS_hotZone
    {
        name = "Hotzone";
        sound[] = {"\rcs\ACTION\RCS_hotZone.ogg", 1, 1};
        theme = "Lead";
        duration = 91;
        musicClass = "RCTACTION";
    };
    class RCS_metallicArchaea
    {
        name = "Metallic Archaea";
        sound[] = {"\rcs\ACTION\RCS_metallicArchaea.ogg", 1, 1};
        theme = "Lead";
        duration = 129;
        musicClass = "RCTACTION";
    };
    class RCS_noLight
    {
        name = "No Light";
        sound[] = {"\rcs\STEALTH\RCS_noLight.ogg", 1, 1};
        theme = "Lead";
        duration = 113;
        musicClass = "RCTSTEALTH";
    };
    class RCS_hereWeAre
    {
        name = "Here We Are";
        sound[] = {"\rcs\STEALTH\RCS_hereWeAre.ogg", 1, 1};
        theme = "Lead";
        duration = 440;
        musicClass = "RCTSTEALTH";
    };
    class RCS_tunnelTrouble
    {
        name = "Tunnel Trouble";
        sound[] = {"\rcs\ACTION\RCS_tunnelTrouble.ogg", 1, 1};
        theme = "Lead";
        duration = 183;
        musicClass = "RCTACTION";
    };
    class RCS_lurkingInTheFog
    {
        name = "Lurking In The Fog";
        sound[] = {"\rcs\STEALTH\RCS_lurkingInTheFog.ogg", 1, 1};
        theme = "Lead";
        duration = 118;
        musicClass = "RCTSTEALTH";
    };
    class RCS_theDeviceIsActive
    {
        name = "The Device Is Active";
        sound[] = {"\rcs\STEALTH\RCS_theDeviceIsActive.ogg", 1, 1};
        theme = "Lead";
        duration = 123;
        musicClass = "RCTSTEALTH";
    };
    class RCS_farewell
    {
        name = "Farewell Life";
        sound[] = {"\rcs\SAD\RCS_farewell.ogg", 1, 1};
        theme = "Lead";
        duration = 398;
        musicClass = "RCTSAD";
    };
    class RCS_guitar
    {
        name = "ITB - Guitar";
        sound[] = {"\rcs\ACTION\RCS_guitar.ogg", 1, 1};
        theme = "Lead";
        duration = 190;
        musicClass = "RCTACTION";
    };
    class RCS_ice
    {
        name = "ITB - Ice";
        sound[] = {"\rcs\ACTION\RCS_ice.ogg", 1, 1};
        theme = "Lead";
        duration = 149;
        musicClass = "RCTACTION";
    };
    class RCS_train
    {
        name = "ITB - Train";
        sound[] = {"\rcs\ACTION\RCS_train.ogg", 1, 1};
        theme = "Lead";
        duration = 245;
        musicClass = "RCTACTION";
    };
    class RCS_zimmer
    {
        name = "ITB - Zimmer";
        sound[] = {"\rcs\ACTION\RCS_zimmer.ogg", 1, 1};
        theme = "Lead";
        duration = 181;
        musicClass = "RCTACTION";
    };
    class RCS_tracer
    {
        name = "Tracer";
        sound[] = {"\rcs\ACTION\RCS_tracer.ogg", 1, 1};
        theme = "Lead";
        duration = 330;
        musicClass = "RCTACTION";
    };
    class RCS_thoughtProcess
    {
        name = "Thought Process";
        sound[] = {"\rcs\RELAX\RCS_thoughtProcess.ogg", 1, 1};
        theme = "Lead";
        duration = 233;
        musicClass = "RCTRELAX";
    };
    class RCS_godray
    {
        name = "Godrays";
        sound[] = {"\rcs\RELAX\RCS_godray.ogg", 1, 1};
        theme = "Lead";
        duration = 251;
        musicClass = "RCTRELAX";
    };
    class RCS_boss
    {
        name = "ITB - Final Boss";
        sound[] = {"\rcs\ACTION\RCS_boss.ogg", 1, 1};
        theme = "Lead";
        duration = 257;
        musicClass = "RCTACTION";
    };
    class RCS_rushHour
    {
        name = "Rush Hour";
        sound[] = {"\rcs\ACTION\RCS_rushHour.ogg", 1, 1};
        theme = "Lead";
        duration = 138;
        musicClass = "RCTACTION";
    };
    class RCS_aboveAndBeyond
    {
        name = "Above and Beyond";
        sound[] = {"\rcs\ACTION\RCS_aboveAndBeyond.ogg", 1, 1};
        theme = "Lead";
        duration = 173;
        musicClass = "RCTACTION";
    };
    class RCS_fireNation
    {
        name = "Fire Nation";
        sound[] = {"\rcs\ACTION\RCS_fireNation.ogg", 1, 1};
        theme = "Lead";
        duration = 181;
        musicClass = "RCTACTION";
    };
    class RCS_imperatixMundi
    {
        name = "Imperatix Mundi";
        sound[] = {"\rcs\ACTION\RCS_imperatixMundi.ogg", 1, 1};
        theme = "Lead";
        duration = 179;
        musicClass = "RCTACTION";
    };
    class RCS_invincible
    {
        name = "Invincible";
        sound[] = {"\rcs\ACTION\RCS_invincible.ogg", 1, 1};
        theme = "Lead";
        duration = 172;
        musicClass = "RCTACTION";
    };
    class RCS_lostButWon
    {
        name = "Lost But Won";
        sound[] = {"\rcs\ACTION\RCS_lostButWon.ogg", 1, 1};
        theme = "Lead";
        duration = 367;
        musicClass = "RCTACTION";
    };
    class RCS_revival
    {
        name = "Revival";
        sound[] = {"\rcs\ACTION\RCS_revival.ogg", 1, 1};
        theme = "Lead";
        duration = 427;
        musicClass = "RCTACTION";
    };
    class RCS_supermarine
    {
        name = "Supermarine";
        sound[] = {"\rcs\ACTION\RCS_supermarine.ogg", 1, 1};
        theme = "Lead";
        duration = 483;
        musicClass = "RCTACTION";
    };
    class RCS_theMole
    {
        name = "The Mole";
        sound[] = {"\rcs\STEALTH\RCS_theMole.ogg", 1, 1};
        theme = "Lead";
        duration = 336;
        musicClass = "RCTSTEALTH";
    };
    class RCS_longHaul
    {
        name = "Long Haul";
        sound[] = {"\rcs\ACTION\RCS_longHaul.ogg", 1, 1};
        theme = "Lead";
        duration = 158;
        musicClass = "RCTACTION";
    };
    class RCS_toGalaxy
    {
        name = "To Galaxy";
        sound[] = {"\rcs\ACTION\RCS_toGalaxy.ogg", 1, 1};
        theme = "Lead";
        duration = 213;
        musicClass = "RCTACTION";
    };
    class RCS_swordsInTheSky
    {
        name = "Swords In The Sky";
        sound[] = {"\rcs\ACTION\RCS_swordsInTheSky.ogg", 1, 1};
        theme = "Lead";
        duration = 169;
        musicClass = "RCTACTION";
    };
    class RCS_battleTanks
    {
        name = "Battle Tanks";
        sound[] = {"\rcs\ACTION\RCS_battleTanks.ogg", 1, 1};
        theme = "Lead";
        duration = 164;
        musicClass = "RCTACTION";
    };
    class RCS_zeroed
    {
        name = "Zeroed";
        sound[] = {"\rcs\STEALTH\RCS_zeroed.ogg", 1, 1};
        theme = "Lead";
        duration = 311;
        musicClass = "RCTSTEALTH";
    };
    class RCS_quietAssault
    {
        name = "Quiet Assault";
        sound[] = {"\rcs\STEALTH\RCS_quietAssault.ogg", 1, 1};
        theme = "Lead";
        duration = 305;
        musicClass = "RCTSTEALTH";
    };
    class RCS_alienWorld
    {
        name = "Alien World";
        sound[] = {"\rcs\RELAX\RCS_alienWorld.ogg", 1, 1};
        theme = "Lead";
        duration = 172;
        musicClass = "RCTRELAX";
    };
    class RCS_bestLaidPlans
    {
        name = "Best Laid Plans";
        sound[] = {"\rcs\RELAX\RCS_bestLaidPlans.ogg", 1, 1};
        theme = "Lead";
        duration = 191;
        musicClass = "RCTRELAX";
    };
    class RCS_timeRush
    {
        name = "Time Rush";
        sound[] = {"\rcs\STEALTH\RCS_timeRush.ogg", 1, 1};
        theme = "Lead";
        duration = 108;
        musicClass = "RCTSTEALTH";
    };
    class RCS_aBattleBegins
    {
        name = "A Battle Begins";
        sound[] = {"\rcs\ACTION\RCS_aBattleBegins.ogg", 1, 1};
        theme = "Lead";
        duration = 81;
        musicClass = "RCTACTION";
    };
    class RCS_rescueMission
    {
        name = "Rescue Mission";
        sound[] = {"\rcs\ACTION\RCS_rescueMission.ogg", 1, 1};
        theme = "Lead";
        duration = 77;
        musicClass = "RCTACTION";
    };
    class RCS_theFewTheBrave
    {
        name = "The Few the Brave";
        sound[] = {"\rcs\ACTION\RCS_theFewTheBrave.ogg", 1, 1};
        theme = "Lead";
        duration = 192;
        musicClass = "RCTACTION";
    };
    class RCS_invincibleExtended
    {
        name = "Invincible (Extended)";
        sound[] = {"\rcs\ACTION\RCS_invincibleExtended.ogg", 1, 1};
        theme = "Lead";
        duration = 270;
        musicClass = "RCTACTION";
    };
    class RCS_desolate
    {
        name = "Desolate";
        sound[] = {"\rcs\ACTION\RCS_desolate.ogg", 1, 1};
        theme = "Lead";
        duration = 320;
        musicClass = "RCTACTION";
    };
    class RCS_beyondApocalypse
    {
        name = "Beyond Apocalypse";
        sound[] = {"\rcs\STEALTH\RCS_beyondApocalypse.ogg", 1, 1};
        theme = "Lead";
        duration = 180;
        musicClass = "RCTSTEALTH";
    };
    class RCS_presence
    {
        name = "Presence";
        sound[] = {"\rcs\STEALTH\RCS_presence.ogg", 1, 1};
        theme = "Lead";
        duration = 180;
        musicClass = "RCTSTEALTH";
    };
    class RCS_roamingTheDeadzone
    {
        name = "Roaming The Deadzone";
        sound[] = {"\rcs\STEALTH\RCS_roamingTheDeadzone.ogg", 1, 1};
        theme = "Lead";
        duration = 200;
        musicClass = "RCTSTEALTH";
    };
    class RCS_visibility
    {
        name = "Visibility";
        sound[] = {"\rcs\STEALTH\RCS_visibility.ogg", 1, 1};
        theme = "Lead";
        duration = 320;
        musicClass = "RCTSTEALTH";
    };
    class RCS_armedArrival
    {
        name = "Armed Arrival";
        sound[] = {"\rcs\RELAX\RCS_armedArrival.ogg", 1, 1};
        theme = "Lead";
        duration = 179;
        musicClass = "RCTRELAX";
    };
    class RCS_whatLiesBeyond
    {
        name = "What Lies Beyond";
        sound[] = {"\rcs\STEALTH\RCS_whatLiesBeyond.ogg", 1, 1};
        theme = "Lead";
        duration = 72;
        musicClass = "RCTSTEALTH";
    };
    class RCS_unspotted
    {
        name = "Unspotted";
        sound[] = {"\rcs\STEALTH\RCS_unspotted.ogg", 1, 1};
        theme = "Lead";
        duration = 163;
        musicClass = "RCTSTEALTH";
    };
    class RCS_fromTheWild
    {
        name = "From The Wild";
        sound[] = {"\rcs\RELAX\RCS_fromTheWild.ogg", 1, 1};
        theme = "Lead";
        duration = 259;
        musicClass = "RCTRELAX";
    };
    class RCS_berlinFootChase
    {
        name = "Berlin Foot Chase";
        sound[] = {"\rcs\ACTION\RCS_berlinFootChase.ogg", 1, 1};
        theme = "Lead";
        duration = 319;
        musicClass = "RCTACTION";
    };
    class RCS_asimov
    {
        name = "Asimov";
        sound[] = {"\rcs\RELAX\RCS_asimov.ogg", 1, 1};
        theme = "Lead";
        duration = 351;
        musicClass = "RCTRELAX";
    };
    class RCS_runThroughTheJungle
    {
        name = "Run Through the Jungle";
        sound[] = {"\rcs\MISC\RCS_runThroughTheJungle.ogg", 1, 1};
        theme = "Lead";
        duration = 186;
        musicClass = "RCTMISC";
    };
    class RCS_caverns
    {
        name = "Caverns";
        sound[] = {"\rcs\RELAX\RCS_caverns.ogg", 1, 1};
        theme = "Lead";
        duration = 141;
        musicClass = "RCTRELAX";
    };
    class RCS_crashSite
    {
        name = "Crash Site";
        sound[] = {"\rcs\STEALTH\RCS_crashSite.ogg", 1, 1};
        theme = "Lead";
        duration = 149;
        musicClass = "RCTSTEALTH";
    };

    class RCS_crushDepth
    {
        name = "Crush Depth";
        sound[] = {"\rcs\STEALTH\RCS_crushDepth.ogg", 1, 1};
        theme = "Lead";
        duration = 134;
        musicClass = "RCTSTEALTH";
    };
    class RCS_grasshopper
    {
        name = "Grasshopper";
        sound[] = {"\rcs\RELAX\RCS_grasshopper.ogg", 1, 1};
        theme = "Lead";
        duration = 170;
        musicClass = "RCTRELAX";
    };
    class RCS_maneuvers
    {
        name = "Maneuvers";
        sound[] = {"\rcs\RELAX\RCS_maneuvers.ogg", 1, 1};
        theme = "Lead";
        duration = 159;
        musicClass = "RCTRELAX";
    };
    class RCS_flora
    {
        name = "Flora";
        sound[] = {"\rcs\RELAX\RCS_flora.ogg", 1, 1};
        theme = "Lead";
        duration = 138;
        musicClass = "RCTRELAX";
    };
    class RCS_feelingStrange
    {
        name = "Feeling Strange";
        sound[] = {"\rcs\STEALTH\RCS_feelingStrange.ogg", 1, 1};
        theme = "Lead";
        duration = 131;
        musicClass = "RCTSTEALTH";
    };
    class RCS_alienPassageways
    {
        name = "Alien Passageways";
        sound[] = {"\rcs\STEALTH\RCS_alienPassageways.ogg", 1, 1};
        theme = "Lead";
        duration = 137;
        musicClass = "RCTSTEALTH";
    };
    class RCS_alienSpaces
    {
        name = "Alien Spaces";
        sound[] = {"\rcs\STEALTH\RCS_alienspaces.ogg", 1, 1};
        theme = "Lead";
        duration = 106;
        musicClass = "RCTSTEALTH";
    };
    class RCS_arcLights
    {
        name = "Arc Lights";
        sound[] = {"\rcs\RELAX\RCS_arcLights.ogg", 1, 1};
        theme = "Lead";
        duration = 94;
        musicClass = "RCTRELAX";
    };
    class RCS_newSights
    {
        name = "New Sights";
        sound[] = {"\rcs\RELAX\RCS_newSights.ogg", 1, 1};
        theme = "Lead";
        duration = 131;
        musicClass = "RCTRELAX";
    };
    class RCS_sunbeam
    {
        name = "Sunbeam";
        sound[] = {"\rcs\RELAX\RCS_sunbeam.ogg", 1, 1};
        theme = "Lead";
        duration = 78;
        musicClass = "RCTRELAX";
    };
    class RCS_juggernaut
    {
        name = "Juggernaut";
        sound[] = {"\rcs\ACTION\RCS_juggernaut.ogg", 1, 1};
        theme = "Lead";
        duration = 311;
        musicClass = "RCTACTION";
    };
    class RCS_juggernautAlternate
    {
        name = "Juggernaut - Alternate Version";
        sound[] = {"\rcs\ACTION\RCS_juggernautAlternate.ogg", 1, 1};
        theme = "Lead";
        duration = 250;
        musicClass = "RCTACTION";
    };
    class RCS_fortunateSon
    {
        name = "Fortunate Son";
        sound[] = {"\rcs\MISC\RCS_fortunateSon.ogg", 1, 1};
        theme = "Lead";
        duration = 141;
        musicClass = "RCTMISC";
    };
    class RCS_outbreak
    {
        name = "Outbreak";
        sound[] = {"\rcs\ACTION\RCS_outbreak.ogg", 1, 1};
        theme = "Lead";
        duration = 316;
        musicClass = "RCTACTION";
    };
    class RCS_chase
    {
        name = "Chase";
        sound[] = {"\rcs\ACTION\RCS_chase.ogg", 1, 1};
        theme = "Lead";
        duration = 222;
        musicClass = "RCTACTION";
    };
    class RCS_evasion
    {
        name = "Evasion";
        sound[] = {"\rcs\STEALTH\RCS_evasion.ogg", 1, 1};
        theme = "Lead";
        duration = 121;
        musicClass = "RCTSTEALTH";
    };
    class RCS_escape
    {
        name = "Escape";
        sound[] = {"\rcs\ACTION\RCS_escape.ogg", 1, 1};
        theme = "Lead";
        duration = 458;
        musicClass = "RCTACTION";
    };
    class RCS_greatRun
    {
        name = "Great Run";
        sound[] = {"\rcs\ACTION\RCS_greatRun.ogg", 1, 1};
        theme = "Lead";
        duration = 143;
        musicClass = "RCTACTION";
    };
    class RCS_sandstorm
    {
        name = "Sandstorm";
        sound[] = {"\rcs\ACTION\RCS_sandstorm.ogg", 1, 1};
        theme = "Lead";
        duration = 253;
        musicClass = "RCTACTION";
    };
    class RCS_heist
    {
        name = "Heist";
        sound[] = {"\rcs\ACTION\RCS_heist.ogg", 1, 1};
        theme = "Lead";
        duration = 200;
        musicClass = "RCTACTION";
    };
    class RCS_versalife
    {
        name = "Versalife";
        sound[] = {"\rcs\ACTION\RCS_versalife.ogg", 1, 1};
        theme = "Lead";
        duration = 386;
        musicClass = "RCTACTION";
    };
    class RCS_completion
    {
        name = "Mission Completion A";
        sound[] = {"\rcs\RELAX\RCS_completion.ogg", 1, 1};
        theme = "Lead";
        duration = 52;
        musicClass = "RCTRELAX";
    };
    class RCS_insertion
    {
        name = "Insertion";
        sound[] = {"\rcs\ACTION\RCS_insertion.ogg", 1, 1};
        theme = "Lead";
        duration = 89;
        musicClass = "RCTACTION";
    };
    class RCS_nuclearSilence
    {
        name = "Nuclear Silence";
        sound[] = {"\rcs\RELAX\RCS_nuclearSilence.ogg", 1, 1};
        theme = "Lead";
        duration = 233;
        musicClass = "RCTRELAX";
    };
    class RCS_scatteredForces
    {
        name = "Scattered Forces";
        sound[] = {"\rcs\RELAX\RCS_scatteredForces.ogg", 1, 1};
        theme = "Lead";
        duration = 299;
        musicClass = "RCTRELAX";
    };
    class RCS_gamma
    {
        name = "ITB - Gamma";
        sound[] = {"\rcs\ACTION\RCS_gamma.ogg", 1, 1};
        theme = "Lead";
        duration = 164;
        musicClass = "RCTACTION";
    };
    class RCS_scavengers
    {
        name = "ITB - Scavengers";
        sound[] = {"\rcs\ACTION\RCS_scavengers.ogg", 1, 1};
        theme = "Lead";
        duration = 172;
        musicClass = "RCTACTION";
    };
    class RCS_tacticalDecision
    {
        name = "ITB - Tactical Decision";
        sound[] = {"\rcs\ACTION\RCS_tacticalDecision.ogg", 1, 1};
        theme = "Lead";
        duration = 119;
        musicClass = "RCTACTION";
    };
    class RCS_goodMorningTakistan
    {
        name = "Good Morning Takistan";
        sound[] = {"\rcs\RELAX\RCS_goodMorningTakistan.ogg", 1, 1};
        theme = "Lead";
        duration = 159;
        musicClass = "RCTRELAX";
    };
    class RCS_crudeOil
    {
        name = "Crude Oil";
        sound[] = {"\rcs\ACTION\RCS_crudeOil.ogg", 1, 1};
        theme = "Lead";
        duration = 235;
        musicClass = "RCTACTION";
    };
    class RCS_arrowhead
    {
        name = "Arrowhead";
        sound[] = {"\rcs\ACTION\RCS_arrowhead.ogg", 1, 1};
        theme = "Lead";
        duration = 220;
        musicClass = "RCTACTION";
    };
    class RCS_revolverJam
    {
        name = "Revolver Jam";
        sound[] = {"\rcs\RELAX\RCS_revolverJam.ogg", 1, 1};
        theme = "Lead";
        duration = 254;
        musicClass = "RCTRELAX";
    };
    class RCS_theBeast
    {
        name = "The Beast";
        sound[] = {"\rcs\STEALTH\RCS_theBeast.ogg", 1, 1};
        theme = "Lead";
        duration = 195;
        musicClass = "RCTSTEALTH";
    };
    class RCS_worldOfTanks
    {
        name = "World of Tanks";
        sound[] = {"\rcs\ACTION\RCS_worldOfTanks.ogg", 1, 1};
        theme = "Lead";
        duration = 198;
        musicClass = "RCTACTION";
    };
    class RCS_transilience
    {
        name = "Transilience";
        sound[] = {"\rcs\CONTACT\RCS_transilience.ogg", 1, 1};
        theme = "Lead";
        duration = 244;
        musicClass = "RCTCONTACT";
    };
    class RCS_acclivityDawn
    {
        name = "Acclivity Dawn";
        sound[] = {"\rcs\CONTACT\RCS_acclivityDawn.ogg", 1, 1};
        theme = "Lead";
        duration = 59;
        musicClass = "RCTCONTACT";
    };
    class RCS_waveringBase
    {
        name = "Wavering Base";
        sound[] = {"\rcs\CONTACT\RCS_waveringBase.ogg", 1, 1};
        theme = "Lead";
        duration = 61;
        musicClass = "RCTCONTACT";
    };
    class RCS_contact
    {
        name = "Contact";
        sound[] = {"\rcs\CONTACT\RCS_contact.ogg", 1, 1};
        theme = "Lead";
        duration = 205;
        musicClass = "RCTCONTACT";
    };
    class RCS_infighting
    {
        name = "Infighting";
        sound[] = {"\rcs\CONTACT\RCS_infighting.ogg", 1, 1};
        theme = "Lead";
        duration = 208;
        musicClass = "RCTCONTACT";
    };
    class RCS_sharperClaws
    {
        name = "Sharper Claws";
        sound[] = {"\rcs\CONTACT\RCS_sharperClaws.ogg", 1, 1};
        theme = "Lead";
        duration = 242;
        musicClass = "RCTCONTACT";
    };
    class RCS_nightEyesOne
    {
        name = "Night Eyes - Zero One";
        sound[] = {"\rcs\CONTACT\RCS_nightEyesOne.ogg", 1, 1};
        theme = "Lead";
        duration = 402;
        musicClass = "RCTCONTACT";
    };
    class RCS_nightEyesTwo
    {
        name = "Night Eyes - Zero Two";
        sound[] = {"\rcs\CONTACT\RCS_nightEyesTwo.ogg", 1, 1};
        theme = "Lead";
        duration = 402;
        musicClass = "RCTCONTACT";
    };
    class RCS_sunriseOne
    {
        name = "Sunrise - Zero One";
        sound[] = {"\rcs\CONTACT\RCS_sunriseOne.ogg", 1, 1};
        theme = "Lead";
        duration = 250;
        musicClass = "RCTCONTACT";
    };
    class RCS_sunriseTwo
    {
        name = "Sunrise - Zero Two";
        sound[] = {"\rcs\CONTACT\RCS_sunriseTwo.ogg", 1, 1};
        theme = "Lead";
        duration = 247;
        musicClass = "RCTCONTACT";
    };
    class RCS_anomalies
    {
        name = "Anomalies";
        sound[] = {"\rcs\CONTACT\RCS_anomalies.ogg", 1, 1};
        theme = "Lead";
        duration = 115;
        musicClass = "RCTCONTACT";
    };
    class RCS_splintered
    {
        name = "Splintered";
        sound[] = {"\rcs\CONTACT\RCS_splintered.ogg", 1, 1};
        theme = "Lead";
        duration = 268;
        musicClass = "RCTCONTACT";
    };
    class RCS_suspended
    {
        name = "Suspended";
        sound[] = {"\rcs\CONTACT\RCS_suspended.ogg", 1, 1};
        theme = "Lead";
        duration = 259;
        musicClass = "RCTCONTACT";
    };
    class RCS_tensionsHigh
    {
        name = "Tensions High";
        sound[] = {"\rcs\CONTACT\RCS_tensionsHigh.ogg", 1, 1};
        theme = "Lead";
        duration = 101;
        musicClass = "RCTCONTACT";
    };
    class RCS_leadFoot
    {
        name = "Lead Foot";
        sound[] = {"\rcs\RELAX\RCS_leadFoot.ogg", 1, 1};
        theme = "Lead";
        duration = 128;
        musicClass = "RCTRELAX";
    };
    class RCS_sixthAnniversary
    {
        name = "This is War - Sixth Anniversary Mix";
        sound[] = {"\rcs\ACTION\RCS_sixthAnniversary.ogg", 1, 1};
        theme = "Lead";
        duration = 149;
        musicClass = "RCTACTION";
    };
    class RCS_holdTheLine
    {
        name = "Hold The Line";
        sound[] = {"\rcs\ACTION\RCS_holdTheLine.ogg", 1, 1};
        theme = "Lead";
        duration = 541;
        musicClass = "RCTACTION";
    };
    class RCS_darkHorizon
    {
        name = "Geneburn - Dark Horizon";
        sound[] = {"\rcs\ACTION\RCS_darkHorizon.ogg", 1, 1};
        theme = "Lead";
        duration = 188;
        musicClass = "RCTACTION";
    };
    class RCS_gbDesolation
    {
        name = "Desolation";
        sound[] = {"\rcs\SAD\RCS_gbDesolation.ogg", 1, 1};
        theme = "Lead";
        duration = 211;
        musicClass = "RCTSAD";
    };
    class RCS_hostileIllusion
    {
        name = "Geneburn - Hostile Illusion";
        sound[] = {"\rcs\ACTION\RCS_hostileIllusion.ogg", 1, 1};
        theme = "Lead";
        duration = 144;
        musicClass = "RCTACTION";
    };
    class RCS_leftBehind
    {
        name = "Geneburn - Left Behind";
        sound[] = {"\rcs\ACTION\RCS_leftBehind.ogg", 1, 1};
        theme = "Lead";
        duration = 156;
        musicClass = "RCTACTION";
    };
    class RCS_ninurata
    {
        name = "Ninurata";
        sound[] = {"\rcs\ACTION\RCS_ninurata.ogg", 1, 1};
        theme = "Lead";
        duration = 181;
        musicClass = "RCTACTION";
    };
    class RCS_ezioFamily
    {
        name = "Jesper Kyd - Ezio's Family";
        sound[] = {"\rcs\SAD\RCS_ezioFamily.ogg", 1, 1};
        theme = "Lead";
        duration = 239;
        musicClass = "RCTSAD";
    };
    class RCS_paintItBlack
    {
        name = "Rolling Stones - Paint it Black";
        sound[] = {"\rcs\MISC\RCS_paintItBlack.ogg", 1, 1};
        theme = "Lead";
        duration = 202;
        musicClass = "RCTMISC";
    };
    class RCS_seeWhatIBecome
    {
        name = "Zack Hemsey - See What I've Become";
        sound[] = {"\rcs\MISC\RCS_seeWhatIBecome.ogg", 1, 1};
        theme = "Lead";
        duration = 234;
        musicClass = "RCTMISC";
    };
    class RCS_blackWarrior
    {
        name = "Black Warrior - Alert One";
        sound[] = {"\rcs\ACTION\RCS_blackWarrior.ogg", 1, 1};
        theme = "Lead";
        duration = 157;
        musicClass = "RCTACTION";
    };
    class RCS_whereAllRoadsEnd
    {
        name = "Where All Roads End";
        sound[] = {"\rcs\MISC\RCS_whereAllRoadsEnd.ogg", 1, 1};
        theme = "Lead";
        duration = 210;
        musicClass = "RCTMISC";
    };
    class RCS_brokenArrow
    {
        name = "Broken Arrow";
        sound[] = {"\rcs\ACTION\RCS_brokenArrow.ogg", 1, 1};
        theme = "Lead";
        duration = 64;
        musicClass = "RCTACTION";
    };
    class RCS_dreamer
    {
        name = "Dreamers";
        sound[] = {"\rcs\STEALTH\RCS_dreamer.ogg", 1, 1};
        theme = "Lead";
        duration = 183;
        musicClass = "RCTSTEALTH";
    };
    class RCS_trappedInTheSystem
    {
        name = "Trapped In the System";
        sound[] = {"\rcs\ACTION\RCS_trappedInTheSystem.ogg", 1, 1};
        theme = "Lead";
        duration = 246;
        musicClass = "RCTACTION";
    };
    class RCS_ghostCoil
    {
        name = "Ghost Coil";
        sound[] = {"\rcs\RELAX\RCS_ghostCoil.ogg", 1, 1};
        theme = "Lead";
        duration = 165;
        musicClass = "RCTRELAX";
    };
    class RCS_takeAndHold
    {
        name = "Joe Kataldo - Take and Hold";
        sound[] = {"\rcs\ACTION\RCS_takeAndHold.ogg", 1, 1};
        theme = "Lead";
        duration = 182;
        musicClass = "RCTACTION";
    };
    class RCS_meatHunterAction
    {
        name = "Joe Kataldo - Meat Hunter Action";
        sound[] = {"\rcs\ACTION\RCS_meatHunterAction.ogg", 1, 1};
        theme = "Lead";
        duration = 87;
        musicClass = "RCTACTION";
    };
    class RCS_finalFlashOfExistence
    {
        name = "Final Flash of Existence";
        sound[] = {"\rcs\MISC\RCS_finalFlashOfExistence.ogg", 1, 1};
        theme = "Lead";
        duration = 251;
        musicClass = "RCTMISC";
    };
    class RCS_warzone
    {
        name = "Warzone";
        sound[] = {"\rcs\ACTION\RCS_warzone.ogg", 1, 1};
        theme = "Lead";
        duration = 156;
        musicClass = "RCTACTION";
    };
    class RCS_theManWhoSoldTheWorld
    {
        name = "The Man Who Sold The World";
        sound[] = {"\rcs\MISC\RCS_theManWhoSoldTheWorld.ogg", 1, 1};
        theme = "Lead";
        duration = 342;
        musicClass = "RCTMISC";
    };
    class RCS_coldWave
    {
        name = "Cold Wave";
        sound[] = {"\rcs\RELAX\RCS_coldWave.ogg", 1, 1};
        theme = "Lead";
        duration = 220;
        musicClass = "RCTRELAX";
    };
    class RCS_hush
    {
        name = "Deep Purple - Hush";
        sound[] = {"\rcs\MISC\RCS_hush.ogg", 1, 1};
        theme = "Lead";
        duration = 252;
        musicClass = "RCTMISC";
    };
    class RCS_betterThanMorphine
    {
        name = "Mac Quayle - Better Than Morphine";
        sound[] = {"\rcs\STEALTH\RCS_betterThanMorphine.ogg", 1, 1};
        theme = "Lead";
        duration = 199;
        musicClass = "RCTSTEALTH";
    };
    class RCS_daemonsNeverStop
    {
        name = "Mac Quayle - Daemons Never Stop";
        sound[] = {"\rcs\RELAX\RCS_daemonsNeverStop.ogg", 1, 1};
        theme = "Lead";
        duration = 127;
        musicClass = "RCTRELAX";
    };
    class RCS_impenetrable
    {
        name = "Mac Quayle - Impenetrable";
        sound[] = {"\rcs\ACTION\RCS_impenetrable.ogg", 1, 1};
        theme = "Lead";
        duration = 144;
        musicClass = "RCTACTION";
    };
    class RCS_oneInControl
    {
        name = "Mac Quayle - One In Control";
        sound[] = {"\rcs\STEALTH\RCS_oneInControl.ogg", 1, 1};
        theme = "Lead";
        duration = 79;
        musicClass = "RCTSTEALTH";
    };
    class RCS_xenon
    {
        name = "Xenon";
        sound[] = {"\rcs\RELAX\RCS_xenon.ogg", 1, 1};
        theme = "Lead";
        duration = 381;
        musicClass = "RCTRELAX";
    };
    class RCS_extractionPoint
    {
        name = "Extraction Point";
        sound[] = {"\rcs\ACTION\RCS_extractionPoint.ogg", 1, 1};
        theme = "Lead";
        duration = 215;
        musicClass = "RCTACTION";
    };
    class RCS_blackHeat
    {
        name = "Ross Bugden - Black Heat";
        sound[] = {"\rcs\RELAX\RCS_blackHeat.ogg", 1, 1};
        theme = "Lead";
        duration = 120;
        musicClass = "RCTRELAX";
    };
    class RCS_busyEarning
    {
        name = "Jungle - Busy Earning";
        sound[] = {"\rcs\MISC\RCS_busyEarning.ogg", 1, 1};
        theme = "Lead";
        duration = 185;
        musicClass = "RCTMISC";
    };
    class RCS_madameExecutioner
    {
        name = "Mac Quayle - Madame Executioner";
        sound[] = {"\rcs\SAD\RCS_madameExecutioner.ogg", 1, 1};
        theme = "Lead";
        duration = 248;
        musicClass = "RCTSAD";
    };
    class RCS_intercepted
    {
        name = "Intercepted";
        sound[] = {"\rcs\ACTION\RCS_intercepted.ogg", 1, 1};
        theme = "Lead";
        duration = 70;
        musicClass = "RCTACTION";
    };
    class RCS_overthrown
    {
        name = "Overthrown";
        sound[] = {"\rcs\ACTION\RCS_overthrown.ogg", 1, 1};
        theme = "Lead";
        duration = 279;
        musicClass = "RCTACTION";
    };
    class RCS_thatsNoHuman
    {
        name = "That's No Human";
        sound[] = {"\rcs\ACTION\RCS_thatsNoHuman.ogg", 1, 1};
        theme = "Lead";
        duration = 227;
        musicClass = "RCTACTION";
    };
    class RCS_somethingIsHere
    {
        name = "Something Is Here";
        sound[] = {"\rcs\ACTION\RCS_somethingIsHere.ogg", 1, 1};
        theme = "Lead";
        duration = 336;
        musicClass = "RCTACTION";
    };
    class RCS_securityTripped
    {
        name = "Security Tripped";
        sound[] = {"\rcs\ACTION\RCS_securityTripped.ogg", 1, 1};
        theme = "Lead";
        duration = 184;
        musicClass = "RCTACTION";
    };
    class RCS_roamingTheFacility
    {
        name = "Roaming the Facility";
        sound[] = {"\rcs\STEALTH\RCS_roamingTheFacility.ogg", 1, 1};
        theme = "Lead";
        duration = 132;
        musicClass = "RCTSTEALTH";
    };
    class RCS_researchFacility
    {
        name = "Research Facility";
        sound[] = {"\rcs\STEALTH\RCS_researchFacility.ogg", 1, 1};
        theme = "Lead";
        duration = 132;
        musicClass = "RCTSTEALTH";
    };
    class RCS_researchChamber
    {
        name = "Research Chamber";
        sound[] = {"\rcs\STEALTH\RCS_researchChamber.ogg", 1, 1};
        theme = "Lead";
        duration = 77;
        musicClass = "RCTSTEALTH";
    };
    class RCS_organismLocated
    {
        name = "Organism Located";
        sound[] = {"\rcs\ACTION\RCS_organismLocated.ogg", 1, 1};
        theme = "Lead";
        duration = 336;
        musicClass = "RCTACTION";
    };
    class RCS_hostileOrganismDetected
    {
        name = "Hostile Organism Detected";
        sound[] = {"\rcs\ACTION\RCS_hostileOrganismDetected.ogg", 1, 1};
        theme = "Lead";
        duration = 239;
        musicClass = "RCTACTION";
    };
    class RCS_dontMakeASound
    {
        name = "Don't Make a Sound";
        sound[] = {"\rcs\STEALTH\RCS_dontMakeASound.ogg", 1, 1};
        theme = "Lead";
        duration = 148;
        musicClass = "RCTSTEALTH";
    };
    class RCS_containmentFault
    {
        name = "Containment Fault";
        sound[] = {"\rcs\ACTION\RCS_containmentFault.ogg", 1, 1};
        theme = "Lead";
        duration = 227;
        musicClass = "RCTACTION";
    };
    class RCS_combatSystems
    {
        name = "Combat Systems";
        sound[] = {"\rcs\ACTION\RCS_combatSystems.ogg", 1, 1};
        theme = "Lead";
        duration = 336;
        musicClass = "RCTACTION";
    };
    class RCS_lePerv
    {
        name = "Le Perv";
        sound[] = {"\rcs\ACTION\RCS_lePerv.ogg", 1, 1};
        theme = "Lead";
        duration = 249;
        musicClass = "RCTACTION";
    };
    class RCS_turboKiller
    {
        name = "Turbo Killer";
        sound[] = {"\rcs\ACTION\RCS_turboKiller.ogg", 1, 1};
        theme = "Lead";
        duration = 335;
        musicClass = "RCTACTION";
    };
    class RCS_rangersLeadTheWay
    {
        name = "Rangers Lead the Way - Door Kickers 2";
        sound[] = {"\rcs\ACTION\RCS_rangersLeadTheWay.ogg", 1, 1};
        theme = "Lead";
        duration = 172;
        musicClass = "RCTACTION";
    };
    class RCS_kickingDoors
    {
        name = "Kicking Doors - Door Kickers 2";
        sound[] = {"\rcs\ACTION\RCS_kickingDoors.ogg", 1, 1};
        theme = "Lead";
        duration = 224;
        musicClass = "RCTACTION";
    };
    class RCS_slingAndDraw
    {
        name = "Sling 'n Draw - Door Kickers 2";
        sound[] = {"\rcs\ACTION\RCS_slingAndDraw.ogg", 1, 1};
        theme = "Lead";
        duration = 182;
        musicClass = "RCTACTION";
    };
    class RCS_alphaGo
    {
        name = "Alpha, Go - Door Kickers 2";
        sound[] = {"\rcs\ACTION\RCS_alphaGo.ogg", 1, 1};
        theme = "Lead";
        duration = 234;
        musicClass = "RCTACTION";
    };
    class RCS_domeOrGoHome
    {
        name = "Dome Or Go Home - Door Kickers 2";
        sound[] = {"\rcs\ACTION\RCS_domeOrGoHome.ogg", 1, 1};
        theme = "Lead";
        duration = 213;
        musicClass = "RCTACTION";
    };
    class RCS_marketCrash
    {
        name = "Market Crash - Door Kickers 2";
        sound[] = {"\rcs\ACTION\RCS_marketCrash.ogg", 1, 1};
        theme = "Lead";
        duration = 185;
        musicClass = "RCTACTION";
    };
    class RCS_risingSun
    {
        name = "Rising Sun";
        sound[] = {"\rcs\ACTION\RCS_risingSun.ogg", 1, 1};
        theme = "Lead";
        duration = 168;
        musicClass = "RCTACTION";
    };
    class RCS_roseAtEclipse
    {
        name = "Rose At Eclipse";
        sound[] = {"\rcs\ACTION\RCS_roseAtEclipse.ogg", 1, 1};
        theme = "Lead";
        duration = 231;
        musicClass = "RCTACTION";
    };
    class RCS_rocketRace
    {
        name = "Rocket Race";
        sound[] = {"\rcs\ACTION\RCS_rocketRace.ogg", 1, 1};
        theme = "Lead";
        duration = 236;
        musicClass = "RCTACTION";
    };
    class RCS_forgottenDesert
    {
        name = "Forgotten Desert";
        sound[] = {"\rcs\STEALTH\RCS_forgottenDesert.ogg", 1, 1};
        theme = "Lead";
        duration = 422;
        musicClass = "RCTSTEALTH";
    };
    class RCS_lostJungle
    {
        name = "Lost Jungle";
        sound[] = {"\rcs\STEALTH\RCS_lostJungle.ogg", 1, 1};
        theme = "Lead";
        duration = 349;
        musicClass = "RCTSTEALTH";
    };
    class RCS_designedToKill
    {
        name = "Designed to Kill";
        sound[] = {"\rcs\STEALTH\RCS_designedToKill.ogg", 1, 1};
        theme = "Lead";
        duration = 243;
        musicClass = "RCTSTEALTH";
    };
    class RCS_suffer
    {
        name = "Suffer";
        sound[] = {"\rcs\STEALTH\RCS_suffer.ogg", 1, 1};
        theme = "Lead";
        duration = 111;
        musicClass = "RCTSTEALTH";
    };
    class RCS_ventilationSystemCompromised
    {
        name = "Ventilation System Compromised";
        sound[] = {"\rcs\STEALTH\RCS_ventilationSystemCompromised.ogg", 1, 1};
        theme = "Lead";
        duration = 274;
        musicClass = "RCTSTEALTH";
    };
    class RCS_artificialAbomination
    {
        name = "Artificial Abomination";
        sound[] = {"\rcs\STEALTH\RCS_artificialAbomination.ogg", 1, 1};
        theme = "Lead";
        duration = 96;
        musicClass = "RCTSTEALTH";
    };
    class RCS_getOut
    {
        name = "Get Out";
        sound[] = {"\rcs\STEALTH\RCS_getOut.ogg", 1, 1};
        theme = "Lead";
        duration = 113;
        musicClass = "RCTSTEALTH";
    };
    class RCS_salvagers
    {
        name = "Salvagers";
        sound[] = {"\rcs\RELAX\RCS_salvagers.ogg", 1, 1};
        theme = "Lead";
        duration = 173;
        musicClass = "RCTRELAX";
    };
    class RCS_convoy
    {
        name = "Convoy";
        sound[] = {"\rcs\RELAX\RCS_convoy.ogg", 1, 1};
        theme = "Lead";
        duration = 169;
        musicClass = "RCTRELAX";
    };
    class RCS_perimeterDefense
    {
        name = "Perimeter Defense";
        sound[] = {"\rcs\ACTION\RCS_perimeterDefense.ogg", 1, 1};
        theme = "Lead";
        duration = 133;
        musicClass = "RCTACTION";
    };
    class RCS_heartbreaker
    {
        name = "Heartbreaker";
        sound[] = {"\rcs\SAD\RCS_heartbreaker.ogg", 1, 1};
        theme = "Lead";
        duration = 266;
        musicClass = "RCTSAD";
    };
    class RCS_stalkerSad
    {
        name = "S-A-D";
        sound[] = {"\rcs\STEALTH\RCS_stalkerSad.ogg", 1, 1};
        theme = "Lead";
        duration = 275;
        musicClass = "RCTSTEALTH";
    };
    class RCS_radwind
    {
        name = "Radwind";
        sound[] = {"\rcs\STEALTH\RCS_radwind.ogg", 1, 1};
        theme = "Lead";
        duration = 126;
        musicClass = "RCTSTEALTH";
    };
    class RCS_deadCities
    {
        name = "Dead Cities";
        sound[] = {"\rcs\STEALTH\RCS_deadCities.ogg", 1, 1};
        theme = "Lead";
        duration = 283;
        musicClass = "RCTSTEALTH";
    };
    class RCS_pripyat
    {
        name = "Pripyat";
        sound[] = {"\rcs\STEALTH\RCS_pripyat.ogg", 1, 1};
        theme = "Lead";
        duration = 286;
        musicClass = "RCTSTEALTH";
    };
    class RCS_ghostCity
    {
        name = "Ghost City";
        sound[] = {"\rcs\STEALTH\RCS_ghostCity.ogg", 1, 1};
        theme = "Lead";
        duration = 279;
        musicClass = "RCTSTEALTH";
    };
    class RCS_jpBankruptSea
    {
        name = "Jose Pavli - Bankrupt Sea";
        sound[] = {"\rcs\ACTION\RCS_jpBankruptSea.ogg", 1, 1};
        theme = "Lead";
        duration = 265;
        musicClass = "RCTACTION";
    };
    class RCS_jpJourneyWest
    {
        name = "Jose Pavli - Journey West";
        sound[] = {"\rcs\ACTION\RCS_jpJourneyWest.ogg", 1, 1};
        theme = "Lead";
        duration = 319;
        musicClass = "RCTACTION";
    };
    class RCS_jpPeacekeepers
    {
        name = "Jose Pavli - Peacekeepers";
        sound[] = {"\rcs\ACTION\RCS_jpPeacekeepers.ogg", 1, 1};
        theme = "Lead";
        duration = 185;
        musicClass = "RCTACTION";
    };
    class RCS_jpPeacekeepersExtended
    {
        name = "Jose Pavli - Peacekeepers (Extended)";
        sound[] = {"\rcs\ACTION\RCS_jpPeacekeepersExtended.ogg", 1, 1};
        theme = "Lead";
        duration = 361;
        musicClass = "RCTACTION";
    };
    class RCS_jpEminentDomain
    {
        name = "Jose Pavli - Eminent Domain";
        sound[] = {"\rcs\ACTION\RCS_jpEminentDomain.ogg", 1, 1};
        theme = "Lead";
        duration = 388;
        musicClass = "RCTACTION";
    };
    class RCS_jpIndependanceForce
    {
        name = "Jose Pavli - Independance Force";
        sound[] = {"\rcs\ACTION\RCS_jpIndependanceForce.ogg", 1, 1};
        theme = "Lead";
        duration = 356;
        musicClass = "RCTACTION";
    };
    class RCS_jpOperationBlackout
    {
        name = "Jose Pavli - Operation Blackout";
        sound[] = {"\rcs\ACTION\RCS_jpOperationBlackout.ogg", 1, 1};
        theme = "Lead";
        duration = 401;
        musicClass = "RCTACTION";
    };
    class RCS_jpValkyriesCall
    {
        name = "Jose Pavli - Valkyrie's Call";
        sound[] = {"\rcs\ACTION\RCS_jpValkyriesCall.ogg", 1, 1};
        theme = "Lead";
        duration = 186;
        musicClass = "RCTACTION";
    };
    class RCS_timeWindow
    {
        name = "PD2 - Time Window";
        sound[] = {"\rcs\ACTION\RCS_timeWindow.ogg", 1, 1};
        theme = "Lead";
        duration = 159;
        musicClass = "RCTACTION";
    };
    class RCS_callingAllUnits
    {
        name = "PD2 - Calling All Units";
        sound[] = {"\rcs\ACTION\RCS_callingAllUnits.ogg", 1, 1};
        theme = "Lead";
        duration = 162;
        musicClass = "RCTACTION";
    };
    class RCS_andNowWeWait
    {
        name = "PD2 - And Now We Wait";
        sound[] = {"\rcs\STEALTH\RCS_andNowWeWait.ogg", 1, 1};
        theme = "Lead";
        duration = 231;
        musicClass = "RCTSTEALTH";
    };
    class RCS_jpCalamity
    {
        name = "Jose Pavli - Calamity";
        sound[] = {"\rcs\ACTION\RCS_jpCalamity.ogg", 1, 1};
        theme = "Lead";
        duration = 236;
        musicClass = "RCTACTION";
    };
    class RCS_jpClearSkies
    {
        name = "Jose Pavli - Clear Skies";
        sound[] = {"\rcs\ACTION\RCS_jpClearSkies.ogg", 1, 1};
        theme = "Lead";
        duration = 360;
        musicClass = "RCTACTION";
    };
    class RCS_trazDamjiRoots
    {
        name = "Traz Damji - Roots";
        sound[] = {"\rcs\RELAX\RCS_trazDamjiRoots.ogg", 1, 1};
        theme = "Lead";
        duration = 181;
        musicClass = "RCTRELAX";
    };
    class RCS_jpFireAndDust
    {
        name = "Jose Pavli - Fire and Dust";
        sound[] = {"\rcs\ACTION\RCS_jpFireAndDust.ogg", 1, 1};
        theme = "Lead";
        duration = 293;
        musicClass = "RCTACTION";
    };
    class RCS_jpCoronation
    {
        name = "Jose Pavli - Coronation";
        sound[] = {"\rcs\SAD\RCS_jpCoronation.ogg", 1, 1};
        theme = "Lead";
        duration = 160;
        musicClass = "RCTSAD";
    };
    class RCS_jpFallingSkies
    {
        name = "Jose Pavli - Falling Skies";
        sound[] = {"\rcs\ACTION\RCS_jpFallingSkies.ogg", 1, 1};
        theme = "Lead";
        duration = 312;
        musicClass = "RCTACTION";
    };
    class RCS_mileHighClub
    {
        name = "Mile High Club";
        sound[] = {"\rcs\ACTION\RCS_mileHighClub.ogg", 1, 1};
        theme = "Lead";
        duration = 135;
        musicClass = "RCTACTION";
    };
    class RCS_tidesOfSteel
    {
        name = "Tides of Steel";
        sound[] = {"\rcs\ACTION\RCS_tidesOfSteel.ogg", 1, 1};
        theme = "Lead";
        duration = 161;
        musicClass = "RCTACTION";
    };
    class RCS_lapseInTheSynapse
    {
        name = "Lapse In The Synapse";
        sound[] = {"\rcs\ACTION\RCS_lapseInTheSynapse.ogg", 1, 1};
        theme = "Lead";
        duration = 117;
        musicClass = "RCTACTION";
    };
    class RCS_desertMoonSandCrawlers
    {
        name = "Desert Moon - Sand Crawlers";
        sound[] = {"\rcs\STEALTH\RCS_desertMoonSandCrawlers.ogg", 1, 1};
        theme = "Lead";
        duration = 229;
        musicClass = "RCTSTEALTH";
    };
    class RCS_desertMoonHunters
    {
        name = "Desert Moon - Hunters";
        sound[] = {"\rcs\ACTION\RCS_desertMoonHunters.ogg", 1, 1};
        theme = "Lead";
        duration = 142;
        musicClass = "RCTACTION";
    };
    class RCS_desertMoonDamned
    {
        name = "Desert Moon - Damned";
        sound[] = {"\rcs\ACTION\RCS_desertMoonDamned.ogg", 1, 1};
        theme = "Lead";
        duration = 142;
        musicClass = "RCTACTION";
    };
    class RCS_desertMoonRescueInbound
    {
        name = "Desert Moon - Rescue Inbound";
        sound[] = {"\rcs\ACTION\RCS_desertMoonRescueInbound.ogg", 1, 1};
        theme = "Lead";
        duration = 161;
        musicClass = "RCTACTION";
    };
    class RCS_danMillidgeInfiltrate
    {
        name = "Dan Millidge - Infiltrate";
        sound[] = {"\rcs\STEALTH\RCS_danMillidgeInfiltrate.ogg", 1, 1};
        theme = "Lead";
        duration = 195;
        musicClass = "RCTSTEALTH";
    };
    class RCS_danMillidgeReconnaissance
    {
        name = "Dan Millidge - Reconnaissance";
        sound[] = {"\rcs\STEALTH\RCS_danMillidgeReconnaissance.ogg", 1, 1};
        theme = "Lead";
        duration = 241;
        musicClass = "RCTSTEALTH";
    };
    class RCS_danMillidgeLastChance
    {
        name = "Dan Millidge - Last Chance";
        sound[] = {"\rcs\ACTION\RCS_danMillidgeLastChance.ogg", 1, 1};
        theme = "Lead";
        duration = 241;
        musicClass = "RCTACTION";
    };
    class RCS_danMillidgeWeaponOfChoice
    {
        name = "Dan Millidge - Weapon Of Choice";
        sound[] = {"\rcs\ACTION\RCS_danMillidgeWeaponOfChoice.ogg", 1, 1};
        theme = "Lead";
        duration = 207;
        musicClass = "RCTACTION";
    };
    class RCS_danMillidgeNoSurvivors
    {
        name = "Dan Millidge - No Survivors";
        sound[] = {"\rcs\ACTION\RCS_danMillidgeNoSurvivors.ogg", 1, 1};
        theme = "Lead";
        duration = 249;
        musicClass = "RCTACTION";
    };
    class RCS_idahoClone486
    {
        name = "Idaho Clone 486";
        sound[] = {"\rcs\STEALTH\RCS_idahoClone486.ogg", 1, 1};
        theme = "Lead";
        duration = 244;
        musicClass = "RCTSTEALTH";
    };
    class RCS_joeKataldoMeatHunter
    {
        name = "Joe Kataldo - Meat Hunter";
        sound[] = {"\rcs\STEALTH\RCS_joeKataldoMeatHunter.ogg", 1, 1};
        theme = "Lead";
        duration = 332;
        musicClass = "RCTSTEALTH";
    };
    class RCS_triumList
    {
        name = "Trium - List";
        sound[] = {"\rcs\ACTION\RCS_triumList.ogg", 1, 1};
        theme = "Lead";
        duration = 348;
        musicClass = "RCTACTION";
    };
    class RCS_triumNightManeuvers
    {
        name = "Trium - Night Maneuvers";
        sound[] = {"\rcs\ACTION\RCS_triumNightManeuvers.ogg", 1, 1};
        theme = "Lead";
        duration = 284;
        musicClass = "RCTACTION";
    };
    class RCS_triumPlanetaryDefenseSystems
    {
        name = "Trium - Planetary Defense Systems";
        sound[] = {"\rcs\ACTION\RCS_triumPlanetaryDefenseSystems.ogg", 1, 1};
        theme = "Lead";
        duration = 495;
        musicClass = "RCTACTION";
    };
    class RCS_dwhCutThePipe
    {
        name = "Deepwater Horizon - Cut The Pipe";
        sound[] = {"\rcs\STEALTH\RCS_dwhCutThePipe.ogg", 1, 1};
        theme = "Lead";
        duration = 318;
        musicClass = "RCTSTEALTH";
    };
    class RCS_dwhTheMonster
    {
        name = "Deepwater Horizon - The Monster";
        sound[] = {"\rcs\STEALTH\RCS_dwhTheMonster.ogg", 1, 1};
        theme = "Lead";
        duration = 223;
        musicClass = "RCTSTEALTH";
    };
    class RCS_cc3YellowPlanet
    {
        name = "CC3 - Yellow Planet";
        sound[] = {"\rcs\STEALTH\RCS_cc3YellowPlanet.ogg", 1, 1};
        theme = "Lead";
        duration = 132;
        musicClass = "RCTSTEALTH";
    };
    class RCS_cc3ResearchInitiative
    {
        name = "CC3 - Research Initiative";
        sound[] = {"\rcs\STEALTH\RCS_cc3ResearchInitiative.ogg", 1, 1};
        theme = "Lead";
        duration = 134;
        musicClass = "RCTSTEALTH";
    };
    class RCS_cc3RedAshes
    {
        name = "CC3 - Red Ashes";
        sound[] = {"\rcs\STEALTH\RCS_cc3RedAshes.ogg", 1, 1};
        theme = "Lead";
        duration = 138;
        musicClass = "RCTSTEALTH";
    };
    class RCS_cc3Infestation
    {
        name = "CC3 - Infestation";
        sound[] = {"\rcs\STEALTH\RCS_cc3Infestation.ogg", 1, 1};
        theme = "Lead";
        duration = 255;
        musicClass = "RCTSTEALTH";
    };
    class RCS_cc3BlackDawn
    {
        name = "CC3 - Black Dawn";
        sound[] = {"\rcs\STEALTH\RCS_cc3BlackDawn.ogg", 1, 1};
        theme = "Lead";
        duration = 221;
        musicClass = "RCTSTEALTH";
    };
    class RCS_cc3Apocalypse
    {
        name = "CC3 - Apocalypse";
        sound[] = {"\rcs\ACTION\RCS_cc3Apocalypse.ogg", 1, 1};
        theme = "Lead";
        duration = 156;
        musicClass = "RCTACTION";
    };
    class RCS_cc3Havoc
    {
        name = "CC3 - Havoc";
        sound[] = {"\rcs\ACTION\RCS_cc3Havoc.ogg", 1, 1};
        theme = "Lead";
        duration = 126;
        musicClass = "RCTACTION";
    };
    class RCS_cc3HeavyHanded
    {
        name = "CC3 - Heavy Handed";
        sound[] = {"\rcs\ACTION\RCS_cc3HeavyHanded.ogg", 1, 1};
        theme = "Lead";
        duration = 212;
        musicClass = "RCTACTION";
    };
    class RCS_danMillidgeOnlyTheBrave
    {
        name = "Dan Millidge - Only The Brave";
        sound[] = {"\rcs\ACTION\RCS_danMillidgeOnlyTheBrave.ogg", 1, 1};
        theme = "Lead";
        duration = 250;
        musicClass = "RCTACTION";
    };
    class RCS_jpPresidia
    {
        name = "Jose Pavli - Presidia";
        sound[] = {"\rcs\ACTION\RCS_jpPresidia.ogg", 1, 1};
        theme = "Lead";
        duration = 318;
        musicClass = "RCTACTION";
    };
    class RCS_jpKings
    {
        name = "Jose Pavli - Kings";
        sound[] = {"\rcs\ACTION\RCS_jpKings.ogg", 1, 1};
        theme = "Lead";
        duration = 424;
        musicClass = "RCTACTION";
    };
    class RCS_jpContractDetailsBriefingVersion
    {
        name = "Jose Pavli - Contract Details (Extended Briefing Version)";
        sound[] = {"\rcs\RELAX\RCS_jpContractDetailsBriefingVersion.ogg", 1, 1};
        theme = "Lead";
        duration = 417;
        musicClass = "RCTRELAX";
    };
    class RCS_knivesInTheDark
    {
        name = "Knives In The Dark - Door Kickers 2";
        sound[] = {"\rcs\STEALTH\RCS_knivesInTheDark.ogg", 1, 1};
        theme = "Lead";
        duration = 232;
        musicClass = "RCTSTEALTH";
    };
    class RCS_thisIsWarSynthwaveRemix
    {
        name = "This Is War - Synthwave Remix";
        sound[] = {"\rcs\ACTION\RCS_thisIsWarSynthwaveRemix.ogg", 1, 1};
        theme = "Lead";
        duration = 248;
        musicClass = "RCTACTION";
    };
    class RCS_jpDaedalus
    {
        name = "Jose Pavli - Daedalus";
        sound[] = {"\rcs\ACTION\RCS_jpDaedalus.ogg", 1, 1};
        theme = "Lead";
        duration = 311;
        musicClass = "RCTACTION";
    };
    class RCS_jpPyroclastic
    {
        name = "Jose Pavli - Pyroclastic";
        sound[] = {"\rcs\ACTION\RCS_jpPyroclastic.ogg", 1, 1};
        theme = "Lead";
        duration = 369;
        musicClass = "RCTACTION";
    };
    class RCS_jpFireWithFire
    {
        name = "Jose Pavli - Fire With Fire";
        sound[] = {"\rcs\ACTION\RCS_jpFireWithFire.ogg", 1, 1};
        theme = "Lead";
        duration = 345;
        musicClass = "RCTACTION";
    };
    class RCS_jpRedSea
    {
        name = "Jose Pavli - Red Sea";
        sound[] = {"\rcs\ACTION\RCS_jpRedSea.ogg", 1, 1};
        theme = "Lead";
        duration = 363;
        musicClass = "RCTACTION";
    };
    class RCS_solisPlanum
    {
        name = "Solis Planum";
        sound[] = {"\rcs\RELAX\RCS_solisPlanum.ogg", 1, 1};
        theme = "Lead";
        duration = 108;
        musicClass = "RCTRELAX";
    };
    class RCS_meniTessera
    {
        name = "Meni Tessera";
        sound[] = {"\rcs\RELAX\RCS_meniTessera.ogg", 1, 1};
        theme = "Lead";
        duration = 89;
        musicClass = "RCTRELAX";
    };
    class RCS_hellasPlanitia
    {
        name = "Hellas Planitia";
        sound[] = {"\rcs\RELAX\RCS_hellasPlanitia.ogg", 1, 1};
        theme = "Lead";
        duration = 110;
        musicClass = "RCTRELAX";
    };
    class RCS_ronPenthouseAmbient
    {
        name = "Ready or Not - Penthouse (Ambient)";
        sound[] = {"\rcs\STEALTH\RCS_ronPenthouseAmbient.ogg", 1, 1};
        theme = "Lead";
        duration = 547;
        musicClass = "RCTSTEALTH";
    }; 
    class RCS_ronPenthouseCombat
    {
        name = "Ready or Not - Penthouse (Combat)";
        sound[] = {"\rcs\ACTION\RCS_ronPenthouseCombat.ogg", 1, 1};
        theme = "Lead";
        duration = 191;
        musicClass = "RCTACTION";
    };
    class RCS_edNonHuman
    {
        name = "Elite Dangerous - Non-Human";
        sound[] = {"\rcs\ACTION\RCS_edNonHuman.ogg", 1, 1};
        theme = "Lead";
        duration = 342;
        musicClass = "RCTACTION";
    };
    class RCS_edTrespasser
    {
        name = "Elite Dangerous - Trespasser";
        sound[] = {"\rcs\ACTION\RCS_edTrespasser.ogg", 1, 1};
        theme = "Lead";
        duration = 391;
        musicClass = "RCTACTION";
    };
    class RCS_edAnayol
    {
        name = "Elite Dangerous - Anayol";
        sound[] = {"\rcs\RELAX\RCS_edAnayol.ogg", 1, 1};
        theme = "Lead";
        duration = 74;
        musicClass = "RCTRELAX";
    };
    class RCS_edArcturusRising
    {
        name = "Elite Dangerous - Arcturus Rising";
        sound[] = {"\rcs\RELAX\RCS_edArcturusRising.ogg", 1, 1};
        theme = "Lead";
        duration = 96;
        musicClass = "RCTRELAX";
    };
    class RCS_edBlueGiant
    {
        name = "Elite Dangerous - Blue Giant";
        sound[] = {"\rcs\RELAX\RCS_edBlueGiant.ogg", 1, 1};
        theme = "Lead";
        duration = 81;
        musicClass = "RCTRELAX";
    };
    class RCS_edCanopus
    {
        name = "Elite Dangerous - Canopus";
        sound[] = {"\rcs\RELAX\RCS_edCanopus.ogg", 1, 1};
        theme = "Lead";
        duration = 73;
        musicClass = "RCTRELAX";
    };
    class RCS_edDeltaPhoenicis
    {
        name = "Elite Dangerous - Delta Phoenicis";
        sound[] = {"\rcs\RELAX\RCS_edDeltaPhoenicis.ogg", 1, 1};
        theme = "Lead";
        duration = 90;
        musicClass = "RCTRELAX";
    };
    class RCS_edFawoal
    {
        name = "Elite Dangerous - Fawoal";
        sound[] = {"\rcs\RELAX\RCS_edFawoal.ogg", 1, 1};
        theme = "Lead";
        duration = 96;
        musicClass = "RCTRELAX";
    };
    class RCS_edHoagsObject
    {
        name = "Elite Dangerous - Hoag's Object";
        sound[] = {"\rcs\RELAX\RCS_edHoagsObject.ogg", 1, 1};
        theme = "Lead";
        duration = 92;
        musicClass = "RCTRELAX";
    };
    class RCS_edLiabeze
    {
        name = "Elite Dangerous - Liabeze";
        sound[] = {"\rcs\RELAX\RCS_edLiabeze.ogg", 1, 1};
        theme = "Lead";
        duration = 91;
        musicClass = "RCTRELAX";
    };
    class RCS_edLonelyPulsar
    {
        name = "Elite Dangerous - Lonely Pulsar";
        sound[] = {"\rcs\RELAX\RCS_edLonelyPulsar.ogg", 1, 1};
        theme = "Lead";
        duration = 86;
        musicClass = "RCTRELAX";
    };
    class RCS_edQuator
    {
        name = "Elite Dangerous - Quator";
        sound[] = {"\rcs\RELAX\RCS_edQuator.ogg", 1, 1};
        theme = "Lead";
        duration = 81;
        musicClass = "RCTRELAX";
    };
    class RCS_edTarachTor
    {
        name = "Elite Dangerous - Tarach Tor";
        sound[] = {"\rcs\RELAX\RCS_edTarachTor.ogg", 1, 1};
        theme = "Lead";
        duration = 88;
        musicClass = "RCTRELAX";
    };
    class RCS_edTerraMater
    {
        name = "Elite Dangerous - Terra Mater";
        sound[] = {"\rcs\RELAX\RCS_edTerraMater.ogg", 1, 1};
        theme = "Lead";
        duration = 87;
        musicClass = "RCTRELAX";
    };
    class RCS_edTheGalacticRose
    {
        name = "Elite Dangerous - The Galactic Rose";
        sound[] = {"\rcs\RELAX\RCS_edTheGalacticRose.ogg", 1, 1};
        theme = "Lead";
        duration = 109;
        musicClass = "RCTRELAX";
    };
    class RCS_edTheRetinaNebula
    {
        name = "Elite Dangerous - The Retina Nebula";
        sound[] = {"\rcs\RELAX\RCS_edTheRetinaNebula.ogg", 1, 1};
        theme = "Lead";
        duration = 93;
        musicClass = "RCTRELAX";
    };
    class RCS_ozActOfDeception
    {
        name = "Olivier Zuccaro - Act Of Deception";
        sound[] = {"\rcs\STEALTH\RCS_ozActOfDeception.ogg", 1, 1};
        theme = "Lead";
        duration = 168;
        musicClass = "RCTSTEALTH";
    };
    class RCS_ozAssaultOnTraitorsFrontiers
    {
        name = "Olivier Zuccaro - Assault On Traitor's Frontiers";
        sound[] = {"\rcs\ACTION\RCS_ozAssaultOnTraitorsFrontiers.ogg", 1, 1};
        theme = "Lead";
        duration = 267;
        musicClass = "RCTACTION";
    };
    class RCS_ozFinalEdict
    {
        name = "Olivier Zuccaro - Final Edict";
        sound[] = {"\rcs\STEALTH\RCS_ozFinalEdict.ogg", 1, 1};
        theme = "Lead";
        duration = 292;
        musicClass = "RCTSTEALTH";
    };
    class RCS_ozHomeworldDownfall
    {
        name = "Olivier Zuccaro - Homeworld Downfall";
        sound[] = {"\rcs\ACTION\RCS_ozHomeworldDownfall.ogg", 1, 1};
        theme = "Lead";
        duration = 322;
        musicClass = "RCTACTION";
    };
    class RCS_ozHouseOfTheDyingSun
    {
        name = "Olivier Zuccaro - House Of The Dying Sun";
        sound[] = {"\rcs\ACTION\RCS_ozHouseOfTheDyingSun.ogg", 1, 1};
        theme = "Lead";
        duration = 163;
        musicClass = "RCTACTION";
    };
    class RCS_ozOnslaught
    {
        name = "Olivier Zuccaro - Onslaught";
        sound[] = {"\rcs\ACTION\RCS_ozOnslaught.ogg", 1, 1};
        theme = "Lead";
        duration = 356;
        musicClass = "RCTACTION";
    };
    class RCS_ozShroudedAssassins
    {
        name = "Olivier Zuccaro - Shrouded Assassins";
        sound[] = {"\rcs\STEALTH\RCS_ozShroudedAssassins.ogg", 1, 1};
        theme = "Lead";
        duration = 170;
        musicClass = "RCTSTEALTH";
    };
    class RCS_allButSystematicChaos
    {
        name = "All But Systematic Chaos";
        sound[] = {"\rcs\ACTION\RCS_allButSystematicChaos.ogg", 1, 1};
        theme = "Lead";
        duration = 213;
        musicClass = "RCTACTION";
    };
    class RCS_allButSystematicChaosExtended
    {
        name = "All But Systematic Chaos (Extended)";
        sound[] = {"\rcs\ACTION\RCS_allButSystematicChaosExtended.ogg", 1, 1};
        theme = "Lead";
        duration = 391;
        musicClass = "RCTACTION";
    };
    class RCS_zackTheRabidRipper
    {
        name = "Zack The Rabid Ripper";
        sound[] = {"\rcs\ACTION\RCS_zackTheRabidRipper.ogg", 1, 1};
        theme = "Lead";
        duration = 195;
        musicClass = "RCTACTION";
    };
    class RCS_extraterrestrialBroadcast
    {
        name = "Extraterrestrial Broadcast";
        sound[] = {"\rcs\ACTION\RCS_extraterrestrialBroadcast.ogg", 1, 1};
        theme = "Lead";
        duration = 282;
        musicClass = "RCTACTION";
    };
    class RCS_edAnarchy
    {
        name = "Elite Dangerous - Anarchy";
        sound[] = {"\rcs\RELAX\RCS_edAnarchy.ogg", 1, 1};
        theme = "Lead";
        duration = 205;
        musicClass = "RCTRELAX";
    };
    class RCS_engineRoomWhales
    {
        name = "Engine Room Whales";
        sound[] = {"\rcs\STEALTH\RCS_engineRoomWhales.ogg", 1, 1};
        theme = "Lead";
        duration = 187;
        musicClass = "RCTSTEALTH";
    };
    class RCS_pelagicLayers
    {
        name = "Pelagic Layers";
        sound[] = {"\rcs\STEALTH\RCS_pelagicLayers.ogg", 1, 1};
        theme = "Lead";
        duration = 252;
        musicClass = "RCTSTEALTH";
    };
    class RCS_narcosis
    {
        name = "Narcosis";
        sound[] = {"\rcs\STEALTH\RCS_narcosis.ogg", 1, 1};
        theme = "Lead";
        duration = 960;
        musicClass = "RCTSTEALTH";
    };
    class RCS_aVisionOfTheHidden
    {
        name = "A Vision Of The Hidden";
        sound[] = {"\rcs\STEALTH\RCS_aVisionOfTheHidden.ogg", 1, 1};
        theme = "Lead";
        duration = 481;
        musicClass = "RCTSTEALTH";
    };
    class RCS_breathOfGrowingStructures
    {
        name = "Breath Of Growing Structures";
        sound[] = {"\rcs\STEALTH\RCS_breathOfGrowingStructures.ogg", 1, 1};
        theme = "Lead";
        duration = 316;
        musicClass = "RCTSTEALTH";
    };
    class RCS_landsFilledWithSilenceAndGrief
    {
        name = "Lands Filled With Silence And Grief";
        sound[] = {"\rcs\STEALTH\RCS_landsFilledWithSilenceAndGrief.ogg", 1, 1};
        theme = "Lead";
        duration = 628;
        musicClass = "RCTSTEALTH";
    };    
    class RCS_echoesFromTheLoss
    {
        name = "Echoes From The Loss";
        sound[] = {"\rcs\STEALTH\RCS_echoesFromTheLoss.ogg", 1, 1};
        theme = "Lead";
        duration = 316;
        musicClass = "RCTSTEALTH";
    };
    class RCS_loneliness
    {
        name = "Loneliness";
        sound[] = {"\rcs\STEALTH\RCS_loneliness.ogg", 1, 1};
        theme = "Lead";
        duration = 556;
        musicClass = "RCTSTEALTH";
    };
    class RCS_lungsIntoDecliningStructures
    {
        name = "Lungs Into Declining Structures";
        sound[] = {"\rcs\STEALTH\RCS_lungsIntoDecliningStructures.ogg", 1, 1};
        theme = "Lead";
        duration = 327;
        musicClass = "RCTSTEALTH";
    };
    class RCS_newRisenThrone
    {
        name = "New Risen Throne";
        sound[] = {"\rcs\STEALTH\RCS_newRisenThrone.ogg", 1, 1};
        theme = "Lead";
        duration = 269;
        musicClass = "RCTSTEALTH";
    };
    class RCS_newRisenThroneII
    {
        name = "New Risen Throne II";
        sound[] = {"\rcs\STEALTH\RCS_newRisenThroneII.ogg", 1, 1};
        theme = "Lead";
        duration = 407;
        musicClass = "RCTSTEALTH";
    };
    class RCS_newRisenThroneIII
    {
        name = "New Risen Throne III";
        sound[] = {"\rcs\STEALTH\RCS_newRisenThroneIII.ogg", 1, 1};
        theme = "Lead";
        duration = 280;
        musicClass = "RCTSTEALTH";
    };
    class RCS_edGlaive
    {
        name = "Elite Dangerous - Glaive";
        sound[] = {"\rcs\ACTION\RCS_edGlaive.ogg", 1, 1};
        theme = "Lead";
        duration = 168;
        musicClass = "RCTACTION";
    };
    class RCS_edGlaiveExtended
    {
        name = "Elite Dangerous - Glaive (Extended)";
        sound[] = {"\rcs\ACTION\RCS_edGlaiveExtended.ogg", 1, 1};
        theme = "Lead";
        duration = 303;
        musicClass = "RCTACTION";
    };
    class RCS_edMaelstromHostile
    {
        name = "Elite Dangerous - Maelstrom Hostile";
        sound[] = {"\rcs\ACTION\RCS_edMaelstromHostile.ogg", 1, 1};
        theme = "Lead";
        duration = 224;
        musicClass = "RCTACTION";
    };
    class RCS_edMaelstromHostileExtended
    {
        name = "Elite Dangerous - Maelstrom Hostile (Extended)";
        sound[] = {"\rcs\ACTION\RCS_edMaelstromHostileExtended.ogg", 1, 1};
        theme = "Lead";
        duration = 438;
        musicClass = "RCTACTION";
    };
    class RCS_edMaelstromAmbient
    {
        name = "Elite Dangerous - Maelstrom Ambient";
        sound[] = {"\rcs\STEALTH\RCS_edMaelstromAmbient.ogg", 1, 1};
        theme = "Lead";
        duration = 334;
        musicClass = "RCTSTEALTH";
    };
    class RCS_osSaint
    {
        name = "Ola Strandh - Saint";
        sound[] = {"\rcs\ACTION\RCS_osSaint.ogg", 1, 1};
        theme = "Lead";
        duration = 223;
        musicClass = "RCTACTION";
    };
    class RCS_osBallroom
    {
        name = "Ola Strandh - Ballroom";
        sound[] = {"\rcs\ACTION\RCS_osBallroom.ogg", 1, 1};
        theme = "Lead";
        duration = 221;
        musicClass = "RCTACTION";
    };
    class RCS_osDockWrecks
    {
        name = "Ola Strandh - Dock Wrecks";
        sound[] = {"\rcs\ACTION\RCS_osDockWrecks.ogg", 1, 1};
        theme = "Lead";
        duration = 284;
        musicClass = "RCTACTION";
    };
    class RCS_osKeates
    {
        name = "Ola Strandh - Keates";
        sound[] = {"\rcs\ACTION\RCS_osKeates.ogg", 1, 1};
        theme = "Lead";
        duration = 305;
        musicClass = "RCTACTION";
    };
    class RCS_osEMPJam
    {
        name = "Ola Strandh - EMP Jam";
        sound[] = {"\rcs\ACTION\RCS_osEMPJam.ogg", 1, 1};
        theme = "Lead";
        duration = 259;
        musicClass = "RCTACTION";
    };
    class RCS_jwAdrenaline
    {
        name = "Jack Wall - Adrenaline";
        sound[] = {"\rcs\ACTION\RCS_jwAdrenaline.ogg", 1, 1};
        theme = "Lead";
        duration = 206;
        musicClass = "RCTACTION";
    };
    class RCS_gtfoBioscan
    {
        name = "GTFO - Bioscan";
        sound[] = {"\rcs\ACTION\RCS_gtfoBioscan.ogg", 1, 1};
        theme = "Lead";
        duration = 303;
        musicClass = "RCTACTION";
    };
    class RCS_gtfoKraken
    {
        name = "GTFO - Kraken";
        sound[] = {"\rcs\ACTION\RCS_gtfoKraken.ogg", 1, 1};
        theme = "Lead";
        duration = 265;
        musicClass = "RCTACTION";
    };
    class RCS_gtfoBloodDoor
    {
        name = "GTFO - Blood Door";
        sound[] = {"\rcs\ACTION\RCS_gtfoBloodDoor.ogg", 1, 1};
        theme = "Lead";
        duration = 384;
        musicClass = "RCTACTION";
    };
    class RCS_gtfoSleepers
    {
        name = "GTFO - Sleepers";
        sound[] = {"\rcs\STEALTH\RCS_gtfoSleepers.ogg", 1, 1};
        theme = "Lead";
        duration = 262;
        musicClass = "RCTSTEALTH";
    };
    class RCS_gtfoWelcomeToTheComplex
    {
        name = "GTFO - Welcome To The Complex";
        sound[] = {"\rcs\ACTION\RCS_gtfoWelcomeToTheComplex.ogg", 1, 1};
        theme = "Lead";
        duration = 311;
        musicClass = "RCTACTION";
    };
    class RCS_edHuntedDown
    {
        name = "Elite Dangerous - Hunted Down";
        sound[] = {"\rcs\ACTION\RCS_edHuntedDown.ogg", 1, 1};
        theme = "Lead";
        duration = 155;
        musicClass = "RCTACTION";
    };
    class RCS_edHuntedDownExtended
    {
        name = "Elite Dangerous - Hunted Down (Extended)";
        sound[] = {"\rcs\ACTION\RCS_edHuntedDownExtended.ogg", 1, 1};
        theme = "Lead";
        duration = 286;
        musicClass = "RCTACTION";
    };
    class RCS_ggOneLifeToLive
    {
        name = "Gero Goerlich - One Life To Live";
        sound[] = {"\rcs\STEALTH\RCS_ggOneLifeToLive.ogg", 1, 1};
        theme = "Lead";
        duration = 243;
        musicClass = "RCTSTEALTH";
    };
    class RCS_ggGhostFleetHunt
    {
        name = "Gero Goerlich - Ghost Fleet Hunt";
        sound[] = {"\rcs\ACTION\RCS_ggGhostFleetHunt.ogg", 1, 1};
        theme = "Lead";
        duration = 266;
        musicClass = "RCTACTION";
    };
    class RCS_ggAdamsJourney
    {
        name = "Gero Goerlich - Adam's Journey";
        sound[] = {"\rcs\ACTION\RCS_ggAdamsJourney.ogg", 1, 1};
        theme = "Lead";
        duration = 266;
        musicClass = "RCTACTION";
    };
    class RCS_ggPlanarChimes
    {
        name = "Gero Goerlich - Planar Chimes";
        sound[] = {"\rcs\ACTION\RCS_ggPlanarChimes.ogg", 1, 1};
        theme = "Lead";
        duration = 155;
        musicClass = "RCTACTION";
    };
    class RCS_ggQuantumEnergy
    {
        name = "Gero Goerlich - Quantum Energy";
        sound[] = {"\rcs\ACTION\RCS_ggQuantumEnergy.ogg", 1, 1};
        theme = "Lead";
        duration = 226;
        musicClass = "RCTACTION";
    };
    class RCS_ggJumpGate
    {
        name = "Gero Goerlich - Jump Gate";
        sound[] = {"\rcs\ACTION\RCS_ggJumpGate.ogg", 1, 1};
        theme = "Lead";
        duration = 163;
        musicClass = "RCTACTION";
    };
    class RCS_ggBorderPatrol
    {
        name = "Gero Goerlich - Border Patrol";
        sound[] = {"\rcs\ACTION\RCS_ggBorderPatrol.ogg", 1, 1};
        theme = "Lead";
        duration = 157;
        musicClass = "RCTACTION";
    };
    class RCS_ggLaunchPrep
    {
        name = "Gero Goerlich - Launch Prep";
        sound[] = {"\rcs\STEALTH\RCS_ggLaunchPrep.ogg", 1, 1};
        theme = "Lead";
        duration = 122;
        musicClass = "RCTSTEALTH";
    };
    class RCS_ggTheSearch
    {
        name = "Gero Goerlich - The Search";
        sound[] = {"\rcs\STEALTH\RCS_ggTheSearch.ogg", 1, 1};
        theme = "Lead";
        duration = 171;
        musicClass = "RCTSTEALTH";
    };
    class RCS_warnoBroodingThoughts
    {
        name = "WARNO - Brooding Thoughts";
        sound[] = {"\rcs\STEALTH\RCS_warnoBroodingThoughts.ogg", 1, 1};
        theme = "Lead";
        duration = 155;
        musicClass = "RCTSTEALTH";
    };
    class RCS_warnoCanyon
    {
        name = "WARNO - Canyon";
        sound[] = {"\rcs\RELAX\RCS_warnoCanyon.ogg", 1, 1};
        theme = "Lead";
        duration = 155;
        musicClass = "RCTRELAX";
    };
    class RCS_warnoDarkCityBeats
    {
        name = "WARNO - Dark City Beats";
        sound[] = {"\rcs\ACTION\RCS_warnoDarkCityBeats.ogg", 1, 1};
        theme = "Lead";
        duration = 270;
        musicClass = "RCTACTION";
    };
    class RCS_warnoDawnOnGlendale
    {
        name = "WARNO - Dawn On Glendale";
        sound[] = {"\rcs\RELAX\RCS_warnoDawnOnGlendale.ogg", 1, 1};
        theme = "Lead";
        duration = 212;
        musicClass = "RCTRELAX";
    };
    class RCS_warnoDepictionOfFear
    {
        name = "WARNO - Depiction Of Fear";
        sound[] = {"\rcs\ACTION\RCS_warnoDepictionOfFear.ogg", 1, 1};
        theme = "Lead";
        duration = 392;
        musicClass = "RCTACTION";
    };
    class RCS_warnoDivineInspiration
    {
        name = "WARNO - Divine Inspiration";
        sound[] = {"\rcs\ACTION\RCS_warnoDivineInspiration.ogg", 1, 1};
        theme = "Lead";
        duration = 392;
        musicClass = "RCTACTION";
    };
    class RCS_warnoGetTogether
    {
        name = "WARNO - Get Together";
        sound[] = {"\rcs\ACTION\RCS_warnoGetTogether.ogg", 1, 1};
        theme = "Lead";
        duration = 235;
        musicClass = "RCTACTION";
    };
    class RCS_warnoIntoTheUnknown
    {
        name = "WARNO - Into The Unknown";
        sound[] = {"\rcs\STEALTH\RCS_warnoIntoTheUnknown.ogg", 1, 1};
        theme = "Lead";
        duration = 161;
        musicClass = "RCTSTEALTH";
    };
    class RCS_warnoLapTime
    {
        name = "WARNO - Lap Time";
        sound[] = {"\rcs\ACTION\RCS_warnoLapTime.ogg", 1, 1};
        theme = "Lead";
        duration = 168;
        musicClass = "RCTACTION";
    };
    class RCS_warnoLetsGo
    {
        name = "WARNO - Let's Go";
        sound[] = {"\rcs\ACTION\RCS_warnoLetsGo.ogg", 1, 1};
        theme = "Lead";
        duration = 195;
        musicClass = "RCTACTION";
    };
    class RCS_warnoMysteries
    {
        name = "WARNO - Mysteries";
        sound[] = {"\rcs\RELAX\RCS_warnoMysteries.ogg", 1, 1};
        theme = "Lead";
        duration = 170;
        musicClass = "RCTRELAX";
    };
    class RCS_warnoQuietDiscovery
    {
        name = "WARNO - Quiet Discovery";
        sound[] = {"\rcs\STEALTH\RCS_warnoQuietDiscovery.ogg", 1, 1};
        theme = "Lead";
        duration = 148;
        musicClass = "RCTSTEALTH";
    };
    class RCS_warnoRagingBurn
    {
        name = "WARNO - Raging Burn";
        sound[] = {"\rcs\ACTION\RCS_warnoRagingBurn.ogg", 1, 1};
        theme = "Lead";
        duration = 233;
        musicClass = "RCTACTION";
    };
    class RCS_warnoRiseForever
    {
        name = "WARNO - Rise Forever";
        sound[] = {"\rcs\ACTION\RCS_warnoRiseForever.ogg", 1, 1};
        theme = "Lead";
        duration = 194;
        musicClass = "RCTACTION";
    };
    class RCS_warnoSheerDrop
    {
        name = "WARNO - Sheer Drop";
        sound[] = {"\rcs\ACTION\RCS_warnoSheerDrop.ogg", 1, 1};
        theme = "Lead";
        duration = 194;
        musicClass = "RCTACTION";
    };
    class RCS_warnoSiliconTribes
    {
        name = "WARNO - Silicon Tribes";
        sound[] = {"\rcs\ACTION\RCS_warnoSiliconTribes.ogg", 1, 1};
        theme = "Lead";
        duration = 217;
        musicClass = "RCTACTION";
    };
    class RCS_warnoSinful
    {
        name = "WARNO - Sinful";
        sound[] = {"\rcs\ACTION\RCS_warnoSinful.ogg", 1, 1};
        theme = "Lead";
        duration = 230;
        musicClass = "RCTACTION";
    };
    class RCS_warnoSynchronicity
    {
        name = "WARNO - Synchronicity";
        sound[] = {"\rcs\RELAX\RCS_warnoSynchronicity.ogg", 1, 1};
        theme = "Lead";
        duration = 192;
        musicClass = "RCTRELAX";
    };
    class RCS_warnoThirdDegree
    {
        name = "WARNO - Third Degree";
        sound[] = {"\rcs\ACTION\RCS_warnoThirdDegree.ogg", 1, 1};
        theme = "Lead";
        duration = 131;
        musicClass = "RCTACTION";
    };
    class RCS_warnoThroughTheNight
    {
        name = "WARNO - Through The Night";
        sound[] = {"\rcs\STEALTH\RCS_warnoThroughTheNight.ogg", 1, 1};
        theme = "Lead";
        duration = 187;
        musicClass = "RCTSTEALTH";
    };
    class RCS_ccgeneralsGlory
    {
        name = "CC Generals - Glory";
        sound[] = {"\rcs\ACTION\RCS_ccgeneralsGlory.ogg", 1, 1};
        theme = "Lead";
        duration = 202;
        musicClass = "RCTACTION";
    };
    class RCS_ccgeneralsOurDayHasCome
    {
        name = "CC Generals - Our Day Has Come";
        sound[] = {"\rcs\ACTION\RCS_ccgeneralsOurDayHasCome.ogg", 1, 1};
        theme = "Lead";
        duration = 219;
        musicClass = "RCTACTION";
    };
    class RCS_ccgeneralsResistance
    {
        name = "CC Generals - Resistance";
        sound[] = {"\rcs\ACTION\RCS_ccgeneralsResistance.ogg", 1, 1};
        theme = "Lead";
        duration = 238;
        musicClass = "RCTACTION";
    };
    class RCS_ccgeneralsTidesOfWrath
    {
        name = "CC Generals - Tides Of Wrath";
        sound[] = {"\rcs\ACTION\RCS_ccgeneralsTidesOfWrath.ogg", 1, 1};
        theme = "Lead";
        duration = 200;
        musicClass = "RCTACTION";
    };
    class RCS_ccgeneralsUprising
    {
        name = "CC Generals - Uprising";
        sound[] = {"\rcs\ACTION\RCS_ccgeneralsUprising.ogg", 1, 1};
        theme = "Lead";
        duration = 166;
        musicClass = "RCTACTION";
    };
    class RCS_noAftermath
    {
        name = "Nuclear Option - Aftermath";
        sound[] = {"\rcs\RELAX\RCS_noAftermath.ogg", 1, 1};
        theme = "Lead";
        duration = 138;
        musicClass = "RCTRELAX";
    };
    class RCS_noAgrapol
    {
        name = "Nuclear Option - Agrapol";
        sound[] = {"\rcs\STEALTH\RCS_noAgrapol.ogg", 1, 1};
        theme = "Lead";
        duration = 380;
        musicClass = "RCTSTEALTH";
    };
    class RCS_noIfrit
    {
        name = "Nuclear Option - Ifrit";
        sound[] = {"\rcs\ACTION\RCS_noIfrit.ogg", 1, 1};
        theme = "Lead";
        duration = 126;
        musicClass = "RCTACTION";
    };
    class RCS_noMedusa
    {
        name = "Nuclear Option - Medusa";
        sound[] = {"\rcs\ACTION\RCS_noMedusa.ogg", 1, 1};
        theme = "Lead";
        duration = 162;
        musicClass = "RCTACTION";
    };
    class RCS_noNuclearEscalation
    {
        name = "Nuclear Option - Nuclear Escalation";
        sound[] = {"\rcs\ACTION\RCS_noNuclearEscalation.ogg", 1, 1};
        theme = "Lead";
        duration = 151;
        musicClass = "RCTACTION";
    };
    class RCS_noRevoker
    {
        name = "Nuclear Option - Revoker";
        sound[] = {"\rcs\ACTION\RCS_noRevoker.ogg", 1, 1};
        theme = "Lead";
        duration = 176;
        musicClass = "RCTACTION";
    };
    class RCS_noRevokerExtended
    {
        name = "Nuclear Option - Revoker (Extended)";
        sound[] = {"\rcs\ACTION\RCS_noRevokerExtended.ogg", 1, 1};
        theme = "Lead";
        duration = 323;
        musicClass = "RCTACTION";
    };
    class RCS_xenonauts1AirCombat
    {
        name = "Xenonauts 1 - Air Combat";
        sound[] = {"\rcs\ACTION\RCS_xenonauts1AirCombat.ogg", 1, 1};
        theme = "Lead";
        duration = 349;
        musicClass = "RCTACTION";
    };
    class RCS_xenonauts2AirCombat
    {
        name = "Xenonauts 2 - Air Combat";
        sound[] = {"\rcs\ACTION\RCS_xenonauts2AirCombat.ogg", 1, 1};
        theme = "Lead";
        duration = 307;
        musicClass = "RCTACTION";
    };
    class RCS_xenonauts2GeoscapeBriefing1
    {
        name = "Xenonauts 2 - Geoscape 1 (Briefing)";
        sound[] = {"\rcs\RELAX\RCS_xenonauts2GeoscapeBriefing1.ogg", 1, 1};
        theme = "Lead";
        duration = 606;
        musicClass = "RCTRELAX";
    };
    class RCS_xenonauts2GeoscapeBriefing2
    {
        name = "Xenonauts 2 - Geoscape 2 (Briefing)";
        sound[] = {"\rcs\RELAX\RCS_xenonauts2GeoscapeBriefing2.ogg", 1, 1};
        theme = "Lead";
        duration = 449;
        musicClass = "RCTRELAX";
    };
    class RCS_xenonauts2GeoscapeBriefing3
    {
        name = "Xenonauts 2 - Geoscape 3 (Briefing)";
        sound[] = {"\rcs\RELAX\RCS_xenonauts2GeoscapeBriefing3.ogg", 1, 1};
        theme = "Lead";
        duration = 404;
        musicClass = "RCTRELAX";
    };
    class RCS_xenonauts2GeoscapeBriefing4
    {
        name = "Xenonauts 2 - Geoscape 4 (Briefing)";
        sound[] = {"\rcs\RELAX\RCS_xenonauts2GeoscapeBriefing4.ogg", 1, 1};
        theme = "Lead";
        duration = 397;
        musicClass = "RCTRELAX";
    };
    class RCS_xenonauts2Wraith
    {
        name = "Xenonauts 2 - Wraith";
        sound[] = {"\rcs\STEALTH\RCS_xenonauts2Wraith.ogg", 1, 1};
        theme = "Lead";
        duration = 520;
        musicClass = "RCTSTEALTH";
    };
    class RCS_xenonauts2Servitor
    {
        name = "Xenonauts 2 - Servitor";
        sound[] = {"\rcs\STEALTH\RCS_xenonauts2Servitor.ogg", 1, 1};
        theme = "Lead";
        duration = 572;
        musicClass = "RCTSTEALTH";
    };
    class RCS_xenonauts2Reaper
    {
        name = "Xenonauts 2 - Reaper";
        sound[] = {"\rcs\STEALTH\RCS_xenonauts2Reaper.ogg", 1, 1};
        theme = "Lead";
        duration = 668;
        musicClass = "RCTSTEALTH";
    };
    class RCS_xenonauts2Praetor
    {
        name = "Xenonauts 2 - Praetor";
        sound[] = {"\rcs\STEALTH\RCS_xenonauts2Praetor.ogg", 1, 1};
        theme = "Lead";
        duration = 629;
        musicClass = "RCTSTEALTH";
    };
    class RCS_xenonauts2Phantoms
    {
        name = "Xenonauts 2 - Phantoms";
        sound[] = {"\rcs\STEALTH\RCS_xenonauts2Phantoms.ogg", 1, 1};
        theme = "Lead";
        duration = 591;
        musicClass = "RCTSTEALTH";
    };
    class RCS_xenonauts2Observer
    {
        name = "Xenonauts 2 - Observer";
        sound[] = {"\rcs\STEALTH\RCS_xenonauts2Observer.ogg", 1, 1};
        theme = "Lead";
        duration = 540;
        musicClass = "RCTSTEALTH";
    };
    class RCS_xenonauts2Cleaner
    {
        name = "Xenonauts 2 - Cleaner";
        sound[] = {"\rcs\STEALTH\RCS_xenonauts2Cleaner.ogg", 1, 1};
        theme = "Lead";
        duration = 462;
        musicClass = "RCTSTEALTH";
    };
    class RCS_xenonauts2NightTerror
    {
        name = "Xenonauts 2 - Night Terror";
        sound[] = {"\rcs\STEALTH\RCS_xenonauts2NightTerror.ogg", 1, 1};
        theme = "Lead";
        duration = 385;
        musicClass = "RCTSTEALTH";
    };
    class RCS_halo1AWalkInTheWoods
    {
        name = "Halo 1 - A Walk In The Woods";
        sound[] = {"\rcs\RELAX\RCS_halo1AWalkInTheWoods.ogg", 1, 1};
        theme = "Lead";
        duration = 113;
        musicClass = "RCTRELAX";
    };
    class RCS_halo1CovenantDance
    {
        name = "Halo 1 - Covenant Dance";
        sound[] = {"\rcs\RELAX\RCS_halo1CovenantDance.ogg", 1, 1};
        theme = "Lead";
        duration = 117;
        musicClass = "RCTRELAX";
    };
    class RCS_halo1CovenantDanceExtended
    {
        name = "Halo 1 - Covenant Dance (Extended)";
        sound[] = {"\rcs\RELAX\RCS_halo1CovenantDanceExtended.ogg", 1, 1};
        theme = "Lead";
        duration = 312;
        musicClass = "RCTRELAX";
    };
    class RCS_halo1UnderCoverOfNight
    {
        name = "Halo 1 - Under Cover Of Night";
        sound[] = {"\rcs\RELAX\RCS_halo1UnderCoverOfNight.ogg", 1, 1};
        theme = "Lead";
        duration = 223;
        musicClass = "RCTRELAX";
    };
    class RCS_halo1UnlessYouMeanToShoot
    {
        name = "Halo 1 - Unless You Mean To Shoot";
        sound[] = {"\rcs\ACTION\RCS_halo1UnlessYouMeanToShoot.ogg", 1, 1};
        theme = "Lead";
        duration = 151;
        musicClass = "RCTACTION";
    };
    class RCS_halo1WhatOnceWasLost
    {
        name = "Halo 1 - What Once Was Lost";
        sound[] = {"\rcs\STEALTH\RCS_halo1WhatOnceWasLost.ogg", 1, 1};
        theme = "Lead";
        duration = 102;
        musicClass = "RCTSTEALTH";
    };
    class RCS_halo1WhatOnceWasLostExtended
    {
        name = "Halo 1 - What Once Was Lost (Extended)";
        sound[] = {"\rcs\STEALTH\RCS_halo1WhatOnceWasLostExtended.ogg", 1, 1};
        theme = "Lead";
        duration = 291;
        musicClass = "RCTSTEALTH";
    };
    class RCS_halo2GhostsOfReach
    {
        name = "Halo 2 - Ghosts Of Reach";
        sound[] = {"\rcs\RELAX\RCS_halo2GhostsOfReach.ogg", 1, 1};
        theme = "Lead";
        duration = 102;
        musicClass = "RCTRELAX";
    };
    class RCS_halo2InAmberClad
    {
        name = "Halo 2 - In Amber Clad";
        sound[] = {"\rcs\RELAX\RCS_halo2InAmberClad.ogg", 1, 1};
        theme = "Lead";
        duration = 99;
        musicClass = "RCTRELAX";
    };
    class RCS_halo2InAmberCladExtended
    {
        name = "Halo 2 - In Amber Clad (Extended)";
        sound[] = {"\rcs\RELAX\RCS_halo2InAmberCladExtended.ogg", 1, 1};
        theme = "Lead";
        duration = 300;
        musicClass = "RCTRELAX";
    };
    class RCS_halo2PerilousJourney
    {
        name = "Halo 2 - Perilous Journey";
        sound[] = {"\rcs\RELAX\RCS_halo2PerilousJourney.ogg", 1, 1};
        theme = "Lead";
        duration = 164;
        musicClass = "RCTRELAX";
    };
    class RCS_halo2PerilousJourneyExtended
    {
        name = "Halo 2 - Perilous Journey";
        sound[] = {"\rcs\RELAX\RCS_halo2PerilousJourneyExtended.ogg", 1, 1};
        theme = "Lead";
        duration = 444;
        musicClass = "RCTRELAX";
    };
    class RCS_halo2ToTurnATide
    {
        name = "Halo 2 - To Turn A Tide";
        sound[] = {"\rcs\ACTION\RCS_halo2ToTurnATide.ogg", 1, 1};
        theme = "Lead";
        duration = 336;
        musicClass = "RCTACTION";
    };
    class RCS_halo3WarthogRun
    {
        name = "Halo 3 - Warthog Run";
        sound[] = {"\rcs\ACTION\RCS_halo3WarthogRun.ogg", 1, 1};
        theme = "Lead";
        duration = 500;
        musicClass = "RCTACTION";
    };
    class RCS_haloODSTWereTheDesperateMeasures
    {
        name = "Halo ODST - We're The Desperate Measures";
        sound[] = {"\rcs\ACTION\RCS_haloODSTWereTheDesperateMeasures.ogg", 1, 1};
        theme = "Lead";
        duration = 380;
        musicClass = "RCTACTION";
    };
    class RCS_haloReachEngagedExtended
    {
        name = "Halo Reach - Engaged (Extended)";
        sound[] = {"\rcs\ACTION\RCS_haloReachEngagedExtended.ogg", 1, 1};
        theme = "Lead";
        duration = 528;
        musicClass = "RCTACTION";
    };
    class RCS_halo2FlawedLegacy
    {
        name = "Halo 2 - Flawed Legacy";
        sound[] = {"\rcs\RELAX\RCS_halo2FlawedLegacy.ogg", 1, 1};
        theme = "Lead";
        duration = 426;
        musicClass = "RCTRELAX";
    };
    class RCS_halo2CloakedInBlackness
    {
        name = "Halo 2 - Cloaked In Blackness";
        sound[] = {"\rcs\RELAX\RCS_halo2CloakedInBlackness.ogg", 1, 1};
        theme = "Lead";
        duration = 221;
        musicClass = "RCTRELAX";
    };
    class RCS_halo2HereticHero
    {
        name = "Halo 2 - Heretic, Hero";
        sound[] = {"\rcs\RELAX\RCS_halo2HereticHero.ogg", 1, 1};
        theme = "Lead";
        duration = 221;
        musicClass = "RCTRELAX";
    };
    class RCS_edAlienControl
    {
        name = "Elite Dangerous - Alien Control";
        sound[] = {"\rcs\STEALTH\RCS_edAlienControl.ogg", 1, 1};
        theme = "Lead";
        duration = 253;
        musicClass = "RCTSTEALTH";
    };
    class RCS_edDemon
    {
        name = "Elite Dangerous - Demon";
        sound[] = {"\rcs\STEALTH\RCS_edDemon.ogg", 1, 1};
        theme = "Lead";
        duration = 269;
        musicClass = "RCTSTEALTH";
    };
    class RCS_edInvasion
    {
        name = "Elite Dangerous - Invasion";
        sound[] = {"\rcs\STEALTH\RCS_edInvasion.ogg", 1, 1};
        theme = "Lead";
        duration = 305;
        musicClass = "RCTSTEALTH";
    };
    class RCS_edMonster
    {
        name = "Elite Dangerous - Monster";
        sound[] = {"\rcs\STEALTH\RCS_edMonster.ogg", 1, 1};
        theme = "Lead";
        duration = 224;
        musicClass = "RCTSTEALTH";
    };
    class RCS_edTheSpire
    {
        name = "Elite Dangerous - The Spire";
        sound[] = {"\rcs\STEALTH\RCS_edTheSpire.ogg", 1, 1};
        theme = "Lead";
        duration = 214;
        musicClass = "RCTSTEALTH";
    };
    class RCS_edUnderground
    {
        name = "Elite Dangerous - Underground";
        sound[] = {"\rcs\STEALTH\RCS_edUnderground.ogg", 1, 1};
        theme = "Lead";
        duration = 578;
        musicClass = "RCTSTEALTH";
    };
    class RCS_stalkerTheEndCredits
    {
        name = "STALKER - The End Credits";
        sound[] = {"\rcs\STEALTH\RCS_stalkerTheEndCredits.ogg", 1, 1};
        theme = "Lead";
        duration = 462;
        musicClass = "RCTSTEALTH";
    };
    class RCS_stalkerApproachingChernobyl
    {
        name = "STALKER - Approaching Chernobyl";
        sound[] = {"\rcs\STEALTH\RCS_stalkerApproachingChernobyl.ogg", 1, 1};
        theme = "Lead";
        duration = 322;
        musicClass = "RCTSTEALTH";
    };
    class RCS_stalkerArmyWarehouses
    {
        name = "STALKER - Army Warehouses";
        sound[] = {"\rcs\STEALTH\RCS_stalkerArmyWarehouses.ogg", 1, 1};
        theme = "Lead";
        duration = 299;
        musicClass = "RCTSTEALTH";
    };
    class RCS_stalkerTheMysteryOfMonolith
    {
        name = "STALKER - The Mystery Of Monolith";
        sound[] = {"\rcs\STEALTH\RCS_stalkerTheMysteryOfMonolith.ogg", 1, 1};
        theme = "Lead";
        duration = 137;
        musicClass = "RCTSTEALTH";
    };
    class RCS_stalkerStreetsofPripyat
    {
        name = "STALKER - Streets of Pripyat";
        sound[] = {"\rcs\STEALTH\RCS_stalkerStreetsofPripyat.ogg", 1, 1};
        theme = "Lead";
        duration = 196;
        musicClass = "RCTSTEALTH";
    };
    class RCS_stalkerTheX16PsiDevice
    {
        name = "STALKER - The X16 Psi Device";
        sound[] = {"\rcs\STEALTH\RCS_stalkerTheX16PsiDevice.ogg", 1, 1};
        theme = "Lead";
        duration = 283;
        musicClass = "RCTSTEALTH";
    };
    class RCS_stalkerRedForest
    {
        name = "STALKER - Red Forest";
        sound[] = {"\rcs\STEALTH\RCS_stalkerRedForest.ogg", 1, 1};
        theme = "Lead";
        duration = 306;
        musicClass = "RCTSTEALTH";
    };
    class RCS_stalkerSilenceofDarkValley
    {
        name = "STALKER - Silence of Dark Valley";
        sound[] = {"\rcs\STEALTH\RCS_stalkerSilenceofDarkValley.ogg", 1, 1};
        theme = "Lead";
        duration = 278;
        musicClass = "RCTSTEALTH";
    };
    class RCS_stalkerTheX18Experiment
    {
        name = "STALKER - The X18 Experiment";
        sound[] = {"\rcs\STEALTH\RCS_stalkerTheX18Experiment.ogg", 1, 1};
        theme = "Lead";
        duration = 227;
        musicClass = "RCTSTEALTH";
    };
    class RCS_stalkerCordon
    {
        name = "STALKER - Cordon";
        sound[] = {"\rcs\STEALTH\RCS_stalkerCordon.ogg", 1, 1};
        theme = "Lead";
        duration = 521;
        musicClass = "RCTSTEALTH";
    };
    class RCS_stalkerZatonCrackdown
    {
        name = "STALKER - Zaton Crackdown";
        sound[] = {"\rcs\ACTION\RCS_stalkerZatonCrackdown.ogg", 1, 1};
        theme = "Lead";
        duration = 234;
        musicClass = "RCTACTION";
    };
    class RCS_stalkerBattleatYantar
    {
        name = "STALKER - Battle at Yantar";
        sound[] = {"\rcs\ACTION\RCS_stalkerBattleatYantar.ogg", 1, 1};
        theme = "Lead";
        duration = 374;
        musicClass = "RCTACTION";
    };
    class RCS_stalkerBulletproof
    {
        name = "STALKER - Bulletproof";
        sound[] = {"\rcs\ACTION\RCS_stalkerBulletproof.ogg", 1, 1};
        theme = "Lead";
        duration = 617;
        musicClass = "RCTACTION";
    };
    class RCS_stalkerAmbushOnDealers
    {
        name = "STALKER - Ambush On Dealers";
        sound[] = {"\rcs\ACTION\RCS_stalkerAmbushOnDealers.ogg", 1, 1};
        theme = "Lead";
        duration = 216;
        musicClass = "RCTACTION";
    };
    class RCS_stalkerLimanskAssault
    {
        name = "STALKER - Limansk Assault";
        sound[] = {"\rcs\ACTION\RCS_stalkerLimanskAssault.ogg", 1, 1};
        theme = "Lead";
        duration = 302;
        musicClass = "RCTACTION";
    };
    class RCS_stalkerJupiterUnderground
    {
        name = "STALKER - Jupiter Underground";
        sound[] = {"\rcs\ACTION\RCS_stalkerJupiterUnderground.ogg", 1, 1};
        theme = "Lead";
        duration = 173;
        musicClass = "RCTACTION";
    };
    class RCS_stalkerMercOutpost
    {
        name = "STALKER - Merc Outpost";
        sound[] = {"\rcs\ACTION\RCS_stalkerMercOutpost.ogg", 1, 1};
        theme = "Lead";
        duration = 189;
        musicClass = "RCTACTION";
    };
    class RCS_stalkerPredator
    {
        name = "STALKER - Predator";
        sound[] = {"\rcs\ACTION\RCS_stalkerPredator.ogg", 1, 1};
        theme = "Lead";
        duration = 499;
        musicClass = "RCTACTION";
    };
    class RCS_crysis3CaveAction
    {
        name = "Crysis 3 - Cave Action";
        sound[] = {"\rcs\ACTION\RCS_crysis3CaveAction.ogg", 1, 1};
        theme = "Lead";
        duration = 148;
        musicClass = "RCTACTION";
    };
    class RCS_crysis3HuntThemDownAction
    {
        name = "Crysis 3 - Hunt Them Down (Action)";
        sound[] = {"\rcs\ACTION\RCS_crysis3HuntThemDownAction.ogg", 1, 1};
        theme = "Lead";
        duration = 191;
        musicClass = "RCTACTION";
    };
    class RCS_crysis3Mastermind
    {
        name = "Crysis 3 - Mastermind";
        sound[] = {"\rcs\ACTION\RCS_crysis3Mastermind.ogg", 1, 1};
        theme = "Lead";
        duration = 273;
        musicClass = "RCTACTION";
    };
    class RCS_crysis3WhosThePreyNow
    {
        name = "Crysis 3 - Who's The Prey Now?";
        sound[] = {"\rcs\STEALTH\RCS_crysis3WhosThePreyNow.ogg", 1, 1};
        theme = "Lead";
        duration = 188;
        musicClass = "RCTSTEALTH";
    };
    class RCS_crysis3WhosThePreyNowExtended
    {
        name = "Crysis 3 - Who's The Prey Now? (Extended)";
        sound[] = {"\rcs\STEALTH\RCS_crysis3WhosThePreyNowExtended.ogg", 1, 1};
        theme = "Lead";
        duration = 348;
        musicClass = "RCTSTEALTH";
    };
    class RCS_crysis3WhosThePreyNowCombat
    {
        name = "Crysis 3 - Who's The Prey Now? (Combat)";
        sound[] = {"\rcs\ACTION\RCS_crysis3WhosThePreyNowCombat.ogg", 1, 1};
        theme = "Lead";
        duration = 189;
        musicClass = "RCTACTION";
    };
    class RCS_crysis3WhosThePreyNowCombatExtended
    {
        name = "Crysis 3 - Who's The Prey Now? (Combat, Extended)";
        sound[] = {"\rcs\ACTION\RCS_crysis3WhosThePreyNowCombatExtended.ogg", 1, 1};
        theme = "Lead";
        duration = 359;
        musicClass = "RCTACTION";
    };
};