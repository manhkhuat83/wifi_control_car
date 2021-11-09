int vt_start_blynk_ = 100, blynk_size_;
int vt_size_blynk_ = 303;
String get_str_(int start_, int stop_) {
  String data;
  for (int i = start_; i <= stop_; i++) {
    int value = EEPROM.read(i);
    data += char(value);
  }
  return data;
}
int add_str_(int start_, int stop_, String nd) {
  for (int i = start_; i <= stop_; i++) {
    int stt = i - start_;
    EEPROM.write(i, nd[stt]);
    delay(5);
    EEPROM.commit();
  }
  if (EEPROM.commit()) {
    return 1;
  }
  else {
    return 0;
  }
}
void config_eeprom_() {
  String blynk_auth;
  int size_blynk;
  blynk_auth = sv.arg("tk");
  size_blynk = blynk_auth.length();
  add_str_(vt_start_blynk_, vt_start_blynk_ + size_blynk - 1, blynk_auth);
  EEPROM.write(vt_size_blynk_, size_blynk);
  EEPROM.commit();

  sv.send(200, "text/html", ph_save);
  clients.stop();
  Serial.print("Esp reset:");
  Serial.print("3"); delay(1000);
  Serial.print("2"); delay(1000);
  Serial.println("1"); delay(1000);
  Serial.println("Esp reset now !!!");
  ESP.restart();
}
void eep_rst() {
  int blynk_size = EEPROM.read(303);
  add_str_(vt_start_blynk_, vt_start_blynk_ + blynk_size - 1, "00000000000000000000000000000000");
  sv.send(200, "text/html", ph_rst);
  clients.stop();
  Serial.print("Esp reset:");
  Serial.print("3"); delay(1000);
  Serial.print("2"); delay(1000);
  Serial.println("1"); delay(1000);
  Serial.println("Esp reset now !!!");
  ESP.restart();
}
