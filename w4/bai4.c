#include <stdio.h>

int main() {
    int a, b, m;
    scanf("%d%d", &a, &b);
    if (a < 1 || b < 1) {
        printf("ERROR\n");
        return 0;
    }

    m = a * b;
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    printf("%d\n%d\n", a, m / a);
    return 0;
}
