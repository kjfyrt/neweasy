#include <iostream>
#include "easy.h"
using namespace std;
double itc_pow(int num, int step)
{
    if (step > 0){
        for (int i=1; i<step; i++){
        num = num*num;
        }
        return num;
    }
    else if (step = 0){
        return 1;
    }
    else if(step < 0){
        for (int i = 0; i<step; i--){
        num = num*num;
        }
        return 1/num;
    }
        
        
        
}
