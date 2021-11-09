#include <ESP8266WebServer.h>
#include <WiFiManager.h>
#include <ESP8266WiFi.h>

ESP8266WebServer sv(80);    // khởi tạo đối tượng webserver ở cổng 80
WiFiClient clients;

char ssid[] = ""; // Tên Wifi nhà bạn (Gõ đúng tên, Chữ hoa chữ thường)
char pass[] = "";  // Mật khẩu wifi nhà bạn
String test;

#include "html.h"
#include "config.h"        // hỗ trợ smartconfig

void display_html() {      // gửi nội dung html
  sv.send(200, "text/html", html);
}
void send_tien() {         // xử lý các lệnh điều khiển khi nhận được tín hiệu từ webserver
  Serial.println("tien");  // in dữ liệu ra cổng nối tiếp (ở đây đồng nghĩa với việc truyền qua arduino)
  sv.send(200, "text/html", "ok"); // gửi tín hiệu phản hồi đến các thiết bị truy cập để tránh thiết bị truy cập bị treo do chờ phản hồi
  clients.flush();
}
void send_lui() {
  Serial.println("lui");
  sv.send(200, "text/html", "ok");
  clients.flush();
}
void send_trai() {
  Serial.println("trai");
  sv.send(200, "text/html", "ok");
  clients.flush();
}
void send_phai() {
  Serial.println("phai");
  sv.send(200, "text/html", "ok");
  clients.flush();
  
}
void send_stop() {
  Serial.println("stop");
  sv.send(200, "text/html", "ok");
  clients.flush();
}

void khoi_tao_sv() {  // tạo các lệnh truy cập server
  sv.on("/", display_html);
  sv.on("/wifisave", config_eeprom_);
  sv.on("/wifirst", eep_rst);
  sv.on("/tien", send_tien);
  sv.on("/lui", send_lui);
  sv.on("/trai", send_trai);
  sv.on("/phai", send_phai);
  sv.on("/stop", send_stop);
  sv.begin();   // cho server hoạt động
}
void khoitao() {
  ESP.wdtEnable(30000);
  EEPROM.begin(512);
  // chức năng wifi
  WiFiManager wifiManager;
  wifiManager.setTimeout(180);
  wifiManager.autoConnect("SMART CONFIG");
  Serial.println(WiFi.localIP());
  khoi_tao_sv();
  WiFi.setAutoConnect(true);
  WiFi.setAutoReconnect(true);
  Serial.println("setup_end");
}
