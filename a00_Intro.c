/*

FILE <*ponteiro>
    ex.: FILE *ponteiro_arquivo

ABERTURA
    <ponteiro> = fopen("nome do arquivo", "tipo de abertura")

FECHAMENTO
    fclose<ponteiro>;

TIPOS DE ABERTURAS
    r - leitura
        r+ // leitura e escrita, mas apenas para adicionar ou ler informações
    w - escrita (sobrepõe o conteúdo)
        w+ // leitura e escrita, mas sobrescreve apenas se o arquivo já existir
    a - permissão para adicionar texto ao final do arquivo, mantendo os dados anteriores
        a+ //  leitura e escrita, permitindo que o programa continue a escrever no final do arquivo

ESCRITA
    fprintf(<ponteiro>, "\n%s\n", <conteudo_a_ser_inserido>);

*/

#include "library.h"

int main(){
    acentuacao();
    FILE *arquivo;
    char palavra[20];

    // abrindo o arquivo
    arquivo = fopen("arquivo.txt", "a+");

    ////////////////////////////////////////////////

    // verificar se o arquivo foi criado com sucesso
    if(arquivo == NULL) { printf("Erro! O arquivo não foi aberto!\n"); return 1; }
    else { printf("O arq. foi aberto com sucesso."); }
    
    ////////////////////////////////////////////////

    printf("\nEscreva uma palavra para testar a gravação:");
    scanf("%[^\n]s", &palavra);

    //gravando na linha atual
    fprintf(arquivo, "\n%s\n", palavra);

    // fechando arquivo
    fclose(arquivo);

    printf("O arq. foi criado com sucesso.");

    // getch(); // para que o programa permanecerá aberto até ser fechado manualmente

    return 0;
}

