void setup() {
  pinMode(5, OUTPUT); // 왼쪽 모터1
  pinMode(6, OUTPUT); // 왼쪽 모터2
  pinMode(10, OUTPUT); // 오른쪽 모터1
  pinMode(11, OUTPUT); // 오른쪽 모터2
  pinMode(2, INPUT); //왼쪽 라인 센서
  pinMode(3, INPUT); //오른쪽 라인 센서
}
int motorL = 150;
int motorR = 150;
int c = 0;

void loop() {
  int lineL = digitalRead(2); //왼쪽 라인 센서
  int lineR = digitalRead(3); //오른쪽 라인 센서
  if(lineR == lineL == 1){
    // 만약 라인 센서가 모두 검정색 위에 있을 경우
    analogWrite(5, c);
    analogWrite(6, motorL);
    analogWrite(10, c);
    analogWrite(11, motorR);
  }
  else if(lineR == 1 && lineL == 0){
    //만약 그게 아니라 오른쪽 라인 센서만 검정색 위에 있을 경우
    analogWrite(5, c); 
    analogWrite(6, motorL);
    analogWrite(10, motorR);
    analogWrite(11, c);
  }
  else if(lineR == 0 && lineL == 1){
    //만약 그게 아니라 왼쪽 라인 센서만 검정색 위에 있을 경우
    analogWrite(5, motorL);
    analogWrite(6, c);
    analogWrite(10, c);
    analogWrite(11, motorR);
  }
  else if(lineR == 0 && lineL == 0){
    //만약 그게 아니라 둘다 흰색 위에 있을 경우
    analogWrite(5, c);
    analogWrite(6, motorL);
    analogWrite(10, motorR);
    analogWrite(11, c);
  }
}
