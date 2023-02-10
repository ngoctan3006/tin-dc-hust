#include <stdio.h>

int main() {
    int n, arr[1000], i, sum = 0;
    scanf("%d", &n);
    if (n <= 0) {
        printf("Error\n");
        return 0;
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    printf("\n%d\n", sum);
    return 0;
}
