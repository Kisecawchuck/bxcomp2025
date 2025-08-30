#include <stdio.h>

typedef enum {
    PEDRA,
    PAPEL,
    TESOURA,
    INVALIDO = 4 // 4 não pertence a sequência de Fibonacci;
                 // Descobrir esse erro levou alguns minutos;
} Jogada;

long long memo[50];
long long fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (memo[n] != 0) return memo[n];
    else memo[n] = fibo(n - 1) + fibo(n - 2);
    return memo[n];
}

int main() {
    int n;
    scanf("%d", &n);

    fibo(90); // Pré-calcula a sequência e guarda em memo;
              // O LONG LONG só estoura em 92, mas 90 fica mais bonito;
    while (n--) {
        int r;
        scanf("%d", &r);
        int cnt = 0;
        while (r--) {
            int a, b;
            scanf("%d %d", &a, &b);
            Jogada joga, jogb;
            joga = jogb = INVALIDO;
            for (int i = 0; i < 90; ++i) {
                if (memo[i] == a) joga = PEDRA;
                if (memo[i] == b) jogb = PEDRA;
            }
            if (joga == INVALIDO && (a % 2 == 0)) joga = PAPEL;
            else if (joga == INVALIDO) joga = TESOURA;
            if (jogb == INVALIDO && (b % 2 == 0)) jogb = PAPEL;
            else if (jogb == INVALIDO) jogb = TESOURA;

            if (joga == jogb); 
            else if ((joga == PEDRA && jogb == TESOURA) || (joga == PAPEL && jogb == PEDRA) || (joga == TESOURA && jogb == PAPEL)) ++cnt;
            else --cnt;
        }
        if (cnt == 0)
            printf("Precisamos marcar uma revanche...\n");
        else if (cnt > 0) 
            printf("A CORUJA VOLTOU A PIAAAAAR!!!!!!\n");
        else 
            printf("NOOO, ACHO QUE OS DINOSSAUROS VÃO TER CORUJA AO FORNO HOJE NA JANTA\n");
    }
}
