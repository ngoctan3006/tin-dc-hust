#include <stdio.h>

int main() {
    int n, i, gt = 1;
    scanf("%d", &n);
    if (n < 0 || n >= 8) {
        printf("ERROR\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        gt *= i;
    }
    printf("%d\n", gt);
    return 0;
}
