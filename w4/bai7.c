#include <math.h>
#include <stdio.h>

int main() {
    int n, i, s = -1;
    double x, s2 = 1;
    scanf("%d%lf", &n, &x);

    for (i = 1; i <= n; i++) {
        s2 += s * pow(x, i);
        s *= -1;
    }
    printf("%lf\n", s2);
    return 0;
}
