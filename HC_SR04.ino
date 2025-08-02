int trig=2;
int echo=3;

void setup() {
  Serial.begin(9600); //통신속도 9600
  pinMode(trig, OUTPUT); //trig(2)번핀을 출력모드로 설정
  pinMode(echo, INPUT); //echo(3)번핀을 입력모드로 설정
}

void loop() {
  digitalWrite(trig, HIGH); //trig핀에 HIGH신호 출력
  delayMicroseconds(10); //10마이크로초 동안 대기
  digitalWrite(trig, LOW); //trig핀에 LOW(0V)신호 출력
  int distance = pulseIn(echo, HIGH) * 340 / 2 / 10000; //초음파가 발신된 후 수신되기까지의 시간을 측정. 10000으로 나눈 이유는 거리를 cm단위로 변환하려고
  Serial.print(distance); //distance를 시리얼 모니터에 출력
  Serial.println("cm"); //문자열 cm을 시리얼 모니터에 출력
  delay(100); //0.1초 지연
}

//pulseIn(핀번호, 신호) -> 설정 신호를 다시 입력받을 때까지 걸리는 시간 측정
//핀번호 - 함수를 적용할 핀 설정, 신호 - HIGH or LOW
//반환값 : 설정 신호가 입력될 때까지의 시간 반환, 신호가 없을 경우 0 반환

//초음파 센서를 통해 장애물까지의 거리(cm 단위) 를 측정해서 시리얼 모니터에 0.1초마다 한 줄씩 출력
