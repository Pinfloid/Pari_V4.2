#pragma once
/*=======================================================================================================================*/

//ON THIS TAB ALL THE BUTTONS ARE INSTATIATED.

// FIRST  = *SCENES
// SECOND = *PRESETS
// THIRD  = *PRESET NUMBERS
// FOURTH = *EFFECTS

/*=======================================================================================================================*/



/*===========================================   -  Include library's  -  ================================================*/
#include "variables.h"
#include "screenSetup.h"
#include "axe_handler.h"
#include "preset_names.h"

/*=============================================================================================================================*/
/* presetRange is to determen which bank you are in.  then it will display all 0-9 presets in that bank with page "preset-names"*/
/*=============================================================================================================================*/

void presetRange()
{
  if ((PresetNumb >= 0) && (PresetNumb < 10)) {
    PresetNumb = 0;
  }
  if ((PresetNumb >= 10) && (PresetNumb < 20)) {
    PresetNumb = 10;
  }
  if ((PresetNumb >= 20) && (PresetNumb < 30)) {
    PresetNumb = 20;
  }
  if ((PresetNumb >= 30) && (PresetNumb < 40)) {
    PresetNumb = 30;
  }
  if ((PresetNumb >= 40) && (PresetNumb < 50)) {
    PresetNumb = 40;
  }
  if ((PresetNumb >= 50) && (PresetNumb < 60)) {
    PresetNumb = 50;
  }
  if ((PresetNumb >= 60) && (PresetNumb < 70)) {
    PresetNumb = 60;
  }
  if ((PresetNumb >= 70) && (PresetNumb < 80)) {
    PresetNumb = 70;
  }
  if ((PresetNumb >= 80) && (PresetNumb < 90)) {
    PresetNumb = 80;
  }
  if ((PresetNumb >= 90) && (PresetNumb < 100)) {
    PresetNumb = 90;
  }
  if ((PresetNumb >= 100) && (PresetNumb < 110)) {
    PresetNumb = 100;
  }
  if ((PresetNumb >= 110) && (PresetNumb < 120)) {
    PresetNumb = 110;
  }
  if ((PresetNumb >= 120) && (PresetNumb < 130)) {
    PresetNumb = 120;
  }
  if ((PresetNumb >= 130) && (PresetNumb < 140)) {
    PresetNumb = 130;
  }
  if ((PresetNumb >= 140) && (PresetNumb < 150)) {
    PresetNumb = 140;
  }
  if ((PresetNumb >= 150) && (PresetNumb < 160)) {
    PresetNumb = 150;
  }
  if ((PresetNumb >= 160) && (PresetNumb < 170)) {
    PresetNumb = 160;
  }
  if ((PresetNumb >= 170) && (PresetNumb < 180)) {
    PresetNumb = 170;
  }
  if ((PresetNumb >= 180) && (PresetNumb < 190)) {
    PresetNumb = 180;
  }
  if ((PresetNumb >= 190) && (PresetNumb < 200)) {
    PresetNumb = 190;
  }
  if ((PresetNumb >= 200) && (PresetNumb < 210)) {
    PresetNumb = 200;
  }
  if ((PresetNumb >= 210) && (PresetNumb < 220)) {
    PresetNumb = 210;
  }
  if ((PresetNumb >= 220) && (PresetNumb < 230)) {
    PresetNumb = 220;
  }
  if ((PresetNumb >= 230) && (PresetNumb < 240)) {
    PresetNumb = 230;
  }
  if ((PresetNumb >= 240) && (PresetNumb < 250)) {
    PresetNumb = 240;
  }
  if ((PresetNumb >= 250) && (PresetNumb < 260)) {
    PresetNumb = 250;
  }
  if ((PresetNumb >= 260) && (PresetNumb < 270)) {
    PresetNumb = 260;
  }
  if ((PresetNumb >= 270) && (PresetNumb < 280)) {
    PresetNumb = 270;
  }
  if ((PresetNumb >= 280) && (PresetNumb < 290)) {
    PresetNumb = 280;
  }
  if ((PresetNumb >= 290) && (PresetNumb < 300)) {
    PresetNumb = 290;
  }
  if ((PresetNumb >= 300) && (PresetNumb < 310)) {
    PresetNumb = 300;
  }
  if ((PresetNumb >= 310) && (PresetNumb < 320)) {
    PresetNumb = 310;
  }
  if ((PresetNumb >= 320) && (PresetNumb < 330)) {
    PresetNumb = 320;
  }
  if ((PresetNumb >= 330) && (PresetNumb < 340)) {
    PresetNumb = 330;
  }
  if ((PresetNumb >= 340) && (PresetNumb < 350)) {
    PresetNumb = 340;
  }
  if ((PresetNumb >= 350) && (PresetNumb < 360)) {
    PresetNumb = 350;
  }
  if ((PresetNumb >= 360) && (PresetNumb < 370)) {
    PresetNumb = 360;
  }
  if ((PresetNumb >= 370) && (PresetNumb < 380)) {
    PresetNumb = 370;
  }
  if ((PresetNumb >= 380) && (PresetNumb < 390)) {
    PresetNumb = 380;
  }
  if ((PresetNumb >= 390) && (PresetNumb < 400)) {
    PresetNumb = 390;
  }
  if ((PresetNumb >= 400) && (PresetNumb < 410)) {
    PresetNumb = 400;
  }
  if ((PresetNumb >= 410) && (PresetNumb < 420)) {
    PresetNumb = 410;
  }
  if ((PresetNumb >= 420) && (PresetNumb < 430)) {
    PresetNumb = 420;
  }
  if ((PresetNumb >= 430) && (PresetNumb < 440)) {
    PresetNumb = 430;
  }
  if ((PresetNumb >= 440) && (PresetNumb < 450)) {
    PresetNumb = 440;
  }
  if ((PresetNumb >= 450) && (PresetNumb < 460)) {
    PresetNumb = 450;
  }
  if ((PresetNumb >= 460) && (PresetNumb < 470)) {
    PresetNumb = 460;
  }
  if ((PresetNumb >= 470) && (PresetNumb < 480)) {
    PresetNumb = 470;
  }
  if ((PresetNumb >= 480) && (PresetNumb < 490)) {
    PresetNumb = 480;
  }
  if ((PresetNumb >= 490) && (PresetNumb < 500)) {
    PresetNumb = 490;
  }
  if ((PresetNumb >= 500) && (PresetNumb < 510)) {
    PresetNumb = 500;
  }
  if (PresetNumb >= 511) {
    PresetNumb = 0;
  }

  preset_Names();

}


/*================================================================================================================================*/
/*==========================================  Scenes setting buttons and Screens  ================================================*/
/*================================================================================================================================*/


void scenes_settings()

