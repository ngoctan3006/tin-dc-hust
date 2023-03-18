#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, j, n, len;
    // scanf("%[^\n]", s);
    fgets(s, 1000, stdin);
    len = strlen(s);
    s[len - 1] = '\0';
    len--;
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
