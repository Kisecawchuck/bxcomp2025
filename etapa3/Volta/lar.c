#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    while(n--) {
        bool p = true;
        int esq, dir;
        esq = dir = 0;
        for (int i = 0; i < 6; i++) {
            int x;
            for (int i = 1; i <= 3; i++) {
                scanf("%d", &x);
                if (x == 3 && i != 3) p = false;
                else esq += x;
            }
            for (int i = 4; i <= 6; i++) {
                scanf("%d", &x);
                if (x == 3 && i != 4) p = false;
                else dir += x;
            }
        }
        if (!p)
            printf("RAPIDO, RAPIDO!! TROQUEM DE LUGAR OU FICAREMOS PRESOS PARA SEMPRE NESSA DIMENSAO!!!\n");
        else if (esq == dir)
            printf("ESTAMOS PRONTOS CAPITAO, DECOLAR IMEDIATAMENTE!\n");
        else if (esq < dir && esq >= 0.8 * dir)
            printf("ESTAMOS PRONTOS CAPITAO, DECOLAR IMEDIATAMENTE!\n");
        else if (esq > dir && 0.8 * esq <= dir)
            printf("ESTAMOS PRONTOS CAPITAO, DECOLAR IMEDIATAMENTE!\n");
        else
            printf("RAPIDO, RAPIDO!! TROQUEM DE LUGAR OU FICAREMOS PRESOS PARA SEMPRE NESSA DIMENSAO!!!\n");
    }
}
