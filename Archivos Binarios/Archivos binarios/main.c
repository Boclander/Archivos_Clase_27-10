#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pArchivo;
    int x = 4;
    int y;
    int z;

    pArchivo = fopen("archivo.bin", "wb");
    y = fwrite(&x ,sizeof(int),1 ,pArchivo);
    fclose(pArchivo);

    pArchivo = fopen("archivo.bin", "rb");
    z = fread(&x, sizeof(int), 1, pArchivo);
    fclose(pArchivo);

    printf("%d\n", x);
    printf("Enviado: %d || Leido: %d", y, z);
    return 0;
}
