int a = 30; //변수 a만들고 30대입

void setup(){ //시리얼 통신 시작, 통신 속도는 9600
  Serial.begin(9600); // 통신 속도는 300~115200, 보통 9600으로 설정
}

void loop(){
  Serial.println(a); //시리얼 모니터에 a 출력 후 줄바꿈
  Serial.println("Hello, World"); //시리얼 모니터에 "Hello, World" 출력 후 줄바꿈
  delay(1000); //1초간 대기 (1000=1초, 밀리초 단위)
}
