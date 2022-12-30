#include <stdio.h>

int main() {
    float X, Y, A, B, C;
    scanf("%f%f", &X, &Y);
    A = X * X + Y * Y;
    B = (X + Y) * (X + Y);
    C = (X - Y) * (X - Y);
    printf("%f\n%f\n%f\n", A, B, C);
    return 0;
}
