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

void assert(double x , double eps)
{
	if (fabs(sin(x) - my_sinus(x, eps)) <= eps)
		cout << "OK" << endl;
	else
		cout << "FAIL: " << x << " " << eps << endl;
}

int main(){
    assert(3.14159265358979, 0.1);
	assert(1.57079632679, 0.001);
	assert(0.523598775598, 0.000001);
	assert(3.14159265358979, 0.0000001);
	assert(2, 0.0002);
	assert(-1, 0.000001);
	assert(4.2, 0.00042);
}
