#pragma once

/*======================================================================================================================*/

//ON THIS TAB ALL THE SCREENS ARE INSTATIATED.

// 1 = *BOOTUP SCREEN AXE FX III
// 2 = *BUILD UP the 5 SCREENS o the top (CS 11,12,13,14,15)
// 3 = *SCENES  -> nope, these are now on axe_handler.h
// 4 = *PRESETS -> nope, these are now on axe_handler.h
// 5 = *PRESETNUMBERS
// 6 = *EFFECTS

/*=======================================================================================================================*/




/*===========================================   -  Include library's  -  ================================================*/
#include <AxeFxControl.h>
#include "variables.h"
#include "axe_handler.h"
#include "settings.h"
/*=======================================================================================================================*/



//===============   Setup the screens ==================

void boot_screensetup()
{

  //one led,  going to activate it now:
  pinMode(29, OUTPUT);

  //setup the 15 LCD screens
  pinMode(CS1, OUTPUT);
  pinMode(CS2, OUTPUT);
  pinMode(CS3, OUTPUT);
  pinMode(CS4, OUTPUT);
  pinMode(CS5, OUTPUT);
  pinMode(CS6, OUTPUT);
  pinMode(CS7, OUTPUT);
  pinMode(CS8, OUTPUT);
  pinMode(CS9, OUTPUT);
  pinMode(CS10, OUTPUT);
  pinMode(CS11, OUTPUT);
  pinMode(CS12, OUTPUT);
  pinMode(CS13, OUTPUT);
  pinMode(CS14, OUTPUT);
  pinMode(CS15, OUTPUT);

  digitalWrite (CS1, LOW);
  digitalWrite (CS2, LOW);
  digitalWrite(CS3, LOW);
  digitalWrite(CS4, LOW);
  digitalWrite(CS5, LOW);
  digitalWrite(CS6, LOW);
  digitalWrite(CS7, LOW);
  digitalWrite(CS8, LOW);
  digitalWrite(CS9, LOW);
  digitalWrite(CS10, LOW);
  digitalWrite(CS11, LOW);
  digitalWrite(CS12, LOW);
  digitalWrite(CS13, LOW);
  digitalWrite(CS14, LOW);
  digitalWrite(CS15, LOW);

  tft.init(ST7735_BLACKTAB);
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  tft.setTextWrap(false);


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
  digitalWrite(CS12, HIGH);
  digitalWrite(CS13, HIGH);
  digitalWrite(CS14, HIGH);
  digitalWrite(CS15, HIGH);


  // with x hight

  digitalWrite (CS2, LOW);
  tft.setTextColor(TFT_RED);
  tft.setTextSize(20);
  tft.setCursor(60, 40);
  tft.println("I");
  digitalWrite (CS2, HIGH);

  digitalWrite (CS3, LOW);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(20);
  tft.setCursor(60, 40);
  tft.println("I");
  digitalWrite (CS3, HIGH);


  digitalWrite (CS4, LOW);
  tft.setTextColor(TFT_BLUE);
  tft.setTextSize(20);
  tft.setCursor(60, 40);
  tft.println("I");
  digitalWrite (CS4, HIGH);


  digitalWrite (CS6, LOW);
  tft.fillScreen(TFT_BLACK);
  digitalWrite (CS6, HIGH);

  digitalWrite (CS7, LOW);
  tft.fillScreen(TFT_BLACK);
  digitalWrite (CS7, HIGH);

  digitalWrite (CS8, LOW);
  tft.fillScreen(TFT_RED);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(8);
  tft.setCursor(40, 40);
  tft.println("FX");
  digitalWrite (CS8, HIGH);

  digitalWrite (CS9, LOW);
  tft.fillScreen(TFT_BLACK);
  digitalWrite (CS9, HIGH);

  digitalWrite (CS12, LOW);
  tft.setTextColor(TFT_YELLOW);
  tft.setTextSize(20);
  tft.setCursor(60, 40);
  tft.println("A");
  digitalWrite (CS12, HIGH);

  digitalWrite (CS13, LOW);
  tft.setTextColor(TFT_YELLOW);
  tft.setTextSize(20);
  tft.setCursor(60, 40);
  tft.println("X");
  digitalWrite (CS13, HIGH);

  digitalWrite (CS14, LOW);
  tft.setTextColor(TFT_YELLOW);
  tft.setTextSize(20);
  tft.setCursor(60, 40);
  tft.println("E");
  digitalWrite (CS14, HIGH);
  delay(1000);
}

