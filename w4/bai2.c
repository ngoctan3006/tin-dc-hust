#include <math.h>
#include <stdio.h>

int main() {
    int n, i, flag = 1;
    scanf("%d", &n);
    int sq = sqrt(n);
    for (i = 2; i <= sq; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (n < 2 || !flag) {
        printf("Khong phai la so nguyen to\n");
    } else {
        printf("La so nguyen to\n");
    }
    return 0;
}
