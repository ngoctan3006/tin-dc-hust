#include <math.h>
#include <stdio.h>

int main() {
    float a, b, c, d;
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh vo so nghiem\n");
            } else {
                printf("Phuong trinh vo nghiem\n");
            }
        } else {
            printf("%f\n", -c / b);
        }
    } else {
        d = b * b - 4 * a * c;
        if (d < 0) {
            d *= -1;
            printf("%f+%fi\n%f-%fi\n", -b / (2 * a), sqrt(d) / (2 * a), -b / (2 * a), sqrt(d) / (2 * a));
        } else if (d == 0) {
            printf("%f\n", -b / (2 * a));
        } else {
            printf("%f\n%f\n", -b / (2 * a) + sqrt(d) / (2 * a), -b / (2 * a) - sqrt(d) / (2 * a));
        }
    }

    return 0;
}
