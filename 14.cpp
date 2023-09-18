#include <iostream>
#include "jhg.h"
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
int itc_str(int a, int b, int c)
{
    if (a > 0 and b > 0 and c > 0 and a + b > c and a + c > b and b + c > a){
            float p = (a+b+c)/2.0;
            float sq = itc_sqrt(p*(p-a)*(p-b)*(p-c));
            return sq;

    }
    return -1;
}
