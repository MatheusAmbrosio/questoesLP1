#include "Televisao.h"

Televisao::Televisao(){

}

int Televisao::getCanal(){
    return canal;
}

int Televisao::getVolume(){
    return volume;
}

void Televisao::aumentarVolume(){
    if (volume < 100)
        volume++;
}

void Televisao::diminuirVolume(){
    if (volume > 0)
        volume--;
}

void Televisao::aumentarCanal(){
    if(canal == 999){
        canal = 1;
    }else{
        canal++;
    }
}

void Televisao::diminuirCanal(){
    if(canal == 0){
        canal = 999;
    }else{
        canal--;
    }
}

void Televisao::setCanal(int c){
    canal = c;
}

void Televisao::setVolume(int v){
    volume = v;
}
