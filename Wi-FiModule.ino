#include ESP8266WiFi.h
#include WiFiClient.h
#include ESP8266WebServer.h
 
 Replace with your network credentials
const char ssid = NashNet;
const char password = 0679871690;
 
ESP8266WebServer server(80);   instantiate server at port 80 (http port)

String page = "";
int LEDPin = 13;
void setup(void){
  page = h1Vazonokh1pa href=LEDOnbuttonONbuttona&nbsp;a href=LEDOffbuttonOFFbuttonap;
   
  delay(1000);
  Serial.begin(115200);
  WiFi.begin(ssid, password); begin WiFi connection
  Serial.println();
 
   Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(.);
  }
  Serial.println();
  Serial.print(Connected to );
  Serial.println(ssid);
  Serial.print(IP address );
  Serial.println(WiFi.localIP());
   
  server.on(, [](){
    server.send(200, texthtml, page);
  });
  server.on(LEDOn, [](){
    server.send(200, texthtml, page);
    Serial.write(1);
    delay(1000);
  });
  server.on(LEDOff, [](){
    server.send(200, texthtml, page);
    Serial.write(0);
  });
  server.begin();
  Serial.println(Web server started!);
}
 
void loop(void){
  server.handleClient();
}
