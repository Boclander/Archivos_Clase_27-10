#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pArchivo;
    char texto [50], otro[50];
    char cadena[50]="Facu";

            // # ESCRITURA DE UN ARCHIVO #

    pArchivo = fopen("saludo.txt", "w");
    fprintf(pArchivo, "Hola %s, como estas?\nTodo bien", cadena);
    fclose(pArchivo);


            // # LECTURA DE UN ARCHIVO #

    pArchivo = fopen("saludo.txt", "r");
    fgets(texto, 50, pArchivo);
    fgets(otro, 50, pArchivo);
    fclose(pArchivo);
    puts(texto);
    puts(otro);
    return 0;

}

