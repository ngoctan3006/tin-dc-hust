#include <stdio.h>

int main() {
    double r, PI, M, S;
    scanf("%lf", &r);
    if (r <= 0) {
        printf("ERROR.\n");
        return 0;
    }
    PI = 3.14159;
    M = 2 * PI * r;
    S = PI * r * r;
    printf("%lf\n%lf\n", M, S);
    return 0;
}
