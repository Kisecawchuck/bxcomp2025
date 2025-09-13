#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);

        int **mat = (int **) malloc(sizeof(int *) * n);
        for (int i = 0; i < n; ++i)
            mat[i] = (int *) malloc(sizeof(int) * n);

        int cnt = n * n;
        int esq, cima, dir, baixo;
        esq = cima = 0;
        dir = baixo = n - 1;

        while (baixo >= cima && esq <= dir) {
            for (int i = dir; i >= esq; --i) {
                mat[baixo][i] = cnt;
                --cnt;
            }
            baixo--;
            for (int i = baixo; i >= cima; --i) {
                mat[i][esq] = cnt;
                --cnt;
            }
            esq++;
            for (int i = esq; i <= dir; ++i) {
                mat[cima][i] = cnt;
                --cnt;
            }
            cima++;
            for (int i = cima; i <= baixo; ++i) {
                mat[i][dir] = cnt;
                --cnt;
            }
            dir--;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j)
                printf("%d ", mat[i][j]);
            putchar('\n');
        }
    }
}
