#include <stdio.h>

#define NUM_PRODUCTOS 5
#define PRODUCTOS 5

void cargarCodigos(float codigos[]) {
    printf("Ingrese los codigos de los productos:\n");
    for (int i = 0; i < PRODUCTOS; i++) {
        printf("Codigo del producto %d: ", i + 1);
        scanf("%f", &codigos[i]);
    }
}

void cargarPrecios(float precios[]) {
    printf("\nIngrese los precios de los productos:\n");
    for (int i = 0; i < NUM_PRODUCTOS; i++) {
        printf("Producto %d: ", i + 1);
        scanf("%f", &precios[i]);
    }
}

// A) Encontrar el precio máximo y su número de artículo
void encontrarPrecioMaximo(float precios[]) {
    float maxPrecio = precios[0];
    int numMax = 1;

    for (int i = 1; i < NUM_PRODUCTOS; i++) {
        if (precios[i] > maxPrecio) {
            maxPrecio = precios[i];
            numMax = i + 1;
        }
    }

    printf("\nPrecio maximo: %.2f, Numero de articulo: %d\n", maxPrecio, numMax);
}

// B) Encontrar el precio mínimo y su número de artículo
void encontrarPrecioMinimo(float precios[]) {
    float minPrecio = precios[0];
    int numMin = 1;

    for (int i = 1; i < NUM_PRODUCTOS; i++) {
        if (precios[i] < minPrecio) {
            minPrecio = precios[i];
            numMin = i + 1;
        }
    }

    printf("Precio minimo: %.2f, Numero de articulo: %d\n", minPrecio, numMin);
}

// C) Calcular cantidad de artículos con precio superior al precio promedio
int PrecioSuperiorPromedio(float precios[]) {
    float sumaPrecios = 0;
    for (int i = 0; i < NUM_PRODUCTOS; i++) {
        sumaPrecios += precios[i];
    }

    float promedio = sumaPrecios / NUM_PRODUCTOS;
    int count = 0;

    for (int i = 0; i < NUM_PRODUCTOS; i++) {
        if (precios[i] > promedio) {
            count++;
        }
    }

    return count;
}

// D) Cantidad de artículos con precio superior a $100
int PrecioSuperior100(float precios[]) {
    int count = 0;

    for (int i = 0; i < NUM_PRODUCTOS; i++) {
        if (precios[i] > 100) {
            count++;
        }
    }

    return count;
}

// E) Listar los artículos precio en orden ascendente
void ordenarPrecios(float precios[]) {
    for (int i = 0; i < NUM_PRODUCTOS - 1; i++) {
        for (int j = 0; j < NUM_PRODUCTOS - i - 1; j++) {
            if (precios[j] > precios[j + 1]) {
                // Swap
                float temp = precios[j];
                precios[j] = precios[j + 1];
                precios[j + 1] = temp;
            }
        }
    }

    printf("\nArticulos ordenados por precio en orden ascendente:\n");
    for (int i = 0; i < NUM_PRODUCTOS; i++) {
        printf("Producto %d: %.2f\n", i + 1, precios[i]);
    }
}

int main() {
    float precios[NUM_PRODUCTOS];
    float codigos[PRODUCTOS];

    // Cargar codigos y precios
    cargarCodigos(codigos);
    cargarPrecios(precios);

    // Calcular y mostrar resultados
    encontrarPrecioMaximo(precios);
    encontrarPrecioMinimo(precios);
    printf("\nCantidad de articulos con precio superior al promedio: %d\n", PrecioSuperiorPromedio(precios));
    printf("\nCantidad de articulos con precio superior a $100: %d\n", PrecioSuperior100(precios));
    ordenarPrecios(precios);

    return 0;
}
