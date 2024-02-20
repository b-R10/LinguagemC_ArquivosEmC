/*
A função fputs() é usada para gravar strings em arquivos.
A função fputs recebe como parâmetro uma string e um ponteiro para o arquivo a ser escrito.
Retorno da função fputs:
    se a string for gravada com sucesso, retorna um inteiro diferente de zero.
    Caso ocorra algum erro na escrita, o valor da constante EOF é retornado.
*/
#include "library.h"

int main(){
    FILE *arquivo = fopen("arquivo2.txt", "a");
    int r;

    if(arquivo == NULL){
        printf("Erro ao abrir.");
        return 1;
    }

    r = fputs("Programando em linguagem C.\n\t", arquivo);

    if(r == EOF)
        printf( "\nFalha na escrita.\n");
    else
        printf("Dados gravados com sucesso");

    fclose(arquivo);

    return 0;
}