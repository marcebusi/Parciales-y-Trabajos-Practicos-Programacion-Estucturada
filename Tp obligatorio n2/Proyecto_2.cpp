#include <stdio.h>
#include <string.h>

int romanoadecimal(char numRomano[]) {
    int valores[26];
    valores['I' - 'A'] = 1;
    valores['V' - 'A'] = 5;
    valores['X' - 'A'] = 10;
    valores['L' - 'A'] = 50;
    valores['C' - 'A'] = 100;
    valores['D' - 'A'] = 500;
    valores['M' - 'A'] = 1000;

    int resultado = 0;
    int anterior = 0;

    for (int i = strlen(numRomano) - 1; i >= 0; i--) {
        int valor = valores[numRomano[i] - 'A'];

        if (valor < anterior) {
            resultado -= valor;
        } else {
            resultado += valor;
        }

        anterior = valor;
    }

    return resultado;
}

int main() {
    char numRomano[11];

    printf("Ingrese un numero romano (hasta 10 caracteres): ");
    scanf("%s", numRomano);

    if (strlen(numRomano) > 10) {
        printf("La cadena debe tener hasta 10 caracteres.\n");
        return 1;
    }

    int numDecimal = romanoadecimal(numRomano);
    printf("Numero romano: %s\nNumero arabigo: %d\n", numRomano, numDecimal);

    return 0;
}
