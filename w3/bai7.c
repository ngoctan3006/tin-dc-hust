#include <stdio.h>

int main() {
    float x, y, z;
    scanf("%f%f%f", &x, &y, &z);
    float sum = x + y + z;
    float aver = sum / 3;
    printf("%f\n%f\n", sum, aver);
    return 0;
}
