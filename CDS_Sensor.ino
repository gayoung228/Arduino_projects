int cds = 0;

void setup() {
  Serial.begin(9600); //시리얼 통신 시작(속도 9600)
}

void loop() {
  cds = analogRead(A0); //변수 cds에 아날로그 A0입력되는 신호 대입
  Serial.println(cds); //시리얼 모니터에 변수 cds 출력
  delay(100); //0.1초 대기
}
