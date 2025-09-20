#include <stdio.h>
#include <string.h>

int main() {
    int c;
    scanf("%d", &c);

    while (c--) {
        int max = -1;
        int cnt = 1;

        int m[3][3];
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                scanf("%d", &m[i][j]);

                if (m[i][j] > max) {
                    cnt = 1;
                    max = m[i][j];
                } else if (m[i][j] == max) ++cnt;
            }
        }
        char s[1024] = "Os explosivos estao nas coordenadas ";
        int idx = 1;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                char buff[10];
                if (m[i][j] == max) {
                    if (idx == cnt) {
                        sprintf(buff, "%dx%d", i, j);
                    } else {
                        sprintf(buff, "%dx%d e ", i, j);
                    }
                    strcat(s, buff);
                    ++idx;
                }
            }
        }
        printf("%s\n", s);
    }
}
