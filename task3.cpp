#include <cstdio>

using namespace std;

int how_many_zero(int n){
    return 0;
}

void assert(int n, int ans){
    if (how_many_zero(n) == ans)
        puts("OK");
    else
        printf("FAIL: %d\n", n);
}

int main(){
    int n;
    scanf("%d", &n);
    assert(1, 0);
    assert(6, 1);
    assert(10, 2);
    assert(25, 6);
    assert(100, 24);
    assert(252, 62);
}
