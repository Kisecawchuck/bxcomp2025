#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if (x <= 0 || x > 1020)
        printf("A Piramide de Quefren nao existe...\n");
    else {
        int cnt = 0;
        for (int i = 1; i <= x; ++i)
            cnt += i * i;
        printf("A Piramide Quefren tem: %d blocos,\n", cnt);
    }
    if (y <= 0 || y > 1020)
        printf("a Piramide de Miquerinos nao existe...\n");
    else {
        int cnt = 0;
        for (int i = 1; i <= y; ++i)
            cnt += i * i;
        printf("a Piramide Miquerinos tem: %d blocos\n", cnt);
    }
    if (z <= 0 || z > 1020)
        printf("e a Piramide de Queops nao existe...\n");
    else {
        int cnt = 0;
        for (int i = 1; i <= z; ++i)
            cnt += i * i;
        printf("e a Piramide Queops tem: %d blocos,\n", cnt);
    }
    printf("Agora devolve nossa corujinha, seu comedia.\n");
}
