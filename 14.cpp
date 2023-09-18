#include <iostream>
#include "easy.h"
using namespace std;
int itc_str(int a, int b, int c)
{
    if (a > 0 and b > 0 and c > 0 and a + b > c and a + c > b and b + c > a){
            float p = (a+b+c)/2.0;
            float sq = itc_sqrt(p*(p-a)*(p-b)*(p-c));
            return sq;

    }
    return -1;
}