{

  //Serial.println("Begin scenes_settings");

  for ( currentSwitch = 0; currentSwitch < 18; currentSwitch++ ) {
    if ((digitalRead(switches[currentSwitch]) != switchState[currentSwitch] ) && (switchState[currentSwitch] == HIGH)) {

      digitalWrite(CS1, LOW), digitalWrite(CS2, LOW), digitalWrite(CS3, LOW), digitalWrite(CS4, LOW),
                   digitalWrite(CS6, LOW), digitalWrite(CS7, LOW), digitalWrite(CS8, LOW), digitalWrite(CS9, LOW);


      tft.setTextColor(TFT_YELLOW, TFT_BLACK);
      tft.setTextSize(3);
      tft.setCursor(1, 105);
      tft.println("SCENE   ");
      tft.drawLine(0, 104, 160, 104, TFT_BLACK);
      tft.drawRect(0, 0, 160, 128, TFT_BLACK); // Draw bezel line


      digitalWrite(CS1, HIGH), digitalWrite(CS2, HIGH), digitalWrite(CS3, HIGH), digitalWrite(CS4, HIGH),
                   digitalWrite(CS6, HIGH), digitalWrite(CS7, HIGH), digitalWrite(CS8, HIGH), digitalWrite(CS9, HIGH);

      digitalWrite(CS1, LOW);
      tft.setTextSize(3);
      tft.setCursor(141, 105);
      tft.setTextColor(TFT_MAGENTA, TFT_BLACK);
      tft.println("1");
      digitalWrite(CS1, HIGH);

      digitalWrite(CS2, LOW);
      tft.setTextSize(3);
      tft.setCursor(141, 105);
      tft.setTextColor(TFT_MAGENTA, TFT_BLACK);
      tft.println("2");
      digitalWrite(CS2, HIGH);

      digitalWrite(CS3, LOW);
      tft.setTextSize(3);
      tft.setCursor(141, 105);
      tft.setTextColor(TFT_MAGENTA, TFT_BLACK);
      tft.println("3");
      digitalWrite(CS3, HIGH);

      digitalWrite(CS4, LOW);
      tft.setTextSize(3);
      tft.setCursor(141, 105);
      tft.setTextColor(TFT_MAGENTA, TFT_BLACK);
      tft.println("4");
      digitalWrite(CS4, HIGH);

      digitalWrite(CS6, LOW);
      tft.setTextSize(3);
      tft.setCursor(141, 105);
      tft.setTextColor(TFT_MAGENTA, TFT_BLACK);
      tft.println("5");
      digitalWrite(CS6, HIGH);

      digitalWrite(CS7, LOW);
      tft.setTextSize(3);
      tft.setCursor(141, 105);
      tft.setTextColor(TFT_MAGENTA, TFT_BLACK);
      tft.println("6");
      digitalWrite(CS7, HIGH);

      digitalWrite(CS8, LOW);
      tft.setTextSize(3);
      tft.setCursor(141, 105);
      tft.setTextColor(TFT_MAGENTA, TFT_BLACK);
      tft.println("7");
      digitalWrite(CS8, HIGH);

      digitalWrite(CS9, LOW);
      tft.setTextSize(3);
      tft.setCursor(141, 105);
      tft.setTextColor(TFT_MAGENTA, TFT_BLACK);
      tft.println("8");
      digitalWrite(CS9, HIGH);


      switch (currentSwitch) {




        // Switch 1.                            Scene 1
        case 0:

          MIDI.sendControlChange(SceneSelect_CC, 0, MIDICHAN);
          Serial.println(" "); Serial.println("Switch-1 ");

          digitalWrite (CS1, LOW);
          tft.setTextColor(TFT_BLACK, TFT_GREEN);
          tft.setTextSize(3);
          tft.setCursor(1, 105);
          tft.println("SCENE   ");
          tft.setTextSize(3);
          tft.setCursor(141, 105);
          tft.setTextColor(TFT_BLACK, TFT_GREEN);
          tft.println("1");
          tft.drawLine(0, 104, 160, 104, TFT_GREEN);
          tft.drawRect(0, 0, 160, 128, TFT_GREEN); // Draw bezel line
          digitalWrite (CS1, HIGH);
          active_Scene = 1;
          delay(200);
          break;

        // Switch 2.                            Scene 2
        case 1:
          MIDI.sendControlChange(SceneSelect_CC, 1, MIDICHAN);
          Serial.println(" "); Serial.println("Switch-2 ");


          digitalWrite (CS2, LOW);
          tft.setTextColor(TFT_BLACK, TFT_GREEN);
          tft.setTextSize(3);
          tft.setCursor(1, 105);
          tft.println("SCENE   ");
          tft.setTextSize(3);
          tft.setCursor(141, 105);
          tft.setTextColor(TFT_BLACK, TFT_GREEN);
          tft.println("2");
          tft.drawLine(0, 104, 160, 104, TFT_GREEN);
          tft.drawRect(0, 0, 160, 128, TFT_GREEN); // Draw bezel line
          digitalWrite (CS2, HIGH);
          active_Scene = 2;
          delay(200);
          break;

        // Switch 3.                            Scene 3
        case 2:
          MIDI.sendControlChange(SceneSelect_CC, 2, MIDICHAN);
          Serial.println(" "); Serial.println("Switch-3 ");


          digitalWrite (CS3, LOW);
          tft.setTextColor(TFT_BLACK, TFT_GREEN);
          tft.setTextSize(3);
          tft.setCursor(1, 105);
          tft.println("SCENE   ");
          tft.setTextSize(3);
          tft.setCursor(141, 105);
          tft.setTextColor(TFT_BLACK, TFT_GREEN);
          tft.println("3");
          tft.drawLine(0, 104, 160, 104, TFT_GREEN);
          tft.drawRect(0, 0, 160, 128, TFT_GREEN); // Draw bezel line
          digitalWrite (CS3, HIGH);
          active_Scene = 3;
          delay(200);
          break;



        // Switch 4.                            Scene 4

        case 3:
          MIDI.sendControlChange(SceneSelect_CC, 3, MIDICHAN);
          Serial.println(" "); Serial.println("Switch-4 ");

          digitalWrite (CS4, LOW);
          tft.setTextColor(TFT_BLACK, TFT_GREEN);
          tft.setTextSize(3);
          tft.setCursor(1, 105);
          tft.println("SCENE   ");
          tft.setTextSize(3);
          tft.setCursor(141, 105);
          tft.setTextColor(TFT_BLACK, TFT_GREEN);
          tft.println("4");
          tft.drawLine(0, 104, 160, 104, TFT_GREEN);
          tft.drawRect(0, 0, 160, 128, TFT_GREEN); // Draw bezel line
          digitalWrite (CS4, HIGH);
          active_Scene = 4;
          delay(200);
          break;



        // Switch 5.                         Preset Down
        case 4:
          if (CurPreset == 0)
          {
            CurPreset = PresetNumb;
          }
          else if (PresetNumb > 510) PresetNumb = 0;
          PresetNumb = PresetNumb - 1;
          Axe.sendPresetChange(PresetNumb);
          getScenes = true;

          lcd.clear(); lcd.setCursor(0, 0); lcd.print("Sel PRESET: "); lcd.print(PresetNumb);
          lcd.setCursor(0, 1); lcd.print("<<<------");
          Serial.println(" "); Serial.println("Switch-5");
          delay(200);
          break;

        // Switch 6.                         Bank Down
        case 5:
          if (PresetNumb < 0) PresetNumb = 510; else (PresetNumb = PresetNumb - 10);
          CurPreset = PresetNumb;
          lcd.clear();   lcd.begin(16, 2); lcd.setCursor(0, 0);   lcd.print("PRESET: "); lcd.print(CurPreset);
          getScenes = true;

          Axe.sendPresetChange(PresetNumb);
          Serial.println("Switch-6 ");
          delay(200);
          break;

        // Switch 7.                         Scene 5
        case 6:
          MIDI.sendControlChange(SceneSelect_CC, 4, MIDICHAN);
          Serial.println(" "); Serial.println("Switch-7 ");

          digitalWrite (CS6, LOW);
          tft.setTextColor(TFT_BLACK, TFT_GREEN);
          tft.setTextSize(3);
          tft.setCursor(1, 105);
          tft.println("SCENE   ");
          tft.setTextSize(3);
          tft.setCursor(141, 105);
          tft.setTextColor(TFT_BLACK, TFT_GREEN);
          tft.println("5");
          tft.drawLine(0, 104, 160, 104, TFT_GREEN);
          tft.drawRect(0, 0, 160, 128, TFT_GREEN); // Draw bezel line
          digitalWrite (CS6, HIGH);
          active_Scene = 5;
          delay(200);
          break;

        // Switch 8.                         Scene 6
        case 7:
          MIDI.sendControlChange(SceneSelect_CC, 5, MIDICHAN);
          Serial.println(" "); Serial.println("Switch-8 ");

          digitalWrite (CS7, LOW);
          tft.setTextColor(TFT_BLACK, TFT_GREEN);
          tft.setTextSize(3);
          tft.setCursor(1, 105);
          tft.println("SCENE   ");
          tft.setTextSize(3);
          tft.setCursor(141, 105);
          tft.setTextColor(TFT_BLACK, TFT_GREEN);
          tft.println("6");
          tft.drawLine(0, 104, 160, 104, TFT_GREEN);
          tft.drawRect(0, 0, 160, 128, TFT_GREEN); // Draw bezel line
          digitalWrite (CS7, HIGH);
          active_Scene = 6;
          delay(200);
          break;

        // Switch 9.                       Scene 7
        case 8:
          MIDI.sendControlChange(SceneSelect_CC, 6, MIDICHAN);
          Serial.println(" "); Serial.println("Switch-9 ");

          digitalWrite (CS8, LOW);
          tft.setTextColor(TFT_BLACK, TFT_GREEN);
          tft.setTextSize(3);
          tft.setCursor(1, 105);
          tft.println("SCENE   ");
          tft.setTextSize(3);
          tft.setCursor(141, 105);
          tft.setTextColor(TFT_BLACK, TFT_GREEN);
          tft.println("7");
          tft.drawLine(0, 104, 160, 104, TFT_GREEN);
          tft.drawRect(0, 0, 160, 128, TFT_GREEN); // Draw bezel line
          digitalWrite (CS8, HIGH);
          active_Scene = 7;
          delay(200);
          break;

        // Switch 10.                   Scene 8
        case 9:
          MIDI.sendControlChange(SceneSelect_CC, 7, MIDICHAN);
          Serial.println(" "); Serial.println("Switch-10 ");

          digitalWrite (CS9, LOW);
          tft.setTextColor(TFT_BLACK, TFT_GREEN);
          tft.setTextSize(3);
          tft.setCursor(1, 105);
          tft.println("SCENE   ");
          tft.setTextSize(3);
          tft.setCursor(141, 105);
          tft.setTextColor(TFT_BLACK, TFT_GREEN);
          tft.println("8");
          tft.drawLine(0, 104, 160, 104, TFT_GREEN);
          tft.drawRect(0, 0, 160, 128, TFT_GREEN); // Draw bezel line
          digitalWrite (CS9, HIGH);
          active_Scene = 8;
          delay(200);
          break;

        // Switch 11.                  PRESET UP
        case 10:
          if (CurPreset == 0)
          {
            PresetNumb = PresetNumb;
          }

          if (PresetNumb > 510) PresetNumb = 0;
          PresetNumb = PresetNumb + 1;
          getScenes = true;

          Axe.sendPresetChange(PresetNumb);
          lcd.clear(); lcd.setCursor(0, 0); lcd.print("Sel PRESET: "); lcd.print(PresetNumb);
          lcd.setCursor(0, 1); lcd.print("<<<------");
          Serial.println(" "); Serial.println("Switch-11 ");
          delay(200);
          break;

        // Switch 12.                   BANK UP
        case 11:
          if (PresetNumb > 501) PresetNumb = 0; else if (PresetNumb = PresetNumb + 10);
          CurPreset = PresetNumb;
          lcd.clear();   lcd.begin(16, 2); lcd.setCursor(0, 0);   lcd.print("PRESET: "); lcd.print(CurPreset);
          getScenes = true;

          Axe.sendPresetChange(PresetNumb);
          Serial.println(" "); Serial.println("Switch-12 ");
          delay(200);
          break;


        // Switch 13.                   EFFECT Page
        case 12:
          Axe.refresh();
          getScenes = false;
          ini_effect();
          break;


        // Switch 14.                   LOOPER Page
        case 13:
          strcpy(page, "looper");
          //Axe.refresh();
          Serial.println("Switch-14 ");
          getScenes = false;
          ini_looper();
          delay(200);
          break;


        // Switch 15.                   Active Preset / select Scene or Preset page
        case 14:
          Serial.println("Switch-15 ");
          Serial.println("Active page = preset");
          getScenes = false;
          auditionMode = false;
          presetRange();
          preset_Names();
          ini_preset();
          delay(200);
          break;

        // Switch 16.                   TAB tempo
        case 15:
          //TAP tempo screen setup
          Serial.println("Switch-16: TAP");
          if (tapSwitch == false) {
            Axe.sendTap();
            tapSwitch = true;
            digitalWrite (CS14, LOW);
            tft.fillScreen(TFT_RED);
            tft.setTextColor(TFT_WHITE);
            tft.setTextSize(5);
            tft.setCursor(40, 15);
            tft.println("TAP");
            tft.setCursor(50, 70);
            tft.setTextSize(4);
            tft.setTextColor(TFT_WHITE);
            tft.println(Axe.getTempo());
            digitalWrite (CS14, HIGH);
          }
          else
          {
            Axe.sendTap();
            tapSwitch = false;
            digitalWrite (CS14, LOW);
            tft.fillScreen(TFT_GREEN);
            tft.setTextColor(TFT_BLACK);
            tft.setTextSize(5);
            tft.setCursor(40, 15);
            tft.println("TAP");
            tft.setCursor(50, 70);
            tft.setTextSize(4);
            tft.setTextColor(TFT_RED);
            Axe.requestTempo();
            tft.println(Axe.getTempo());
            digitalWrite (CS14, HIGH);
          }
          break;

        // Switch 17.   //numbers
        case 16:
          Counter = 0;
          strcpy(page, "numbers");
          Axe.refresh();
          Serial.println("Switch-17 ");
          getScenes = false;
          lcd.clear(); lcd.setCursor(0, 1); lcd.print("Select a preset:");
          ini_numbers();
          delay(200);
          break;


        // Switch 18.            TUNER
        case 17:
          Axe.toggleTuner();
          Serial.println("Switch-18 ");
          delay(200);
      }
      break;

      //delay(BOUNCEDELAY);
    }
    switchState[currentSwitch] = digitalRead( switches[currentSwitch] );
  }

  // Serial.println("Einde scenes_settings");
}


