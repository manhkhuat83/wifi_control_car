#include <Arduino_FreeRTOS.h>  // khai báo thư viện phần này cần cài thêm thư viện trong phần sketch
#include"khaibao.h"
#include"dc.h"

void Task_btn( void *pvParameters );
void Task_serial_control( void *pvParameters );

void setup() {
  // put your setup code here, to run once:
  khaibao();
  xTaskCreate(Task_serial_control, "Serial", 128, NULL, 3, NULL); // tạo luồng bằng freertos
}

void loop() {
  // put your main code here, to run repeatedly:

}
void Task_serial_control(void *pvParameters)  // Hàm phục vụ
{
  (void) pvParameters;
  while (1) {
    String data;
    if (Serial.available()) {   // kiểm tra dữ liệu trên cổng nối tiếp
      data = Serial.readString();  // đọc chuỗi và lưu về biến data
      //Serial.println(data);
    }
    if (data.indexOf("ip") != -1) {  // tìm kiếm dữ liệu về IP, để hiện lên lcd
      int a = data.indexOf("ip");
      int b = data.indexOf("ip_end");
      String ip = data.substring(a+3, b);
      lcd.setCursor(0, 1);
      lcd.print("IP:");
      lcd.print(ip);
    }
    if (data.indexOf("tien") != -1) {  // tìm kiếm dữ liệu điều khiển
      tien(100);  //  có thể thay đổi tốc độ bằng cách thay đổi giá trị trong ().
    }
    if (data.indexOf("lui") != -1) {
      lui(100);
    }
    if (data.indexOf("trai") != -1) {
      xt(100);
    }
    if (data.indexOf("phai") != -1) {
      xp(100);
    }
    if (data.indexOf("stop") != -1) {
      motor1(0);
      motor2(0);
    }
  }
}
