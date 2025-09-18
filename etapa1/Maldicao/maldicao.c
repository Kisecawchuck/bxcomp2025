#include <stdio.h>
#include <stdbool.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        char s[205];
        scanf("%s", s);

        bool p = true;
        for (int i = 1; s[i] != '\0'; ++i) {
            int a = s[i] - '0';
            int b = s[i - 1] - '0';
            if (a != b && a != (b + 1) % 10 && a != ((b - 1) % 10 + 10) % 10)
                // Módulos são demônios;
                p = false;
        }
        if (p)
            printf("Que bela construcao! O Farao ficara muito feliz!\n");
        else
            printf("Essa parede e uma maldicao! FUJAM PARA AS COLINAS!\n");
    }
}