/*================================================================================================================================*/
/*==============================================    scene initializing screens  ==================================================*/


//============================================================================================================

void ini_screens()  //clear all screens after 1st boot

{
  digitalWrite (CS1, LOW);
  digitalWrite (CS2, LOW);
  digitalWrite(CS3, LOW);
  digitalWrite(CS4, LOW);
  digitalWrite(CS5, LOW);
  digitalWrite(CS6, LOW);
  digitalWrite(CS7, LOW);
  digitalWrite(CS8, LOW);
  digitalWrite(CS9, LOW);
  digitalWrite(CS10, LOW);
  digitalWrite(CS11, LOW);
  digitalWrite(CS12, LOW);
  digitalWrite(CS13, LOW);
  digitalWrite(CS14, LOW);
  digitalWrite(CS15, LOW);

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
  digitalWrite(CS12, HIGH);
  digitalWrite(CS13, HIGH);
  digitalWrite(CS14, HIGH);
  digitalWrite(CS15, HIGH);


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
  tft.setTextColor(TFT_BLACK, TFT_PURPLE);
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

  digitalWrite (CS13, LOW);
  tft.fillScreen(TFT_BLACK);
  tft.setTextSize(4);
  tft.setCursor(65, 20);
  tft.setTextColor(TFT_WHITE);
  tft.println("NO");
  tft.setTextSize(4);
  tft.setCursor(35, 70);
  tft.setTextColor(TFT_WHITE);
  tft.println("INFO");
  digitalWrite (CS13, HIGH);

  digitalWrite (CS14, LOW);
  Axe.requestTempo();

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


//======================================================================    TAB screen settings =============================================================================================

void tabScreen()
{
  Axe.requestTempo();
  digitalWrite (CS14, LOW);
  tft.setCursor(50, 70);
  tft.setTextSize(4);
  tft.setTextColor(TFT_RED, TFT_GREEN);
  tft.println(Axe.getTempo());
  digitalWrite (CS14, HIGH);
}


//======================================================================    PRESET settings =============================================================================================

void ini_preset()

{

  Serial.println("ini_preset is starting");

  if (strcmp(page, "preset") != 0)
  {
    digitalWrite (CS11, LOW);
    tft.fillScreen(TFT_BLUE);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(3);
    tft.setCursor(30, 35);
    tft.println("PRESET");
    tft.setCursor(45, 70);
    tft.setTextSize(3);
    tft.setTextColor(TFT_WHITE);
    tft.println("-100");
    digitalWrite (CS11, HIGH);

    digitalWrite (CS12, LOW);
    tft.fillScreen(TFT_BLUE);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(3);
    tft.setCursor(30, 35);
    tft.println("PRESET");
    tft.setCursor(45, 70);
    tft.setTextSize(3);
    tft.setTextColor(TFT_WHITE);
    tft.println("-50");
    digitalWrite (CS12, HIGH);

    digitalWrite (CS13, LOW);
    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_BLUE);
    tft.setTextSize(3);
    tft.setCursor(10, 30);
    tft.println("AUDITION");
    tft.setTextSize(3);
    tft.setCursor(40, 70);
    tft.println("MODE");
    tft.drawRect(0, 0, 160, 128, TFT_BLUE); // Draw bezel line
    auditionMode = false;
    digitalWrite (CS13, HIGH);

    digitalWrite (CS14, LOW);
    tft.fillScreen(TFT_BLUE);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(3);
    tft.setCursor(30, 35);
    tft.println("PRESET");
    tft.setCursor(45, 70);
    tft.setTextSize(3);
    tft.setTextColor(TFT_WHITE);
    tft.println("+50");
    digitalWrite (CS14, HIGH);

    digitalWrite (CS15, LOW);
    tft.fillScreen(TFT_BLUE);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(3);
    tft.setCursor(30, 35);

    tft.println("PRESET");
    tft.setCursor(45, 70);
    tft.setTextSize(3);
    tft.setTextColor(TFT_WHITE);
    tft.println("+100");
    digitalWrite (CS15, HIGH);

  }

  presetBank_settings(); // got to the page Axe_handler.h for building the preset screens


  lcd.clear();   lcd.begin(16, 2);  lcd.setCursor(0, 0); lcd.print("ACT PRESET: "); lcd.print(CurPreset);
  lcd.setCursor(0, 1);   lcd.print("<- +/-50  +/-100");

  Serial.println("ini_preset is loaded");
}



