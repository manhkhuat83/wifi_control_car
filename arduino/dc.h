// các hàm điều khiển động cơ
void motor1(int nl) {//+ tien
  if (nl >= 250) {// giới hiện giá trị nhập vào do hàm analog chỉ xuất ra 0-255
    nl = 250;
  }
  if (nl <= -250) {
    nl = -250;
  }
  if (nl >= 0) {  // điều khiển chiều động cơ theo dấu của biến đầu vào
    digitalWrite(dcAdir, 0);
    analogWrite(dcApwm, nl);
  }
  else {
    digitalWrite(dcAdir, 1);
    analogWrite(dcApwm, abs(nl));
  }
}
void motor2(int nl) {//+ tien
  if (nl >= 250) {
    nl = 250;
  }
  if (nl <= -250) {
    nl = -250;
  }
  if (nl >= 0) {
    digitalWrite(dcBdir, 1);
    analogWrite(dcBpwm, nl);
  }
  else {
    digitalWrite(dcBdir, 0);
    analogWrite(dcBpwm, abs(nl));
  }
}
// từ hai hàm trên tạo các chuyển động của robot
void tien(int nl) { 
  motor1(nl);
  motor2(nl);
}
void lui(int nl) {
  motor1(-abs(nl));
  motor2(-abs(nl));
}
void xp(int nl) {
  motor1(-abs(nl));
  motor2(abs(nl));
}
void xt(int nl) {
  motor1(abs(nl));
  motor2(-abs(nl));
}
