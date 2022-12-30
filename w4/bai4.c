#include <stdio.h>

int main() {
    int a, b, m;
    do {
        scanf("%d", &a);
    } while (a <= 0);
    do {
        scanf("%d", &b);
    } while (b <= 0);

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
