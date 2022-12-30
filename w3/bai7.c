#include <stdio.h>

int main() {
    double X, Y, A, B, C;
    scanf("%lf%lf", &X, &Y);
    A = X * X + Y * Y;
    B = (X + Y) * (X + Y);
    C = (X - Y) * (X - Y);
    printf("%lf\n%lf\n%lf\n", A, B, C);
    return 0;
}
