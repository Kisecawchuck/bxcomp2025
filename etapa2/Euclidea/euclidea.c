#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    if (*(double *) a > *(double *)b) return 1;
    if (*(double *) a < *(double *)b) return -1;
    return 0;
}

double calcArea(int a, int b, int c) {
    double s = (a + b + c)/2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    int n;
    scanf("%d", &n);

    double *A = (double *) malloc(sizeof(double) * n);
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
        for (int k = 0; k < n; ++k) {
            int a = T[k][0];
            if (a == -1) continue;
            int b = T[k][1];
            int c = T[k][2];

            double area = calcArea(a, b, c);
            if (area == A[i]) {
                printf("%d %d %d\n", a, b, c);
                T[k][0] = -1;
            }
        }
    }
    free(A);
    for (int i = 0; i < n; ++i)
        free(T[i]);
    free(T);
}
