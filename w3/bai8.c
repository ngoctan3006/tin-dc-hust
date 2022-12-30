#include <math.h>
#include <stdio.h>

int main() {
    double x, y, z, f;
    scanf("%lf%lf%lf", &x, &y, &z);
    f = (x + y + z) / (x * x + y * y + 1) - fabs(x - z * cos(y));
    printf("%lf\n", f);
    return 0;
}
