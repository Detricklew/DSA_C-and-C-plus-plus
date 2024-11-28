#include <stdio.h>


double Taylor(int x, int n) {

    static double p = 1, f = 1;

    if (n == 0){
        return 1;
    } else{
        double r = Taylor(x, n-1);
        p = p * x;
        f = f * n;
        return r + p/f;
    }
}

double FastTaylor(double x, double n) {

    static double s = 1;

    if (n == 0){
        return s;
    }

    s = 1 + x/n*s;

    return FastTaylor(x, n-1);

}

int main() {
    printf("%lf\n%lf\n", Taylor(4,20),FastTaylor(4,20));
    return 0;
}