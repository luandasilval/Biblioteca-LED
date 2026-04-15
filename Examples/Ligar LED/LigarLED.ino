//Luanda da Silva Leite
//Ligar LED
//Esse exemplo explica como ligar o LED  a partir da biblioteca LED.h. Ele define o pino, inicia a função no void setup() e atualiza no void loop().

#include <Arduino.h>
#include "LED.h"

Led led1 (35);

void setup()
{
    led1.ligar(); 
}

void loop()
{
    led1.update();
}

