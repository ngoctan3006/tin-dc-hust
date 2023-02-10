#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, j, n, len;
    scanf("%[^\n]", s);
    len = strlen(s);
    scanf("%d", &n);
    if (n <= 0) {
        printf("Error\n");
        return 0;
    }
    if (n <= len) {
        s[n] = '\0';
    }
    printf("%s\n", s);
    return 0;
}
