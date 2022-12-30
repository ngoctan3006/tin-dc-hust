#include <math.h>
#include <stdio.h>

int main() {
    int n, i, gt = 1, s = -1;
    float x, s1 = 1, s2 = 1, s3 = 1;
    scanf("%d%f", &n, &x);
    for (i = 1; i <= n; i++) {
        s1 += pow(x, i);
    }
    for (i = 1; i <= n; i++) {
        s2 += s * pow(x, i);
        s *= -1;
    }
    for (i = 1; i <= n; i++) {
        gt *= i;
        s3 += pow(x, i) / gt;
    }
    printf("%f\n%f\n%f\n", s1, s2, s3);
    return 0;
}
