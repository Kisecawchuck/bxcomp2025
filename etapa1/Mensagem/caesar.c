#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int c;
        scanf("%d", &c);

        getchar(); // Existe um '\n' sobrando no final de cada linha;
                   // o getchar() lê e joga fora;
        char s[205];
        fgets(s, 200 + 5, stdin);
        for (int i = 0; s[i] != '\0'; ++i) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                printf("%c", (s[i] - 'a' - c + 26) % 26 + 'a');
            } else if (s[i] >= 'A' && s[i] <= 'Z') {
                printf("%c", (s[i] - 'A' - c + 26) % 26 + 'A');
            } else {
                putchar(s[i]);
            }
        }
    }
}
