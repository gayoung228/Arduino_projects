void setup() {
  pinMode(5, OUTPUT); // 5번핀 출력모드로 설정
  pinMode(6, OUTPUT); // 6번핀 출력모드로 설정
  pinMode(10, OUTPUT); // 10번핀 출력모드로 설정
  pinMode(11, OUTPUT); // 11번핀 출력모드로 설정
}

void loop() {
  analogWrite(5, 0); //5번핀 150(약3V)의 신호를 출력
  analogWrite(6, 150); //6번핀 0(0V)의 신호를 출력
  analogWrite(10, 0); //10번핀 150(약3V)의 신호를 출력
  analogWrite(11, 150); //11번핀 0(0V)의 신호를 출력
  delay(300); //3초 대기
}
