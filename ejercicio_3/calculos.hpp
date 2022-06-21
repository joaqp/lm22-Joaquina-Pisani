#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include <ctime>

using namespace std;

typedef enum {
    ACUMULAR,
    PROMEDIAR
} _state;

uint16_t sgn[64] = {
#include "../ejercio_2/sgn.h"
};


class calculos {
public:
explicit calculos(){}
~calculos(){}

void init () {
    estado=ACUMULAR;
    counter=0;
    acum=0;
    //N=rand()%(63 + 1);
    N=2;
}

void fms_calculadora(){
switch(estado){
    case ACUMULAR:
      acum=acum+sgn[counter];
      counter++;
      if(counter==N)
      {
        counter=0;
          estado=PROMEDIAR;
      }else
      
    break;
    case PROMEDIAR:
    avg=acum/N;
    cout<<avg<<endl;
    acum=0;
    counter=0;
    estado=ACUMULAR;
    break;
    
}
}

private:
uint32_t N;
uint32_t counter;
uint32_t acum;
uint32_t avg;
_state estado;

};