#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
 
LiquidCrystal_I2C lcd(0x27, 16, 2);




void setup()
{

    Serial.begin(9600);

lcd.begin();
lcd.backlight();
 
}
 
void loop()
{

  int isik = analogRead(A0);
  Serial.println(isik);

  lcd.setCursor(0,0);
lcd.print("ZEYNEP CAGLARER");

  lcd.setCursor(0,1);
lcd.print("ISIK SIDDETI:");

  lcd.setCursor(13,1);
lcd.print(isik);



/*  if(isik > 900){
    digitalWrite(led,LOW);
  }

  if(isik < 850){
    digitalWrite(led,HIGH);
  }*/
  delay(1000);
  lcd.clear();
}
