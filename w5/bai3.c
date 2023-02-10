#include <stdio.h>

int main() {
    int n, arr[1000], i, j;
    scanf("%d", &n);
    if (n <= 0) {
        printf("Error\n");
        return 0;
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++) {
        int key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
