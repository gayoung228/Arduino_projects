int val = 0; //변수 val 선언 0대입

void setup() {
  Serial.begin(9600); //시리얼 통신 시작, 속도 9600
}

void loop() {
  val = analogRead(A0); //변수 val에 아날로그 A0에 입력되는 신호 대입
  Serial.println(val); //시리얼 모니터에 변수 val출력
  delay(100); //0.1초 대기
}

//analogRead(핀번호) -> 설정 핀에 입력되는 아날로그 신호를 읽기 위한 함수
// 핀번호 : 아날로그 신호를 입력받을 핀 설정
// 반환값 : 입력받은 신호를 0~1023값으로 반환