//======================================================================    EFFECT settings =============================================================================================


void ini_effect()

{
  strcpy(page, "effect");
  //================== EFFECTS ===========================

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

  digitalWrite (CS11, LOW);
  tft.fillScreen(TFT_PURPLE);
  tft.setTextColor(TFT_WHITE, TFT_PURPLE);
  tft.setTextSize(2);
  tft.setCursor(0, 0);
  tft.println("             ");
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(3);
  tft.setCursor(0, 35);
  tft.println(" AMP/CAB ");
  tft.setCursor(35, 70);
  tft.setTextSize(3);
  tft.setTextColor(TFT_WHITE);
  tft.println("ABCD");
  digitalWrite (CS11, HIGH);


  AxeEffect *effect = Axe.getCurrentPreset().getEffectById(effectindex);

  switch (effectindex)
  {
    case 1:

      effect1 = (effect->getEffectId());
      digitalWrite (CS1, LOW);
      if (effect->isBypassed()) {
        tft.fillScreen(TFT_RED);
        tft.setCursor(2, 50);
        tft.setTextSize(4);
        tft.setTextColor(TFT_WHITE);
        effect->printEffectName(tft);
      }
      else {
        tft.fillScreen(TFT_GREEN);
        tft.setCursor(2, 50);
        tft.setTextSize(4);
        tft.setTextColor(TFT_BLACK);
        effect->printEffectName(tft);
      }
      digitalWrite (CS1, HIGH);
      break;

    case 2:
      effect2 = (effect->getEffectId());
      digitalWrite (CS2, LOW);
      if (effect->isBypassed()) {
        tft.fillScreen(TFT_RED);
        tft.setCursor(2, 50);
        tft.setTextSize(4);
        tft.setTextColor(TFT_WHITE);
        effect->printEffectName(tft);
      }
      else {
        tft.fillScreen(TFT_GREEN);
        tft.setCursor(2, 50);
        tft.setTextSize(4);
        tft.setTextColor(TFT_BLACK);
        effect->printEffectName(tft);
      }
      digitalWrite (CS2, HIGH);
      break;


    case 3:
      effect3 = (effect->getEffectId());
      digitalWrite (CS3, LOW);
      if (effect->isBypassed()) {
        tft.fillScreen(TFT_RED);
        tft.setCursor(2, 50);
        tft.setTextSize(4);
        tft.setTextColor(TFT_WHITE);
        effect->printEffectName(tft);
      }
      else {
        tft.fillScreen(TFT_GREEN);
        tft.setCursor(2, 50);
        tft.setTextSize(4);
        tft.setTextColor(TFT_BLACK);
        effect->printEffectName(tft);
      }
      digitalWrite (CS3, HIGH);
      break;


    case 4:
      effect4 = (effect->getEffectId());
      digitalWrite (CS4, LOW);
      if (effect->isBypassed()) {
        tft.fillScreen(TFT_RED);
        tft.setCursor(2, 50);
        tft.setTextSize(4);
        tft.setTextColor(TFT_WHITE);
        effect->printEffectName(tft);
      }
      else {
        tft.fillScreen(TFT_GREEN);
        tft.setCursor(2, 50);
        tft.setTextSize(4);
        tft.setTextColor(TFT_BLACK);
        effect->printEffectName(tft);
      }
      digitalWrite (CS4, HIGH);
      break;

    case 5:
      effect5 = (effect->getEffectId());
      digitalWrite (CS5, LOW);
      if (effect->isBypassed()) {
        tft.fillScreen(TFT_RED);
        tft.setCursor(2, 50);
        tft.setTextSize(4);
        tft.setTextColor(TFT_WHITE);
        effect->printEffectName(tft);
      }
      else {
        tft.fillScreen(TFT_GREEN);
        tft.setCursor(2, 50);
        tft.setTextSize(4);
        tft.setTextColor(TFT_BLACK);
        effect->printEffectName(tft);
      }
      digitalWrite (CS5, HIGH);
      break;

    case 6:
      effect6 = (effect->getEffectId());
      digitalWrite (CS6, LOW);
      if (effect->isBypassed()) {
        tft.fillScreen(TFT_RED);
        tft.setCursor(2, 50);
        tft.setTextSize(4);
        tft.setTextColor(TFT_WHITE);
        effect->printEffectName(tft);
      }
      else {
        tft.fillScreen(TFT_GREEN);
        tft.setCursor(2, 50);
        tft.setTextSize(4);
        tft.setTextColor(TFT_BLACK);
        effect->printEffectName(tft);
      }
      digitalWrite (CS6, HIGH);
      break;

    case 7:
      effect7 = (effect->getEffectId());
      digitalWrite (CS7, LOW);
      if (effect->isBypassed()) {
        tft.fillScreen(TFT_RED);
        tft.setCursor(2, 50);
        tft.setTextSize(4);
        tft.setTextColor(TFT_WHITE);
        effect->printEffectName(tft);
      }
      else {
        tft.fillScreen(TFT_GREEN);
        tft.setCursor(2, 50);
        tft.setTextSize(4);
        tft.setTextColor(TFT_BLACK);
        effect->printEffectName(tft);
      }
      digitalWrite (CS7, HIGH);
      break;

    case 8:
      effect8 = (effect->getEffectId());
      digitalWrite (CS8, LOW);
      if (effect->isBypassed()) {
        tft.fillScreen(TFT_RED);
        tft.setCursor(2, 50);
        tft.setTextSize(4);
        tft.setTextColor(TFT_WHITE);
        effect->printEffectName(tft);
      }
      else {
        tft.fillScreen(TFT_GREEN);
        tft.setCursor(2, 50);
        tft.setTextSize(4);
        tft.setTextColor(TFT_BLACK);
        effect->printEffectName(tft);
      }
      digitalWrite (CS8, HIGH);
      break;

    case 9:
      effect9 = (effect->getEffectId());
      digitalWrite (CS9, LOW);
      if (effect->isBypassed()) {
        tft.fillScreen(TFT_RED);
        tft.setCursor(2, 50);
        tft.setTextSize(4);
        tft.setTextColor(TFT_WHITE);
        effect->printEffectName(tft);
      }
      else {
        tft.fillScreen(TFT_GREEN);
        tft.setCursor(2, 50);
        tft.setTextSize(4);
        tft.setTextColor(TFT_BLACK);
        effect->printEffectName(tft);
      }
      digitalWrite (CS9, HIGH);
      break;

    case 10:
      effect10 = (effect->getEffectId());
      digitalWrite (CS10, LOW);
      if (effect->isBypassed()) {
        tft.fillScreen(TFT_RED);
        tft.setCursor(2, 50);
        tft.setTextSize(4);
        tft.setTextColor(TFT_WHITE);
        effect->printEffectName(tft);
      }
      else {
        tft.fillScreen(TFT_GREEN);
        tft.setCursor(2, 50);
        tft.setTextSize(4);
        tft.setTextColor(TFT_BLACK);
        effect->printEffectName(tft);
      }
      digitalWrite (CS10, HIGH);
      break;

  }
}

