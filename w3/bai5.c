#include <stdio.h>

int main() {
    float x, y, z, sum, aver;
    scanf("%f%f%f", &x, &y, &z);
    sum = x + y + z;
    aver = sum / 3;
    printf("%f\n%f\n", sum, aver);
    return 0;
}
