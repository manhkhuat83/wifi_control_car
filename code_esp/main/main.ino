#include"khoi_tao.h"
void setup() {
  Serial.begin(9600);   // mở cổng nối tiếp để truyền dữ liệu sang arduino
  Serial.setTimeout(10);
  Serial.println("setup");
  khoitao();
}
long timer;
void loop() {
  sv.handleClient();
  if(millis()-timer>2000){   // mỗi 2s gửi IP 1 lần qua arduino
    Serial.print("ip:");
    Serial.print(WiFi.localIP());
    Serial.println(" ip_end");
    timer=millis();
  }
}
