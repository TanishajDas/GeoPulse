#define BLYNK_TEMPLATE_ID "TMPL34_qUuqLq"
#define BLYNK_TEMPLATE_NAME "gps"
#define BLYNK_AUTH_TOKEN "zbzyqkhxYTdiZUfgZwn3adVyxqLPvL7K"  // Replace with your own

// WiFi credentials
char ssid[] = "vivo Y21";     // Replace with your WiFi SSID
char pass[] = "29022004";     // Replace with your WiFi password

// GPS module pins
#define RXPin 16
#define TXPin 17

// Libraries
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <TinyGPS++.h>
#include <HardwareSerial.h>

// GPS and Blynk setup
HardwareSerial mySerial(1);
TinyGPSPlus gps;
BlynkTimer timer;

// Send GPS data to Blynk
void sendGpsData() {
  if (gps.location.isValid()) {
    float latitude = gps.location.lat();
    float longitude = gps.location.lng();
    float course = gps.course.deg();

    // Serial monitor output
    Serial.print("Latitude: "); Serial.println(latitude, 6);
    Serial.print("Longitude: "); Serial.println(longitude, 6);
    Serial.print("Course: "); Serial.println(course, 2);

    // Send to Blynk virtual pins
    Blynk.virtualWrite(V1, latitude);
    Blynk.virtualWrite(V2, longitude);
    Blynk.virtualWrite(V3, course);
  } else {
    Serial.println("GPS location not valid");
  }
}

void setup() {
  Serial.begin(115200);                 // Start serial monitor
  mySerial.begin(9600, SERIAL_8N1, RXPin, TXPin);  // GPS serial

  // Connect to WiFi
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi connected");

  // Connect to Blynk
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  // Schedule GPS data every 10 seconds
  timer.setInterval(10000L, sendGpsData);
}

void loop() {
  Blynk.run();
  timer.run();

  // Read GPS input
  while (mySerial.available() > 0) {
    gps.encode(mySerial.read());
  }
}
