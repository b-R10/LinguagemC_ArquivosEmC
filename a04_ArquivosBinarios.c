/*
Tipos de abertura de arquivos binários

Tipo de abertura	Significado
rb                  Abre um arquivo binário que já existe para leitura. Caso o arquivo não exista, retorna um erro.
w+b                 Abre um novo arquivo binário para gravação. Caso o arquivo já exista será sobrescrito na gravação.
a+b                 Abre um arquivo binário para adicionar dados.
r+b                 Abre um arquivo binário que já existe para leitura e gravação. Caso o arquivo não exista, retorna um erro.
w+b                 Abre um novo arquivo binário para leitura e gravação. Caso o arquivo já exista será sobrescrito na gravação.
a+b                 Abre um arquivo binário para adicionar dados. Caso o arquivo não exista, será criado um novo arquivo.
Usando frwite() em C
    Vejamos a seguir como criar um arquivo binário e armazenar dados dentro dele usando usando a função fwrite() da linguagem C.
*/

/*
Testando a função fwrite - Grava um arquivo binário contendo 2 vetores de 15 elementos cada um: O primeiro vetor armazena
caracteres e o segundo armazena dados inteiros
*/

#include "library.h"

int main(void){
    char caracter[15] = "Teste geral";
    int valor[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    FILE *ponteiroArquivo = fopen("binario.bin", "wb"); 
        //Abrindo o arquivo no modo 'write binary'
    
    if(ponteiroArquivo != NULL){
        printf("\nArquivo binário criado com sucesso.\n");
    }else{
        printf("\nERRO. A arquivo .bin não foi criado.\n");
        exit(0);
    }
    fwrite(caracter, sizeof(char), 15, ponteiroArquivo);
        // fwrite(<ponteiro_a_ser_escrito>, <tamanho_de_cada_elemento>, <quantidade_de_elementos>, <ponteiro_para_arquivo>);
        //Escrevendo os 15 caracteres do vetor 'caracter' no arquivo
    fwrite(valor, sizeof(int), 15, ponteiroArquivo);      
        //Escrevendo os 15 valores do vetor 'valor' no mesmo arquivo
    fclose(ponteiroArquivo);
    return 0;
}