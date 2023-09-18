#include <iostream>
#include "easy.h"
using namespace std;
int itc_sqrt(int num)
{
    if (num < 0){
        return -1;
    }
    if (num == 0){
        return 0;
    }
    if (num > 0){
        for(long long i = 0; num > i; i++){
            if (num == i*i){
            return i;
        }
    }
    return -1;

}
}

