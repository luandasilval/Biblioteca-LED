//Luanda da Silva Leite
//Ligar LED por tempo determinado
//Esse exemplo explica como ligar o LED  a partir da biblioteca LED.h por tempo determinado. Ele define o pino, inicia a função ligar() e seu parametro (tempo em milissegundos) no void setup(),  e atualiza no void loop().

#include <Arduino.h>
#include "LED.h"

Led led1 (35);

void setup()
{
    led1.ligar(500); 
}

void loop()
{
    led1.update();
}
