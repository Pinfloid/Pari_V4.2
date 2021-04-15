#pragma once

/* ==========================================================
   ====                                                 =====
   ==== On this page are all the presetnames from 0-511 =====
   ====                                                 =====
   ====     Paste the info from the Excel page here     =====
   ====                                                 =====
   ==========================================================*/



/*===========================================   -  Include library's  -  ================================================*/
#include"settings.h"
/*=======================================================================================================================*/



void preset_Names()
{
  Serial.println("Preset names are beeing read");
  switch (PresetNumb)
  {

    // Delete all below and PASTE HERE :) !!

case 0: 
strcpy(PresetName0,("Petrucci REC 1|8"));
strcpy(PresetName1,("Petrucci Rig 2020"));
strcpy(PresetName2,("Boogie IIC++"));
strcpy(PresetName3,("JP2C Replica 8 Scenes"));
strcpy(PresetName4,("JP2C+"));
strcpy(PresetName5,("JohnP MarkIIC+ *"));
strcpy(PresetName6,("CC JP's IIC+"));
strcpy(PresetName7,("TM Mesa Mark IV 7.00"));
strcpy(PresetName8,("TM Mesa TriAxess 12.08"));
strcpy(PresetName9,("VidarAus JP2C Rig v5"));

break;

case 10: 
strcpy(PresetName0,("METO MESA TRIAXIS"));
strcpy(PresetName1,("Mark's Recto|TNT"));
strcpy(PresetName2,("Mark's Recto Feedback 2"));
strcpy(PresetName3,("Mark Journey Set"));
strcpy(PresetName4,("CLEAN TO MEAN"));
strcpy(PresetName5,("Boogie IIC++"));
strcpy(PresetName6,("LOG | Mark Morton |"));
strcpy(PresetName7,("LOG | Mark Morton | C"));
strcpy(PresetName8,("LOG | Mark Morton | D"));
strcpy(PresetName9,("LOG | Mark Morton | C#"));

break;

case 20: 
strcpy(PresetName0,("Evailution 1"));
strcpy(PresetName1,("Evailution 2"));
strcpy(PresetName2,("Vai Jose Mod Plexi"));
strcpy(PresetName3,("Steve Vai Pitch Shift"));
strcpy(PresetName4,("Satriani Extremist"));
strcpy(PresetName5,("Shimmer Vai Mk1"));
strcpy(PresetName6,("JVM410H JS1"));
strcpy(PresetName7,("JVM410H JS2"));
strcpy(PresetName8,("Blitz III"));
strcpy(PresetName9,("Lonestar rig"));

break;

case 30: 
strcpy(PresetName0,("TM Lukather 6.03"));
strcpy(PresetName1,("Farfeg nugen"));
strcpy(PresetName2,("Zakk's Marshall #34"));
strcpy(PresetName3,("Two Amps"));
strcpy(PresetName4,("ACisma"));
strcpy(PresetName5,("Chuggg"));
strcpy(PresetName6,("Shiva on the Rocks"));
strcpy(PresetName7,("TM 5153 Blue 12.05"));
strcpy(PresetName8,("Gnome-Mans Land 2"));
strcpy(PresetName9,("Diezel Herbert"));

break;

case 40: 
strcpy(PresetName0,("A Kind of Dream"));
strcpy(PresetName1,("Echo Deva III"));
strcpy(PresetName2,("Life in lockdown"));
strcpy(PresetName3,("Fremen Archon All-in-one"));
strcpy(PresetName4,("SinMix PiVi"));
strcpy(PresetName5,("High Landrons"));
strcpy(PresetName6,("Fender Acoustisonic Strat"));
strcpy(PresetName7,("Lunar Eclipse"));
strcpy(PresetName8,("Diamonique Rain"));
strcpy(PresetName9,("ThemePark"));

break;

case 50: 
strcpy(PresetName0,("God With Us"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 60: 
strcpy(PresetName0,("==|OTHER VINTAGE|=="));
strcpy(PresetName1,("'64 Gibson Scout"));
strcpy(PresetName2,("Supro DualTone*"));
strcpy(PresetName3,("Vox AC-15W*"));
strcpy(PresetName4,("Vox AC30s*"));
strcpy(PresetName5,("MoreVox AC30s*"));
strcpy(PresetName6,("Hiwatt DR103*"));
strcpy(PresetName7,("AmpegSVT-4Guitar*"));
strcpy(PresetName8,("Roland Jazz Chorus*"));
strcpy(PresetName9,("==|MARSHALLS|=="));

break;

case 70: 
strcpy(PresetName0,("JTM45Plexi Marshall"));
strcpy(PresetName1,("*JTM 45 -SCoils"));
strcpy(PresetName2,("Plexi 50 Watt"));
strcpy(PresetName3,("More Plexi 50W"));
strcpy(PresetName4,("MstrVol-2204-50W"));
strcpy(PresetName5,("ClnsOnly Plexi50W"));
strcpy(PresetName6,("Plexi 100 Watt"));
strcpy(PresetName7,("More Plexi 100W"));
strcpy(PresetName8,("1959SuperLeadSLP*"));
strcpy(PresetName9,("SuperLead Marshall"));

break;

case 80: 
strcpy(PresetName0,("Silver Jubilee Marshall"));
strcpy(PresetName1,("Brown Sound Plexi"));
strcpy(PresetName2,("ClnsOnly100WPlexi"));
strcpy(PresetName3,("JCM 800 Marshall"));
strcpy(PresetName4,("SlashGnR AFD100"));
strcpy(PresetName5,("1987X "));
strcpy(PresetName6,("*1987X-SCoils"));
strcpy(PresetName7,("JVM410H OD1chn"));
strcpy(PresetName8,("JVM410H OD2chn"));
strcpy(PresetName9,("JVM410H JS Satch2"));

break;

case 90: 
strcpy(PresetName0,("=|MESA BOOGIE|="));
strcpy(PresetName1,("2Chn Dual Rectifier"));
strcpy(PresetName2,("Orng-3Ch Dual Rectifier"));
strcpy(PresetName3,("Red3Ch-Dual Rectifier"));
strcpy(PresetName4,("Thorendahl DualRectifier"));
strcpy(PresetName5,("MarkIIC+ options"));
strcpy(PresetName6,("More Mark IIC+"));
strcpy(PresetName7,("MarkIIC++ (Only))"));
strcpy(PresetName8,("Mark IV options*"));
strcpy(PresetName9,("More Mark IV*"));

break;

case 100: 
strcpy(PresetName0,("==|FENDERS|=="));
strcpy(PresetName1,("Texas Lonestar*"));
strcpy(PresetName2,("Subway Blues"));
strcpy(PresetName3,("Twd Champ*"));
strcpy(PresetName4,("Twd Princeton"));
strcpy(PresetName5,("Twd Deluxe*"));
strcpy(PresetName6,("Mo' TwdDeluxe*"));
strcpy(PresetName7,("TwdTwin HiPwr*"));
strcpy(PresetName8,("59 Bassman*"));
strcpy(PresetName9,("59 Bassman-SCoils"));

break;

case 110: 
strcpy(PresetName0,("15 Spkr Twd*"));
strcpy(PresetName1,("Cln Twd&Brwn"));
strcpy(PresetName2,("Brwn Concert*"));
strcpy(PresetName3,("Brwn Super"));
strcpy(PresetName4,("Brwn Vibrolux*"));
strcpy(PresetName5,("BFace Clns-SCoil"));
strcpy(PresetName6,("BF SuperReverb"));
strcpy(PresetName7,("BFSuperRvrb-SCoils"));
strcpy(PresetName8,("BF Deluxe*"));
strcpy(PresetName9,("BF Deluxe4Teles"));

break;

case 120: 
strcpy(PresetName0,("BF 15 VibroVerb"));
strcpy(PresetName1,("BFVibroVerb-SCoils"));
strcpy(PresetName2,("65 Bassman"));
strcpy(PresetName3,("65 Bassman SCoils"));
strcpy(PresetName4,("BFace Twin*"));
strcpy(PresetName5,("BFaceTwin-SCoils"));
strcpy(PresetName6,("BF Princeton Rvrb"));
strcpy(PresetName7,("Tremolo Deluxe"));
strcpy(PresetName8,("CA3+"));
strcpy(PresetName9,("5153"));

break;

case 130: 
strcpy(PresetName0,("Vibrato Deluxe"));
strcpy(PresetName1,("Mr. Z 38"));
strcpy(PresetName2,("Wrecker Rocket"));
strcpy(PresetName3,("Blues Junior"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 140: 
strcpy(PresetName0,("==|MODERN AMPS|=="));
strcpy(PresetName1,("Friedman SmallBox"));
strcpy(PresetName2,("Dirty Shirley"));
strcpy(PresetName3,("Frdmn BrownEye"));
strcpy(PresetName4,("Hairy BrownEye"));
strcpy(PresetName5,("Hairy BrownEye 2018"));
strcpy(PresetName6,("Friedman C45"));
strcpy(PresetName7,("Atomica (BrownSnd))"));
strcpy(PresetName8,("Cameron CCV100Cln"));
strcpy(PresetName9,("Cameron CCV100 Ch2"));

break;

case 150: 
strcpy(PresetName0,("Komet-60&Concorde"));
strcpy(PresetName1,("SplawnNitrous"));
strcpy(PresetName2,("SplawnPlexi Q-Rod"));
strcpy(PresetName3,("SplawnHotrod Q-Rod"));
strcpy(PresetName4,("SplawnJCM Q-Rod"));
strcpy(PresetName5,("Orange Rocker+AD30"));
strcpy(PresetName6,("Cornford MK50 II"));
strcpy(PresetName7,("FryetteDeliverence"));
strcpy(PresetName8,("Carvin Legacy (Vai))"));
strcpy(PresetName9,("ENGL Savage"));

break;

case 160: 
strcpy(PresetName0,("ENGL Powerball"));
strcpy(PresetName1,("EVHalen 5150 III"));
strcpy(PresetName2,("EVH 5150 Blue50W"));
strcpy(PresetName3,("EVH Pvy 5150 Block"));
strcpy(PresetName4,("EVH Pvy 6505+"));
strcpy(PresetName5,("DiezelVH4Silver"));
strcpy(PresetName6,("DiezelVH4 Ch2&3 Xtra"));
strcpy(PresetName7,("DiezelVH4 Ch3 Xtra"));
strcpy(PresetName8,("DiezelVH4 Ch4 Xtra"));
strcpy(PresetName9,("VH4-Blue&DasMetal"));

break;

case 170: 
strcpy(PresetName0,("Diezel Herbert"));
strcpy(PresetName1,("Diezel Herbert1 Xtra"));
strcpy(PresetName2,("Diezel Herbert2 Xtra"));
strcpy(PresetName3,("Bogner Uberschall"));
strcpy(PresetName4,("Bogner XTC-A Buddy"));
strcpy(PresetName5,("Bogner XTC Xtra"));
strcpy(PresetName6,("Bogner Shiva*"));
strcpy(PresetName7,("Hook 34 chn 1&2"));
strcpy(PresetName8,("Hook Cptn34 ch3"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 180: 
strcpy(PresetName0,("=|FRACTAL AMPS|="));
strcpy(PresetName1,("FAS Skullcrusher"));
strcpy(PresetName2,("FAS Leads, Hair"));
strcpy(PresetName3,("FAS ModernTones"));
strcpy(PresetName4,("FAS Misc. #1"));
strcpy(PresetName5,("FAS Misc. #2*"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 190: 
strcpy(PresetName0,("=|CLASS-A OR NO NEG.FBACK|="));
strcpy(PresetName1,("Matchless DC30"));
strcpy(PresetName2,("DC30 Extras1*"));
strcpy(PresetName3,("DC30 Extras2*"));
strcpy(PresetName4,("MatchlessChieftain"));
strcpy(PresetName5,("SampsonBadCat30"));
strcpy(PresetName6,("MorganAC20-12AX7"));
strcpy(PresetName7,("MorganAC20EF86"));
strcpy(PresetName8,("DividedBy13 FTR37*"));
strcpy(PresetName9,("DividedBy13 CJ*"));

break;

case 200: 
strcpy(PresetName0,("TrnwreckRocket*"));
strcpy(PresetName1,("Ruby Rocket*"));
strcpy(PresetName2,("BlankenshipLeedsDZ"));
strcpy(PresetName3,("BuddaTwinmaster*"));
strcpy(PresetName4,("OrngeTinyTerror*"));
strcpy(PresetName5,("SwartAtomicSpaceTone"));
strcpy(PresetName6,("CarrRambler"));
strcpy(PresetName7,("*CarrRamblerS.Coils"));
strcpy(PresetName8,("Suhr Badger18W"));
strcpy(PresetName9,("Suhr Badger30W"));

break;

case 210: 
strcpy(PresetName0,("Dr. Z Maz 8"));
strcpy(PresetName1,("Dr. Z Maz 38"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 220: 
strcpy(PresetName0,("===|BOUTIQUE|==="));
strcpy(PresetName1,("Dr.Z Route66"));
strcpy(PresetName2,("TrainwreckExpress"));
strcpy(PresetName3,("*Trainwrecks-SCoils"));
strcpy(PresetName4,("DumbleRFord*"));
strcpy(PresetName5,("MoreDumbles*"));
strcpy(PresetName6,("And Dumbler*"));
strcpy(PresetName7,("BludotoneOjai"));
strcpy(PresetName8,("Bludotone#2-Ojai"));
strcpy(PresetName9,("FuchsODSupreme"));

break;

case 230: 
strcpy(PresetName0,("TwoRockJet35"));
strcpy(PresetName1,("CarolAnnTucana"));
strcpy(PresetName2,("CarolAnnOD2"));
strcpy(PresetName3,("CarolAnn Triptik"));
strcpy(PresetName4,("SoldanoSLO-100"));
strcpy(PresetName5,("SoldanoSLO-100Xtra"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 240: 
strcpy(PresetName0,("===|PREAMPS|==="));
strcpy(PresetName1,("SoldanoX88R"));
strcpy(PresetName2,("SoldanoX99R"));
strcpy(PresetName3,("CAE3+CstmAudioElc*"));
strcpy(PresetName4,("*BognerFishStrato"));
strcpy(PresetName5,("BognerFish Brown"));
strcpy(PresetName6,("BritPreampMrshll"));
strcpy(PresetName7,("Marshall JMP-1"));
strcpy(PresetName8,("JMP-1 Pre Xtras1"));
strcpy(PresetName9,("JMP-1 Pre Xtras2*"));

break;

case 250: 
strcpy(PresetName0,("JMP-1 Pre Xtras3"));
strcpy(PresetName1,("JMP-1 Pre Xtras4"));
strcpy(PresetName2,("TriAxis Cleans*"));
strcpy(PresetName3,("TriAxis Leads"));
strcpy(PresetName4,("TriaxisFactory1*"));
strcpy(PresetName5,("Triaxis Factory2"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 260: 
strcpy(PresetName0,("===|BASS AMPS|==="));
strcpy(PresetName1,("Pure DI J-Bass"));
strcpy(PresetName2,("AmpegSVT 4Bass1"));
strcpy(PresetName3,("AmpegSVT Bass2"));
strcpy(PresetName4,("B15 PortaflexBass"));
strcpy(PresetName5,("MesaBoogieBassPreamp"));
strcpy(PresetName6,("Orange Bass Amps"));
strcpy(PresetName7,("Fractal Bass"));
strcpy(PresetName8,("Brauer Bass Recording"));
strcpy(PresetName9,("(Resrvd4futureUpdates))"));

break;

case 270: 
strcpy(PresetName0,("==|200+BASS Sampler|=="));
strcpy(PresetName1,("HeartbreakingJones"));
strcpy(PresetName2,("CarolK60's PBass-FlatWnd"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 280: 
strcpy(PresetName0,("=|BRITROCKROYALTY Sampler|="));
strcpy(PresetName1,("2-WayBreakdown TL"));
strcpy(PresetName2,("Shakin'Me Hbckr-Neck"));
strcpy(PresetName3,("LotsaLiking LP"));
strcpy(PresetName4,("Moby Melville's Tale LP"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 290: 
strcpy(PresetName0,("==|OTHER MAKERS|=="));
strcpy(PresetName1,("*LMOnTheChocolateSide(Strat))"));
strcpy(PresetName2,("BrettKingmanCarolAnns"));
strcpy(PresetName3,("LeonTodd ABC IIC++"));
strcpy(PresetName4,("LeonTodd ABCII++"));
strcpy(PresetName5,("Moke's Wrecked*"));
strcpy(PresetName6,("Fremen's AllInOne*"));
strcpy(PresetName7,("Fremen's AllInOne"));
strcpy(PresetName8,("YorkAudio 8 Amp!"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 300: 
strcpy(PresetName0,("==|NEW ADDED AMP MODELS|=="));
strcpy(PresetName1,("Trainwreck Liverpool"));
strcpy(PresetName2,("Matchless DC30-EF86"));
strcpy(PresetName3,("FAS (Trwck))Express"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 310: 
strcpy(PresetName0,("==|BONUS STUFF|=="));
strcpy(PresetName1,("Tiny Amps!"));
strcpy(PresetName2,("Old Small Blues Amp"));
strcpy(PresetName3,("AxeFest Dweezil DynaFlanger"));
strcpy(PresetName4,("Sweep Echo"));
strcpy(PresetName5,("By Your Command"));
strcpy(PresetName6,("Brittle Comp Rhythm"));
strcpy(PresetName7,("Synth Lead"));
strcpy(PresetName8,("Rotary Rate"));
strcpy(PresetName9,("The Planets 2"));

break;

case 320: 
strcpy(PresetName0,("Glass Castles"));
strcpy(PresetName1,("Scintillating"));
strcpy(PresetName2,("Phenomena"));
strcpy(PresetName3,("Traffic Jam"));
strcpy(PresetName4,("Katie's Song"));
strcpy(PresetName5,("Detuned Plexi"));
strcpy(PresetName6,("Bouncing Echoes"));
strcpy(PresetName7,("Bad"));
strcpy(PresetName8,("Dripping Wet 2"));
strcpy(PresetName9,("Rush Hour"));

break;

case 330: 
strcpy(PresetName0,("Get Down Syndrome"));
strcpy(PresetName1,("Comp Clean"));
strcpy(PresetName2,("New Country"));
strcpy(PresetName3,("Delay Pan Alpha"));
strcpy(PresetName4,("Drop Tune"));
strcpy(PresetName5,("Dirty Tape Echo"));
strcpy(PresetName6,("In a Fixx"));
strcpy(PresetName7,("Uber Chugga 2"));
strcpy(PresetName8,("Tri-Chorus"));
strcpy(PresetName9,("'63 Tube Verb Box"));

break;

case 340: 
strcpy(PresetName0,("Yngwie"));
strcpy(PresetName1,("Syncopated 2"));
strcpy(PresetName2,("Run Like Heck"));
strcpy(PresetName3,("Bass Ackwards III"));
strcpy(PresetName4,("Stratosphere"));
strcpy(PresetName5,("Rotary Band Delay"));
strcpy(PresetName6,("Melancholia"));
strcpy(PresetName7,("Shifted BandTaps"));
strcpy(PresetName8,("Shifted Delay"));
strcpy(PresetName9,("Modern Eddie"));

break;

case 350: 
strcpy(PresetName0,("PCM70 Hall"));
strcpy(PresetName1,("Mr Gilmour Lead"));
strcpy(PresetName2,("Soundtrack"));
strcpy(PresetName3,("Bright Plate"));
strcpy(PresetName4,("Juicy Lead"));
strcpy(PresetName5,("Ganymede 8"));
strcpy(PresetName6,("Forty Miles"));
strcpy(PresetName7,("Freeway Jam"));
strcpy(PresetName8,("Beef Supreme"));
strcpy(PresetName9,("Phase Fuzz"));

break;

case 360: 
strcpy(PresetName0,("Deluxe Dotted 8th"));
strcpy(PresetName1,("Clockwork Banana"));
strcpy(PresetName2,("Thor's Hammer +Saw"));
strcpy(PresetName3,("East Wes"));
strcpy(PresetName4,("Bayou Country"));
strcpy(PresetName5,("Prometheus WV"));
strcpy(PresetName6,("Ned Beatty"));
strcpy(PresetName7,("Longer Verb"));
strcpy(PresetName8,("A Kind of Dream"));
strcpy(PresetName9,("Spandex & Spray"));

break;

case 370: 
strcpy(PresetName0,("Opposed Notches"));
strcpy(PresetName1,("Modern Jazz"));
strcpy(PresetName2,("Shiva on the Rocks"));
strcpy(PresetName3,("Walking on Moon"));
strcpy(PresetName4,("Pulse Delay"));
strcpy(PresetName5,("Stone in Love"));
strcpy(PresetName6,("CE-1 Chorus|Vibe"));
strcpy(PresetName7,("Detuners"));
strcpy(PresetName8,("Triangle Flange"));
strcpy(PresetName9,("DreamVerb"));

break;

case 380: 
strcpy(PresetName0,("Stereo Death Fuzz"));
strcpy(PresetName1,("Forlorn"));
strcpy(PresetName2,("Ambient Guitar"));
strcpy(PresetName3,("Eruption"));
strcpy(PresetName4,("Band Delays"));
strcpy(PresetName5,("Mr.Floyd"));
strcpy(PresetName6,("Man In The Box"));
strcpy(PresetName7,("Broken Heart"));
strcpy(PresetName8,("Solar Eclipse 2"));
strcpy(PresetName9,("Comb Delays"));

break;

case 390: 
strcpy(PresetName0,("Time After Time"));
strcpy(PresetName1,("Capricorn 1"));
strcpy(PresetName2,("Underwater"));
strcpy(PresetName3,("Circular Delays 2"));
strcpy(PresetName4,("Blitz III"));
strcpy(PresetName5,("Final Frontier 3"));
strcpy(PresetName6,("All-Wet 8-Voice"));
strcpy(PresetName7,("C-Major Shifts"));
strcpy(PresetName8,("Fifths in Space"));
strcpy(PresetName9,("Sea of Tranquility"));

break;

case 400: 
strcpy(PresetName0,("Corbomite Maneuver"));
strcpy(PresetName1,("The Infield"));
strcpy(PresetName2,("China Syndrome"));
strcpy(PresetName3,("Clock Tower"));
strcpy(PresetName4,("Stereo Shift+Verb"));
strcpy(PresetName5,("Fla+Cho Echo+Verb"));
strcpy(PresetName6,("Echo Room"));
strcpy(PresetName7,("Tumbleweeds"));
strcpy(PresetName8,("W@rped Vinyl 2.0"));
strcpy(PresetName9,("80's Clean"));

break;

case 410: 
strcpy(PresetName0,("Vintage Digital Delay"));
strcpy(PresetName1,("Sultans"));
strcpy(PresetName2,("RockMe On Clean"));
strcpy(PresetName3,("High Landrons"));
strcpy(PresetName4,("Lunar Eclipse"));
strcpy(PresetName5,("Crystal Scions"));
strcpy(PresetName6,("Jeff Gets Ready"));
strcpy(PresetName7,("FilteRING Funk"));
strcpy(PresetName8,("ADSR Verb"));
strcpy(PresetName9,("Expanding Delay"));

break;

case 420: 
strcpy(PresetName0,("Echo Deva III"));
strcpy(PresetName1,("Cliffs of Dover"));
strcpy(PresetName2,("Modulated Mayhem"));
strcpy(PresetName3,("Damage Nexus"));
strcpy(PresetName4,("Gnome-Mans Land 2"));
strcpy(PresetName5,("Night Creatures"));
strcpy(PresetName6,("Farfegnugen"));
strcpy(PresetName7,("Jump Gate"));
strcpy(PresetName8,("Phazed Delays"));
strcpy(PresetName9,("Diamonique Rain"));

break;

case 430: 
strcpy(PresetName0,("Happy Place"));
strcpy(PresetName1,("Echo Room 2"));
strcpy(PresetName2,("Space Verb 2"));
strcpy(PresetName3,("Direct Inject"));
strcpy(PresetName4,("Ham & Eggs"));
strcpy(PresetName5,("Out1:FOH Out2:Cab"));
strcpy(PresetName6,("Amp Match Template"));
strcpy(PresetName7,("BYPASS"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 440: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 450: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 460: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 470: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 480: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 490: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 500: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 510: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
  }
}  
