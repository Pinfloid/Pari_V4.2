#pragma once


/*                             ====================
                                       NOTE
  =======================================================================================
  Scenes are initiated on this page, as ini_scenes is populated from this page.
  so are the presets initiated on this page and ini_preset is populated from this page.
  ======================================================================================= */


/*===========================================   -  Include library's  -  ================================================*/
#include <Timer.h>
#include <AxeFxControl.h>
#include "variables.h"
#include "screenSetup.h"
#include "settings.h"
/*=======================================================================================================================*/




/*==========================================================
  ================ all scenes initialize ===================
  ==========================================================*/

#define NUM_SCENES 8
#define NUM_PRESET 10

int counter;

//Struct to hold information about each scene
struct SceneInfo {
  SceneNumber number = -1;
  const char *name;
};

//A list of all of the scenes for this preset
SceneInfo scenes[NUM_SCENES];


//Reset the scene list for the new preset
void onPresetChanging(const PresetNumber number) {
  for (byte i = 0; i < NUM_SCENES; i++) {
    scenes[i].number = -1;
  }
}


/*============================================
         This is for the TAP flashlight
  ============================================*/

void turnOffFlashingLed()
{
  digitalWrite(29, LOW );
}

void flashLed(int ledPin, int flashDelay)
{
  digitalWrite(29, HIGH);
  timer.after(flashDelay, turnOffFlashingLed);
}

void onTapTempo()
{
  flashLed(29, TAP_TEMPO_LED_DURATION );
}

/*=============================================
  ==========  END TAP FLASHLIGHT  =============
  =============================================*/


void onSystemChange() {
  //Serial.println("Function On System Change");
  //Display the current tempo at the TFT

  if ((strcmp(page, "scene") == 0) || (strcmp(page, "effect") == 0) || (strcmp(page, "numbers") == 0) )
  {
    Axe.fetchEffects(true);
  }
  else {
    Axe.fetchEffects(false);
  }


  if (strcmp(page, "preset") != 0)
  {

    digitalWrite (CS14, LOW);
    Axe.requestTempo();
    tft.fillScreen(TFT_GREEN);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(5);
    tft.setCursor(40, 15);
    tft.println("TAP");
    tft.setCursor(50, 70);
    tft.setTextSize(4);
    tft.setTextColor(TFT_RED);
    tft.println(Axe.getTempo());
    digitalWrite (CS14, HIGH);

  }
}



/*==========================================================================================================================
         Helper for better view of the names
  ==========================================================================================================================*/

void SceneName_helper(const char *name)
{
  // Serial.println("Function Scenename helper");
  stringScene = name;
  stringScene.trim();
  row1 = stringScene.indexOf(' ');  //frows location of first ,
  str1 = stringScene.substring(0, row1);   //captures first data String
  row2 = stringScene.indexOf(' ', row1 + 1 ); //frows location of second ,
  str2 = stringScene.substring(row1 + 1, row2 + 1); //captures second data String
  row3 = stringScene.indexOf(' ', row2 + 1 );
  str3 = stringScene.substring(row2 + 1, row3 + 1);


}

void PresetName_helper()
{
  //Serial.println("Function presetnamen helper");
  stringPreset = active_PresetName;
  stringPreset.trim();
  prow1 = stringPreset.indexOf(' ');  //frows location of first ,
  pre1 = stringPreset.substring(0, prow1);   //captures first data String
  prow2 = stringPreset.indexOf(' ', prow1 + 1 ); //frows location of second ,
  pre2 = stringPreset.substring(prow1 + 1, prow2 + 1); //captures second data String
  prow3 = stringPreset.indexOf(' ', prow2 + 1 );
  pre3 = stringPreset.substring(prow2 + 1, prow3 + 1);

  P11 = pre1.length(); P12 = pre2.length(); P13 = pre3.length(); pre1.toCharArray(PRE11, P11 + 1); pre2.toCharArray(PRE12, P12 + 1); pre3.toCharArray(PRE13, P13 + 1);

}



/*=========================================================================================================================
  Set active presetname in screen 13
  =========================================================================================================================*/
void presetName_setting(AxePreset preset)   //Set active presetname in screen 13
{

  // Serial.println("Function preset name settings");

  PresetNumb = active_Preset;
  PresetName_helper();

  tft.setTextWrap(false); // we dont need this anymore

  if (preset.getPresetNumber() < 10)
  {
    Cursor = 65;
  }
  else if ((preset.getPresetNumber() >= 10) && (preset.getPresetNumber() < 100))
  {
    Cursor = 50;
  }
  else if (preset.getPresetNumber() >= 100)
  {
    Cursor = 29;
  }

  if (P13 == 0)
  {
    //Init screen 13
    digitalWrite (CS13, LOW);

    tft.fillScreen(TFT_BLACK);
    tft.setTextSize(6);
    tft.setTextColor(TFT_BLUE);
    tft.setCursor(Cursor, 0);
    tft.println("         ");
    tft.setTextSize(6);
    tft.setTextColor(TFT_BLUE);
    tft.setCursor(Cursor, 0);
    tft.println(preset.getPresetNumber());

    //row 1
    if (P11 > 10)
    {
      tft.setCursor(1, 60);
    }
    else
    {
      tft.setCursor((80 - ((P11 * 9) - 6)), 60);
    }
    tft.setTextSize(3);
    tft.setTextColor(TFT_GREEN);
    tft.println(PRE11);

    //row 2

    if (P12 > 10)
    {
      tft.setCursor(1, 90);
    }
    else
    {
      tft.setCursor((80 - ((P12 * 9) - 6)), 90);
    }
    tft.setTextSize(3);
    tft.setTextColor(TFT_GREEN);
    tft.println(PRE12);
    digitalWrite (CS13, HIGH);
  }
  else {
    //Init screen 13
    digitalWrite (CS13, LOW);

    tft.fillScreen(TFT_BLACK);
    tft.setTextSize(6);
    tft.setTextColor(TFT_BLUE);
    tft.setCursor(Cursor, 0);
    tft.println("         ");
    tft.setTextSize(6);
    tft.setTextColor(TFT_BLUE);
    tft.setCursor(Cursor, 0);
    tft.println(preset.getPresetNumber());

    //row 1
    if (P11 > 10)
    {
      tft.setCursor(1, 49);
    }
    else
    {
      tft.setCursor((80 - ((P11 * 9) - 6)), 49);
    }
    tft.setTextSize(3);
    tft.setTextColor(TFT_GREEN);
    tft.println(PRE11);

    //row 2

    if (P12 > 10)
    {
      tft.setCursor(1, 78);
    }
    else
    {
      tft.setCursor((80 - ((P12 * 9) - 6)), 78);
    }
    tft.setTextSize(3);
    tft.setTextColor(TFT_GREEN);
    tft.println(PRE12);

    //row 3
    if (P13 > 10)
    {
      tft.setCursor(1, 107);
    }
    else
    {
      tft.setCursor((80 - ((P13 * 9) - 6)), 107);
    }
    tft.setTextSize(3);
    tft.setTextColor(TFT_GREEN);
    tft.println(PRE13);
  }
  digitalWrite (CS13, HIGH);

}


