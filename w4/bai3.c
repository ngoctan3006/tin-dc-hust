#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    if (n >= 1000) {
        printf("ERROR\n");
        return 0;
    }
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("%d\n", sum);
    return 0;
}