//==================   AMP CAB effects ===========================

void AMP_ABCD()
{
  digitalWrite(CS4, LOW);
  digitalWrite(CS5, LOW);
  digitalWrite(CS9, LOW);
  digitalWrite(CS10, LOW);
  tft.setTextColor(TFT_BLACK, TFT_RED);
  tft.setTextSize(3);
  tft.setCursor(1, 105);
  tft.println(" CHANNEL ");
  tft.drawLine(0, 104, 160, 104, TFT_RED);
  tft.drawRect(0, 0, 160, 128, TFT_RED); // Draw bezel line

  digitalWrite(CS4, HIGH);
  digitalWrite(CS5, HIGH);
  digitalWrite(CS9, HIGH);
  digitalWrite(CS10, HIGH);

  digitalWrite (CS4, LOW);
  tft.setTextColor(TFT_BLUE);
  tft.setTextSize(20);
  tft.setCursor(63, 30);
  tft.println("C");
  digitalWrite (CS4, HIGH);

  digitalWrite (CS5, LOW);
  tft.setTextColor(TFT_BLUE);
  tft.setTextSize(20);
  tft.setCursor(63, 30);
  tft.println("D");
  digitalWrite (CS5, HIGH);

  digitalWrite (CS9, LOW);
  tft.setTextColor(TFT_BLUE);
  tft.setTextSize(20);
  tft.setCursor(63, 30);
  tft.println("A");
  digitalWrite (CS9, HIGH);

  digitalWrite (CS10, LOW);
  tft.setTextColor(TFT_BLUE);
  tft.setTextSize(20);
  tft.setCursor(63, 30);
  tft.println("B");
  digitalWrite (CS10, HIGH);

}


