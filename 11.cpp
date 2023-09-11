#include <iostream>
#include "easy.h"
using namespace std;
int itc_sqrt(int num)
{
    for(int i = 0; num > i; i++){
        if (num == i*i){
            return i;
        }
    }
    return -1;
}
