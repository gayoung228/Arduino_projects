#include <LiquidCrystal.h> //LiquidCrystal.h 라이브러리 포함
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //LCD가 연결된 핀 설정
void setup(){
  lcd.begin(16, 2); //LCD의 크기를 설정
  lcd.print("hello, world"); //LCD에 문자 "hello, World!를 출력
}

void loop(){
  lcd.noDisplay(); //화면을 끈다
  delay(500); //0.5초 대기
  lcd.display(); //화면을 킨다
  delay(500); //0.5초 대기
}