//==================   AMP CAB effects ===========================

void ini_AMP_effect()
{
  digitalWrite (CS11, LOW);
  tft.fillScreen(TFT_PURPLE);
  tft.setTextColor(TFT_WHITE, TFT_PURPLE);
  tft.setTextSize(2);
  tft.setCursor(0, 0);
  tft.println("             ");
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(3);
  tft.setCursor(35, 35);
  tft.println("EFFECT");
  tft.setCursor(45, 70);
  tft.setTextSize(3);
  tft.setTextColor(TFT_WHITE);
  tft.println("PAGE");
  digitalWrite (CS11, HIGH);

  AMP_ABCD();

}



//==================      LOOPER ===========================


void ini_looper()
{
  Serial.println("ini_looper wordt gestart");



  strcpy(page, "looper");


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




  digitalWrite (CS1, LOW);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(3);
  tft.setCursor(30, 35);
  tft.println("LOOPER");
  tft.setCursor(30, 70);
  tft.setTextSize(3);
  tft.setTextColor(TFT_WHITE);
  tft.println("RECORD");
  digitalWrite (CS1, HIGH);

  digitalWrite (CS2, LOW);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(3);
  tft.setCursor(30, 35);
  tft.println("LOOPER");
  tft.setCursor(45, 70);
  tft.setTextSize(3);
  tft.setTextColor(TFT_WHITE);
  tft.println("PLAY");
  digitalWrite (CS2, HIGH);

  digitalWrite(CS3, LOW);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(3);
  tft.setCursor(30, 35);
  tft.println("LOOPER");
  tft.setCursor(45, 70);
  tft.setTextSize(3);
  tft.setTextColor(TFT_WHITE);
  tft.println("UNDO");
  digitalWrite(CS3, HIGH);

  digitalWrite(CS4, LOW);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(3);
  tft.setCursor(30, 35);
  tft.println("LOOPER");
  tft.setCursor(45, 70);
  tft.setTextSize(3);
  tft.setTextColor(TFT_WHITE);
  tft.println("ONCE");
  digitalWrite(CS4, HIGH);

  digitalWrite(CS5, LOW);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(3);
  tft.setCursor(30, 35);
  tft.println("LOOPER");
  tft.setCursor(20, 70);
  tft.setTextSize(3);
  tft.setTextColor(TFT_WHITE);
  tft.println("REVERSE");
  digitalWrite(CS5, HIGH);

  digitalWrite(CS6, LOW);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(3);
  tft.setCursor(30, 35);
  tft.println("LOOPER");
  tft.setCursor(0, 70);
  tft.setTextSize(3);
  tft.setTextColor(TFT_WHITE);
  tft.println("HALF SPD");
  digitalWrite(CS6, HIGH);

  digitalWrite(CS12, LOW);
  tft.fillScreen(TFT_BLUE);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(3);
  tft.setCursor(35, 35);
  tft.println("PRESET");
  tft.setCursor(45, 70);
  tft.setTextSize(3);
  tft.setTextColor(TFT_WHITE);
  tft.println("PAGE");
  digitalWrite(CS12, HIGH);
}


