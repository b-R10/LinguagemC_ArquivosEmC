#include "library.h"

int main()
{
    FILE *arquivo = fopen("arquivo2.txt", "r");
    char c = fgetc(arquivo);
    do
    {
        //Lê o caractere atual do arquivo e armazena em 'c
        char c = fgetc(arquivo);
        printf("%c", c);
    } while (c != EOF);
    fclose(arquivo);

    return 0;
}
