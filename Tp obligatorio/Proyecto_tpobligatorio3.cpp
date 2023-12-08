#include<stdio.h>
#include<conio.h>

int main()
{
    char palabra[30];
    int cantidad=0;
    int i=0;
    
    printf("Ingrese una palabra en minusculas: ");
    gets(palabra);

    while (palabra[i]!='\0') {
        if (palabra[i]=='a' || palabra[i]=='e' || 
    
		palabra[i]=='i' || palabra[i]=='o' || palabra[i]=='u') {
            cantidad++;
        }
        i++;
    }
    
    printf("\n\nLa cantidad de vocales que tiene la palabra %s es %i", palabra, cantidad);
    
    getch();
    
    return 0;
}