/*================================================================================================================================*/
/*==========================================  PRESET Setting buttons and Screens  ================================================*/
/*================================================================================================================================*/


void preset_settings()

{



  for ( currentSwitch = 0; currentSwitch < 18; currentSwitch++ ) {
    if ((digitalRead(switches[currentSwitch]) != switchState[currentSwitch] ) && (switchState[currentSwitch] == HIGH)) {
      switch ( currentSwitch ) {


        // Switch 1.                            preset 1
        case 0:
          getScenes = true;


          if (auditionMode == true)
          {
            Axe.sendPresetChange(PresetNumb + 0);
            presetRange();
            CurPreset = (PresetNumb + 0);
            Serial.println(" "); Serial.println("Switch-1 ");
            delay(200);
          }
          else
          {
            Axe.sendPresetChange(PresetNumb + 0);
            CurPreset = (PresetNumb + 0);
            Serial.println(" "); Serial.println("Switch-1 ");
            delay(200);
          }
          break;

        // Switch 2.                            preset 2
        case 1:
          getScenes = true;


          if (auditionMode == true)
          {
            Axe.sendPresetChange(PresetNumb + 1);
            presetRange();
            CurPreset = (PresetNumb + 1);
            Serial.println(" "); Serial.println("Switch-2 ");
            delay(200);
          }
          else
          {
            Axe.sendPresetChange(PresetNumb + 1);
            CurPreset = (PresetNumb + 1);
            Serial.println(" "); Serial.println("Switch-2 ");
            delay(200);
          }
          break;

        // Switch 3.                            preset 3
        case 2:
          getScenes = true;


          if (auditionMode == true)
          {
            Axe.sendPresetChange(PresetNumb + 2);
            presetRange();
            CurPreset = (PresetNumb + 2);
            Serial.println(" "); Serial.println("Switch-3 ");
            delay(200);
          }
          else
          {
            Axe.sendPresetChange(PresetNumb + 2);
            CurPreset = (PresetNumb + 2);
            Serial.println(" "); Serial.println("Switch-3 ");
            delay(200);
          }
          break;

        // Switch 4.                            preset 4

        case 3:
          getScenes = true;


          if (auditionMode == true)
          {
            Axe.sendPresetChange(PresetNumb + 3);
            presetRange();
            CurPreset = (PresetNumb + 3);
            Serial.println(" "); Serial.println("Switch-4 ");
            delay(200);
          }
          else
          {
            Axe.sendPresetChange(PresetNumb + 3);
            CurPreset = (PresetNumb + 3);
            Serial.println(" "); Serial.println("Switch-4 ");
            delay(200);
          }
          break;

        // Switch 5.                         Preset 5
        case 4:
          getScenes = true;


          if (auditionMode == true)
          {
            Axe.sendPresetChange(PresetNumb + 4);
            presetRange();
            CurPreset = (PresetNumb + 4);
            Serial.println(" "); Serial.println("Switch-5 ");
            delay(200);
          }
          else
          {
            Axe.sendPresetChange(PresetNumb + 4);
            CurPreset = (PresetNumb + 4);
            Serial.println(" "); Serial.println("Switch-5 ");
            delay(200);
          }
          break;

        // Switch 6.                         Bank Down
        case 5:
          if (PresetNumb < 0) PresetNumb = 510; else (PresetNumb = PresetNumb - 10);
          CurPreset = PresetNumb;
          if (auditionMode == true)
          {
            lcd.clear(); lcd.setCursor(0, 0); lcd.print("AUDITION MODE ON");
            lcd.setCursor(0, 1);   lcd.print("Keep selecting :)");
          }
          else
          {
            lcd.clear(); lcd.setCursor(0, 0); lcd.print("Sel BANK: "); lcd.print(PresetNumb); lcd.print("-"); lcd.print(PresetNumb + 10);
            lcd.setCursor(0, 1);   lcd.print("<- +/-50  +/-100");
            Serial.println(" "); Serial.println("Switch-6");
          }
          presetRange();
          ini_preset();
          delay(200);
          break;

        // Switch 7.                         preset 6
        case 6:
          getScenes = true;


          if (auditionMode == true)
          {
            Axe.sendPresetChange(PresetNumb + 5);
            presetRange();
            CurPreset = (PresetNumb + 5);
            Serial.println(" "); Serial.println("Switch-7 ");
            delay(200);
          }
          else
          {
            Axe.sendPresetChange(PresetNumb + 5);
            CurPreset = (PresetNumb + 5);
            Serial.println(" "); Serial.println("Switch-7 ");
            delay(200);
          }
          break;

        // Switch 8.                         preset 7
        case 7:
          getScenes = true;


          if (auditionMode == true)
          {
            Axe.sendPresetChange(PresetNumb + 6);
            presetRange();
            CurPreset = (PresetNumb + 6);
            Serial.println(" "); Serial.println("Switch-8 ");
            delay(200);
          }
          else
          {
            Axe.sendPresetChange(PresetNumb + 6);
            CurPreset = (PresetNumb + 6);
            Serial.println(" "); Serial.println("Switch-8 ");
            delay(200);
          }
          break;

        // Switch 9.                       preset 8
        case 8:
          getScenes = true;


          if (auditionMode == true)
          {
            Axe.sendPresetChange(PresetNumb + 7);
            presetRange();
            CurPreset = (PresetNumb + 7);
            Serial.println(" "); Serial.println("Switch-9 ");
            delay(200);
          }
          else
          {
            Axe.sendPresetChange(PresetNumb + 7);
            CurPreset = (PresetNumb + 7);
            Serial.println(" "); Serial.println("Switch-9 ");
            delay(200);
          }
          break;

        // Switch 10.                   preset 9
        case 9:
          getScenes = true;


          if (auditionMode == true)
          {

            Axe.sendPresetChange(PresetNumb + 8);
            presetRange();
            CurPreset = (PresetNumb + 8);
            Serial.println(" "); Serial.println("Switch-10 ");
            delay(200);
          }
          else
          {
            Axe.sendPresetChange(PresetNumb + 8);
            CurPreset = (PresetNumb + 8);
            Serial.println(" "); Serial.println("Switch-10 ");
            delay(200);
          }
          break;

        // Switch 11.                  preset 10
        case 10:
          getScenes = true;


          if (auditionMode == true)
          {
            Axe.sendPresetChange(PresetNumb + 9);
            presetRange();
            CurPreset = (PresetNumb + 9);
            Serial.println(" "); Serial.println("Switch-10 ");
            delay(200);
          }
          else
          {
            Axe.sendPresetChange(PresetNumb + 9);
            CurPreset = (PresetNumb + 9);
            Serial.println(" "); Serial.println("Switch-4 ");
            delay(200);
          }
          break;

        // Switch 12.                   BANK UP
        case 11:

          if (PresetNumb > 501) PresetNumb = 0; else if (PresetNumb = PresetNumb + 10);
          CurPreset = PresetNumb;
          if (auditionMode == true)
          {
            lcd.clear(); lcd.setCursor(0, 0); lcd.print("AUDITION MODE ON");
            lcd.setCursor(0, 1);   lcd.print("Keep selecting :)");
          }
          else
          {
            lcd.clear(); lcd.setCursor(0, 0); lcd.print("Sel BANK: "); lcd.print(PresetNumb); lcd.print("-"); lcd.print(PresetNumb + 10);
            lcd.setCursor(0, 1);   lcd.print("<- +/-50  +/-100");
            Serial.println(" "); Serial.println("Switch-12 ");
          }
          presetRange();
          ini_preset();
          delay(200);
          break;


        // Switch 13.                   -100 PRESETS
        case 12:
          if (PresetNumb < 10) PresetNumb = 0; else (PresetNumb = PresetNumb - 100);
          CurPreset = PresetNumb;
          if (auditionMode == true)
          {
            lcd.clear(); lcd.setCursor(0, 0); lcd.print("AUDITION MODE ON");
            lcd.setCursor(0, 1);   lcd.print("Keep selecting :)");
          }
          else
          {
            lcd.clear();   lcd.begin(16, 2);  lcd.setCursor(0, 0); lcd.print(PresetNumb); lcd.print("-"); lcd.print(PresetNumb - 100);
            lcd.setCursor(0, 1);   lcd.print("<- +/-50  +/-100");
            Serial.println(" "); Serial.println("Switch-13 ");
          }
          presetRange();
          ini_preset();
          break;


        // Switch 14.                   -50 PRESETS
        case 13:
          if (PresetNumb < 10) PresetNumb = 0; else (PresetNumb = PresetNumb - 50);
          CurPreset = PresetNumb;

          if (auditionMode == true)
          {
            lcd.clear(); lcd.setCursor(0, 0); lcd.print("AUDITION MODE ON");
            lcd.setCursor(0, 1);   lcd.print("Keep selecting :)");
          }
          else
          {
            lcd.clear();   lcd.begin(16, 2);  lcd.setCursor(0, 0); lcd.print(PresetNumb); lcd.print("-"); lcd.print(PresetNumb - 50);
            lcd.setCursor(0, 1);   lcd.print("<- +/-50  +/-100");
            Serial.println(" "); Serial.println("Switch-14 ");
          }
          presetRange();
          ini_preset();
          break;


        // Switch 15.                   Active Preset / select Scene or Preset page
        case 14:
          Serial.println("Switch-15 ");
          if (auditionMode == false)
          {
            digitalWrite (CS13, LOW);
            tft.fillScreen(TFT_BLACK);
            tft.setTextColor(TFT_RED);
            tft.setTextSize(3);
            tft.setCursor(10, 30);
            tft.println("AUDITION");
            tft.setTextSize(4);
            tft.setCursor(60, 80);
            tft.println("ON");
            tft.drawRect(0, 0, 160, 128, TFT_RED); // Draw bezel line
            digitalWrite (CS13, HIGH);
            auditionMode = true;
            Serial.println ("auditionmode = true");
            lcd.clear(); lcd.setCursor(0, 0); lcd.print("AUDITION MODE ON");
            lcd.setCursor(0, 1);   lcd.print("Keep selecting :)");
            delay(200);
          }
          else
          {
            auditionMode = false;
            Serial.println ("auditionmode = false");
            getScenes = true;
            ini_scenes();
            delay(200);
          }
          break;

        // Switch 16.                   +50 PRESETS
        case 15:
          CurPreset = PresetNumb;
          if (PresetNumb > 510) PresetNumb = 0; else (PresetNumb = PresetNumb + 50);
          CurPreset = PresetNumb;
          if (auditionMode == true)
          {
            lcd.clear(); lcd.setCursor(0, 0); lcd.print("AUDITION MODE ON");
            lcd.setCursor(0, 1);   lcd.print("Keep selecting :)");
          }
          else
          {
            lcd.clear();   lcd.begin(16, 2);  lcd.setCursor(0, 0); lcd.print(PresetNumb); lcd.print("-"); lcd.print(PresetNumb + 50);
            lcd.setCursor(0, 1);   lcd.print("<- +/-50  +/-100");
            Serial.println("Switch-16 ");
          }
          presetRange();
          ini_preset();
          break;


        // Switch 17.                   +100 PRESETS
        case 16:
          CurPreset = PresetNumb;
          if (PresetNumb > 510) PresetNumb = 0; else (PresetNumb = PresetNumb + 100);
          CurPreset = PresetNumb;
          if (auditionMode == true)
          {
            lcd.clear(); lcd.setCursor(0, 0); lcd.print("AUDITION MODE ON");
            lcd.setCursor(0, 1);   lcd.print("Keep selecting :)");
          }
          else
          {
            lcd.clear();   lcd.begin(16, 2);  lcd.setCursor(0, 0); lcd.print(PresetNumb); lcd.print("-"); lcd.print(PresetNumb + 100);
            lcd.setCursor(0, 1);   lcd.print("<- +/-50  +/-100");
            Serial.println("Switch-17 ");
          }
          presetRange();
          ini_preset();
          break;

        // Switch 18.            Back to SCENES or else Tuner on
        case 17:
          if (auditionMode == true)
          {
            auditionMode = false;
            getScenes = true;
            ini_scenes();
          }
          else
          {
            Axe.toggleTuner();
            Serial.println("Switch-18 ");
            delay(200);
          }
          break;


      }
      //delay( BOUNCEDELAY );
    }
    switchState[currentSwitch] = digitalRead( switches[currentSwitch] );
  }

}


