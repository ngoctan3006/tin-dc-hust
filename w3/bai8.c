#include <math.h>
#include <stdio.h>

int main() {
    float x, y, z, f;
    scanf("%f%f%f", &x, &y, &z);
    f = (x + y + z) / (x * x + y * y + 1) - fabs(x - z * cos(y));
    printf("%f\n", f);
    return 0;
}
