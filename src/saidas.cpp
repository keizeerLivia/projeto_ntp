#include <Arduino.h>
#include "saidas.h"
#define LedBuiltInPin 2
#define pinLed 25

bool LedBuiltInState = LOW;
bool coentro = LOW;

void inicializa_saidas()
{
    pinMode(LedBuiltInPin, OUTPUT);
    pinMode(pinLed, OUTPUT);
}

void atualiza_saidas()
{
    digitalWrite(LedBuiltInPin, LedBuiltInState);
    digitalWrite(pinLed, coentro);
}