/*================================================================================================================================*/
/*==========================================  EFFECT Setting buttons and Screens  ================================================*/
/*================================================================================================================================*/


void effect_settings()
{

  for ( currentSwitch = 0; currentSwitch < 18; currentSwitch++ ) {
    if ((digitalRead(switches[currentSwitch]) != switchState[currentSwitch] ) && (switchState[currentSwitch] == HIGH)) {
      switch ( currentSwitch ) {


        // Switch 1.                            Effect 1
        case 0: {

            // NOTES: Currently the issue is we get a copy of effect so modifying it doesn't update state, we need to modify the actual state of the preset;
            AxeEffect *effect = Axe.getCurrentPreset().getEffectById(effect1);
            effect->toggle();

            Serial.println(" "); Serial.println("Switch-1 ");

            digitalWrite (CS1, LOW);
            if (effect->isBypassed()) {
              tft.fillScreen(TFT_RED);
              tft.setCursor(5, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_WHITE);
              effect->printEffectName(tft);
            }
            else {
              tft.fillScreen(TFT_GREEN);
              tft.setCursor(5, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_BLACK);
              effect->printEffectName(tft);
            }
            digitalWrite (CS1, HIGH);
            delay(200);
            break;
          }

        // Switch 2.                            Effect 2
        case 1: {
            AxeEffect *effect = Axe.getCurrentPreset().getEffectById(effect2);
            effect->toggle();

            Serial.println(" "); Serial.println("Switch-2 ");

            digitalWrite (CS2, LOW);
            if (effect->isBypassed()) {
              tft.fillScreen(TFT_RED);
              tft.setCursor(5, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_WHITE);
              effect->printEffectName(tft);
            }
            else {
              tft.fillScreen(TFT_GREEN);
              tft.setCursor(5, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_BLACK);
              effect->printEffectName(tft);
            }
            digitalWrite (CS2, HIGH);
            delay(200);
            break;
          }



        // Switch 3.                            Effect 3
        case 2: {
            AxeEffect *effect = Axe.getCurrentPreset().getEffectById(effect3);
            effect->toggle();

            Serial.println(" "); Serial.println("Switch-3 ");

            digitalWrite (CS3, LOW);
            if (effect->isBypassed()) {
              tft.fillScreen(TFT_RED);
              tft.setCursor(5, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_WHITE);
              effect->printEffectName(tft);
            }
            else {
              tft.fillScreen(TFT_GREEN);
              tft.setCursor(5, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_BLACK);
              effect->printEffectName(tft);
            }
            digitalWrite (CS3, HIGH);
            delay(200);
            break;
          }


        // Switch 4.                            Effect 4

        case 3: {
            AxeEffect *effect = Axe.getCurrentPreset().getEffectById(effect4);
            effect->toggle();

            Serial.println(" "); Serial.println("Switch-4 ");

            digitalWrite (CS4, LOW);
            if (effect->isBypassed()) {
              tft.fillScreen(TFT_RED);
              tft.setCursor(5, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_WHITE);
              effect->printEffectName(tft);
            }
            else {
              tft.fillScreen(TFT_GREEN);
              tft.setCursor(5, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_BLACK);
              effect->printEffectName(tft);
            }
            digitalWrite (CS4, HIGH);
            delay(200);
            break;
          }


        // Switch 5.                         Effect 5
        case 4: {
            AxeEffect *effect = Axe.getCurrentPreset().getEffectById(effect5);
            effect->toggle();

            Serial.println(" "); Serial.println("Switch-5 ");

            digitalWrite (CS5, LOW);
            if (effect->isBypassed()) {
              tft.fillScreen(TFT_RED);
              tft.setCursor(5, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_WHITE);
              effect->printEffectName(tft);
            }
            else {
              tft.fillScreen(TFT_GREEN);
              tft.setCursor(5, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_BLACK);
              effect->printEffectName(tft);
            }
            digitalWrite (CS5, HIGH);
            delay(200);
            break;
          }



        // Switch 6.                         Bank Down
        case 5:
          //PresetNumb=PresetNumb-95;
          if (PresetNumb < 0) PresetNumb = 510; else (PresetNumb = PresetNumb - 10);
          CurPreset = PresetNumb;
          lcd.clear();   lcd.begin(16, 2); lcd.setCursor(0, 0);   lcd.print("PRESET: "); lcd.print(CurPreset);
          getScenes = true;
          Axe.sendPresetChange(PresetNumb);

          Serial.println(" "); Serial.println("Switch-6 ");
          delay(200);
          break;

        // Switch 7.                         Effect 6
        case 6: {
            AxeEffect *effect = Axe.getCurrentPreset().getEffectById(effect6);
            effect->toggle();

            Serial.println(" "); Serial.println("Switch-6 ");

            digitalWrite (CS6, LOW);
            if (effect->isBypassed()) {
              tft.fillScreen(TFT_RED);
              tft.setCursor(5, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_WHITE);
              effect->printEffectName(tft);
            }
            else {
              tft.fillScreen(TFT_GREEN);
              tft.setCursor(5, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_BLACK);
              effect->printEffectName(tft);
            }
            digitalWrite (CS6, HIGH);
            delay(200);
            break;
          }



        // Switch 8.                         Effect 7
        case 7: {
            AxeEffect *effect = Axe.getCurrentPreset().getEffectById(effect7);
            effect->toggle();

            Serial.println(" "); Serial.println("Switch-7 ");

            digitalWrite (CS7, LOW);
            if (effect->isBypassed()) {
              tft.fillScreen(TFT_RED);
              tft.setCursor(5, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_WHITE);
              effect->printEffectName(tft);
            }
            else {
              tft.fillScreen(TFT_GREEN);
              tft.setCursor(5, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_BLACK);
              effect->printEffectName(tft);
            }
            digitalWrite (CS7, HIGH);
            delay(200);
            break;
          }




        // Switch 9.                       Effect 8
        case 8: {
            AxeEffect *effect = Axe.getCurrentPreset().getEffectById(effect8);
            effect->toggle();

            Serial.println(" "); Serial.println("Switch-8 ");

            digitalWrite (CS8, LOW);
            if (effect->isBypassed()) {
              tft.fillScreen(TFT_RED);
              tft.setCursor(5, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_WHITE);
              effect->printEffectName(tft);
            }
            else {
              tft.fillScreen(TFT_GREEN);
              tft.setCursor(5, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_BLACK);
              effect->printEffectName(tft);
            }
            digitalWrite (CS8, HIGH);
            delay(200);
            break;
          }



        // Switch 10.                   Effect 9
        case 9: {
            AxeEffect *effect = Axe.getCurrentPreset().getEffectById(effect9);
            effect->toggle();
            Serial.println(" "); Serial.println("Switch-9 ");

            digitalWrite (CS9, LOW);
            if (effect->isBypassed()) {
              tft.fillScreen(TFT_RED);
              tft.setCursor(5, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_WHITE);
              effect->printEffectName(tft);
            }
            else {
              tft.fillScreen(TFT_GREEN);
              tft.setCursor(5, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_BLACK);
              effect->printEffectName(tft);
            }
            digitalWrite (CS9, HIGH);
            delay(200);
            break;
          }


        // Switch 11.                  Effect 10
        case 10: {

            AxeEffect *effect = Axe.getCurrentPreset().getEffectById(effect10);
            effect->toggle();

            Serial.println(" "); Serial.println("Switch-10");

            digitalWrite (CS10, LOW);
            if (effect->isBypassed()) {
              tft.fillScreen(TFT_RED);
              tft.setCursor(5, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_WHITE);
              effect->printEffectName(tft);
            }
            else {
              tft.fillScreen(TFT_GREEN);
              tft.setCursor(5, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_BLACK);
              effect->printEffectName(tft);
            }
            digitalWrite (CS10, HIGH);
            delay(200);
            break;
          }


        // Switch 12.                   BANK UP
        case 11: {

            if (PresetNumb > 501) PresetNumb = 0; else if (PresetNumb = PresetNumb + 10);
            CurPreset = PresetNumb;
            lcd.clear();   lcd.begin(16, 2); lcd.setCursor(0, 0);   lcd.print("PRESET: "); lcd.print(CurPreset);
            getScenes = true;
            Axe.sendPresetChange(PresetNumb);
            Serial.println(" "); Serial.println("Switch-12 ");
            delay(200);
          }
          break;

        // Switch 13.                   EFFECT Page
        case 12:
          {
            digitalWrite (CS1, LOW);
            digitalWrite (CS2, LOW);
            digitalWrite(CS3, LOW);
            digitalWrite(CS4, LOW);
            digitalWrite(CS5, LOW);
            digitalWrite(CS6, LOW);
            digitalWrite(CS7, LOW);
            digitalWrite (CS8, LOW);
            digitalWrite(CS9, LOW);
            digitalWrite(CS10, LOW);
            digitalWrite(CS11, LOW);

            tft.fillScreen(TFT_BLACK);

            digitalWrite (CS1, HIGH);
            digitalWrite (CS2, HIGH);
            digitalWrite(CS3, HIGH);
            digitalWrite(CS4, HIGH);
            digitalWrite(CS5, HIGH);
            digitalWrite(CS6, HIGH);
            digitalWrite(CS7, HIGH);
            digitalWrite(CS8, HIGH);
            digitalWrite(CS9, HIGH);
            digitalWrite(CS10, HIGH);
            digitalWrite(CS11, HIGH);
            Axe.refresh();
            strcpy(page, "AMP_effect");
            delay(500);
            currentEffect = 0;
            Serial.println("currenteffect = 0");
            ini_AMP_effect();
          }
          break;

        // Switch 14.                   LOOPER Page
        case 13: {
            Serial.println("Switch-14 ");
            strcpy(page, "looper");
            ini_looper();
            delay(200);
          }
          break;

        // Switch 15.                   Active Preset / select Scene or Preset page
        case 14: {
            Serial.println("Switch-15 ");
            getScenes = true;
            Axe.refresh();
            ini_scenes();
          }
          break;

        // Switch 16.                   TAP tempo screen
        case 15:
          //TAP tempo screen setup
          Serial.println("Switch-16: TAP");
          if (tapSwitch == false) {
            Axe.sendTap();
            tapSwitch = true;
            digitalWrite (CS14, LOW);
            tft.fillScreen(TFT_RED);
            tft.setTextColor(TFT_WHITE);
            tft.setTextSize(5);
            tft.setCursor(40, 15);
            tft.println("TAP");
            tft.setCursor(50, 70);
            tft.setTextSize(4);
            tft.setTextColor(TFT_WHITE);
            tft.println(Axe.getTempo());
            digitalWrite (CS14, HIGH);
          }
          else
          {
            Axe.sendTap();
            tapSwitch = false;
            digitalWrite (CS14, LOW);
            tft.fillScreen(TFT_GREEN);
            tft.setTextColor(TFT_BLACK);
            tft.setTextSize(5);
            tft.setCursor(40, 15);
            tft.println("TAP");
            tft.setCursor(50, 70);
            tft.setTextSize(4);
            tft.setTextColor(TFT_RED);
            Axe.requestTempo();
            tft.println(Axe.getTempo());
            digitalWrite (CS14, HIGH);
          }
          break;

        // Switch 17.           //Empty for now
        case 16:
          {
            Counter = 0;
            strcpy(page, "numbers");
            Serial.println("Switch-17 ");
            getScenes = false;
            lcd.clear(); lcd.setCursor(0, 1); lcd.print("Select a preset:");
            ini_numbers();
            delay(200);
          }
          break;


        // Switch 18.            TUNER
        case 17: {
            Axe.toggleTuner();
            Serial.println("Switch-18 ");
            delay(200);
          }
          break;

      }
      //delay( BOUNCEDELAY );
    }
    switchState[currentSwitch] = digitalRead( switches[currentSwitch] );
  }
}