/*=====================================================================
  ===================  INI SCENES build-up ============================*/

void ini_scenes()  //setup scene screens
{
  //Serial.println("ini scenes");

  Axe.refresh();


  if (auditionMode != true)
  {
    // Serial.println("Scenes worden gevuld");
    // If the page is NOT scenepage,  then update CS5 (bank down) and CS10 (bank up) as well

    lcd.clear();   lcd.begin(16, 2);  lcd.setCursor(0, 0); lcd.print("ACT PRESET: "); lcd.print(active_Preset);
    lcd.setCursor(0, 1);   lcd.print("|-  AXELMAN8  -|");

    if (strcmp(page, "scene") != 0)
    {
      // get the effects on the first cycle

      digitalWrite (CS5, LOW);
      tft.fillScreen(TFT_BLUE);
      tft.setTextSize(3);
      tft.setCursor(30, 35);
      tft.setTextColor(TFT_WHITE);
      tft.println("PRESET");
      tft.setCursor(51, 70);
      tft.setTextSize(3);
      tft.setTextColor(TFT_RED);
      tft.println("DOWN");
      digitalWrite (CS5, HIGH);

      digitalWrite (CS10, LOW);
      tft.fillScreen(TFT_BLUE);
      tft.setTextColor(TFT_WHITE);
      tft.setTextSize(3);
      tft.setCursor(30, 35);
      tft.println("PRESET");
      tft.setCursor(70, 70);
      tft.setTextSize(3);
      tft.setTextColor(TFT_RED);
      tft.println("UP");
      digitalWrite (CS10, HIGH);

      digitalWrite (CS11, LOW);
      tft.fillScreen(TFT_PURPLE);
      tft.setTextColor(TFT_WHITE, TFT_PURPLE);
      tft.setTextSize(2);
      tft.setCursor(0, 0);
      tft.println("NO WAH ACTIVE");
      tft.setTextColor(TFT_WHITE);
      tft.setTextSize(3);
      tft.setCursor(35, 35);
      tft.println("EFFECT");
      tft.setCursor(45, 70);
      tft.setTextSize(3);
      tft.setTextColor(TFT_WHITE);
      tft.println("PAGE");
      digitalWrite (CS11, HIGH);

      digitalWrite (CS12, LOW);
      tft.fillScreen(TFT_DARKGREEN);
      tft.setTextColor(TFT_WHITE);
      tft.setTextSize(3);
      tft.setCursor(65, 35);
      tft.println("NO");
      tft.setCursor(25, 70);
      tft.setTextSize(3);
      tft.setTextColor(TFT_WHITE);
      tft.println("LOOPER");
      digitalWrite (CS12, HIGH);

      digitalWrite (CS14, LOW);
      tft.fillScreen(TFT_GREEN);
      tft.setTextColor(TFT_BLACK);
      tft.setTextSize(5);
      tft.setCursor(40, 15);
      tft.println("TAP");
      tft.setCursor(50, 70);
      tft.setTextSize(4);
      tft.setTextColor(TFT_RED);
      tft.println(Axe.getTempo());
      digitalWrite (CS14, HIGH);

      digitalWrite (CS15, LOW);
      tft.fillScreen(TFT_BLACK);
      tft.setTextColor(TFT_BLUE);
      tft.setTextSize(3);
      tft.setCursor(10, 0);
      tft.println("Axelman8");
      tft.setTextSize(3);
      tft.setCursor(30, 50);
      tft.setTextColor(TFT_WHITE);
      tft.println("NUMBER");
      tft.setCursor(30, 85);
      tft.setTextSize(3);
      tft.setTextColor(TFT_WHITE);
      tft.println("SELECT");
      digitalWrite (CS15, HIGH);

    }

    /* =============== printing scenes on the screens ==============*/

    //Serial.println("Function get scenes in ini screens");
    if (getScenes == true)
    {
      //setting wah to false
      digitalWrite (CS11, LOW);
      tft.setTextColor(TFT_WHITE, TFT_PURPLE);
      tft.setTextSize(2);
      tft.setCursor(0, 0);
      tft.println("NO WAH ACTIVE");
      digitalWrite (CS11, HIGH);

      //setting looper to false
      digitalWrite (CS12, LOW);
      tft.fillScreen(TFT_DARKGREEN);
      tft.setTextColor(TFT_WHITE);
      tft.setTextSize(3);
      tft.setCursor(65, 35);
      tft.println("NO");
      tft.setCursor(25, 70);
      tft.setTextSize(3);
      tft.setTextColor(TFT_WHITE);
      tft.println("LOOPER");
      digitalWrite (CS12, HIGH);


      //Set the page to SCENE
      strcpy(page, "scene");


      digitalWrite(CS1, LOW), digitalWrite(CS2, LOW), digitalWrite(CS3, LOW), digitalWrite(CS4, LOW),
                   digitalWrite(CS6, LOW), digitalWrite(CS7, LOW), digitalWrite(CS8, LOW), digitalWrite(CS9, LOW);


      tft.setTextWrap(false);
      tft.fillScreen(TFT_BLACK);
      tft.setTextColor(TFT_YELLOW);
      tft.setTextSize(3);
      tft.setCursor(2, 105);
      tft.println("SCENE   ");


      digitalWrite(CS1, HIGH), digitalWrite(CS2, HIGH), digitalWrite(CS3, HIGH), digitalWrite(CS4, HIGH),
                   digitalWrite(CS6, HIGH), digitalWrite(CS7, HIGH), digitalWrite(CS8, HIGH), digitalWrite(CS9, HIGH);


      digitalWrite (CS1, LOW);
      if (active_Scene == 1)
      {
        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_BLACK, TFT_GREEN);
        tft.setTextSize(3);
        tft.setCursor(1, 105);
        tft.println("SCENE   ");
        tft.setTextSize(3);
        tft.setCursor(141, 105);
        tft.setTextColor(TFT_BLACK, TFT_GREEN);
        tft.println("1");
        tft.drawLine(0, 104, 160, 104, TFT_GREEN);
        tft.drawRect(0, 0, 160, 128, ST7735_GREEN); // Draw bezel line
      }
      else
      {
        tft.setTextSize(3);
        tft.setCursor(141, 105);
        tft.setTextColor(TFT_MAGENTA);
        tft.println("1");
      }
      if (L11 >= 9)
      {
        tft.setTextSize(3);
        tft.setTextColor(TFT_WHITE);
        tft.setCursor(5, 10);
        tft.println(SCE11);
      }
      else
      {
        tft.setTextSize(3);
        tft.setTextColor(TFT_WHITE);
        tft.setCursor(80 - ((L11 * 9) - 5), 10);
        tft.println(SCE11);
      }
      tft.setCursor(80 - ((L12 * 9) - 5), 40);
      tft.println(SCE12);
      tft.setCursor(80 - ((L13 * 9) - 5), 70);
      tft.println(SCE13);
      digitalWrite (CS1, HIGH);



      //2
      digitalWrite (CS2, LOW);
      if (active_Scene == 2)
      {
        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_BLACK, TFT_GREEN);
        tft.setTextSize(3);
        tft.setCursor(1, 105);
        tft.println("SCENE   ");
        tft.setTextSize(3);
        tft.setCursor(141, 105);
        tft.setTextColor(TFT_BLACK, TFT_GREEN);
        tft.println("2");
        tft.drawLine(0, 104, 160, 104, TFT_GREEN);
        tft.drawRect(0, 0, 160, 128, ST7735_GREEN); // Draw bezel line
      }
      else {
        tft.setTextSize(3);
        tft.setCursor(141, 105);
        tft.setTextColor(TFT_MAGENTA);
        tft.println("2");
      }
      if (L21 >= 9)
      {
        tft.setTextSize(3);
        tft.setTextColor(TFT_WHITE);
        tft.setCursor(5, 10);
        tft.println(SCE21);
      }
      else
      {
        tft.setTextSize(3);
        tft.setTextColor(TFT_WHITE);
        tft.setCursor(80 - ((L21 * 9) - 5), 10);
        tft.println(SCE21);
      }
      tft.setCursor(80 - ((L22 * 9) - 5), 40);
      tft.println(SCE22);
      tft.setCursor(80 - ((L23 * 9) - 5), 70);
      tft.println(SCE23);
      digitalWrite (CS2, HIGH);


      //3
      digitalWrite (CS3, LOW);
      if (active_Scene == 3)
      {
        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_BLACK, TFT_GREEN);
        tft.setTextSize(3);
        tft.setCursor(1, 105);
        tft.println("SCENE   ");
        tft.setTextSize(3);
        tft.setCursor(141, 105);
        tft.setTextColor(TFT_BLACK, TFT_GREEN);
        tft.println("3");
        tft.drawLine(0, 104, 160, 104, TFT_GREEN);
        tft.drawRect(0, 0, 160, 128, ST7735_GREEN); // Draw bezel line
      }
      else {
        tft.setTextSize(3);
        tft.setCursor(141, 105);
        tft.setTextColor(TFT_MAGENTA);
        tft.println("3");
      }
      if (L31 >= 9)
      {
        tft.setTextSize(3);
        tft.setTextColor(TFT_WHITE);
        tft.setCursor(5, 10);
        tft.println(SCE31);
      }
      else
      {
        tft.setTextSize(3);
        tft.setTextColor(TFT_WHITE);
        tft.setCursor(80 - ((L31 * 9) - 5), 10);
        tft.println(SCE31);
      }
      tft.setCursor(80 - ((L32 * 9) - 5), 40);
      tft.println(SCE32);
      tft.setCursor(80 - ((L33 * 9) - 5), 70);
      tft.println(SCE33);
      digitalWrite (CS3, HIGH);


      //4
      digitalWrite (CS4, LOW);
      if (active_Scene == 4)
      {
        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_BLACK, TFT_GREEN);
        tft.setTextSize(3);
        tft.setCursor(1, 105);
        tft.println("SCENE   ");
        tft.setTextSize(3);
        tft.setCursor(141, 105);
        tft.setTextColor(TFT_BLACK, TFT_GREEN);
        tft.println("4");
        tft.drawLine(0, 104, 160, 104, TFT_GREEN);
        tft.drawRect(0, 0, 160, 128, ST7735_GREEN); // Draw bezel line
      }
      else
      {
        tft.setTextSize(3);
        tft.setCursor(141, 105);
        tft.setTextColor(TFT_MAGENTA);
        tft.println("4");
      }
      if (L41 >= 9)
      {
        tft.setTextSize(3);
        tft.setTextColor(TFT_WHITE);
        tft.setCursor(5, 10);
        tft.println(SCE41);
      }
      else
      {
        tft.setTextSize(3);
        tft.setTextColor(TFT_WHITE);
        tft.setCursor(80 - ((L41 * 9) - 5), 10);
        tft.println(SCE41);
      }
      tft.setCursor(80 - ((L42 * 9) - 5), 40);
      tft.println(SCE42);
      tft.setCursor(80 - ((L43 * 9) - 5), 70);
      tft.println(SCE43);
      digitalWrite (CS4, HIGH);


      //5
      digitalWrite (CS6, LOW);
      if (active_Scene == 5)
      {
        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_BLACK, TFT_GREEN);
        tft.setTextSize(3);
        tft.setCursor(1, 105);
        tft.println("SCENE   ");
        tft.setTextSize(3);
        tft.setCursor(141, 105);
        tft.setTextColor(TFT_BLACK, TFT_GREEN);
        tft.println("5");
        tft.drawLine(0, 104, 160, 104, TFT_GREEN);
        tft.drawRect(0, 0, 160, 128, ST7735_GREEN); // Draw bezel line
      }
      else {
        tft.setTextSize(3);
        tft.setCursor(141, 105);
        tft.setTextColor(TFT_MAGENTA);
        tft.println("5");
      }
      if (L51 >= 9)
      {
        tft.setTextSize(3);
        tft.setTextColor(TFT_WHITE);
        tft.setCursor(5, 10);
        tft.println(SCE51);
      }
      else {
        tft.setTextSize(3);
        tft.setTextColor(TFT_WHITE);
        tft.setCursor(80 - ((L51 * 9) - 5), 10);
        tft.println(SCE51);
      }
      tft.setCursor(80 - ((L52 * 9) - 5), 40);
      tft.println(SCE52);
      tft.setCursor(80 - ((L53 * 9) - 5), 70);
      tft.println(SCE53);
      digitalWrite (CS6, HIGH);


      //6
      digitalWrite (CS7, LOW);
      if (active_Scene == 6)
      {
        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_BLACK, TFT_GREEN);
        tft.setTextSize(3);
        tft.setCursor(1, 105);
        tft.println("SCENE   ");
        tft.setTextSize(3);
        tft.setCursor(141, 105);
        tft.setTextColor(TFT_BLACK, TFT_GREEN);
        tft.println("6");
        tft.drawLine(0, 104, 160, 104, TFT_GREEN);
        tft.drawRect(0, 0, 160, 128, ST7735_GREEN); // Draw bezel line
      }
      else {
        tft.setTextSize(3);
        tft.setCursor(141, 105);
        tft.setTextColor(TFT_MAGENTA);
        tft.println("6");
      }
      if (L61 >= 9)
      {
        tft.setTextSize(3);
        tft.setTextColor(TFT_WHITE);
        tft.setCursor(5, 10);
        tft.println(SCE61);
      }
      else {
        tft.setTextSize(3);
        tft.setTextColor(TFT_WHITE);
        tft.setCursor(80 - ((L61 * 9) - 5), 10);
        tft.println(SCE61);
      }
      tft.setCursor(80 - ((L62 * 9) - 5), 40);
      tft.println(SCE62);
      tft.setCursor(80 - ((L63 * 9) - 5), 70);
      tft.println(SCE63);
      digitalWrite (CS7, HIGH);


      //7
      digitalWrite (CS8, LOW);
      if (active_Scene == 7)
      {
        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_BLACK, TFT_GREEN);
        tft.setTextSize(3);
        tft.setCursor(1, 105);
        tft.println("SCENE   ");
        tft.setTextSize(3);
        tft.setCursor(141, 105);
        tft.setTextColor(TFT_BLACK, TFT_GREEN);
        tft.println("7");
        tft.drawLine(0, 104, 160, 104, TFT_GREEN);
        tft.drawRect(0, 0, 160, 128, ST7735_GREEN); // Draw bezel line
      }
      else {
        tft.setTextSize(3);
        tft.setCursor(141, 105);
        tft.setTextColor(TFT_MAGENTA);
        tft.println("7");
      }
      if (L71 >= 9)
      {
        tft.setTextSize(3);
        tft.setTextColor(TFT_WHITE);
        tft.setCursor(5, 10);
        tft.println(SCE71);
      }
      else {
        tft.setTextSize(3);
        tft.setTextColor(TFT_WHITE);
        tft.setCursor(80 - ((L71 * 9) - 5), 10);
        tft.println(SCE71);
      }
      tft.setCursor(80 - ((L72 * 9) - 5), 40);
      tft.println(SCE72);
      tft.setCursor(80 - ((L73 * 9) - 5), 70);
      tft.println(SCE73);
      digitalWrite (CS8, HIGH);


      //8
      digitalWrite (CS9, LOW);
      if (active_Scene == 8)
      {
        tft.fillScreen(TFT_BLACK);
        tft.setTextColor(TFT_BLACK, TFT_GREEN);
        tft.setTextSize(3);
        tft.setCursor(1, 105);
        tft.println("SCENE   ");
        tft.setTextSize(3);
        tft.setCursor(141, 105);
        tft.setTextColor(TFT_BLACK, TFT_GREEN);
        tft.println("8");
        tft.drawLine(0, 104, 160, 104, TFT_GREEN);
        tft.drawRect(0, 0, 160, 128, ST7735_GREEN); // Draw bezel line
      }
      else {
        tft.setTextSize(3);
        tft.setCursor(141, 105);
        tft.setTextColor(TFT_MAGENTA);
        tft.println("8");
      }
      if (L81 >= 9)
      {
        tft.setTextSize(3);
        tft.setTextColor(TFT_WHITE);
        tft.setCursor(5, 10);
        tft.println(SCE81);
      }
      else
      {
        tft.setTextSize(3);
        tft.setTextColor(TFT_WHITE);
        tft.setCursor(80 - ((L81 * 9) - 5), 10);
        tft.println(SCE81);
      }
      tft.setCursor(80 - ((L82 * 9) - 5), 40);
      tft.println(SCE82);
      tft.setCursor(80 - ((L83 * 9) - 5), 70);
      tft.println(SCE83);
      digitalWrite (CS9, HIGH);

      Serial.println("Einde scene vulling");
      getScenes = false;

      //setting Axe preset for screen 13
      AxePreset preset = (Axe.getCurrentPreset());
      presetName_setting(preset);  //Fill screen 13 with active preset name and number

    }
  }
}

