#include <stdio.h>

int main() {
    float x, y;
    scanf("%f%f", &x, &y);
    float A = x * x + y * y;
    float B = (x + y) * (x + y);
    float C = (x - y) * (x - y);
    printf("%f\n%f\n%f\n", A, B, C);
    return 0;
}
