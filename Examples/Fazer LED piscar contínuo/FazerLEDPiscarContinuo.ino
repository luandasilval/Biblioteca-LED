//Luanda da Silva Leite
//Piscar contínuo
//Esse exempo explica como fazer o LED piscar 2 vezes por segundo contínuamente. É preciso definir o pino do LED, acionar a funçao piscar() e definir a frequência (no void setup()), e atualizar no void loop ().

#include <Arduino.h>
#include "LED.h"

Led led1 (35);

void setup()
{
    led1.piscar(2.0f); // 2 piscadas por segundo
}

void loop()
{
    led1.update();
}