/*==================  END of all scenes initialize ================
  =================================================================*/




/*=================================================================*/


/*=================================================================*/
/*========================  Fetch all scenes ======================*/

void onSceneName(const SceneNumber number, const char* name, const byte length)
{
  //Serial.println("Function On scene name");

  if (getScenes == true)
  {
    /*=============================================================
       ====== ONLY operate if needed.  LIKE page is SCENE  =======*/

    Serial.print("onSceneName(): ");
    Serial.print(number);
    Serial.print(": ");
    Serial.println(name);

    /*======================================
      =       SCENE names And SCREENS      =
      =             SCENE names            =
      ======================================*/
    switch (number) {

      case 1: SceneName_helper(name); L11 = str1.length(); L12 = str2.length(); L13 = str3.length(); str1.toCharArray(SCE11, L11 + 1); str2.toCharArray(SCE12, L12 + 1); str3.toCharArray(SCE13, L13 + 1); break;
      case 2: SceneName_helper(name); L21 = str1.length(); L22 = str2.length(); L23 = str3.length(); str1.toCharArray(SCE21, L21 + 1); str2.toCharArray(SCE22, L22 + 1); str3.toCharArray(SCE23, L23 + 1); break;
      case 3: SceneName_helper(name); L31 = str1.length(); L32 = str2.length(); L33 = str3.length(); str1.toCharArray(SCE31, L31 + 1); str2.toCharArray(SCE32, L32 + 1); str3.toCharArray(SCE33, L33 + 1); break;
      case 4: SceneName_helper(name); L41 = str1.length(); L42 = str2.length(); L43 = str3.length(); str1.toCharArray(SCE41, L41 + 1); str2.toCharArray(SCE42, L42 + 1); str3.toCharArray(SCE43, L43 + 1); break;
      case 5: SceneName_helper(name); L51 = str1.length(); L52 = str2.length(); L53 = str3.length(); str1.toCharArray(SCE51, L51 + 1); str2.toCharArray(SCE52, L52 + 1); str3.toCharArray(SCE53, L53 + 1); break;
      case 6: SceneName_helper(name); L61 = str1.length(); L62 = str2.length(); L63 = str3.length(); str1.toCharArray(SCE61, L61 + 1); str2.toCharArray(SCE62, L62 + 1); str3.toCharArray(SCE63, L63 + 1); break;
      case 7: SceneName_helper(name); L71 = str1.length(); L72 = str2.length(); L73 = str3.length(); str1.toCharArray(SCE71, L71 + 1); str2.toCharArray(SCE72, L72 + 1); str3.toCharArray(SCE73, L73 + 1); break;
      case 8: SceneName_helper(name); L81 = str1.length(); L82 = str2.length(); L83 = str3.length(); str1.toCharArray(SCE81, L81 + 1); str2.toCharArray(SCE82, L82 + 1); str3.toCharArray(SCE83, L83 + 1); break;
    }



    /*===========================================
      =======   SCENE names from Axe-Fx    ======
      ===========================================*/


    //  //Record current scene in the list
    scenes[number - 1].number = number;
    scenes[number - 1].name = name;
    //----------This is the active scene number---------------

    //Request the first scene that we don't have yet.
    // Only request one at a time to avoid filling up RX buffer
    for (byte i = 0; i < NUM_SCENES; i++) {
      if (scenes[i].number == -1) {
        Axe.requestSceneName(i + 1);
        break;
      }
      if (i == 7) {
        ini_scenes();  // build the scene page on the screens
      }
    }
  }
}


