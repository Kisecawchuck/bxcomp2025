#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        char s[200];
        scanf("%s", s);

        bool p = true;
        for (int i = 1, n = strlen(s); i < n; ++i) {
            int a = s[i] - '0';
            int b = s[i - 1] - '0';
            if (a != b && a != (b + 1) % 10 && a != ((b - 1) % 10 + 10) % 10)
                p = false;
        }
        if (p)
            printf("QUE BELA CONSTRUCAO\n");
        else
            printf("MALDICAO\n");
    }
}
