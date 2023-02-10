// Viết chương trình đọc hai chuỗi S và T. Đếm số lần mỗi ký tự xuất hiện trong cả hai chuỗi.
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    int i, j, n, len, count[26] = {0};
    fgets(s, 1000, stdin);
    fgets(t, 1000, stdin);
    strcat(s, t);
    len = strlen(s);
    for (i = 0; i < len; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            count[s[i] - 'a']++;
        }
    }
    for (i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c", i + 'a');
        }
    }
    printf("\n");
    for (i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%d\n", count[i]);
        }
    }
    return 0;
}
