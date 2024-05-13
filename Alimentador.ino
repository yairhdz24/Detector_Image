#include <ESP32Servo.h>
#include <WiFi.h>
#include <WebServer.h>

const char* ssid = "*******";//Nombre de tu red
const char* password = "*******";// Contraseña de tu red

WebServer server(80);
Servo miservo; 
const int servoPin = 13; 

void inicio() {
    String html = "<html>";
    html += "<head> <meta name='viewport' content='width=device-width, initial-scale=1.0, user-scalable=no'> </head>";
    html += "<body style='font-family: Arial, sans-serif; margin: 0; padding: 30px; text-align: center;'>";
    html += "<h1 style='color: #333;'>Alimentador de mascotas</h1>";
    html += "<button onclick='alimentarMascota()' style='background-color: #4CAF50; border: none; color: white; padding: 15px 40px; text-align: center; text-decoration: none; display: inline-block; font-size: 16px; margin: 9px 2px; cursor: pointer; border-radius: 30px;'>Alimentar</button>";
    html += "<script>function alimentarMascota() { var xhr = new XMLHttpRequest(); xhr.open('GET', '/alimentar', true); xhr.send(); }</script>";
    html += "</body>";
    html += "</html>";

    server.sendHeader("Access-Control-Allow-Origin", "*");
    server.sendHeader("Access-Control-Allow-Methods", "GET");
    server.sendHeader("Access-Control-Allow-Headers", "Origin, X-Requested-With, Content-Type, Accept");

    server.send(200, "text/html", html);
}

void alimentar() {
    miservo.write(90); 
    delay(1000); 
    miservo.write(0); 
    server.sendHeader("Access-Control-Allow-Origin", "*");
    server.send(200, "text/html", "Alimentando a la mascota");
}

void setup() {
    Serial.begin(115200);

    miservo.attach(servoPin); 

    //IP estatica segun tu red (ingresa los datos de tu red)
    IPAddress ip(0, 0, 0, 0); //IP para esp32
    IPAddress gateway(0, 0, 0, 0); //Gateway de tu red
    IPAddress subnet(0, 0, 0, 0); //Mascara de subred
    WiFi.config(ip, gateway, subnet);

    WiFi.begin(ssid, password);
    Serial.println("");

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    //Datos que se mostraran en el motor serial
    Serial.println("");
    Serial.println("WiFi conectado a:");
    Serial.println(ssid);
    Serial.println("Dirección IP asignada:");
    Serial.println(WiFi.localIP());

    server.on("/", HTTP_GET, inicio);
    server.on("/alimentar", HTTP_GET, alimentar);

    server.begin();
}

void loop() {
    server.handleClient();
}

