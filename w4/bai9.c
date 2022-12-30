#include <math.h>
#include <stdio.h>

int main() {
    int n, i;
    double x, s1 = 0;
    scanf("%lf%d", &x, &n);
    if (n < 1 || x < 0) {
        printf("Error\n");
        return 0;
    }
    for (i = 1; i <= n; i++) {
        s1 += sqrt(x + s1);
    }
    printf("%lf\n", s1);
    return 0;
}
