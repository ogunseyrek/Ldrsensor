//Hilmi Ogün SEYREK
//ogunseyrek@gmail.com

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
 
  delay(1000);
  lcd.clear();
}
