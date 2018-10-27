#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pArchivo;
    char texto [3][50];
    int i=0;

    // # ESCRITURA DE UN ARCHIVO #

    pArchivo = fopen("saludo.txt", "w");
    fprintf(pArchivo, "Hola\nQue\nHace");
    fclose(pArchivo);

    // # LECTURA DE UN ARCHIVO #

    pArchivo = fopen("saludo.txt", "r");
    while(!feof(pArchivo))
    {
        fgets(texto[i], 50, pArchivo);
        i++;
    }
    for(i=0; i<3; i++)
    {
        puts(texto[i]);
    }

    fclose(pArchivo);

    return 0;
}
