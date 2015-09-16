#include <iostream>
#include <cmath>

using namespace std;

double my_sinus(double x, double eps){
    double cur = x, res = 0;
    for (int i=0; fabs(cur) >= eps; ++i){
        res += cur;
        cur *= (-1 * x * x) / (2 * i + 2) / (2 * i + 3);
    }
    return res;
}

int main(){
}