//==================    PRESET and TAB settings ===========================


void ini_numbers()
{

  Serial.println("ini_numbers wordt gestart");


  strcpy(page, "numbers");

  pinMode(CS1, OUTPUT);
  pinMode(CS2, OUTPUT);
  pinMode(CS3, OUTPUT);
  pinMode(CS4, OUTPUT);
  pinMode(CS5, OUTPUT);
  pinMode(CS6, OUTPUT);
  pinMode(CS7, OUTPUT);
  pinMode(CS8, OUTPUT);
  pinMode(CS9, OUTPUT);
  pinMode(CS10, OUTPUT);
  pinMode(CS15, OUTPUT);

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
  digitalWrite(CS15, HIGH);

  digitalWrite (CS1, LOW);
  digitalWrite (CS2, LOW);
  digitalWrite(CS3, LOW);
  digitalWrite(CS4, LOW);
  digitalWrite(CS5, LOW);
  digitalWrite(CS6, LOW);
  digitalWrite(CS7, LOW);
  digitalWrite(CS8, LOW);
  digitalWrite(CS9, LOW);
  digitalWrite(CS10, LOW);
  digitalWrite(CS15, LOW);

  tft.fillScreen(TFT_BLACK);

  digitalWrite (CS1, HIGH) ;
  digitalWrite (CS2, HIGH) ;
  digitalWrite(CS3, HIGH);
  digitalWrite(CS4, HIGH);
  digitalWrite(CS5, HIGH);
  digitalWrite(CS6, HIGH);
  digitalWrite(CS7, HIGH);
  digitalWrite(CS8, HIGH);
  digitalWrite(CS9, HIGH);
  digitalWrite(CS10, HIGH);
  digitalWrite(CS15, HIGH);



  // with x hight


  digitalWrite (CS1, LOW);
  tft.setTextColor(TFT_YELLOW);
  tft.setTextSize(20);
  tft.setCursor(60, 40);
  tft.println("0");
  digitalWrite (CS1, HIGH);

  digitalWrite (CS2, LOW);
  tft.setTextColor(TFT_YELLOW);
  tft.setTextSize(20);
  tft.setCursor(60, 40);
  tft.println("1");
  digitalWrite (CS2, HIGH);

  digitalWrite (CS3, LOW);
  tft.setTextColor(TFT_YELLOW);
  tft.setTextSize(20);
  tft.setCursor(60, 40);
  tft.println("2");
  digitalWrite (CS3, HIGH);

  digitalWrite (CS4, LOW);
  tft.setTextColor(TFT_YELLOW);
  tft.setTextSize(20);
  tft.setCursor(60, 40);
  tft.println("3");
  digitalWrite (CS4, HIGH);

  digitalWrite (CS5, LOW);
  tft.setTextColor(TFT_YELLOW);
  tft.setTextSize(20);
  tft.setCursor(60, 40);
  tft.println("4");
  digitalWrite (CS5, HIGH);

  digitalWrite (CS6, LOW);
  tft.setTextColor(TFT_YELLOW);
  tft.setTextSize(20);
  tft.setCursor(60, 40);
  tft.println("5");
  digitalWrite (CS6, HIGH);

  digitalWrite (CS7, LOW);
  tft.setTextColor(TFT_YELLOW);
  tft.setTextSize(20);
  tft.setCursor(60, 40);
  tft.println("6");
  digitalWrite (CS7, HIGH);

  digitalWrite (CS8, LOW);
  tft.setTextColor(TFT_YELLOW);
  tft.setTextSize(20);
  tft.setCursor(60, 40);
  tft.println("7");
  digitalWrite (CS8, HIGH);


  digitalWrite (CS9, LOW);
  tft.setTextColor(TFT_YELLOW);
  tft.setTextSize(20);
  tft.setCursor(60, 40);
  tft.println("8");
  digitalWrite (CS9, HIGH);

  digitalWrite (CS10, LOW);
  tft.setTextColor(TFT_YELLOW);
  tft.setTextSize(20);
  tft.setCursor(60, 40);
  tft.println("9");
  digitalWrite (CS10, HIGH);

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

/*===================================================================================*/
/*Axelman8*/