/*===========================  AMP and CAB switching A-B-C-D  ========================*/


void AMP_effect_settings()
{


  for ( currentSwitch = 0; currentSwitch < 18; currentSwitch++ ) {
    if ((digitalRead(switches[currentSwitch]) != switchState[currentSwitch] ) && (switchState[currentSwitch] == HIGH)) {
      switch ( currentSwitch ) {



        // Switch 1.  //AMP 1
        case 0:
          {
            AMP_ABCD();
            AxeEffect *effect = Axe.getCurrentPreset().getEffectById(58);
            digitalWrite (CS1, LOW);

            /* is AMP-CAB selected? if yes, Toggle and bypass  */
            if (currentEffect == 58)
            {
              effect->toggle();
              delay(400);
              if (effect->isBypassed())
              {
                tft.fillScreen(TFT_RED);
                tft.setCursor(15, 50);
                tft.setTextSize(4);
                tft.setTextColor(TFT_WHITE, TFT_RED);
                tft.println("AMP1");
                tft.setCursor(124, 3);
                tft.setTextSize(6);
                tft.setTextColor(TFT_BLUE, TFT_RED);
                tft.println(effect->getChannelChar());
              }
              else
              {
                tft.fillScreen(TFT_GREEN);
                tft.setCursor(15, 50);
                tft.setTextSize(4);
                tft.setTextColor(TFT_RED, TFT_GREEN);
                tft.println("AMP1");
                tft.setCursor(124, 3);
                tft.setTextSize(6);
                tft.setTextColor(TFT_BLUE, TFT_GREEN);
                tft.println(effect->getChannelChar());
              }
            }

            /* if AMP-CAB is not active then set currentEffect */
            else if (currentEffect != 58)
            {
              currentEffect = 58;
              Serial.println("currenteffect = 58");
              tft.setCursor(15, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_RED, TFT_WHITE);
              tft.println("AMP1");
              tft.setCursor(124, 3);
              tft.setTextSize(6);
              tft.setTextColor(TFT_BLUE, TFT_WHITE);
              tft.println(effect->getChannelChar());
              delay(400);
            }
          }
          digitalWrite (CS1, HIGH);
          break;


        case 1:       // AMP-CAB 2
          {
            AMP_ABCD();
            AxeEffect *effect = Axe.getCurrentPreset().getEffectById(effect17);
            //currentChannel = effect->getChannel();

            digitalWrite (CS2, LOW);
            /* is AMP-CAB selected? if yes, Toggle and bypass  */
            if (currentEffect == effect17)
            {
              effect->toggle();
              delay(400);
              if (effect->isBypassed())
              {
                tft.fillScreen(TFT_RED);
                tft.setCursor(15, 50);
                tft.setTextSize(4);
                tft.setTextColor(TFT_WHITE, TFT_RED);
                effect->printEffectName(tft);
                tft.setCursor(124, 3);
                tft.setTextSize(6);
                tft.setTextColor(TFT_BLUE, TFT_RED);
                tft.println(effect->getChannelChar());
              }
              else
              {
                tft.fillScreen(TFT_GREEN);
                tft.setCursor(15, 50);
                tft.setTextSize(4);
                tft.setTextColor(TFT_RED, TFT_GREEN);
                effect->printEffectName(tft);
                tft.setCursor(124, 3);
                tft.setTextSize(6);
                tft.setTextColor(TFT_BLUE, TFT_GREEN);
                tft.println(effect->getChannelChar());
              }
            }
            /* if AMP-CAB is not active then set currentEffect */
            else if (currentEffect != effect17)
            {
              currentEffect = effect17;
              Serial.println("currenteffect = 17");
              tft.setCursor(15, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_RED, TFT_WHITE);
              effect->printEffectName(tft);
              tft.setCursor(124, 3);
              tft.setTextSize(6);
              tft.setTextColor(TFT_BLUE, TFT_WHITE);
              tft.println(effect->getChannelChar());
              delay(400);
            }
          }
          digitalWrite (CS2, HIGH);
          break;

        case 3:
          {
            if (currentEffect != 0)
            {
              AxeEffect *effect = Axe.getCurrentPreset().getEffectById(currentEffect);
              effect->switchChannel(2);
              digitalWrite(CS4, LOW);
              tft.setTextColor(TFT_BLACK, TFT_GREEN);
              tft.setTextSize(3);
              tft.setCursor(1, 105);
              tft.println(" CHANNEL ");
              tft.drawLine(0, 104, 160, 104, TFT_GREEN);
              tft.drawRect(0, 0, 160, 128, TFT_GREEN); // Draw bezel line
              digitalWrite(CS4, HIGH);

              digitalWrite(CS5, LOW);
              digitalWrite(CS9, LOW);
              digitalWrite(CS10, LOW);
              tft.setTextColor(TFT_BLACK, TFT_RED);
              tft.setTextSize(3);
              tft.setCursor(1, 105);
              tft.println(" CHANNEL ");
              tft.drawLine(0, 104, 160, 104, TFT_RED);
              tft.drawRect(0, 0, 160, 128, TFT_RED); // Draw bezel line
              digitalWrite(CS5, HIGH);
              digitalWrite(CS9, HIGH);
              digitalWrite(CS10, HIGH);
            }

          }
          break;

        case 4:
          {
            if (currentEffect != 0)
            {
              AxeEffect *effect = Axe.getCurrentPreset().getEffectById(currentEffect);
              effect->switchChannel(3);
              digitalWrite(CS5, LOW);
              tft.setTextColor(TFT_BLACK, TFT_GREEN);
              tft.setTextSize(3);
              tft.setCursor(1, 105);
              tft.println(" CHANNEL ");
              tft.drawLine(0, 104, 160, 104, TFT_GREEN);
              tft.drawRect(0, 0, 160, 128, TFT_GREEN); // Draw bezel line
              digitalWrite(CS5, HIGH);

              digitalWrite(CS4, LOW);
              digitalWrite(CS9, LOW);
              digitalWrite(CS10, LOW);
              tft.setTextColor(TFT_BLACK, TFT_RED);
              tft.setTextSize(3);
              tft.setCursor(1, 105);
              tft.println(" CHANNEL ");
              tft.drawLine(0, 104, 160, 104, TFT_RED);
              tft.drawRect(0, 0, 160, 128, TFT_RED); // Draw bezel line
              digitalWrite(CS4, HIGH);
              digitalWrite(CS9, HIGH);
              digitalWrite(CS10, HIGH);
            }

          }
          break;


        // Switch 6.                         Bank Down
        case 5:
          //PresetNumb=PresetNumb-95;
          if (PresetNumb < 0) PresetNumb = 510; else (PresetNumb = PresetNumb - 10);
          CurPreset = PresetNumb;
          lcd.clear();   lcd.begin(16, 2); lcd.setCursor(0, 0);   lcd.print("PRESET: "); lcd.print(CurPreset);
          getScenes = true;
          Axe.sendPresetChange(PresetNumb);

          Serial.println(" "); Serial.println("Switch-6 ");
          delay(200);
          break;

        case 6:       // CAB 1/2
          {
            AMP_ABCD();
            AxeEffect *effect = Axe.getCurrentPreset().getEffectById(effect18);
            // currentChannel = effect->getChannel();

            digitalWrite (CS6, LOW);
            /* is AMP-CAB selected? if yes, Toggle and bypass  */
            if (currentEffect == effect18)
            {
              effect->toggle();
              delay(400);
              if (effect->isBypassed())
              {
                tft.fillScreen(TFT_RED);
                tft.setCursor(15, 50);
                tft.setTextSize(4);
                tft.setTextColor(TFT_WHITE, TFT_RED);
                effect->printEffectName(tft);
                tft.setCursor(124, 3);
                tft.setTextSize(6);
                tft.setTextColor(TFT_BLUE, TFT_RED);
                tft.println(effect->getChannelChar());
              }
              else
              {
                tft.fillScreen(TFT_GREEN);
                tft.setCursor(15, 50);
                tft.setTextSize(4);
                tft.setTextColor(TFT_RED, TFT_GREEN);
                effect->printEffectName(tft);
                tft.setCursor(124, 3);
                tft.setTextSize(6);
                tft.setTextColor(TFT_BLUE, TFT_GREEN);
                tft.println(effect->getChannelChar());
              }
            }
            /* if AMP-CAB is not active then set currentEffect */
            else if (currentEffect != effect18)
            {
              currentEffect = effect18;
              Serial.println("currenteffect = 18");
              tft.setCursor(15, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_RED, TFT_WHITE);
              effect->printEffectName(tft);
              tft.setCursor(124, 3);
              tft.setTextSize(6);
              tft.setTextColor(TFT_BLUE, TFT_WHITE);
              tft.println(effect->getChannelChar());
              delay(400);
            }
          }
          digitalWrite (CS6, HIGH);
          break;



        case 7:   // CAB 2
          {
            AMP_ABCD();
            AxeEffect *effect = Axe.getCurrentPreset().getEffectById(effect19);
            //    currentChannel = effect->getChannel();
            digitalWrite (CS7, LOW);

            /* is AMP-CAB selected? if yes, Toggle and bypass  */
            if (currentEffect == effect19)
            {
              effect->toggle();
              delay(400);
              if (effect->isBypassed())
              {
                tft.fillScreen(TFT_RED);
                tft.setCursor(15, 50);
                tft.setTextSize(4);
                tft.setTextColor(TFT_WHITE, TFT_RED);
                effect->printEffectName(tft);
                tft.setCursor(124, 3);
                tft.setTextSize(6);
                tft.setTextColor(TFT_BLUE, TFT_RED);
                tft.println(effect->getChannelChar());
              }
              else
              {
                tft.fillScreen(TFT_GREEN);
                tft.setCursor(15, 50);
                tft.setTextSize(4);
                tft.setTextColor(TFT_RED, TFT_GREEN);
                effect->printEffectName(tft);
                tft.setCursor(124, 3);
                tft.setTextSize(6);
                tft.setTextColor(TFT_BLUE, TFT_GREEN);
                tft.println(effect->getChannelChar());
              }
            }
            /* if AMP-CAB is not active then set currentEffect */
            else if (currentEffect != effect19)
            {
              currentEffect = effect19;
              Serial.println("currenteffect = 19");
              tft.setCursor(15, 50);
              tft.setTextSize(4);
              tft.setTextColor(TFT_RED, TFT_WHITE);
              effect->printEffectName(tft);
              tft.setCursor(124, 3);
              tft.setTextSize(6);
              tft.setTextColor(TFT_BLUE, TFT_WHITE);
              tft.println(effect->getChannelChar());
              delay(400);
            }
          }
          digitalWrite (CS7, HIGH);
          break;


        case 9:
          {
            if (currentEffect != 0)
            {
              AxeEffect *effect = Axe.getCurrentPreset().getEffectById(currentEffect);
              effect->switchChannel(0);
              digitalWrite(CS9, LOW);
              tft.setTextColor(TFT_BLACK, TFT_GREEN);
              tft.setTextSize(3);
              tft.setCursor(1, 105);
              tft.println(" CHANNEL ");
              tft.drawLine(0, 104, 160, 104, TFT_GREEN);
              tft.drawRect(0, 0, 160, 128, TFT_GREEN); // Draw bezel line
              digitalWrite(CS9, HIGH);

              digitalWrite(CS4, LOW);
              digitalWrite(CS5, LOW);
              digitalWrite(CS10, LOW);
              tft.setTextColor(TFT_BLACK, TFT_RED);
              tft.setTextSize(3);
              tft.setCursor(1, 105);
              tft.println(" CHANNEL ");
              tft.drawLine(0, 104, 160, 104, TFT_RED);
              tft.drawRect(0, 0, 160, 128, TFT_RED); // Draw bezel line

              digitalWrite(CS4, HIGH);
              digitalWrite(CS5, HIGH);
              digitalWrite(CS10, HIGH);
            }
          }
          break;

        case 10:
          {
            if (currentEffect != 0)
            {
              AxeEffect *effect = Axe.getCurrentPreset().getEffectById(currentEffect);
              effect->switchChannel(1);
              digitalWrite(CS10, LOW);
              tft.setTextColor(TFT_BLACK, TFT_GREEN);
              tft.setTextSize(3);
              tft.setCursor(1, 105);
              tft.println(" CHANNEL ");
              tft.drawLine(0, 104, 160, 104, TFT_GREEN);
              tft.drawRect(0, 0, 160, 128, TFT_GREEN); // Draw bezel line
              digitalWrite(CS10, HIGH);

              digitalWrite(CS4, LOW);
              digitalWrite(CS5, LOW);
              digitalWrite(CS9, LOW);
              tft.setTextColor(TFT_BLACK, TFT_RED);
              tft.setTextSize(3);
              tft.setCursor(1, 105);
              tft.println(" CHANNEL ");
              tft.drawLine(0, 104, 160, 104, TFT_RED);
              tft.drawRect(0, 0, 160, 128, TFT_RED); // Draw bezel line
              digitalWrite(CS4, HIGH);
              digitalWrite(CS5, HIGH);
              digitalWrite(CS9, HIGH);

            }
          }
          break;


        // Switch 12.                   BANK UP
        case 11:
          {
            if (PresetNumb > 501) PresetNumb = 0; else if (PresetNumb = PresetNumb + 10);
            CurPreset = PresetNumb;
            lcd.clear();   lcd.begin(16, 2); lcd.setCursor(0, 0);   lcd.print("PRESET: "); lcd.print(CurPreset);
            getScenes = true;
            Axe.sendPresetChange(PresetNumb);
            Serial.println(" "); Serial.println("Switch-12 ");
            delay(200);
          }
          break;

        // Switch 13.                   EFFECT Page
        case 12:
          {
            Axe.refresh();
            currentEffect = 0;
            Serial.println("currenteffect = 0");
            ini_effect();
          }
          break;

        // Switch 14.                   LOOPER Page
        case 13:
          {
            Serial.println("Switch-14 ");
            strcpy(page, "looper");
            ini_looper();
            delay(200);
          }
          break;

        // Switch 15.                   Active Preset / select Scene or Preset page
        case 14:
          {
            Serial.println("Switch-15 ");
            getScenes = true;
            Axe.refresh();
            currentEffect = 0;
            ini_scenes();
          }
          break;

        // Switch 16.                   TAP tempo screen
        case 15:
          //TAP tempo screen setup
          Serial.println("Switch-16: TAP");
          if (tapSwitch == false)
          {
            Axe.sendTap();
            tapSwitch = true;
            digitalWrite (CS14, LOW);
            tft.fillScreen(TFT_RED);
            tft.setTextColor(TFT_WHITE);
            tft.setTextSize(5);
            tft.setCursor(40, 15);
            tft.println("TAP");
            tft.setCursor(50, 70);
            tft.setTextSize(4);
            tft.setTextColor(TFT_WHITE);
            tft.println(Axe.getTempo());
            digitalWrite (CS14, HIGH);
          }
          else
          {
            Axe.sendTap();
            tapSwitch = false;
            digitalWrite (CS14, LOW);
            tft.fillScreen(TFT_GREEN);
            tft.setTextColor(TFT_BLACK);
            tft.setTextSize(5);
            tft.setCursor(40, 15);
            tft.println("TAP");
            tft.setCursor(50, 70);
            tft.setTextSize(4);
            tft.setTextColor(TFT_RED);
            Axe.requestTempo();
            tft.println(Axe.getTempo());
            digitalWrite (CS14, HIGH);
          }
          break;

        // Switch 17.           //Empty for now
        case 16:
          {
            Counter = 0;
            strcpy(page, "numbers");
            Serial.println("Switch-17 ");
            getScenes = false;
            lcd.clear(); lcd.setCursor(0, 1); lcd.print("Select a preset:");
            ini_numbers();
            delay(200);
          }
          break;


        // Switch 18.            TUNER
        case 17:
          {
            Axe.toggleTuner();
            Serial.println("Switch-18 ");
            delay(200);
          }
          break;

      }
      //delay( BOUNCEDELAY );
    }
    switchState[currentSwitch] = digitalRead( switches[currentSwitch] );
  }
}




