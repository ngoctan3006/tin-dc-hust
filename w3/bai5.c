#include <stdio.h>

int main() {
    double x, y, z, sum, aver;
    scanf("%lf%lf%lf", &x, &y, &z);
    sum = x + y + z;
    aver = sum / 3;
    printf("%lf\n%lf\n", sum, aver);
    return 0;
}
