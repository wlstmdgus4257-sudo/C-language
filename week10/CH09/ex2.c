#include <stdio.h>

int main() {
    int cnt[26] = {0};
    int i;
    char ch;

    while (1) {
        scanf(" %c", &ch);

        if (ch < 'A' || ch > 'Z') {
            break;
        }

        cnt[ch - 'A']++;
    }

    for (i = 0; i < 26; i++) {
        if (cnt[i] > 0) {
            printf("%c : %d\n", 'A' + i, cnt[i]);
        }
    }

    return 0;
}