/*================================================================================================================================*/
/*==========================================  LOOPER Setting buttons and Screens  ================================================*/
/*================================================================================================================================*/

void looper_settings()
{

  for ( currentSwitch = 0; currentSwitch < 18; currentSwitch++ ) {
    if ((digitalRead(switches[currentSwitch]) != switchState[currentSwitch] ) && (switchState[currentSwitch] == HIGH)) {
      switch ( currentSwitch ) {



        // Switch 1.                            RECORD
        case 0:
          {
            Serial.println("record");
            Axe.getLooper().record();
            delay(200);
            ini_looper();
            digitalWrite (CS1, LOW);
            tft.setTextColor(TFT_RED);
            tft.setTextSize(3);
            tft.setCursor(30, 35);
            tft.println("LOOPER");
            tft.setCursor(30, 70);
            tft.setTextSize(3);
            tft.setTextColor(TFT_RED);
            tft.println("RECORD");
            digitalWrite (CS1, HIGH);
          }
          break;

        // Switch 2.                            PLAY
        case 1:
          {

            Serial.println("play");
            Axe.getLooper().play();
            delay(200);
            ini_looper();
            digitalWrite (CS2, LOW);
            tft.setTextColor(TFT_RED);
            tft.setTextSize(3);
            tft.setCursor(30, 35);
            tft.println("LOOPER");
            tft.setCursor(45, 70);
            tft.setTextSize(3);
            tft.setTextColor(TFT_RED);
            tft.println("PLAY");
            digitalWrite (CS2, HIGH);
          }
          break;

        case 2: {

            Serial.println("undo");
            Axe.getLooper().undo();
            delay(200);
            ini_looper();
            digitalWrite(CS3, LOW);
            tft.setTextColor(TFT_RED);
            tft.setTextSize(3);
            tft.setCursor(30, 35);
            tft.println("LOOPER");
            tft.setCursor(45, 70);
            tft.setTextSize(3);
            tft.setTextColor(TFT_RED);
            tft.println("UNDO");
            digitalWrite(CS3, HIGH);
          }
          break;

        case 3:
          {

            Serial.println("once");
            Axe.getLooper().once();
            delay(200);
            ini_looper();
            digitalWrite(CS4, LOW);
            tft.setTextColor(TFT_RED);
            tft.setTextSize(3);
            tft.setCursor(30, 35);
            tft.println("LOOPER");
            tft.setCursor(45, 70);
            tft.setTextSize(3);
            tft.setTextColor(TFT_RED);
            tft.println("ONCE");
            digitalWrite(CS4, HIGH);
          }
          break;

        case 4:
          {

            Serial.println("reverse");
            Axe.getLooper().reverse();
            delay(200);
            ini_looper();
            digitalWrite(CS5, LOW);
            tft.setTextColor(TFT_RED);
            tft.setTextSize(3);
            tft.setCursor(30, 35);
            tft.println("LOOPER");
            tft.setCursor(20, 70);
            tft.setTextSize(3);
            tft.setTextColor(TFT_RED);
            tft.println("REVERSE");
            digitalWrite(CS5, HIGH);
          }
          break;

        // Switch 6.                         Bank Down
        case 5:
          if (PresetNumb < 0) PresetNumb = 510; else (PresetNumb = PresetNumb - 10);
          CurPreset = PresetNumb;
          lcd.clear();   lcd.begin(16, 2); lcd.setCursor(0, 0);   lcd.print("PRESET: "); lcd.print(CurPreset);
          getScenes = true;
          Axe.sendPresetChange(PresetNumb);
          Axe.refresh();
          Serial.println(" "); Serial.println("Switch-12 ");
          break;


        case 6:
          {
            Serial.println("halfSpeed");
            Axe.getLooper().halfSpeed();
            delay(200);
            ini_looper();
            digitalWrite(CS6, LOW);
            tft.setTextColor(TFT_RED);
            tft.setTextSize(3);
            tft.setCursor(30, 35);
            tft.println("LOOPER");
            tft.setCursor(0, 70);
            tft.setTextSize(3);
            tft.setTextColor(TFT_RED);
            tft.println("HALF SPD");
            digitalWrite(CS6, HIGH);
          }
          break;

        // Switch 12.                   BANK UP
        case 11:
          if (PresetNumb > 501) PresetNumb = 0; else if (PresetNumb = PresetNumb + 10);
          CurPreset = PresetNumb;
          lcd.clear();   lcd.begin(16, 2); lcd.setCursor(0, 0);   lcd.print("PRESET: "); lcd.print(CurPreset);
          getScenes = true;
          Axe.sendPresetChange(PresetNumb);
          Axe.refresh();
          Serial.println(" "); Serial.println("Switch-12 ");
          break;


        // Switch 13.                   EFFECT Page
        case 12: {
            strcpy(page, "effect");
            Axe.refresh();
            ini_effect();
            break;
          }


        // Switch 14.                   PRESET Page
        case 13: {
            presetRange();
            preset_Names();
            ini_preset();
            break;
          }



        // Switch 15.                   Active Preset / select Scene or Preset page
        case 14: {
            Serial.println("Switch-15");
            getScenes = true;
            Axe.refresh();
            ini_scenes();
            break;
          }

        // Switch 16.                   TAP tempo screen
        case 15:
          //TAP tempo screen setup
          Serial.println("Switch-16: TAP");
          if (tapSwitch == false) {
            Axe.sendTap();
            tapSwitch = true;
            digitalWrite (CS14, LOW);
            tft.fillScreen(TFT_RED);
            tft.setTextColor(TFT_WHITE);
            tft.setTextSize(5);
            tft.setCursor(40, 15);
            tft.println("TAP");
            tft.setCursor(50, 70);
            tft.setTextSize(4);
            tft.setTextColor(TFT_WHITE);
            tft.println(Axe.getTempo());
            digitalWrite (CS14, HIGH);
          }
          else
          {
            Axe.sendTap();
            tapSwitch = false;
            digitalWrite (CS14, LOW);
            tft.fillScreen(TFT_GREEN);
            tft.setTextColor(TFT_BLACK);
            tft.setTextSize(5);
            tft.setCursor(40, 15);
            tft.println("TAP");
            tft.setCursor(50, 70);
            tft.setTextSize(4);
            tft.setTextColor(TFT_RED);
            Axe.requestTempo();
            tft.println(Axe.getTempo());
            digitalWrite (CS14, HIGH);
          }
          break;

        // Switch 17.           //numbers
        case 16:
          {
            Counter = 0;
            strcpy(page, "numbers");
            //Axe.refresh();
            Serial.println("Switch-17 ");
            getScenes = false;
            lcd.clear(); lcd.setCursor(0, 1); lcd.print("Select a preset:");
            ini_numbers();
            delay(200);
          }
          break;



        // Switch 18.            TUNER
        case 17: {
            Axe.toggleTuner();
            Serial.println("Switch-18 ");
            delay(200);
          }
          break;
      }
      //delay( BOUNCEDELAY );
    }
    switchState[currentSwitch] = digitalRead( switches[currentSwitch] );
  }
}

