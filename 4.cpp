#include <iostream>
#include "easy.h"
using namespace std;
double itc_fabs(double num){
    if (num >= 0){
        cout << num << endl;
    }
    else {
        cout << -num << endl;
    }
    return num;
}
