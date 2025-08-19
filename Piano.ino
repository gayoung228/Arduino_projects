viod setup() {
  pinMode(5, OUTPUT); //디지털 5번핀을 출력모드로 설정
  pinMode(6, OUTPUT); //디지털 6번핀을 출력모드로 설정
  pinMode(7, OUTPUT); //디지털 7번핀을 출력모드로 설정
  pinMode(8, OUTPUT); //디지털 8번핀을 출력모드로 설정
  pinMode(9, OUTPUT); //디지털 9번핀을 출력모드로 설정
  pinMode(10, OUTPUT); //디지털 10번핀을 출력모드로 설정
  pinMode(11, OUTPUT); //디지털 11번핀을 출력모드로 설정
  pinMode(12, OUTPUT); //디지털 12번핀을 출력모드로 설정
  pinMode(13, OUTPUT); //디지털 13번핀을 출력모드로 설정
}

void loop(){
  if(difgitalRead(13) == HIGH){ //만약 13번핀에 HIGH신호가 입력되면
    tone(5, 130.8); //5번핀에 주파수 신호 130.8을 출력
  ]
  else if(difgitalRead(12) == HIGH){ //그게 아니라 12번에 HIGH신호가 입력되면 
    tone(5, 155.6); //5번핀에 주파수 신호 155.6 출력
  }
  else if(difgitalRead(11) == HIGH){ // ...
    tone(5, 164.8);
  }
  else if(difgitalRead(10) == HIGH){
    tone(5, 174.6);
  }
  else if(difgitalRead(9) == HIGH){
    tone(5, 196.0);
  }
  else if(difgitalRead(8) == HIGH){
    tone(5, 220.0);
  }
  else if(difgitalRead(7) == HIGH){
    tone(5, 246.9);
  }
  else if(difgitalRead(6) == HIGH){
    tone(5, 261.6);
  }
  else{
    noTone(5);
  }
}
