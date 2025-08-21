/**
 * DHT11 Sensor Reader
 * This sketch reads temperature and humidity data from the DHT11 sensor and prints the values to the serial port.
 * It also handles potential error states that might occur during reading.
 *
 * Author: Dhruba Saha
 * Version: 2.1.0
 * License: MIT
 */

// Include the DHT11 library for interfacing with the sensor.
#include "DHT.h" //DHT11.h 라이브러리 포함
#define DHTPIN 2 //DHTPIN을 2로 설정
#define DHTTYPE DHT11 //DHTTYPE를 DHT11로 설정 

// Create an instance of the DHT11 class.
// - For Arduino: Connect the sensor to Digital I/O Pin 2.
// - For ESP32: Connect the sensor to pin GPIO2 or P2.
// - For ESP8266: Connect the sensor to GPIO2 or D4.
DHT dht(DHTPIN, DHTTYPE); 

void setup() {
    // Initialize serial communication to allow debugging and data readout.
    // Using a baud rate of 9600 bps.
    Serial.begin(9600); //시리얼 통신을 시작하며, 통신 속도는 9600 
    
    // Uncomment the line below to set a custom delay between sensor readings (in milliseconds).
    // dht11.setDelay(500); // Set this to the desired delay. Default is 500ms.
}

void loop() {
    delay(2000); //2초 대기
    int h = dht.readHumidity(); //변수 h 선언하며 읽은 습도값 대입
    int t = dht.readTemperature(); //변수 t 선언하며 읽은 온도값 대입 

    // Attempt to read the temperature and humidity values from the DHT11 sensor.
    // Check the results of the readings.
    // If the reading is successful, print the temperature and humidity values.
    // If there are errors, print the appropriate error messages.
    //시리얼 프린터에 출력 (이하생략)
    Serial.print("Humidity: "); 
    Serial.print(h);
    Serial.print( %\t); // % 기호와 탭 출력
    Serial.print("Temperature: ");
    Serial.print(t);
    Serial.print( %C); // 섭씨 기호(C) 출력
}