/*=======================  END  scene info  ======================
  ================================================================*/





/*==============================================================================
  ==================  EFFECT FILTER and LOOPER SETTINGS  =======================
  ==============================================================================*/

//Serial.println("On effect filter");
//only show drives, reverbs, and delays etc.
bool onEffectFilter(const PresetNumber number, AxeEffect effect) {

  if (strcmp(page, "AMP_effect") != 0)

  {
    return  effect.isDrive() || effect.isDelay() ||  effect.isPhaser() ||
            effect.isChorus() || effect.isPitch() || effect.isReverb() ||
            effect.isCompressor() || effect.isFlanger() || effect.isMultitap() ||
            effect.isMulticomp() || effect.isLooper() ||  effect.isWah();
  }
  else
  {
    return effect.isDistort() || effect.isCab();
  }
}


/* =========================================================================================
  ==============================   IS LOOPER OR WAH AVAILABLE? ===============================
  ============================================================================================*/

void looperAvailable()
{
  digitalWrite (CS12, LOW);

  if (looperActive == true)
  {
    digitalWrite (CS12, LOW);
    tft.fillScreen(TFT_GREEN);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(3);
    tft.setCursor(28, 35);
    tft.println("LOOPER");
    tft.setCursor(28, 70);
    tft.setTextSize(3);
    tft.setTextColor(TFT_BLACK);
    tft.println("ACTIVE");
    digitalWrite (CS12, HIGH);
  }
  else
  {
    tft.fillScreen(TFT_DARKGREEN);
    tft.setTextColor(TFT_WHITE);
    tft.setTextSize(3);
    tft.setCursor(65, 35);
    tft.println("NO");
    tft.setCursor(25, 70);
    tft.setTextSize(3);
    tft.setTextColor(TFT_WHITE);
    tft.println("LOOPER");
    digitalWrite (CS12, HIGH);

  }
}

