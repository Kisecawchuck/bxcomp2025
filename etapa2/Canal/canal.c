#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        int c;
        char s[100 + 5];
        scanf("%d %s", &c, s);

        bool p = true;
        if (c == 1) p = false;
        for (int i = 2; i <= sqrt(c); ++i) {
            if (c % i == 0) {
                p = false;
                break;
            }
        }
        if (p)
            printf("%s ", s);
    }
    putchar('\n');
}
