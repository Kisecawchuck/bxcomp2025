#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);

        int *S = malloc(sizeof(int) * n);
        for (int i = 0; i < n; ++i) {
            int cnt = 0;
            for (int j = 0; j < i + 1; ++j) {
                int x;
                scanf("%d", &x);
                cnt += x;
            }
            S[i] = cnt;
        }

        int a = n / 2;
        int b = 3 * n;
        bool p = true;
        for (int i = 0; i < n; ++i) {
            int d = abs(S[i] - S[i - 1]);
            if (d < a || d > b)
                p = false;
        }
        if (p)
            printf("Perfeitamente equilibrado, como tudo deve ser.\n");
        else
            printf("AAAAAAH NAO A PIRAMIDE VAI DESABAR!!!!\n");
    }
}
