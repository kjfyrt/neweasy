#include <iostream>
#include "easy.h"
using namespace std;
double itc_pow(int num, int step)
{
    int s = num;
    if (step > 0){
        for (int i=1; i<step; i++){
        num = s*num;
        }
        return num;
    }
    else if (step == 0){
        return 1;
    }
    else if(step < 0){
        for (int i = -1; i>step; i = i - 1){
        num = s*num;
        }
        float d1 = num;
        float res = 1.0/d1;
        return res;
    }



}
