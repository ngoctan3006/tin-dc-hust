#include <conio.h>
#include <stdio.h>

int main() {
    int a, b, c, tong;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap c: ");
    scanf("%d", &c);
    tong = a + b + c;
    printf("%d\n", tong);
    printf("%f", 1.0 * tong / 3);
    getch();
    return 0;
}
