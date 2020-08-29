
#include<ESP8266WiFi.h>

# define ssid "lowpan"
# define password "sam@123@123"

void setup ()
{
  Serial.begin(9600);
  Serial.print("Starting Wi-fi");
  WiFi.begin(ssid,password);
  delay(50);
  Serial.print("Connecting");

  while(WiFi.status() != WL_CONNECTED){
    delay(100);
    Serial.print(".");
    }

  Serial.print(WiFi.localIP());
  delay(10);
}
void loop()
{
}

  
