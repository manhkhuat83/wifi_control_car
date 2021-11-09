//khai báo các chân sử dụng
#define dcAdir 12
#define dcApwm 10
#define dcBdir 13
#define dcBpwm 11
// khai báo thư viện lcd
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 20, 4);

String data;
// định nghĩa chức năng các chân
void pinmode() {
  pinMode(dcAdir, OUTPUT);
  pinMode(dcApwm, OUTPUT);
  pinMode(dcBdir, OUTPUT);
  pinMode(dcBpwm, OUTPUT);
}

void khaibao() {
  Serial.begin(9600);
  Serial.setTimeout(5);

  pinmode();

  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("    Mobile Robot    ");
}
