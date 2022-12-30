#include <math.h>
#include <stdio.h>

int main() {
    float x, y, f = 0;
    int i, j;
    scanf("%f%f", &x, &y);
    for (i = 0; i <= 6; i++) {
        f += pow(x, i) * pow(y, 6 - i);
    }
    printf("%f\n", f);
    return 0;
}
