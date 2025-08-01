void setup() {
  pinMode(8, OUTPUT); //8번핀을 출력모드로 설정

}

void loop() { //1초 동안 led가 켜졌다가 1초 동안 꺼지고를 무한반복
  digitalWrite(8, HIGH); //8번핀에 HIGH 신호 출력 -> led 켜짐
  delay(1000); //1초간 대기
  digitalWrite(8, LOW); //8번핀에 LOW 신호 출력 -> led 꺼
  delay(1000); //1초간 대기
}

//전압 차이가 만들어지느냐가 핵심
HIGH	→ 8번 핀 = 5V,	GND = 0V ->	전류 흐름 O → LED 켜짐 //GND와 5V 전압차
LOW	→ 8번 핀 = 0V,	GND = 0V ->	전압 차이 없음 → LED 꺼짐 //GND와 전압차 없음
