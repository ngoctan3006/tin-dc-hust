#include <stdio.h>

int main() {
    float r;
    scanf("%f", &r);
    float PI = 3.14159;
    float M = 2 * PI * r;
    float S = PI * r * r;
    printf("%f\n%f\n", M, S);
    return 0;
}
