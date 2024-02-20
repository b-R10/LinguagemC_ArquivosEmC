#include "library.h"

/*
A função fputc() escreve um único caractere em um arquivo.
Na prática temos que a cada chamada da função fputc grava um caraceter no arquivo.
    fputs(<string>, <ponteiro>) -> Escrever uma string completa num determinado fluxo de saída
*/

int main()
{
    FILE *arquivo;
    char frase[50];
    int i, tamanho;

    arquivo = fopen("arquivo1.txt", "a+");
        // abre o arquivo1.txt no modo de escrita ao fim do arquivo
    if(arquivo == NULL)
    {
        printf("Erro de abertura.");
        exit(1);
    }

    printf("Digite a frase a ser gravada no arquivo;");
    gets(frase);        // lê uma linha inteira até encontrar \n ou EOF

    // verificando o tamanho da string digitado pelo usuario
    tamanho = strlen(frase);    // retorna o tamanho da string

    // gravando caracter por caracter
    for(i=0; i<tamanho; i++){
        fputc(frase[i], arquivo);
    }

    fclose(arquivo);

    return 0;
}