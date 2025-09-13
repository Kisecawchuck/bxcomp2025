#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            char r = ((c - 'a' - 10) % 26 + 26) % 26 + 'a';
            putchar(r);
        } else putchar(c);
    }
}
