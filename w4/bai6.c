#include <math.h>
#include <stdio.h>

int main() {
    int n, i;
    double x, s1 = 1;
    scanf("%d%lf", &n, &x);

    for (i = 1; i <= n; i++) {
        s1 += pow(x, i);
    }
    printf("%lf\n", s1);
    return 0;
}
