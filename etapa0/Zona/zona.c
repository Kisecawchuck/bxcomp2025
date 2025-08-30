#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Pos;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[7][11];
        for (int i = 0; i < 7; ++i)
            scanf("%s", s[i]);

        Pos rex, cor;
        for (int i = 0; i < 7; ++i) {
            for (int j = 0; j < 10; ++j) {
                if (s[i][j] == 'C') {
                    cor.x = i + 1;
                    cor.y = j + 1;
                } else if (s[i][j] == 'T') {
                    rex.x = i + 1;
                    rex.y = j + 1;
                }
            }
        }
        int disx = abs(rex.x - cor.x);
        int disy = abs(rex.y - cor.y);
        if (disx <= 2 && disy <= 2)
            printf("Xi, ele me notou, preciso fugir antes que eu vire KFC de dinossauro!\n");
        else
            printf("Nao fui notada ainda hehehe\n");
    }
}