/*================================================================================================================================*/
/*==========================================             NUMBER setting           ================================================*/
/*================================================================================================================================*/

void numbers_settings()
{
  for ( currentSwitch = 0; currentSwitch < 18; currentSwitch++ ) {
    if ((digitalRead(switches[currentSwitch]) != switchState[currentSwitch] ) && (switchState[currentSwitch] == HIGH)) {
      switch ( currentSwitch ) {

        //Switch 1-10
        case 0:
          {
            Counter = Counter + 1;
            inputNumber = 0;
            Serial.print (" Counter = ");  Serial.println( Counter);
            Serial.print (" Inputnumber = ");  Serial.println( inputNumber);
            if ( Counter == 1)      {
              n1 = inputNumber;
              Serial.print ("N1 = ");  Serial.println(n1);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n1);
            }
            else if ( Counter == 2) {
              n2 = ((n1 * 10) + inputNumber);
              Serial.print ("N2 = ");  Serial.println(n2);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n2);
            }
            else if ( Counter == 3) {
              n3 = ((n2 * 10) + inputNumber);
              Serial.print ("N3 = ");  Serial.println(n3);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n3);
            }
            delay(200);
          }
          break;


        case 1:
          {
            Counter = Counter + 1;
            inputNumber = 1;
            Serial.print (" Counter = ");  Serial.println( Counter);
            Serial.print (" Inputnumber = ");  Serial.println( inputNumber);
            if ( Counter == 1)      {
              n1 = inputNumber;
              Serial.print ("N1 = ");  Serial.println(n1);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n1);
            }
            else if ( Counter == 2) {
              n2 = ((n1 * 10) + inputNumber);
              Serial.print ("N2 = ");  Serial.println(n2);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n2);
            }
            else if ( Counter == 3) {
              n3 = ((n2 * 10) + inputNumber);
              Serial.print ("N3 = ");  Serial.println(n3);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n3);
            }
            delay(200);
          }
          break;

        case 2:
          {
            Counter = Counter + 1;
            inputNumber = 2;
            Serial.print (" Counter = ");  Serial.println( Counter);
            Serial.print (" Inputnumber = ");  Serial.println( inputNumber);
            if ( Counter == 1)      {
              n1 = inputNumber;
              Serial.print ("N1 = ");  Serial.println(n1);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n1);
            }
            else if ( Counter == 2) {
              n2 = ((n1 * 10) + inputNumber);
              Serial.print ("N2 = ");  Serial.println(n2);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n2);
            }
            else if ( Counter == 3) {
              n3 = ((n2 * 10) + inputNumber);
              Serial.print ("N3 = ");  Serial.println(n3);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n3);
            }
            delay(200);
          }
          break;

        case 3:
          {
            Counter = Counter + 1;
            inputNumber = 3;
            Serial.print (" Counter = ");  Serial.println( Counter);
            Serial.print (" Inputnumber = ");  Serial.println( inputNumber);
            if ( Counter == 1)      {
              n1 = inputNumber;
              Serial.print ("N1 = ");  Serial.println(n1);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n1);
            }
            else if ( Counter == 2) {
              n2 = ((n1 * 10) + inputNumber);
              Serial.print ("N2 = ");  Serial.println(n2);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n2);
            }
            else if ( Counter == 3) {
              n3 = ((n2 * 10) + inputNumber);
              Serial.print ("N3 = ");  Serial.println(n3);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n3);
            }
            delay(200);
          }
          break;

        case 4:
          {
            Counter = Counter + 1;
            inputNumber = 4;
            Serial.print (" Counter = ");  Serial.println( Counter);
            Serial.print (" Inputnumber = ");  Serial.println( inputNumber);
            if ( Counter == 1)      {
              n1 = inputNumber;
              Serial.print ("N1 = ");  Serial.println(n1);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n1);
            }
            else if ( Counter == 2) {
              n2 = ((n1 * 10) + inputNumber);
              Serial.print ("N2 = ");  Serial.println(n2);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n2);
            }
            else if ( Counter == 3) {
              n3 = ((n2 * 10) + inputNumber);
              Serial.print ("N3 = ");  Serial.println(n3);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n3);
            }
            delay(200);
          }
          break;


        case 6:
          {
            Counter = Counter + 1;
            inputNumber = 5;
            Serial.print (" Counter = ");  Serial.println( Counter);
            Serial.print (" Inputnumber = ");  Serial.println( inputNumber);
            if ( Counter == 1)      {
              n1 = inputNumber;
              Serial.print ("N1 = ");  Serial.println(n1);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n1);
            }
            else if ( Counter == 2) {
              n2 = ((n1 * 10) + inputNumber);
              Serial.print ("N2 = ");  Serial.println(n2);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n2);
            }
            else if ( Counter == 3) {
              n3 = ((n2 * 10) + inputNumber);
              Serial.print ("N3 = ");  Serial.println(n3);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n3);
            }
            delay(200);
          }
          break;

        case 7:
          {
            Counter = Counter + 1;
            inputNumber = 6;
            Serial.print (" Counter = ");  Serial.println( Counter);
            Serial.print (" Inputnumber = ");  Serial.println( inputNumber);
            if ( Counter == 1)      {
              n1 = inputNumber;
              Serial.print ("N1 = ");  Serial.println(n1);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n1);
            }
            else if ( Counter == 2) {
              n2 = ((n1 * 10) + inputNumber);
              Serial.print ("N2 = ");  Serial.println(n2);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n2);
            }
            else if ( Counter == 3) {
              n3 = ((n2 * 10) + inputNumber);
              Serial.print ("N3 = ");  Serial.println(n3);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n3);
            }
            delay(200);
          }
          break;

        case 8:
          {
            Counter = Counter + 1;
            inputNumber = 7;
            Serial.print (" Counter = ");  Serial.println( Counter);
            Serial.print (" Inputnumber = ");  Serial.println( inputNumber);
            if ( Counter == 1)      {
              n1 = inputNumber;
              Serial.print ("N1 = ");  Serial.println(n1);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n1);
            }
            else if ( Counter == 2) {
              n2 = ((n1 * 10) + inputNumber);
              Serial.print ("N2 = ");  Serial.println(n2);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n2);
            }
            else if ( Counter == 3) {
              n3 = ((n2 * 10) + inputNumber);
              Serial.print ("N3 = ");  Serial.println(n3);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n3);
            }
            delay(200);
          }
          break;

        case 9:
          {
            Counter = Counter + 1;
            inputNumber = 8;
            Serial.print (" Counter = ");  Serial.println( Counter);
            Serial.print (" Inputnumber = ");  Serial.println( inputNumber);
            if ( Counter == 1)      {
              n1 = inputNumber;
              Serial.print ("N1 = ");  Serial.println(n1);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n1);
            }
            else if ( Counter == 2) {
              n2 = ((n1 * 10) + inputNumber);
              Serial.print ("N2 = ");  Serial.println(n2);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n2);
            }
            else if ( Counter == 3) {
              n3 = ((n2 * 10) + inputNumber);
              Serial.print ("N3 = ");  Serial.println(n3);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n3);
            }
            delay(200);
          }
          break;


        case 10:
          {
            Counter = Counter + 1;
            inputNumber = 9;
            Serial.print (" Counter = ");  Serial.println( Counter);
            Serial.print (" Inputnumber = ");  Serial.println( inputNumber);
            if ( Counter == 1)      {
              n1 = inputNumber;
              Serial.print ("N1 = ");  Serial.println(n1);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n1);
            }
            else if ( Counter == 2) {
              n2 = ((n1 * 10) + inputNumber);
              Serial.print ("N2 = ");  Serial.println(n2);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n2);
            }
            else if ( Counter == 3) {
              n3 = ((n2 * 10) + inputNumber);
              Serial.print ("N3 = ");  Serial.println(n3);
              lcd.setCursor(0, 0); lcd.print("Number = "); lcd.print(n3);
            }
            delay(200);
          }
          break;



        // Switch 13.                   EFFECT Page
        case 12:
          Counter = 0;
          Axe.refresh();
          getScenes = false;
          ini_effect();
          break;


        // Switch 14.                   LOOPER Page
        case 13:
          Counter = 0;
          strcpy(page, "looper");
          Axe.refresh();
          Serial.println("Switch-14 ");
          getScenes = false;
          ini_looper();
          break;


        // Switch 15.                   Active Preset / select Scene or Preset page
        case 14:
          {
            Serial.println("Switch-15");
            Counter = 0;
            getScenes = true;
            Axe.fetchEffects(true);
            Axe.refresh();
            ini_scenes();
            break;
          }

        // Switch 16.                   TAB tempo
        case 15:
          //set TAP tempo manual with number buttons
          {
            Serial.println ("pressed 16");
            switch (Counter)
            {
              case 1: Axe.setTempo(n1); delay(200); Counter = 0; tapTempo = n1; tabScreen(); break;
                lcd.clear(); lcd.setCursor(0, 0); lcd.print("Tempo = "); lcd.print(n1);
                Serial.print (" Tempo = ");  Serial.println(n1);
              case 2: Axe.setTempo(n2); delay(200); Counter = 0; tapTempo = n2; tabScreen(); break;
                lcd.clear(); lcd.setCursor(0, 0); lcd.print("Tempo = "); lcd.print(n2);
                Serial.print (" Tempo = ");  Serial.println(n2);
              case 3:
                if (n3 >= 251)
                {
                  n3 = 250;
                }
                Axe.setTempo(n3); delay(200); Counter = 0; tapTempo = n3; tabScreen(); break;
                lcd.clear(); lcd.setCursor(0, 0); lcd.print("Tempo = "); lcd.print(n3);
                Serial.print (" Tempo = ");  Serial.println(n3);
              /* in case */
              case 4:
                if (n3 >= 251)
                {
                  n3 = 250;
                }
                Axe.setTempo(n3); delay(200); Counter = 0; tapTempo = n3; tabScreen(); break;
                lcd.clear(); lcd.setCursor(0, 0); lcd.print("Tempo = "); lcd.print(n3);
                Serial.print (" Tempo = ");  Serial.println(n3);
              /* in case*/
              case 5:
                if (n3 >= 251)
                {
                  n3 = 250;
                }
                Axe.setTempo(n3); delay(200); Counter = 0; tapTempo = n3; tabScreen(); break;
                lcd.clear(); lcd.setCursor(0, 0); lcd.print("Tempo = "); lcd.print(n3);
                Serial.print (" Tempo = ");  Serial.println(n3);
            }
            Counter = 0;
            lcd.setCursor(0, 0); lcd.print("Number =        ");
            Axe.fetchEffects(true);
            Axe.refresh();
          }
          break;

        case 16:   //numbers
          {
            //strcpy(page,"scene");  // has to do with the effects....dont know any other option at the moment
            Serial.println ("pressed 16");
            switch (Counter)
            {

              case 1: getScenes = true; Axe.sendPresetChange(n1); delay(200); Counter = 0; break;
                lcd.clear(); lcd.setCursor(0, 0); lcd.print("Selected = "); lcd.print(n1);
                Serial.print (" Selected number = ");  Serial.println(n1);
              case 2: getScenes = true;  Axe.sendPresetChange(n2); delay(200); Counter = 0; break;
                lcd.clear(); lcd.setCursor(0, 0); lcd.print("Selected = "); lcd.print(n2);
                Serial.print (" Selected number = ");  Serial.println(n2);
              case 3: getScenes = true;  Axe.sendPresetChange(n3); delay(200); Counter = 0; break;
                lcd.clear(); lcd.setCursor(0, 0); lcd.print("Selected = "); lcd.print(n3);
                Serial.print (" Selected number = ");  Serial.println(n3);
            /* in case */  case 4: getScenes = true;  Axe.sendPresetChange(n3); delay(200); Counter = 0; break;
                lcd.clear(); lcd.setCursor(0, 0); lcd.print("Selected = "); lcd.print(n3);
                Serial.print (" Selected number = ");  Serial.println(n3);
            /* in case*/    case 5: getScenes = true;  Axe.sendPresetChange(n3); delay(200); Counter = 0; break;
                lcd.clear(); lcd.setCursor(0, 0); lcd.print("Selected = "); lcd.print(n3);
                Serial.print (" Selected number = ");  Serial.println(n3);
            }
            Axe.fetchEffects(true);
            Axe.refresh();
            delay(200);
            Counter = 0;
          }
          break;


        // Switch 18.            TUNER
        case 17: {
            lcd.clear(); lcd.setCursor(0, 0); lcd.print("Selected = ");
            delay(200);
            Counter = 0;
          }
      }
      //delay( BOUNCEDELAY );
    }
    switchState[currentSwitch] = digitalRead( switches[currentSwitch] );
  }
}
/*===================================================================================*/
/*Axelman8*/
