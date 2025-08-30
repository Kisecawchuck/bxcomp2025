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
        mat[n/2][n/2] = 1;
        while (baixo > cima && esq < dir) {
            for (int i = dir; i >= esq; --i) {
                mat[baixo][i] = cnt;
                --cnt;
            }
            for (int i = baixo - 1; i >= cima; --i) {
                mat[i][esq] = cnt;
                --cnt;
            }
            for (int i = esq + 1; i <= dir; ++i) {
                mat[cima][i] = cnt;
                --cnt;
            }
            --baixo;
            for (int i = cima + 1; i <= baixo; ++i) {
                mat[i][dir] = cnt;
                --cnt;
            }
            ++esq;
            --dir;
            ++cima;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j)
                printf("%d ", mat[i][j]);
            putchar('\n');
        }
    }
}
