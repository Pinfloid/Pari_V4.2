#pragma once

/*=======================================================================================================================*/

uint8_t check[8] = {0x0, 0x1 ,0x3, 0x16, 0x1c, 0x8, 0x0};   //this is the checkmark when in tune

void onlyTuner()
{
  for ( currentSwitch = 0; currentSwitch < 18; currentSwitch++ ) {
    if ((digitalRead(switches[currentSwitch]) != switchState[currentSwitch] ) && (switchState[currentSwitch] == HIGH)) {

       switch ( currentSwitch ) {
          case 17:
          Axe.toggleTuner();
          Serial.println("Switch-18 ");
          delay(200);
          }
          break;
       }
    }
}

void onTunerData(const char *note, const byte string, const byte fineTune) {
  lcd.setCursor(0,0);
  lcd.print("       ");
  lcd.setCursor(7,0);lcd.print(note);
  lcd.setCursor(9,0);lcd.print(string);
  lcd.print("       ");
  
  lcd.createChar(5, check);
  lcd.setCursor(0, 1); //in the display's second row. There are many possible designs. I chose this one, because it fits the display perfectly for a smooth movement.


  //1.: The value is lower than what the Axe actually sends. In this case just show the tuning to be too low.
  if (fineTune <= 15)                        {    lcd.write(255);lcd.print("      ||       ");}
  if ((fineTune >= 16) && (fineTune <= 23))  {    lcd.write(255);lcd.print("      ||       ");}
  if ((fineTune >= 24) && (fineTune <= 28))  {    lcd.print(" ");lcd.write(255);lcd.print("     ||       ");}
  if ((fineTune >= 29) && (fineTune <= 34))  {    lcd.print("  ");lcd.write(255);lcd.print("    ||       ");}
  if ((fineTune >= 35) && (fineTune <= 39))  {    lcd.print("   ");lcd.write(255);lcd.print("   ||       ");}
  if ((fineTune >= 40) && (fineTune <= 45))  {    lcd.print("    ");lcd.write(255);lcd.print("  ||       ");}
  if ((fineTune >= 46) && (fineTune <= 50))  {    lcd.print("     ");lcd.write(255);lcd.print(" ||       ");}
  if ((fineTune >= 51) && (fineTune <= 56))  {    lcd.print("      ");lcd.write(255);lcd.print("||       ");}
  if ((fineTune >= 57) && (fineTune <= 61))  {    lcd.print("       ");lcd.write(219);lcd.print("|       ");}
  if ((fineTune >= 62) && (fineTune <= 64))  {    lcd.print("    ||  ");lcd.write(5);lcd.print("  ||    ");}
  if ((fineTune >= 65) && (fineTune <= 70))  {    lcd.print("       |");lcd.write(219);lcd.print("       ");}
  if ((fineTune >= 71) && (fineTune <= 75))  {    lcd.print("       ||");lcd.write(255);lcd.print("      ");}
  if ((fineTune >= 76) && (fineTune <= 81))  {    lcd.print("       || ");lcd.write(255);lcd.print("     ");}
  if ((fineTune >= 82) && (fineTune <= 86))  {    lcd.print("       ||  ");lcd.write(255);lcd.print("    ");}
  if ((fineTune >= 87) && (fineTune <= 92))  {    lcd.print("       ||   ");lcd.write(255);lcd.print("   ");}
  if ((fineTune >= 93) && (fineTune <= 98))  {    lcd.print("       ||    ");lcd.write(255);lcd.print("  ");}
  if ((fineTune >= 99) && (fineTune <= 103)) {    lcd.print("       ||     ");lcd.write(255);lcd.print(" ");}
  if ((fineTune >= 104) && (fineTune <= 110)){    lcd.print("       ||      ");lcd.write(255);}
  if (fineTune >= 101)                       {    lcd.print("       ||      ");lcd.write(255);}
}


void onTunerStatus(bool engaged) {
  if (Axe.isTunerEngaged() == false)
  {
    getScenes = true;
    Axe.fetchEffects(true);
    ini_scenes();
    lcd.setCursor(0, 0);
    lcd.print("- Tuner is OFF -");
    lcd.setCursor(0, 1);
    lcd.print("Select whatever");
    Axe.refresh();
    delay(500);
    strcpy(page, "scene");
  }
}

/*===================================================================================*/
/*Axelman8*/
