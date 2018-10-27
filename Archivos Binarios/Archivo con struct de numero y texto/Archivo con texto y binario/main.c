#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char b;
    int a;
}sDato;

int main()
{
    FILE* pArchivo;
    sDato dato = {'c', 1};
    sDato d;
            // # ESCRITURA DEL ARCHIVO #
    pArchivo = fopen("archivo.bin", "wb");
    fwrite(&dato, sizeof(sDato), 1, pArchivo);
    fclose(pArchivo);

            // # LECTURA DEL ARCHIVO #
    pArchivo = fopen("archivo.bin", "rb");
    fread(&d, sizeof(sDato), 1, pArchivo);
    fclose(pArchivo);
    printf("%d - %c", d.a, d.b);

    return 0;
}
