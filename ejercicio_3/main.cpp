#include <iostream>
#include "calculos.hpp"

using namespace std;

main(){

calculos maquinita;
maquinita.init();
while (1)
{
maquinita.fms_calculadora();
}

return 0;

}