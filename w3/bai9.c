#include <math.h>
#include <stdio.h>

int main() {
    double x, y, f = 0;
    int i;
    scanf("%lf%lf", &x, &y);
    for (i = 0; i <= 6; i++) {
        f += pow(x, i) * pow(y, 6 - i);
    }
    printf("%lf\n", f);
    return 0;
}
