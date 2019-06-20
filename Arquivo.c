#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct casa{
    int pavimentos; //andares da casa
    int quartos; //quartos na casa
    float areaTerreno; //area do terreno em metros²
    float areaConst; //area construída
}t_casa;

t_casa casa[10];

void salvaArquivoTexto(){
    FILE* arquivo;
    int i;

    arquivo = fopen("dadosCasa.txt", "w");
    if (arquivo <= 0) {
        puts("!!!Erro ao abrir o arquivo!!!");
        return;
    }

    for (i=0 ; i<10 ; i++){
        if (casa[i].pavimentos != 0) {
            fprintf(arquivo, "%d\n", casa[i].pavimentos);
            fprintf(arquivo, "%d\n", casa[i].quartos);
            fprintf(arquivo, "%f\n", casa[i].areaTerreno);
            fprintf(arquivo, "%f\n", casa[i].areaConst);
        }
    }

    fclose(arquivo);
}

void salvaArquivo(){
    FILE* arquivo;

    arquivo = fopen("dados.txt", "w");
    if (arquivo <= 0){
        puts("!!!Erro ao abrir o arquivo!!!");
        return;
    }

    fwrite(casa, 10, sizeof(t_casa), arquivo);
    fclose(arquivo);
}

void lerArquivoTexto(){
    FILE* arquivo;
    int i;

    arquivo = fopen("dadosCasa.txt", "r");
    if (arquivo <= 0){
        puts("!!!Erro ao abrir o arquivo!!!");
        return;
    }

    for (i=0 ; i<10 ; i++){
        if (feof(arquivo))
            break;
        fprintf(arquivo, "%d\n", casa[i].pavimentos);
        fprintf(arquivo, "%d\n", casa[i].quartos);
        fprintf(arquivo, "%f\n", casa[i].areaTerreno);
        fprintf(arquivo, "%f\n", casa[i].areaConst);
    }

    fclose(arquivo);
}

void lerArquivo(){
    FILE* arquivo;

    arquivo = fopen("dados.txt", "r");
    if (arquivo <= 0) {
        puts("!!!Erro ao abrir o arquivo para leitura!!!");
        return;
    }

    fread(casa, 10, sizeof(t_casa), arquivo);
    fclose(arquivo);
}

int main(){
    int i;

    lerArquivoTexto();

    // Exibicao do vetor casa
    for (i = 0; i < 10; i++){
        if (casa[i].pavimentos!= 0){
            printf("Pavimentos: %d\n", casa[i].pavimentos);
            printf("Quartos: %d\n", casa[i].quartos);
            printf("Area do terreno: %f\n", casa[i].areaTerreno);
            printf("Area de construcao: %f\n", casa[i].areaConst);
        }
    }

    int posVaga = -1;

    for (i = 0; i < 10; i++){
        if (casa[i].pavimentos == 0){
            posVaga = i;
            break;
        }
    }

    puts("Cadastro Casa");
    puts("Digite o numero de pavimentos: ");
    scanf("%d", &casa[posVaga].pavimentos);
    puts("Digite o numero de quartos: ");
    scanf("%d", &casa[posVaga].quartos);
    puts("Digite a area do terreno: ");
    scanf("%f", &casa[posVaga].areaTerreno);
    puts("Digite a area de construcao: ");
    scanf("%f", &casa[posVaga].areaConst);



    // Exibicao do Vetor
    for (i = 0; i < 10; i++){
        if (casa[i].pavimentos != 0){
            printf("Pavimentos: %d\n", casa[i].pavimentos);
            printf("Quartos: %d\n", casa[i].quartos);
            printf("Area do terreno: %f\n", casa[i].areaTerreno);
            printf("Area de construcao: %f\n", casa[i].areaConst);
        }
    }

    salvaArquivoTexto();

    return 0;
}
