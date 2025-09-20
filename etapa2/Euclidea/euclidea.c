#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    return (*(int *) a - *(int *)b);
}

int calcArea(int a, int b, int c) {
    int s = (a + b + c)/2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    int n;
    scanf("%d", &n);

    int *A = (int *) malloc(sizeof(int) * n);
    int **T = (int **) malloc(sizeof(int *) * n);
    for (int i = 0; i < n; ++i)
        T[i] = (int *) malloc(sizeof(int) * 3);

    for (int i = 0; i < n; ++i) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        A[i] = calcArea(a, b, c);
        T[i][0] = a;
        T[i][1] = b;
        T[i][2] = c;
    }

    qsort(A, n, sizeof(A[0]), comp);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int a = T[j][0];
            int b = T[j][1];
            int c = T[j][2];

            if (calcArea(a, b, c) == A[i])
                printf("%d %d %d\n", a, b, c);
        }
    }
    free(A);
    for (int i = 0; i < n; ++i)
        free(T[i]);
    free(T);
}
