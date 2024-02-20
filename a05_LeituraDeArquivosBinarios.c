/* Agora vamos usar a função fread() para fazer a leitura de dados em arquivo binário */

/*
Testando a função fread - Lê um arquivo binário contendo 2 vetores de 15 elementos cada um:
o primeiro vetor é de caracteres e o segundo é de variáveis inteiras
*/

#include "library.h"

int main()
{
    char caracter[15];
    int valor[15], i=0;
    FILE *arquivo = fopen("binario.bin", "rb");
    if(arquivo != NULL)
        printf("Aberto com sucesso");
    else
    {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }
    //leitura do arquivo binário
    fread(caracter, sizeof(caracter), 1, arquivo);
        //Sintaxe: fread(<ponteiro_a_ser_escrito>, <tamanho_de_cada_elemento>, <quantidade_de_elementos>, <ponteiro_para_arquivo>);
    fread(valor, sizeof(valor), 1, arquivo);
        //retorna o conteúdo contido em uma ocorrência do tamanho da variável valor

    printf("\nVetor de caracteres: \n");
    for(i=0; i<15; i++)
        printf("%c", caracter[i]);

    printf("\nVetor de inteiros: \n");
    for(i=0; i<15; i++)
        printf("\n%d", valor[i]);
    
    fclose(arquivo);

    return 0;
}