#include "Relogio.h"

Relogio::Relogio()
{
    hora = 0;
    minuto = 0;
    segundo = 0;
}

int Relogio::getHora(){
    return hora;
}

int Relogio::getMinuto(){
    return minuto;
}

int Relogio::getSegundo(){
    return segundo;
}

void Relogio::setHorario(int h, int m, int s){
    hora = h;
    minuto = m;
    segundo = s;
}

void Relogio::avancarHorario(){

    if (segundo != 59){
        segundo++;
    }else{
    segundo = 0;
        if (minuto != 59){
            minuto++;
        }else{
            minuto = 0;
            if (hora!= 24){
                hora++;
            }else{
                hora = 0;
            }
        }
    }
}
