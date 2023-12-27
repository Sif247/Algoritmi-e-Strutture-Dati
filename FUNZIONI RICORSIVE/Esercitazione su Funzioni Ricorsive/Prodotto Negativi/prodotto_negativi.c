#include <stdio.h>

int ProdottoNegativi(int a, int b) {
    // Caso base: se uno dei numeri � zero, il prodotto � zero
    if (a == 0 || b == 0) {
        return 0;
    }

    // Caso base: se b � positivo, ritorna a + ProdottoNegativi(a, b-1)
    if (b > 0) {
        return a + ProdottoNegativi(a, b - 1);
    }
    // Caso base: se b � negativo, ritorna -a + ProdottoNegativi(a, b+1)
    else {
        return -a + ProdottoNegativi(a, b + 1);
    }
}
/*
int main() {
    int risultato = ProdottoNegativi(-4, 3);
    printf("Il prodotto di -4 e 3 �: %d\n", risultato);

    return 0;
}
*/
