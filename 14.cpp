#include <iostream>
#include "easy.h"
#include <cmath>
using namespace std;
int itc_str(int a, int b, int c)
{
    int p = (a+b+c)/2;
    if (a > 0 and b > 0 and c > 0){
        return sqrt(p*(p-a)*(p-b)*(p-c));
    }
    return -1;
}
