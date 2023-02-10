#include <math.h>
#include <stdio.h>

int main() {
    double x, s = 0;
    int n, i;
    scanf("%lf%d", &x, &n);
    if (n < 1) {
        printf("Error");
        return 0;
    }
    for (i = 1; i <= n; i++) {
        s += sin(pow(x, i));
    }
    printf("%.4lf", s);
    return 0;
}
