#include <deprecated.h>
#include <MFRC522.h>
#include <MFRC522Extended.h>
#include <require_cpp11.h>
#include <LiquidCrystal.h>

// LiquidCrystal(RS, E, D4, D5, D6, D7)
// RS, E, D4, D5, D6, D7 are the LCD pins.
LiquidCrystal LCD(2, 3, 4, 5, 6, 7);
int LCD_BACKLIGHT_PIN = 8; // pin for LCD backlight

void setup()
{
    analogWrite(LCD_BACKLIGHT_PIN, 100);
    Serial.begin(9600);
    LCD.begin(16, 2);
}

void loop()
{
    LCD.setCursor(0, 0);
    LCD.print("This is working");
    LCD.setCursor(0, 1);
    LCD.print("This is working");
    Serial.println();
    delay(100);
    LCD.clear();
}