void wahAvailable()
{
  digitalWrite (CS11, LOW);
  tft.setTextColor(TFT_GREEN, TFT_PURPLE);
  tft.setTextSize(2);
  tft.setCursor(0, 0);
  tft.println("WAH AVAILABLE");
  digitalWrite (CS11, HIGH);
}




/*================================================================================================
                                        SHOW EFFECTS ON SCREEN
  ================================================================================================*/

void onEffectsReceived(PresetNumber number, AxePreset preset)
{
  Serial.println("On effects received");

  const size_t tagSz = 10;
  char tag[tagSz];
  const size_t sz = 25;
  char buf[sz];



  /*==============================================================
    ======= ONLY operate if needed.  LIKE page is EFFECT?  ========
    ==============================================================*/




  snprintf(buf, sz, "Effects[%d]: ", preset.getEffectCount());
  Serial.println(buf);

  for (effectindex = 1; effectindex < preset.getEffectCount(); effectindex++) {
    AxeEffect effect = preset.getEffectAt(effectindex);
    effect.copyEffectTag(tag, tagSz);

    char engaged = effect.isBypassed() ? ' ' : 'X';
    snprintf(buf, sz, "%s(ch:%c) [%c]", tag, effect.getChannelChar(), engaged);
    Serial.println(buf);

    effect.getEffectId();
    Serial.print("Effect: "); Serial.print(tag); Serial.print(" - effectId = "); Serial.print(effect.getEffectId()); Serial.print(" - Channel: "); Serial.println(effect.getChannelChar());
    EffectId effectId = effectindex;
    effect.isBypassed();


    if (strcmp(page, "effect") == 0)  //Only if page is effect,  than get the effects.
    {
      //Serial.println("Effects if page is effect");

      switch (effectindex)
      {
        case 1:
          effect1 = (effect.getEffectId());
          digitalWrite (CS1, LOW);
          if (effect.isBypassed()) {
            tft.fillScreen(TFT_RED);
            tft.setCursor(2, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_WHITE);
            effect.printEffectName(tft);
          }
          else {
            tft.fillScreen(TFT_GREEN);
            tft.setCursor(2, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_BLACK);
            effect.printEffectName(tft);
          }
          digitalWrite (CS1, HIGH);
          break;

        case 2:
          effect2 = (effect.getEffectId());
          digitalWrite (CS2, LOW);
          if (effect.isBypassed()) {
            tft.fillScreen(TFT_RED);
            tft.setCursor(2, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_WHITE);
            effect.printEffectName(tft);
          }
          else {
            tft.fillScreen(TFT_GREEN);
            tft.setCursor(2, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_BLACK);
            effect.printEffectName(tft);
          }
          digitalWrite (CS2, HIGH);
          break;


        case 3:
          effect3 = (effect.getEffectId());
          digitalWrite (CS3, LOW);
          if (effect.isBypassed()) {
            tft.fillScreen(TFT_RED);
            tft.setCursor(2, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_WHITE);
            effect.printEffectName(tft);
          }
          else {
            tft.fillScreen(TFT_GREEN);
            tft.setCursor(2, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_BLACK);
            effect.printEffectName(tft);
          }
          digitalWrite (CS3, HIGH);
          break;


        case 4:
          effect4 = (effect.getEffectId());
          digitalWrite (CS4, LOW);
          if (effect.isBypassed()) {
            tft.fillScreen(TFT_RED);
            tft.setCursor(2, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_WHITE);
            effect.printEffectName(tft);
          }
          else {
            tft.fillScreen(TFT_GREEN);
            tft.setCursor(2, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_BLACK);
            effect.printEffectName(tft);
          }
          digitalWrite (CS4, HIGH);
          break;

        case 5:
          effect5 = (effect.getEffectId());
          digitalWrite (CS5, LOW);
          if (effect.isBypassed()) {
            tft.fillScreen(TFT_RED);
            tft.setCursor(2, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_WHITE);
            effect.printEffectName(tft);
          }
          else {
            tft.fillScreen(TFT_GREEN);
            tft.setCursor(2, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_BLACK);
            effect.printEffectName(tft);
          }
          digitalWrite (CS5, HIGH);
          break;

        case 6:
          effect6 = (effect.getEffectId());
          digitalWrite (CS6, LOW);
          if (effect.isBypassed()) {
            tft.fillScreen(TFT_RED);
            tft.setCursor(2, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_WHITE);
            effect.printEffectName(tft);
          }
          else {
            tft.fillScreen(TFT_GREEN);
            tft.setCursor(2, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_BLACK);
            effect.printEffectName(tft);
          }
          digitalWrite (CS6, HIGH);
          break;

        case 7:
          effect7 = (effect.getEffectId());
          digitalWrite (CS7, LOW);
          if (effect.isBypassed()) {
            tft.fillScreen(TFT_RED);
            tft.setCursor(2, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_WHITE);
            effect.printEffectName(tft);
          }
          else {
            tft.fillScreen(TFT_GREEN);
            tft.setCursor(2, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_BLACK);
            effect.printEffectName(tft);
          }
          digitalWrite (CS7, HIGH);
          break;

        case 8:
          effect8 = (effect.getEffectId());
          digitalWrite (CS8, LOW);
          if (effect.isBypassed()) {
            tft.fillScreen(TFT_RED);
            tft.setCursor(2, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_WHITE);
            effect.printEffectName(tft);
          }
          else {
            tft.fillScreen(TFT_GREEN);
            tft.setCursor(2, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_BLACK);
            effect.printEffectName(tft);
          }
          digitalWrite (CS8, HIGH);
          break;

        case 9:
          effect9 = (effect.getEffectId());
          digitalWrite (CS9, LOW);
          if (effect.isBypassed()) {
            tft.fillScreen(TFT_RED);
            tft.setCursor(2, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_WHITE);
            effect.printEffectName(tft);
          }
          else {
            tft.fillScreen(TFT_GREEN);
            tft.setCursor(2, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_BLACK);
            effect.printEffectName(tft);
          }
          digitalWrite (CS9, HIGH);
          break;

        case 10:
          effect10 = (effect.getEffectId());
          digitalWrite (CS10, LOW);
          if (effect.isBypassed()) {
            tft.fillScreen(TFT_RED);
            tft.setCursor(2, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_WHITE);
            effect.printEffectName(tft);
          }
          else {
            tft.fillScreen(TFT_GREEN);
            tft.setCursor(2, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_BLACK);
            effect.printEffectName(tft);
          }
          digitalWrite (CS10, HIGH);
          break;
      }
    }

    /*==============================================================
      ======  HERE we go with the ABCD settings on AMP and CAB =====
      ==============================================================*/

    if (strcmp(page, "AMP_effect") == 0)
    {

      Axe.getCurrentPreset().getEffectById(58);
      digitalWrite (CS1, LOW);
      tft.fillScreen(TFT_GREEN);
      tft.setCursor(15, 50);
      tft.setTextSize(4);
      tft.setTextColor(TFT_BLACK);
      tft.println("AMP1");

      tft.setCursor(124, 3);
      tft.setTextSize(6);
      tft.setTextColor(TFT_BLUE);
      tft.println(effect.getChannelChar());
      digitalWrite (CS1, HIGH);


      switch (effectindex)
      {

        case 1:
          effect17 = (effect.getEffectId());
          digitalWrite (CS2, LOW);
          if (effect.isBypassed()) {
            tft.fillScreen(TFT_RED);
            tft.setCursor(15, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_WHITE);
            effect.printEffectName(tft);
          }
          else {
            tft.fillScreen(TFT_GREEN);
            tft.setCursor(15, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_BLACK);
            effect.printEffectName(tft);
          }
          tft.setCursor(124, 3);
          tft.setTextSize(6);
          tft.setTextColor(TFT_BLUE);
          tft.println(effect.getChannelChar());
          digitalWrite (CS2, HIGH);
          break;


        case 2:
          effect18 = (effect.getEffectId());
          digitalWrite (CS6, LOW);
          if (effect.isBypassed()) {
            tft.fillScreen(TFT_RED);
            tft.setCursor(15, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_WHITE);
            effect.printEffectName(tft);
          }
          else {
            tft.fillScreen(TFT_GREEN);
            tft.setCursor(15, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_BLACK);
            effect.printEffectName(tft);
          }
          tft.setCursor(124, 3);
          tft.setTextSize(6);
          tft.setTextColor(TFT_BLUE);
          tft.println(effect.getChannelChar());
          digitalWrite (CS6, HIGH);
          break;


        case 3:
          effect19 = (effect.getEffectId());
          digitalWrite (CS7, LOW);
          if (effect.isBypassed()) {
            tft.fillScreen(TFT_RED);
            tft.setCursor(15, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_WHITE);
            effect.printEffectName(tft);
          }
          else {
            tft.fillScreen(TFT_GREEN);
            tft.setCursor(15, 50);
            tft.setTextSize(4);
            tft.setTextColor(TFT_BLACK);
            effect.printEffectName(tft);
          }
          tft.setCursor(124, 3);
          tft.setTextSize(6);
          tft.setTextColor(TFT_BLUE);
          tft.println(effect.getChannelChar());
          digitalWrite (CS7, HIGH);
          break;

      }

    }


    /*Setting the parameters for screen 11 and 12:  is Wah or Looper available
      if looper = true:  here we check if looper is available and print in screen 12 (id = 166)
      if wah = true:     here we check if wah is available and print in screen 11 (id = 94)*/


    if (strcmp(page, "scene") == 0)
    {
      switch (effectindex)
      {
        case 1:
          effect1 = (effect.getEffectId());
          if (effect1 == 94)
          {
            Serial.println("01: YES tag is wah");
            wahActive = true;
            wahAvailable();
          }
          else if (effect1 == 166)
          {
            Serial.println("01: YES tag is looper");
            looperActive = true;
            looperAvailable();
          }
          break;

        case 2:
          effect2 = (effect.getEffectId());
          if (effect2 == 94)
          {
            Serial.println("02: YES tag is wah");
            wahActive = true;
            wahAvailable();
          }
          else if (effect2 == 166)
          {
            Serial.println("02: YES tag is looper");
            looperActive = true;
            looperAvailable();
          }
          break;

        case 3:
          effect3 = (effect.getEffectId());
          if (effect3 == 94)
          {
            Serial.println("03: YES tag is wah");
            wahActive = true;
            wahAvailable();
          }
          else if (effect3 == 166)
          {
            Serial.println("03: YES tag is looper");
            looperActive = true;
            looperAvailable();
          }
          break;


        case 4:
          effect4 = (effect.getEffectId());
          if (effect4 == 94)
          {
            Serial.println("04: YES tag is wah");
            wahActive = true;
            wahAvailable();
          }
          else if (effect4 == 166)
          {
            Serial.println("04: YES tag is looper");
            looperActive = true;
            looperAvailable();
          }
          break;

        case 5:
          effect5 = (effect.getEffectId());
          if (effect5 == 94)
          {
            Serial.println("05: YES tag is wah");
            wahActive = true;
            wahAvailable();
          }
          else if (effect5 == 166)
          {
            Serial.println("05: YES tag is looper");
            looperActive = true;
            looperAvailable();
          }
          break;

        case 6:
          effect6 = (effect.getEffectId());
          if (effect6 == 94)
          {
            Serial.println("06: YES tag is wah");
            wahActive = true;
            wahAvailable();
          }
          else if (effect6 == 166)
          {
            Serial.println("06: YES tag is looper");
            looperActive = true;
            looperAvailable();
          }
          break;

        case 7:
          effect7 = (effect.getEffectId());
          if (effect7 == 94)
          {
            Serial.println("07: YES tag is wah");
            wahActive = true;
            wahAvailable();
          }
          else if (effect7 == 166)
          {
            Serial.println("07: YES tag is looper");
            looperActive = true;
            looperAvailable();
          }
          break;

        case 8:
          effect8 = (effect.getEffectId());
          if (effect8 == 94)
          {
            Serial.println("08: YES tag is wah");
            wahActive = true;
            wahAvailable();
          }
          else if (effect8 == 166)
          {
            Serial.println("08: YES tag is looper");
            looperActive = true;
            looperAvailable();
          }
          break;

        case 9:
          effect9 = (effect.getEffectId());
          if (effect9 == 94)
          {
            Serial.println("09: YES tag is wah");
            wahActive = true;
            wahAvailable();
          }
          else if (effect9 == 166)
          {
            Serial.println("09: YES tag is looper");
            looperActive = true;
            looperAvailable();
          }
          break;

        case 10:
          effect10 = (effect.getEffectId());
          if (effect10 == 94)
          {
            Serial.println("10: YES tag is wah");
            wahActive = true;
            wahAvailable();
          }
          else if (effect10 == 166)
          {
            Serial.println("10: YES tag is looper");
            looperActive = true;
            looperAvailable();
          }
          break;

        case 11:
          effect11 = (effect.getEffectId());
          if (effect11 == 94)
          {
            Serial.println("11: YES tag is wah");
            wahActive = true;
            wahAvailable();
          }
          else if (effect11 == 166)
          {
            Serial.println("11: YES tag is looper");
            looperActive = true;
            looperAvailable();
          }
          break;

        case 12:
          effect12 = (effect.getEffectId());
          if (effect12 == 94)
          {
            Serial.println("12: YES tag is wah");
            wahActive = true;
            wahAvailable();
          }
          else if (effect12 == 166)
          {
            Serial.println("12: YES tag is looper");
            looperActive = true;
            looperAvailable();
          }
          break;

        case 13:
          effect13 = (effect.getEffectId());
          if (effect13 == 94)
          {
            Serial.println("13: YES tag is wah");
            wahActive = true;
            wahAvailable();
          }
          else if (effect13 == 166)
          {
            Serial.println("13: YES tag is looper");
            looperActive = true;
            looperAvailable();
          }
          break;

        case 14:
          effect14 = (effect.getEffectId());
          if (effect14 == 94)
          {
            Serial.println("14: YES tag is wah");
            wahActive = true;
            wahAvailable();
          }
          else if (effect14 == 166)
          {
            Serial.println("14: YES tag is looper");
            looperActive = true;
            looperAvailable();
          }
          break;

        case 15:
          effect15 = (effect.getEffectId());
          if (effect15 == 94)
          {
            Serial.println("15: YES tag is wah");
            wahActive = true;
            wahAvailable();
          }
          else if (effect15 == 166)
          {
            Serial.println("15: YES tag is looper");
            looperActive = true;
            looperAvailable();
          }
          break;

      }

    }
  }

}

