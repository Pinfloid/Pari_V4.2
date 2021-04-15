#pragma once


/*=========================   -  Include library's  -  ==============================*/
#include <MIDI.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h> // include i/o class header
#include <TFT_eSPI.h>
#include <SPI.h>
/*===================================================================================*/

//MIDI_CREATE_INSTANCE(Type, SerialPort, Name)
MIDI_CREATE_INSTANCE(HardwareSerial, Serial1, MIDI);

hd44780_I2Cexp lcd;

TFT_eSPI tft = TFT_eSPI();


char page[] = "Axelman8";
int PNtxt = 0;

AxeSystem Axe;
Tempo tempo;
Timer timer;


/*===================================================================================*/
byte MidiChannel = 1;
byte currentSwitch = 0;

#define MIDICHAN 1 //MIDI channel
//#define BOUNCEDELAY 25
#define TAP_TEMPO_LED_DURATION 100
#define SceneSelect_CC 34


// ===========   ==== ===    VARIABLES   === ====  ====================================

char active_PresetName[33],PresetName0[33], PresetName1[33], PresetName2[33], PresetName3[33], PresetName4[33], PresetName5[33], PresetName6[33], PresetName7[33], PresetName8[33], PresetName9[33];


//=====  Scene name alignment management  ========
//scenenames per row on tft-screen
char 
SCE11[16],SCE12[16],SCE13[16],
SCE21[16],SCE22[16],SCE23[16],
SCE31[16],SCE32[16],SCE33[16],
SCE41[16],SCE42[16],SCE43[16],
SCE51[16],SCE52[16],SCE53[16],
SCE61[16],SCE62[16],SCE63[16],
SCE71[16],SCE72[16],SCE73[16],
SCE81[16],SCE82[16],SCE83[16],
PRE11[32],PRE12[32],PRE13[32];

//Length of scenenames per row per scene
String stringScene;
String stringPreset;


byte L11,L12,L13;
byte L21,L22,L23;
byte L31,L32,L33;
byte L41,L42,L43;
byte L51,L52,L53;
byte L61,L62,L63;
byte L71,L72,L73;
byte L81,L82,L83;

byte P11,P12,P13;
byte Cursor;



//extracted word from the string max 4 words
String str1; //scene String
String str2;
String str3;

String pre1; //scene String
String pre2;
String pre3;


//extracted rows from the string | 1 row per word.
byte row1; // , locations
byte row2;
byte row3;

byte prow1; // , locations
byte prow2;
byte prow3;


/*===================================================================================*/


int PresetNumb;  //Initial preset number for preset selection
int CurPreset;  // current preset that is selected from preset up/down of bank up/down
int active_Preset;  //setting the AxeFX active presetnumber


//numbers selection for choosing your preset with a number:
byte stringLength;
byte inputNumber;
byte n1;
byte n2;
int  n3;
byte Counter;


byte  effect1, effect2, effect3, effect4, effect5, effect6, effect7, 
      effect8, effect9, effect10, effect11, effect12, effect13, effect14, 
      effect15, effect16, effect17, effect18, effect19;
      
byte active_Scene;  // active scene number
byte effectindex;
byte tapTempo;
byte currentEffect = 0;
//byte currentChannel = 0;

bool tapSwitch;
bool getScenes;
bool looperActive = false;
bool wahActive = false;
bool auditionMode = false;


/*===================================================================================*/
#define M_SIZE 1

#define SWITCH1 3
#define SWITCH2 5
#define SWITCH3 6
#define SWITCH4 7
#define SWITCH5 25
#define SWITCH6 30
#define SWITCH7 9
#define SWITCH8 11
#define SWITCH9 12
#define SWITCH10 13
#define SWITCH11 28
#define SWITCH12 31
#define SWITCH13 27
#define SWITCH14 26
#define SWITCH15 23
#define SWITCH16 24
#define SWITCH17 22
#define SWITCH18 32

byte switches[18] = { SWITCH1, SWITCH2, SWITCH3, SWITCH4, SWITCH5, SWITCH6, SWITCH7, SWITCH8,
                     SWITCH9, SWITCH10, SWITCH11, SWITCH12, SWITCH13, SWITCH14, SWITCH15, SWITCH16, SWITCH17, SWITCH18};
byte switchState[18] = { HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH,};

//Screens pinnumbers with CS number:
byte CS1 = 34;
byte CS2 = 36;
byte CS3 = 40;
byte CS4 = 42;
byte CS5 = 46;
byte CS6 = 43;
byte CS7 = 37;
byte CS8 = 35;
byte CS9 = 33;
byte CS10 = 49;
byte CS11 = 48;
byte CS12 = 47;
byte CS13 = 44;
byte CS14 = 45;
byte CS15 = 41;

/*===================================================================================*/
/*Axelman8*/
