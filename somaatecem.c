#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i, resultado = 0;

    for(i = 1; i <= 100; i++) {
        resultado+=i;
    }
    printf("O valor é: %d\n", resultado);
}