/*===================================================================
  ===================== END EFFECT SETTINGS =========================
  ===================================================================*/




/*===================================================================
  ==================  AUDITIONMODE SETTINGS  ========================
  ===================================================================*/


void presetBank_settings()

{
  Serial.println("Function preset bank settings");

  digitalWrite(CS1, LOW), digitalWrite(CS2, LOW), digitalWrite(CS3, LOW), digitalWrite(CS4, LOW), digitalWrite(CS5, LOW),
               digitalWrite(CS6, LOW), digitalWrite(CS7, LOW), digitalWrite(CS8, LOW), digitalWrite(CS9, LOW), digitalWrite(CS10, LOW);

  tft.fillScreen(TFT_BLACK);
  tft.setTextWrap(true);
  tft.setTextColor(TFT_YELLOW);
  tft.setTextSize(3);
  tft.setCursor(0, 0);
  tft.println("PRESET");


  digitalWrite(CS1, HIGH), digitalWrite(CS2, HIGH), digitalWrite(CS3, HIGH), digitalWrite(CS4, HIGH), digitalWrite(CS5, HIGH),
               digitalWrite(CS6, HIGH), digitalWrite(CS7, HIGH), digitalWrite(CS8, HIGH), digitalWrite(CS9, HIGH), digitalWrite(CS10, HIGH);


  //Set the page to PRESET
  strcpy(page, "preset");

  if (PresetNumb < 10)
  {
    PNtxt = 135;
  }
  else if (PresetNumb < 100)
  {
    PNtxt = 123;
  }
  else if (PresetNumb >= 100)
  {
    PNtxt = 105;
  }

  digitalWrite (CS1, LOW);
  if (PresetNumb != (active_Preset))
  {
    tft.setTextSize(3);
    tft.setCursor(PNtxt, 100);
    tft.setTextColor(TFT_MAGENTA, TFT_BLACK);
    tft.println(PresetNumb);
    tft.setCursor(0, 50);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.setTextSize(2);
    tft.println(PresetName0);
  }

  else {
    tft.fillScreen(TFT_GREEN);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(3);
    tft.setCursor(2, 2);
    tft.println("PRESET");
    tft.setTextSize(3);
    tft.setCursor(PNtxt, 100);
    tft.setTextColor(TFT_MAGENTA);
    tft.println(PresetNumb);
    tft.setCursor(0, 50);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(2);
    tft.println(PresetName0);
  };
  digitalWrite (CS1, HIGH);


  digitalWrite (CS2, LOW);
  if ((PresetNumb + 1) != (active_Preset))
  {
    tft.setTextSize(3);
    tft.setCursor(PNtxt, 100);
    tft.setTextColor(TFT_MAGENTA, TFT_BLACK);
    tft.println(PresetNumb + 1);
    tft.setCursor(0, 50);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.setTextSize(2);
    tft.println(PresetName1);
  }
  else {
    tft.fillScreen(TFT_GREEN);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(3);
    tft.setCursor(2, 2);
    tft.println("PRESET");
    tft.setTextSize(3);
    tft.setCursor(PNtxt, 100);
    tft.setTextColor(TFT_MAGENTA);
    tft.println(PresetNumb + 1);
    tft.setCursor(0, 50);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(2);
    tft.println(PresetName1);
  };
  digitalWrite (CS2, HIGH);



  digitalWrite (CS3, LOW);
  if ((PresetNumb + 2) != (active_Preset))
  {
    tft.setTextSize(3);
    tft.setCursor(PNtxt, 100);
    tft.setTextColor(TFT_MAGENTA, TFT_BLACK);
    tft.println(PresetNumb + 2);
    tft.setCursor(0, 50);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.setTextSize(2);
    tft.println(PresetName2);
  }
  else {
    tft.fillScreen(TFT_GREEN);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(3);
    tft.setCursor(2, 2);
    tft.println("PRESET");
    tft.setTextSize(3);
    tft.setCursor(PNtxt, 100);
    tft.setTextColor(TFT_MAGENTA);
    tft.println(PresetNumb + 2);
    tft.setCursor(0, 50);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(2);
    tft.println(PresetName2);
  };
  digitalWrite (CS3, HIGH);

  digitalWrite (CS4, LOW);
  if ((PresetNumb + 3) != (active_Preset))
  {
    tft.setTextSize(3);
    tft.setCursor(PNtxt, 100);
    tft.setTextColor(TFT_MAGENTA, TFT_BLACK);
    tft.println(PresetNumb + 3);
    tft.setCursor(0, 50);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.setTextSize(2);
    tft.println(PresetName3);
  }
  else {
    tft.fillScreen(TFT_GREEN);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(3);
    tft.setCursor(2, 2);
    tft.println("PRESET");
    tft.setTextSize(3);
    tft.setCursor(PNtxt, 100);
    tft.setTextColor(TFT_MAGENTA);
    tft.println(PresetNumb + 3);
    tft.setCursor(0, 50);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(2);
    tft.println(PresetName3);
  };
  digitalWrite (CS4, HIGH);

  digitalWrite (CS5, LOW);
  if ((PresetNumb + 4) != (active_Preset))
  {
    tft.setTextSize(3);
    tft.setCursor(PNtxt, 100);
    tft.setTextColor(TFT_MAGENTA, TFT_BLACK);
    tft.println(PresetNumb + 4);
    tft.setCursor(0, 50);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.setTextSize(2);
    tft.println(PresetName4);
  }
  else {
    tft.fillScreen(TFT_GREEN);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(3);
    tft.setCursor(2, 2);
    tft.println("PRESET");
    tft.setTextSize(3);
    tft.setCursor(PNtxt, 100);
    tft.setTextColor(TFT_MAGENTA);
    tft.println(PresetNumb + 4);
    tft.setCursor(0, 50);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(2);
    tft.println(PresetName4);
  };
  digitalWrite (CS5, HIGH);

  digitalWrite (CS6, LOW);
  if ((PresetNumb + 5) != (active_Preset))
  {
    tft.setTextSize(3);
    tft.setCursor(PNtxt, 100);
    tft.setTextColor(TFT_MAGENTA, TFT_BLACK);
    tft.println(PresetNumb + 5);
    tft.setCursor(0, 50);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.setTextSize(2);
    tft.println(PresetName5);
  }
  else {
    tft.fillScreen(TFT_GREEN);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(3);
    tft.setCursor(2, 2);
    tft.println("PRESET");
    tft.setTextSize(3);
    tft.setCursor(PNtxt, 100);
    tft.setTextColor(TFT_MAGENTA);
    tft.println(PresetNumb + 5);
    tft.setCursor(0, 50);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(2);
    tft.println(PresetName5);
  };
  digitalWrite (CS6, HIGH);

  digitalWrite (CS7, LOW);
  if ((PresetNumb + 6) != (active_Preset))
  {
    tft.setTextSize(3);
    tft.setCursor(PNtxt, 100);
    tft.setTextColor(TFT_MAGENTA, TFT_BLACK);
    tft.println(PresetNumb + 6);
    tft.setCursor(0, 50);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.setTextSize(2);
    tft.println(PresetName6);
  }
  else {
    tft.fillScreen(TFT_GREEN);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(3);
    tft.setCursor(2, 2);
    tft.println("PRESET");
    tft.setTextSize(3);
    tft.setCursor(PNtxt, 100);
    tft.setTextColor(TFT_MAGENTA);
    tft.println(PresetNumb + 6);
    tft.setCursor(0, 50);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(2);
    tft.println(PresetName6);
  };
  digitalWrite (CS7, HIGH);

  digitalWrite (CS8, LOW);
  if ((PresetNumb + 7) != (active_Preset))
  {
    tft.setTextSize(3);
    tft.setCursor(PNtxt, 100);
    tft.setTextColor(TFT_MAGENTA, TFT_BLACK);
    tft.println(PresetNumb + 7);
    tft.setCursor(0, 50);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.setTextSize(2);
    tft.println(PresetName7);
  }
  else {
    tft.fillScreen(TFT_GREEN);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(3);
    tft.setCursor(2, 2);
    tft.println("PRESET");
    tft.setTextSize(3);
    tft.setCursor(PNtxt, 100);
    tft.setTextColor(TFT_MAGENTA);
    tft.println(PresetNumb + 7);
    tft.setCursor(0, 50);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(2);
    tft.println(PresetName7);
  };
  digitalWrite (CS8, HIGH);

  digitalWrite (CS9, LOW);
  if ((PresetNumb + 8) != (active_Preset))
  {
    tft.setTextSize(3);
    tft.setCursor(PNtxt, 100);
    tft.setTextColor(TFT_MAGENTA, TFT_BLACK);
    tft.println(PresetNumb + 8);
    tft.setCursor(0, 50);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.setTextSize(2);
    tft.println(PresetName8);
  }
  else {
    tft.fillScreen(TFT_GREEN);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(3);
    tft.setCursor(2, 2);
    tft.println("PRESET");
    tft.setTextSize(3);
    tft.setCursor(PNtxt, 100);
    tft.setTextColor(TFT_MAGENTA);
    tft.println(PresetNumb + 8);
    tft.setCursor(0, 50);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(2);
    tft.println(PresetName8);
  };
  digitalWrite (CS9, HIGH);

  digitalWrite (CS10, LOW);
  if ((PresetNumb + 9) != (active_Preset))
  {
    tft.setTextSize(3);
    tft.setCursor(PNtxt, 100);
    tft.setTextColor(TFT_MAGENTA, TFT_BLACK);
    tft.println(PresetNumb + 9);
    tft.setCursor(0, 50);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.setTextSize(2);
    tft.println(PresetName9);
  }
  else {
    tft.fillScreen(TFT_GREEN);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(3);
    tft.setCursor(2, 2);
    tft.println("PRESET");
    tft.setTextSize(3);
    tft.setCursor(PNtxt, 100);
    tft.setTextColor(TFT_MAGENTA);
    tft.println(PresetNumb + 9);
    tft.setCursor(0, 50);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(2);
    tft.println(PresetName9);
  };
  digitalWrite (CS10, HIGH);
}

/*================================================================*/



/*================================================================
  ==================     PRESET and LOOPER   =====================
  ================================================================*/

void onPresetChange(AxePreset preset)
{


  Serial.println("Function On Preset Change");
  looperActive = false;

  const size_t sz = 150;
  char buf[sz];


  //AxeSystem has notified that all requested information has arrived!
  Serial.println();
  Serial.print("Preset number: ");
  Serial.println(preset.getPresetNumber());
  //You can print directly to a Print object
  Serial.print("Preset name: ");
  preset.printPresetName(Serial, true);
  strcpy(active_PresetName, (preset.getPresetName()));
  Serial.print("active_PresetName = ");
  Serial.println(active_PresetName);

  //================================
  // fill Presets for use in screens
  //================================

  /* setting the activescene and active_Preset for other functions */
  active_Scene  =  (preset.getSceneNumber()); //setting the active scenenumber
  active_Preset =  (preset.getPresetNumber()); //setting the AxeFX active presetnumber

  if (auditionMode == true)
  {
    PresetNumb = PresetNumb;  //setting the active preset as presetnumb
    presetBank_settings();  // build up presetscreens and stay on preset screen
  }
}

/*===================================================================================*/
/*Axelman8*/
