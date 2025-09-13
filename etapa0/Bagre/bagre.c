#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char *res = (char *) malloc (4096 * sizeof(char));
        bool inv = false;
        
        int m;
        scanf("%d", &m);
        while (m--) {
            char s[1024];
            bool esq, dir;
            esq = dir = false;
            
            scanf("%s", s);
            
            int n = strlen(s);

            // Procura pela palavra "ESQUERDA"
            for (int i = 0; i + 8 <= n; ++i) {
                char *s2 = (char *) malloc(8 * sizeof(char));
                strncpy(s2, s + i, 8);
                if (strcmp(s2, "ESQUERDA") == 0) esq = true;
                free(s2);
            }
            // Procura pela palavra "DIREITA"
            for (int i = 0; i + 7 <= n; ++i) {
                char *s2 = (char *) malloc(7 * sizeof(char));
                strncpy(s2, s + i, 7);
                if (strcmp(s2, "DIREITA") == 0) dir = true;
                free(s2);
            }
            if ((esq && dir) || (!esq && !dir) && !inv) {
                printf("Ahn?  Acho que escolhemos o tunel errado...\n");
                inv = true;
            } else if (esq) {
                strcat(res, "ESQUERDA ");
            } else {
                strcat(res, "DIREITA ");
            }
        }
        if (!inv) {
            printf("%sESPERE POR NOS CORUJINHA!!!\n", res);
        }
    }
    
    return 0;

}
