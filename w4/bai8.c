#include <math.h>
#include <stdio.h>

int main() {
    int n, i, gt = 1;
    double x, s3 = 1;
    scanf("%d%lf", &n, &x);

    for (i = 1; i <= n; i++) {
        gt *= i;
        s3 += pow(x, i) / gt;
    }
    printf("%lf\n", s3);
    return 0;
}
