#include <stdio.h>
#include <stdint.h>
#include <iostream>

using namespace std;

uint16_t sgn[] = {
#include "sgn.h"
};

int main()
{

for(int i=0; i<63; i++)
cout<<sgn[i]<<endl;

}