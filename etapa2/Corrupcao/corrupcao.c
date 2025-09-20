#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[1000 + 5];
        scanf("%s", s);

        int n = strlen(s);
        if (n < 5) {
            printf("Fala, Coruja!\n");
        } else {
            int max, cnt;
            max = cnt = 1;
            int a = s[0];
            for (int i = 1; i < n; a = s[i], ++i) {
                if (a != s[i]) ++cnt;
                else cnt = 1;
                max = cnt > max ? cnt : max;
            }
            if (max < 5)
                printf("Fala, Coruja!\n");
            else if (max <= 6)
                printf("Duo e Simon querem ficar juntos na SJr!!\n");
            else if (max <= 10)
                printf("O Simon esta feliz com a SJr!\n");
            else
                printf("O Duo esta feliz com a SJr!\n");
        }
    }
}
