#include <cstdio>
#include <cmath>

using namespace std;

const double PI=3.14159265358979;

long double pi(double eps){
    return 3.14;
}

void assert(double eps){
    if (fabs(PI-pi(eps))<=eps)
        puts("OK");
    else
        printf("FAIL: %.9lf\n", eps);
}

int main(){
    assert(0.1);
    assert(0.001);
    assert(0.000001);
    assert(0.0000001);
}
