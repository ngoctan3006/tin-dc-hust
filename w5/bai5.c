#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    int i, len, count[26] = {0};
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
    for (i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("\n%d", count[i]);
        }
    }
    return 0;
}
