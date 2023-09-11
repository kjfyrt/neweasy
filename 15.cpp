#include <iostream>
#include "easy.h"
using namespace std;
double itc_scir(int radius)
{
    double pi = 3.14;
    if (radius>0){
        return radius*pi;
    }
    return -1;
}
