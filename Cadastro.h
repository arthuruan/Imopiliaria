#ifndef CADASTRO_H_INCLUDED
#define CADASTRO_H_INCLUDED

#define CLEAR system("cls")
#define PAUSE system("pause")
#define SETA_BAIXO 80
#define SETA_CIMA 72
#define ENTER 13
#define FLUSH fflush(stdin)

typedef struct apartamento{
    char posicao[100]; //posicao(nascente sul, nascente norte)
    float area; //area do apartamento
    int quartos; //nuemro de quartos no apartamneto
    int andar; //andar que o apartamento se encontra
    float valorCond; //valor do condominio
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
    float valor;
	int estado;
    t_casa casa;
    t_apartamento apartamento;
    t_terreno terreno;
}t_cadastro;

t_cadastro imovel[100];

void CadastroAll(int flag);
void Exibe();
void BuscaTitulo();
void BuscaBairro();
void BuscaValor();
void disponibilidade(int disp);
void DeletaImovel();
void deletavetor(int posicao);
void EditaImovel();

#endif // CADASTRO_H_INCLUDED
