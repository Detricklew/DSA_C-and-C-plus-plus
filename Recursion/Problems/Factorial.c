#include <stdio.h>


int fact(int n) {
    if (n == 0 || n == 1){
        return 1;
    }

    return fact(n - 1) * n;
}

int main() {
    int r = 3;

    printf("%d\n", fact(r));

    return 0;
}