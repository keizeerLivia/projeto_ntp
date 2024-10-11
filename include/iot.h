#include <WiFi.h>
#include <WiFiUdp.h>
#include <NTPClient.h> //consulta a hora no servidor
#include <TimeLib.h> //formatar a hora


//CONSTANTES
const int fusoHorario = -10800;
const unsigned long atualizaNTP = 60000;


void setup_wifi();
void hora_certa();
unsigned long timeStamp();
void setup_time();
void atualiza_time();
void inicializa_mqtt();
void atualiza_mqtt();