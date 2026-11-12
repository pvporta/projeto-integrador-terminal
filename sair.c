#include <stdio.h>

void cat(char nomeArquivo[])
{
    FILE *arquivo;
    int caractere;

    if(nomeArquivo [0] == '\0'){
        printf("Uso: cat <arquivo>\n");
        return;
    }

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL){
        printf("arquivo naoo encontrado\n");
        return;
    }

    while ((caractere = fgetc(arquivo)) != EOF){
        putchar(caractere);
    }

    if(ferror(arquivo)){
        printf("Erro ao ler o arquivo.\n");
    }

    fclose(arquivo);
}