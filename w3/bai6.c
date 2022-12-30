#include <stdio.h>

int main() {
    float r;
    scanf("%f", &r);
    if (r <= 0) {
        printf("ERROR.\n");
        return 0;
    }
    float PI = 3.14159;
    float M = 2 * PI * r;
    float S = PI * r * r;
    printf("%f\n%f\n", M, S);
    return 0;
}
