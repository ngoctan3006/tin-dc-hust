#include <stdio.h>

int main() {
    int n, i, gt = 1;
    do {
        scanf("%d", &n);
    } while (n >= 8);

    for (i = 1; i <= n; i++) {
        gt *= i;
    }
    printf("%d\n", gt);
    return 0;
}
