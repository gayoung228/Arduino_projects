void setup() {
  pinMode(5, OUTPUT); // 5번핀 출력모드로 설정
  pinMode(6, OUTPUT); // 6번핀 출력모드로 설정
  pinMode(10, OUTPUT); // 10번핀 출력모드로 설정
  pinMode(11, OUTPUT); // 11번핀 출력모드로 설정
}

void loop() {
  analogWrite(5, 150); // 5번핀에 150(약3V)의 신호를 출력
  analogWrite(6, 0); // 6번핀에 0(약0V)의 신호를 출력
  analogWrite(10, 150); // 10번핀에 150(약3V)의 신호를 출력
  analogWrite(11, 0); // 11번핀에 0(약0V)의 신호를 출력
  delay(3000); // 3초간 대기
  analogWrite(6, 200); // 6번핀에 200(약4V)의 신호를 출력
  analogWrite(10, 0); // 10번핀에 0(약0V)의 신호를 출력
  analogWrite(11, 200); // 11번핀에 200(약4V)의 신호를 출력
  delay(3000); //3초간 대기
}
