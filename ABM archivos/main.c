#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int legajo;
    char nombre [50];
    int nota;
}sAlumno;

int guardarArrayEnTxt(int[], int, char[]);
int guardarArrayEnBin(int[], int, char[]);
int mostrarArrayEnTxt(int, char[]);
int mostrarArrayEnBin(char[]);

int main()
{
    int arrayEnteros[10]={10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    guardarArrayEnTxt(arrayEnteros, 10, "arrayEnteros.txt");
    guardarArrayEnBin(arrayEnteros, 10, "arrayEnteros.bin");
    mostrarArrayEnTxt(10, "arrayEnteros.txt");

   return 0;
}

int guardarArrayEnTxt(int arrayEnteros[], int tam, char nombreArchivo[])
{
    FILE* pArchivo;
    int i=0;

    pArchivo = fopen(nombreArchivo, "w");
    for(i=0; i<tam; i++)
    {
        fprintf(pArchivo, "%d\n", arrayEnteros[i]);
    }
    fclose(pArchivo);

    return 0;
}

int guardarArrayEnBin(int arrayEnteros[], int tam, char nombreArchivo[])
{
    FILE* pArchivo;
    int i=0;

    pArchivo = fopen(nombreArchivo, "wb");
    for(i=0; i<tam; i++)
    {
        fwrite(arrayEnteros[i], tam, 1, pArchivo);
    }
    fclose(pArchivo);

    return 0;
}

int mostrarArrayEnTxt(int tam, char nombreArchivo[])
{
    FILE* pArchivo;
    char texto[tam][50];
    int i=0;

    printf("%s\n" ,nombreArchivo);        //Estetico.

    pArchivo = fopen(nombreArchivo, "r");
    while(!feof(pArchivo))
    {
        fgets(texto[i], 50, pArchivo);
        i++;
    }
    for(i=0; i<tam; i++)
    {
        printf("%s", texto[i]);
    }

    fclose(pArchivo);
    return 0;
}

int mostrarArrayEnBin(char nombreArchivo[])
{
    FILE* pArchivo;
    int i=0;                    // INCOMPLETO

    printf("%s\n" ,nombreArchivo);

    pArchivo = fopen(nombreArchivo, "rb");
    fread()

}
