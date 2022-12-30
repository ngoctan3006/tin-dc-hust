#include <stdio.h>

int main() {
    int n, sum = 0;
    do {
        scanf("%d", &n);
    } while (n >= 1000 || n < 0);
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("%d\n", sum);
    return 0;
}
