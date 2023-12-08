// El programa consiste en ordenar 5 palabras ingresadas por el usuario alfabeticamente.

#include <stdio.h>
#include <string.h>

#define MAXIMA_LONGITUD_CADENA 1000

void ordenAlfabetico(char arreglo[][MAXIMA_LONGITUD_CADENA], int longitud)
{
    char temporal[MAXIMA_LONGITUD_CADENA];
    int x, indiceActual;
    for (x = 0; x < longitud; x++)
    {
        for (indiceActual = 0; indiceActual < longitud - 1;
             indiceActual++)
        {
            int indiceSiguienteElemento = indiceActual + 1;

            if (strcmp(arreglo[indiceActual], arreglo[indiceSiguienteElemento]) > 0)
            {

                memcpy(temporal, arreglo[indiceActual], MAXIMA_LONGITUD_CADENA);

                memcpy(arreglo[indiceActual], arreglo[indiceSiguienteElemento], MAXIMA_LONGITUD_CADENA);

                memcpy(arreglo[indiceSiguienteElemento], temporal, MAXIMA_LONGITUD_CADENA);
            }
        }
    }
}


int main() {
	int i = 0;
	int sumatoria = 0;
	char palabras[5][MAXIMA_LONGITUD_CADENA] = {};
    
	for(i=0;i<5;i++){
		printf("Ingrese una palabra: ");
		scanf("%s", &palabras[i]);
	}
    
    int longitud = sizeof(palabras) / sizeof(palabras[0]);


    ordenAlfabetico(palabras, longitud);
    printf("\nArreglo ordenado:\n");
    for (i = 0; i < longitud; i++)
    {
        printf("%s\n", palabras[i]);
    }
    return 0;
}
