/*
Imopiliaria
Produtores: Arthur Dionizio, Arthur Ruan, Samuel Laerte, Thiago Palacios.
versão alpha: 0.1
*/

#include <stdio.h>
#include <conio.h>
#include <Windows.h>

#define CLEAR system("cls")
#define SETA_BAIXO 80
#define SETA_CIMA 72
#define ENTER 13
#define FLUSH fflush(stdin)

typedef struct apartamento{
    char posicao[100]; //posicao(nascente sul, nascente norte)
    float area; //area do apartamento
    int quartos; //nuemro de quartos no apartamneto
    int andar; //andar que o apartamento se encontra
    int valorCond; //valor do condominio
    int garagem; //numero de vagas de garagem
}t_apartamento;

typedef struct terreno{
    float area; //area total do terreno em m²
}t_terreno;

typedef struct casa{
    int pavimentos; //andares da casa
    int quartos; //quartos na casa
    float areaTerreno; //area do terreno em metros²
    float areaConst; //area construída
}t_casa;

typedef struct Cadastro{
    char titulo[100];
    char endereco[100];
    char bairro[100];
    char cidade[100];
    char disponivel[10];
    char cep[15];
    int valor;
    t_casa casa;
    t_apartamento apartamento;
    t_terreno terreno;
}t_cadastro;

t_cadastro imovel[100];

void CadastroAll(int flag){

    while(1){
        int i=0;

        printf("Digite a cidade do seu imovel :");
        fgets(imovel[i].cidade,100,stdin);
        imovel[i].cidade[strlen(imovel[i].cidade)-1] = '\0';

        printf("Digite o endereco do seu imovel :");
        fgets(imovel[i].endereco,100,stdin);
        imovel[i].endereco [strlen(imovel[i].endereco)-1] = '\0';

        printf("Digite o CEP do seu imovel :");
        fgets(imovel[i].cep,15,stdin);
        imovel[i].cep [strlen(imovel[i].cep)-1] = '\0';

        printf("Digite o valor do seu imovel :");
        scanf("%d", &imovel[i].valor);
        FLUSH;

        printf("Digite a disponibilidade do seu imovel (Aluguel ou Venda) : ");
        fgets(imovel[i].disponivel,10,stdin);
        imovel[i].disponivel [strlen(imovel[i].disponivel)-1] = '\0';

        printf("Digite ao titulo de venda do seu imovel :");
        fgets(imovel[i].titulo,100,stdin);
        imovel[i].titulo [strlen(imovel[i].titulo)-1] = '\0';

        if(flag == 1){
            printf("Digite a quantidade de pavimentos da casa :");
            scanf("%d", &imovel[i].casa.pavimentos);
            FLUSH;

            printf("Digite a quantidade de quartos da casa :");
            scanf("%d", &imovel[i].casa.quartos);
            FLUSH;

            printf("Digite a area total do terreno (em metros quadrados) :");
            scanf("%f", &imovel[i].casa.areaTerreno);
            FLUSH;

            printf("Digite a area construida (em metros quadrados) :");
            scanf("%f", &imovel[i].casa.areaConst);
            FLUSH;
        }else if(flag == 2){
            
            printf("Digite a posicao do apartamento :");
            fgets(imovel[i].apartamento.posicao,100,stdin);
            imovel[i].apartamento.posicao [strlen(imovel[i].apartamento.posicao)-1] = '\0';

            printf("Digite a quantidade de quartos do apartamento :");
            scanf("%d", &imovel[i].apartamento.quartos);
            FLUSH;

            printf("Digite a area total do apartamento(em metros quadrados) :");
            scanf("%f", &imovel[i].apartamento.area);
            FLUSH;

            printf("Digite o andar do apartamento :");
            scanf("%d", &imovel[i].apartamento.andar);
            FLUSH;

            printf("Digite o valor do condominio :");
            scanf("%f", &imovel[i].apartamento.valorCond);

            printf("Digite o numero de vagas de garagem :");
            scanf("%f", &imovel[i].apartamento.garagem);
            FLUSH;
            
        }else if(flag == 3){
            printf("Digite a area do terreno (em metros quadrados) :");
            scanf("f", &imovel[i].terreno.area);
            FLUSH;
        }
        i++;
    }
}