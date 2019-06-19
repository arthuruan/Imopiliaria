#include <stdio.h>
#include <string.h>


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
    char rua[100];
    char bairro[100];
    char cidade[100];
    char disponivel[10];
    char cep[15];
    int numero;
    int valor;
    t_casa casa;
    t_apartamento apartamento;
    t_terreno terreno;
}t_cadastro;


t_cadastro imovel[100];

int CadastroAll(){
//funçao que lê o cadastro
    int i;

    while(1){

    printf("Digite a cidade do seu imovel \n");
    fgets(imovel[i].cidade,100,stdin);
    printf("Digite a rua e numero do seu imovel \n");
    fgets(imovel[i].rua,100,stdin);
    scanf("%d", &imovel[i].numero);
    printf("Digite o CEP do seu imovel \n");
    fgets(imovel[i].cep,15,stdin);
    printf("Digite o valor do seu imovel \n");
    scanf("%d", &imovel[i].valor);
    printf("Digite a disponibilidade do seu imovel (Aluguel ou Venda) \n");
    fgets(imovel[i].disponivel,10,stdin);
    printf("Digite ao titulo de venda do seu imovel \n");
    fgets(imovel[i].titulo,100,stdin);

    i++;
    }

    return 0;
}

void CadastroCasa(){

    while(1){
        printf("Digite a quantidade de pavimentos da casa :\n");
        scanf("%d", &imovel[i].casa.pavimentos);
        printf("Digite a quantidade de quartos da casa :\n");
        scanf("%d", &imovel[i].casa.quartos);
        printf("Digite a area total do terreno (em metros quadrados) :\n");
        scanf("%f", &imovel[i].casa.areaTerreno);
        printf("Digite a area construida (em metros quadrados) :\n");
        scanf("%f", &imovel[i].casa.areaConst);

        i++;
    }
}

void CadastroApartamento(){

    while(1){
        printf("Digite a posicao do apartamento :\n");
        scanf("%s", &imovel[i].apartamento.posicao);
        printf("Digite a quantidade de quartos do apartamento :\n");
        scanf("%d", &imovel[i].apartamento.quartos);
        printf("Digite a area total do apartamento(em metros quadrados) :\n");
        scanf("%f", &imovel[i].apartamento.area);
        printf("Digite o andar do apartamento :\n");
        scanf("%d", &imovel[i].apartamento.andar);
        printf("Digite o valor do condominio :\n");
        scanf("%f", &imovel[i].apartamento.valorCond);
        printf("Digite o numero de vagas de garagem :\n");
        scanf("%f", &imovel[i].apartamento.garagem);

        i++;
    }
}

void CadastraTerreno(){

    while(1){

        printf("Digite a area do terreno (em metros quadrados) :\n");
        scanf("f", &imovel[i].terreno.area);

        i++;
    }

}