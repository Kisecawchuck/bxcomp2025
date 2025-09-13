#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            char r = ((c - 'a' - 10) % 26 + 26) % 26 + 'a'; // Impede módulos negativos e melhora a versão passada;
                                                            // O primeiro módulo não é necessário neste caso,
                                                            // mas seria importante se o descolamento fosse maior do que 26;
            putchar(r);
        } else putchar(c);
    }
}
