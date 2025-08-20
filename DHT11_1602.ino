#include <LiquidCrystal.h> //LiquidCrystal.h 라이브러리 포함
#include "DHT.h" //DHT.h 라이브러리 포함
DHT dht(8, DHT11); //DHT 설정(DHT11 센서: 데이터핀 = D8)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // LCD 연결 핀 설정

void setup() {
  lcd.begin(16, 2); // LCD 크기 설정
}

void loop() {
  delay(2000); // 2초 대기
  int h = dht.readHumidity(); //변수 h에 습도값 저장
  int t = dht.readTemperature(); //변수 t에 온도값 저장
  lcd.setCursor(0, 0); //lcd 좌표 0, 0부터 습도값 표시
  lcd.print("Humi: ");
  lcd.print(h);
  lcd.print(" %");

  lcd.Cursor(0, 1); //lcd 좌표 0, 1부터 온도값 표시
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print(" C");
}
