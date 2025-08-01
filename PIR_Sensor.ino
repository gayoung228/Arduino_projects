int val = 0 //정수형 변수 val에 0대입

void setup() {
  pinMode(2, INPUT); //디지털 2번핀을 입력모드로 설정
  pinMode(3, OUTPUT); //디지털 3번핀을 출력모드로 설정
  Serial.begin(9600); //시리얼 통신 시작, 통신속도는 9600
}

void loop() {
  val = digitalRead(2); //변수 val에 디지털 2번핀에 신호 값 대입
  if(val == HIGH){ //만약 val과 HIGH가 같다면
    digitalWrite(3, HIGH); //디지털 3번핀에 HIGH신호 출력
  }
  else{ //같지 않다면
    digitalWrite(3, LOW); //디지털 3번핀에 LOW신호 출력
  }
  Serial.println(val); //시리얼 모니터에 val값 출력
}

//센서가 움직임이 감지되면 아두이노에서 HIGH 신호 입력받을 것이며, 이 신호를 바탕으로 LED가 켜진다.
//움직임이 감지되지 않는다면 아두이노에서는 LOW신호 입력받아 LED 꺼진다. 
