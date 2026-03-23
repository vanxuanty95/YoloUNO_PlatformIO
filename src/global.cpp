#include "global.h"
float glob_temperature = 0;
float glob_humidity = 0;

bool led1_state = false;
bool led2_state = false;

String WIFI_SSID="ty_xuan.v ip";
String WIFI_PASS="11111111";
String CORE_IOT_TOKEN = "k40jhamgoeb4gs3lhrfo";
String CORE_IOT_SERVER = "app.coreiot.io";
String CORE_IOT_PORT = "1883";   

String ssid = "ESP32-YOUR NETWORK HERE!!!";
String password = "12345678";
String wifi_ssid = "ty_xuan.v ip";
String wifi_password = "11111111";
boolean isWifiConnected = false;
SemaphoreHandle_t xBinarySemaphoreInternet = xSemaphoreCreateBinary();