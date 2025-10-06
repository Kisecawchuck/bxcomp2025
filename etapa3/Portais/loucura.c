#include <stdbool.h>
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int freq[n + 1];
    for (int i = 0; i <= n; i++) freq[i] = 0;
    for (int i = 0; i < m; i++) {
        int x;
        scanf("%d", &x);
        freq[x]++;
    }

    int cnt = 0;
    int idx = -1;
    bool p;
    do {
        p = false;
        int max = -1;
        for (int i = 1; i <= n; i++)
            if (freq[i] > max) {
                max = freq[i];
                idx = i;
            }
        freq[idx] = -1;
        for (int i = 1; i <= n; i++)
            if (freq[i] == max) {
                p = true;
                freq[i] = -1;
            }
        cnt++;
    } while (p && cnt < n);
    if (cnt == n) printf("Ferrou! Salve-se quem puder!\n");
    else printf("Entrem no portal %d petianes!\n", idx);
}
