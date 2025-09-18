#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int nilo[4][4];
        for (int i = 0; i < 4; ++i)
            for (int j = 0; j < 4; ++j)
                scanf("%d", &nilo[i][j]);
    }
}
