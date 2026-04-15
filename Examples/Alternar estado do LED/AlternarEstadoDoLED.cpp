//Luanda da Silva Leite
// Alternar estado do LED
//Esse exemplo explica como alternar o estado do LED. Primeiro, é preciso declarar o núnero do pino e incluir as bibliotecas; depois, no void setup (), é necessario acionar a função alternar ().E por fim, atualizar o LED no void loop (). 

#include <Arduino.h>
#include "LED.h"

Led led1 (35);


void setup()
{
    led1.alternar();
}

void loop()
{
    led1.update();
}