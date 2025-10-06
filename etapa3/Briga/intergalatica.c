#include <stdio.h>
#include <stdlib.h>

int comp1(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int comp2(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int pocas[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &pocas[i]);

    int kt = k;
    int cntt = 0;
    for (int i = 0; i < n && kt > 0; i++)
        if (kt - pocas[i] >= 0) {
            cntt++;
            kt -= pocas[i];
        }

    int kc = k;
    int cntc = 0;
    qsort(pocas, n, sizeof(pocas[0]), comp1);
    for (int i = 0; i < n && kc > 0; i++)
        if (kc - pocas[i] >= 0) {
            cntc++;
            kc -= pocas[i];
        }

    if (cntc > cntt) printf("QUACK QUACK QUACK QUACK\n");
    else {
        kt = k;
        cntt = 0;
        qsort(pocas, n, sizeof(pocas[0]), comp2);
        for (int i = 0; i < n && kt > 0; i++)
            if (kt - pocas[i] >= 0) {
                cntt++;
                kt -= pocas[i];
            }
        qsort(pocas, n, sizeof(pocas[0]), comp1);
        kc = k;
        cntc = 0;
        for (int i = 0; i < n && kc > 0; i++)
            if (kc - pocas[i] >= 0) {
                cntc++;
                kc -= pocas[i];
            }
        if (cntc > cntt) printf("Troque esse cenario Tung Tung Tung Tung Tung Tung Sahur, a nao ser que voce queira que eu conte para o Cappuccino Assassino que voce tem um caso com a Ballerina Cappuccina\n");
        else printf("mi mi mi la la la ballerina cappuccina vou te raptar\n");
    }
}
