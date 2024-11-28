#include <stdio.h>
#include <math.h>


int fib(int n) {
    if (n <= 1 ){
        return n == 1 ? 1 : 0;
    }

    return fib(n-2) + fib(n-1);
}


int fastFib(int n) {

    return (pow(1 + sqrt(5),n) - pow(1 - sqrt(5),n)) / (pow(2,n) * sqrt(5));
}

int main() {
    printf("%d\n%d\n", fib(8), fastFib(8));
    return 0;
}