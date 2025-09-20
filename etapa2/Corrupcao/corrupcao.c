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
            int max = -1;
            int cnt = 1;
            int a = s[0];
            for (int i = 1; s[i] != '\0'; ++i) {
                if (a != s[i]) ++cnt;
                else cnt = 1;
                max = cnt > max ? cnt : max;
                a = s[i];
            }
            if (max < 5)
                if (t == 0) {
                    printf("Fala, Coruja");
                } else printf("Fala, Coruja!\n");
            else if (max <= 6)
                if (t == 0) {
                    printf("Dua e Simon querem ficar juntos na SJr!!");
                } else printf("Dua e Simon querem ficar juntos na SJr!!\n");
            else if (max <= 10)
                if (t == 0) {
                    printf("O Simon esta feliz com a SJr!");
                } else printf("O Simon esta feliz com a SJr!\n");
            else
                if (t == 0) {
                printf("O Duo esta feliz com a SJr!");
                } else printf("O Duo esta feliz com a SJr!\n");
        }
    }
}
