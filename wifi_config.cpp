#include "wifi_config.h"

const char* ssid = "Redmi Note 13 Pro";         // SSID của mạng WiFi
const char* password = "12341234"; // Mật khẩu WiFi

void setupWiFi() {
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("\nWiFi connected!");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}