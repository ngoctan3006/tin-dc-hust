#include <stdio.h>

int main() {
    int n, arr[1000], i, soam = 0, soduong = 0;
    double tongam = 0, tongduong = 0;
    scanf("%d", &n);
    if (n <= 0) {
        printf("Error\n");
        return 0;
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < 0) {
            soam++;
            tongam += arr[i];
        } else {
            soduong++;
            tongduong += arr[i];
        }
    }
    if (soam == 0) {
        printf("Mang khong co so am ");
    } else {
        printf("%lf ", tongam / soam);
    }
    if (soduong == 0) {
        printf("Mang khong co so duong");
    } else {
        printf("%lf", tongduong);
    }
    return 0;
}
