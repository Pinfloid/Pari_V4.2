/* 
=======================================================================================================================
======================================================================================================================= 
 
                                              ██████╗░░█████╗░██████╗░██╗
                                              ██╔══██╗██╔══██╗██╔══██╗██║
                                              ██████╔╝███████║██████╔╝██║
                                              ██╔═══╝░██╔══██║██╔══██╗██║
                                              ██║░░░░░██║░░██║██║░░██║██║
                                              ╚═╝░░░░░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝
                                                                  परी
                                                                                                                                                        
                                                                                                                                                        

                                                   Axe-FX   III midi foot controller


                                                   Axelman8  Rotterdam / Netherlands

========================================================================================================================
using AxeFxControl libriary from @tysonIT
started from scratch with help of the shared programming of @prongs_386, @tysonIT, @Piing from the Fractal audio forum.
========================================================================================================================


          TIP:   Look in the serial what the program is doing!!
          NOTE:  Could be that i commanted out some serial parts... walk through the code if so and uncomment for output



NOTE to you (the reader):   ->See x_changeLog.h for any changes in this or previous versions
NOTE to self:               ->Learn how to code 
*/


/*===========================================   -  Include library's  -  ================================================*/
#include <Timer.h>
#include <Arduino.h>
#include <AxeFxControl.h>
#include <Wire.h>


#include "settings.h"
#include "variables.h"
#include "Tuner.h"
#include "screenSetup.h"
/*=======================================================================================================================*/




/*=====================================================  -  SETUP  -  ====================================================*/
void setup() {
  //  Set MIDI baud rate:
  while (!Serial);
  Serial.begin(9600);
  Serial.flush();
  MIDI.begin(0);
  MIDI.turnThruOff();


  Axe.begin(Serial1);
  Axe.registerSystemChangeCallback(onSystemChange);  // tab tempo
  Axe.registerPresetChangeCallback(onPresetChange);  // New preset selection:  update info new presetname, active scenename, effects
  Axe.registerPresetChangingCallback(onPresetChanging); // New preset with all scenenames, effects
  Axe.registerSceneNameCallback(onSceneName); // run after onPresetChanging.  get all scenenames
  //Axe.fetchEffects(true);   //This one i start manually only when needed   (fck-up because i cannot get it in control with the looper and wah active update)
  Axe.registerEffectFilterCallback(onEffectFilter);
  Axe.registerEffectsReceivedCallback(onEffectsReceived);
  Axe.requestPresetDetails();
  Axe.registerTapTempoCallback(onTapTempo);
  Axe.registerTunerStatusCallback(onTunerStatus);
  Axe.registerTunerDataCallback(onTunerData);




  //  LCD Initial Message:
  lcd.clear();
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Music In Control");
  lcd.setCursor(0, 1);
  lcd.print("|- AXE-FX-III -|");

  //Setup Switches:
  for ( currentSwitch = 0; currentSwitch < 18; currentSwitch++ )
  {
    pinMode( switches[currentSwitch], INPUT_PULLUP);          // Set all pin for switch
    digitalWrite( switches[currentSwitch], HIGH );      // Turn on all pins with internal pullup HIGH
  }

  strcpy(page, "scene");  //This will set the active page to scenes (and we want that)

// setup all the screens on 1st boot:
   boot_screensetup();

  //Initializing 1st setup:
  ini_screens();  //settings.h building up the screens
  presetRange(); // filling the presetnames of active bank (active preset)
  tapSwitch = false; //setting the tabsettings screen to green and okay
  getScenes = true; //first time getting scenes to show on the display's 
}



/*=====================================================    -  LOOP  -    =====================================================*/

void loop() {
  Axe.update();
  timer.update();

  /*===== This looks for the active screen in Setup.h and use settings.h for buttons and screen updates of looper  ===========*/

if (Axe.isTunerEngaged() == false)
  {

  if (strcmp(page, "scene") == 0)
  {
    scenes_settings();
  }

  else if (strcmp(page, "preset") == 0)
  {
    preset_settings();
  }

  else if (strcmp(page, "effect") == 0)
  {
    effect_settings();
  }
  else if (strcmp(page, "looper") == 0)
  {
    looper_settings();
  }
  else if (strcmp(page, "numbers") == 0)
  {
    numbers_settings();
  }
  else if (strcmp(page, "AMP_effect") == 0)
  {
   AMP_effect_settings();
    }
 }
  else 
  {
    onlyTuner();  // this shuts all off just for the tuner...  it works ;)   see Tuner.h
  }
}

/*===================================================================================*/
/*Axelman8*/
