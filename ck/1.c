#include <math.h>
#include <stdio.h>

int main() {
    double x, y, f;
    scanf("%lf%lf", &x, &y);
    if (x * y < 0) {
        f = fabs(x * sin(y)) / (x * y);
    } else if (x * y == 0) {
        f = asin(x * y) - asin(y * x);
    } else {
        f = 1 / sqrt(x * x + 1) + 1 / sqrt(2 * y * y + 2);
    }
    printf("%f", f);
    return 0;
}
