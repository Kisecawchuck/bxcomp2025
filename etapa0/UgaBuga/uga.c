#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            char r = (c + 23) % 26 + 'a';
            putchar(r);
        } else putchar(c);
    }
}
