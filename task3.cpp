#include <cstdio>

using namespace std;

int how_many_zero(int n){
    int zero = 0;

	for (int i = 1; i <= n; i++)
	{
		int i1 = i;
			while (i1 % 5 == 0) {
				zero = zero + 1;
				i1 = i1 / 5;
			}
		}
	return zero;
}

void assert(int n, int ans){
    if (how_many_zero(n) == ans)
        puts("OK");
    else
        printf("FAIL: %d\n", n);
}

int main(){
    assert(1, 0);
    assert(6, 1);
    assert(10, 2);
    assert(25, 6);
    assert(100, 24);
    assert(252, 62);
}
