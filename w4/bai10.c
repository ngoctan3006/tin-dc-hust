#include <math.h>
#include <stdio.h>

int main() {
    int n, i;
    double x, s2 = 1;
    scanf("%lf%d", &x, &n);
    if (n < 1 || x < 0) {
        printf("Error\n");
        return 0;
    }
    for (i = 1; i <= n; i++) {
        s2 += pow(x, i) / i;
    }
    printf("%lf\n", s2);
    return 0;
}
