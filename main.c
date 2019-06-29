/*
Imopiliaria
Produtores: Arthur Dionizio, Arthur Ruan, Samuel Laerte, Thiago Palacios.
versão alpha: 0.1
*/

#include <stdio.h>
#include <conio.h>
#include <Windows.h>

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

void DeletaImovel(){
	
	int i, posicao;

	CLEAR;

	printf("Digite a posicoa do seu imovel: ");
    scanf("%d", &posicao);
	FLUSH;

	posicao --;

	for(i = posicao ; i<100 ; i++){
		imovel[i]=imovel[i+1];
	}
}

void disponibilidade(int disp){

	CLEAR;

	int i;

	for(i=0;i<100;i++){

		if(disp == 1 && !strcmp(imovel[i].disponivel,"aluguel")){

			if(imovel[i].estado == 1){

				printf("Imovel : Casa\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
				printf("Endereco : %s\n", imovel[i].endereco);
				printf("CEP : %s\n", imovel[i].cep);
				printf("Valor : %.1f\n", imovel[i].valor);
				printf("Disponibilidade : %s\n", imovel[i].disponivel);
				printf("Titulo do imovel : %s\n", imovel[i].titulo);
				printf("Pavimentos : %d\n", imovel[i].casa.pavimentos);
				printf("Quartos : %d\n", imovel[i].casa.quartos);
				printf("Area do terreno : %.1f\n", imovel[i].casa.areaTerreno);
				printf("Area construida : %.1f\n\n\n", imovel[i].casa.areaConst);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);

			}else if(imovel[i].estado == 2){

				printf("Imovel : Apartamento\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
				printf("Endereco : %s\n", imovel[i].endereco);
				printf("CEP : %s\n", imovel[i].cep);
				printf("Valor: %.1f\n", imovel[i].valor);
				printf("Disponibilidade  %s\n", imovel[i].disponivel);
				printf("Titulo do imovel : %s\n", imovel[i].titulo);
				printf("Posicao : %s\n", imovel[i].apartamento.posicao);
				printf("Quartos : %d\n", imovel[i].apartamento.quartos);
				printf("Area : %f\n", imovel[i].apartamento.area);
				printf("Andar : %d\n", imovel[i].apartamento.andar);
				printf("Valor do condominio : %f\n", imovel[i].apartamento.valorCond);
				printf("Garagem : %d\n\n\n", imovel[i].apartamento.garagem);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);

			}else if(imovel[i].estado == 3){

				printf("Imovel : Terreno\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
				printf("Endereco : %s\n", imovel[i].endereco);
				printf("CEP : %s\n", imovel[i].cep);
				printf("Valor : %.1f\n", imovel[i].valor);
				printf("Disponibilidade : %s\n", imovel[i].disponivel);
				printf("Titulo ddo imovel  : %s\n", imovel[i].titulo);
				printf("Area do terreno : %f\n\n\n", imovel[i].terreno.area);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);

			}
		}else if(disp == 2 && !strcmp(imovel[i].disponivel,"venda")){

			if(imovel[i].estado == 1){

				printf("Imovel : Casa\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
				printf("Endereco : %s\n", imovel[i].endereco);
				printf("CEP : %s\n", imovel[i].cep);
				printf("Valor : %.1f\n", imovel[i].valor);
				printf("Disponibilidade : %s\n", imovel[i].disponivel);
				printf("Titulo do imovel : %s\n", imovel[i].titulo);
				printf("Pavimentos : %d\n", imovel[i].casa.pavimentos);
				printf("Quartos : %d\n", imovel[i].casa.quartos);
				printf("Area do terreno : %.1f\n", imovel[i].casa.areaTerreno);
				printf("Area construida : %.1f\n\n\n", imovel[i].casa.areaConst);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);

			}else if(imovel[i].estado == 2){

				printf("Imovel : Apartamento\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
				printf("Endereco : %s\n", imovel[i].endereco);
				printf("CEP : %s\n", imovel[i].cep);
				printf("Valor: %.1f\n", imovel[i].valor);
				printf("Disponibilidade  %s\n", imovel[i].disponivel);
				printf("Titulo do imovel : %s\n", imovel[i].titulo);
				printf("Posicao : %s\n", imovel[i].apartamento.posicao);
				printf("Quartos : %d\n", imovel[i].apartamento.quartos);
				printf("Area : %f\n", imovel[i].apartamento.area);
				printf("Andar : %d\n", imovel[i].apartamento.andar);
				printf("Valor do condominio : %f\n", imovel[i].apartamento.valorCond);
				printf("Garagem : %d\n\n\n", imovel[i].apartamento.garagem);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);

			}else if(imovel[i].estado == 3){

				printf("Imovel : Terreno\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
				printf("Endereco : %s\n", imovel[i].endereco);
				printf("CEP : %s\n", imovel[i].cep);
				printf("Valor : %.1f\n", imovel[i].valor);
				printf("Disponibilidade : %s\n", imovel[i].disponivel);
				printf("Titulo ddo imovel  : %s\n", imovel[i].titulo);
				printf("Area do terreno : %f\n\n\n", imovel[i].terreno.area);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);

			}
		}
	}
	PAUSE;
}

void BuscaValor(){
    CLEAR;
    float valor;
    int i;

    printf("Digite o valor base para a consulta: ");
    scanf("%f", &valor);
	FLUSH;

	CLEAR;
	printf("Imoveis com valores maior disponiveis :\n\n");
	for(i=0;i<100;i++){
        if(valor < imovel[i].valor){
			
			if(imovel[i].estado == 1){

				printf("Imovel: Casa\n\n");
                printf("Cidade: %s\n", imovel[i].cidade);
                printf("Endereco: %s\n", imovel[i].endereco);
                printf("Bairro: %s\n", imovel[i].bairro);
                printf("CEP: %s\n", imovel[i].cep);
                printf("Valor: %.1f\n", imovel[i].valor);
                printf("Disponibilidade do imovel: %s\n", imovel[i].disponivel);
                printf("Titulo de venda do imovel: %s\n", imovel[i].titulo);
                printf("Pavimentos: %d\n", imovel[i].casa.pavimentos);
                printf("Quartos: %d\n", imovel[i].casa.quartos);
                printf("Area do terreno: %.1f\n", imovel[i].casa.areaTerreno);
                printf("Area construida: %.1f\n", imovel[i].casa.areaConst);
                printf("Posicao de cadastro do imovel: %d\n\n", i+1);

            }else if(imovel[i].estado == 2){

                printf("Imovel: Apartamento\n\n");
                printf("Cidade: %s\n", imovel[i].cidade);
                printf("Endereco: %s\n", imovel[i].endereco);
                printf("Bairro: %s\n", imovel[i].bairro);
                printf("CEP: %s\n", imovel[i].cep);
                printf("Valor: %.1f\n", imovel[i].valor);
                printf("Disponibilidade do imovel: %s\n", imovel[i].disponivel);
                printf("Titulo de venda imovel: %s\n", imovel[i].titulo);
                printf("Posicao : %s\n", imovel[i].apartamento.posicao);
				printf("Quartos : %d\n", imovel[i].apartamento.quartos);
				printf("Area : %f\n", imovel[i].apartamento.area);
				printf("Andar : %d\n", imovel[i].apartamento.andar);
				printf("Valor do condominio : %f\n", imovel[i].apartamento.valorCond);
				printf("Garagem : %d\n", imovel[i].apartamento.garagem);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);

            }else if(imovel[i].estado == 3){

                printf("Imovel: Terreno\n\n");
                printf("Cidade: %s\n", imovel[i].cidade);
                printf("Endereco: %s\n", imovel[i].endereco);
                printf("Bairro: %s\n", imovel[i].bairro);
                printf("CEP: %s\n", imovel[i].cep);
                printf("Valor: %.1f\n", imovel[i].valor);
                printf("Disponibilidade do imovel: %s\n", imovel[i].disponivel);
                printf("Titulo de venda do imovel: %s\n", imovel[i].titulo);
                printf("Area do terreno : %f\n", imovel[i].terreno.area);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);
				
            }else {
                printf("Nao foram encontrados imoveis");
            }

        }
    }
    PAUSE;
}

void BuscaBairro(){
    CLEAR;
    char stringbairro[50];//variavel para busca de bairros
    int flag, i;

    printf("Digite o bairro do imovel desejado: ");
    fgets(stringbairro,50,stdin);
    stringbairro[strlen(stringbairro)-1] = '\0';
	CLEAR;

    for(i=0;i<100;i++){
        if(!strncmp(imovel[i].bairro, stringbairro, strlen(stringbairro))){
			if(imovel[i].estado == 1){

                printf("Imovel: Casa\n\n");
				printf("Cidade: %s\n", imovel[i].cidade);
                printf("Endereco: %s\n", imovel[i].endereco);
                printf("Bairro: %s\n", imovel[i].bairro);
                printf("CEP: %s\n", imovel[i].cep);
                printf("Valor: %.1f\n", imovel[i].valor);
                printf("Disponibilidade do imovel: %s\n", imovel[i].disponivel);
                printf("Titulo de venda do imovel: %s\n", imovel[i].titulo);
                printf("Pavimentos: %d\n", imovel[i].casa.pavimentos);
                printf("Quartos: %d\n", imovel[i].casa.quartos);
                printf("Area do terreno: %.1f\n", imovel[i].casa.areaTerreno);
                printf("Area construida: %.1f\n", imovel[i].casa.areaConst);
                printf("Posicao de cadastro do imovel: %d\n\n", i+1);

            }else if(imovel[i].estado == 2){

                printf("Imovel: Apartamento\n\n");
                printf("Cidade: %s\n", imovel[i].cidade);
                printf("Endereco: %s\n", imovel[i].endereco);
                printf("Bairro: %s\n", imovel[i].bairro);
                printf("CEP: %s\n", imovel[i].cep);
                printf("Valor: %.1f\n", imovel[i].valor);
                printf("Disponibilidade do imovel: %s\n", imovel[i].disponivel);
                printf("Titulo de venda imovel: %s\n", imovel[i].titulo);
                printf("Posicao : %s\n", imovel[i].apartamento.posicao);
				printf("Quartos : %d\n", imovel[i].apartamento.quartos);
				printf("Area : %f\n", imovel[i].apartamento.area);
				printf("Andar : %d\n", imovel[i].apartamento.andar);
				printf("Valor do condominio : %f\n", imovel[i].apartamento.valorCond);
				printf("Garagem : %d\n", imovel[i].apartamento.garagem);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);

            }else if(imovel[i].estado == 3){

                printf("Imovel: Terreno\n\n");
                printf("Cidade: %s\n", imovel[i].cidade);
                printf("Endereco: %s\n", imovel[i].endereco);
                printf("Bairro: %s\n", imovel[i].bairro);
                printf("CEP: %s\n", imovel[i].cep);
                printf("Valor: %.1f\n", imovel[i].valor);
                printf("Disponibilidade do imovel: %s\n", imovel[i].disponivel);
                printf("Titulo de venda do imovel: %s\n", imovel[i].titulo);
                printf("Area do terreno : %f\n", imovel[i].terreno.area);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);

            }else{
                printf("Imovel nao encontrado\n");
            }
        }

    }
    PAUSE;
}

void BuscaTitulo(){

    CLEAR;
    char stringtitulo[100];//variavel usada para buscar os titulos
    int i;
    printf("Digite o titulo do imovel desejado: ");
    fgets(stringtitulo,100,stdin);
    stringtitulo[strlen(stringtitulo)-1] = '\0';

	CLEAR;
	for(i=0;i<100;i++){
        if(!strncmp(imovel[i].titulo, stringtitulo, strlen(stringtitulo))){
            if(imovel[i].estado == 1){
                printf("Imovel: Casa\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
                printf("Endereco : %s\n", imovel[i].endereco);
                printf("CEP : %s\n", imovel[i].cep);
                printf("Valor : %.1f\n", imovel[i].valor);
                printf("Disponibilidade do imovel: %s\n", imovel[i].disponivel);
                printf("Titulo do imovel: %s\n", imovel[i].titulo);
                printf("Pavimentos : %d\n", imovel[i].casa.pavimentos);
                printf("Quartos : %d\n", imovel[i].casa.quartos);
                printf("Area do terreno : %.1f\n", imovel[i].casa.areaTerreno);
                printf("Area construida : %.1f\n\n\n", imovel[i].casa.areaConst);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);
            }else if(imovel[i].estado == 2){
                printf("Imovel: Apartamento\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
                printf("Endereco : %s\n", imovel[i].endereco);
                printf("CEP : %s\n", imovel[i].cep);
                printf("Valor: %.1f\n", imovel[i].valor);
                printf("Disponibilidade do imovel  %s\n", imovel[i].disponivel);
                printf("Titulo do imovel: %s\n", imovel[i].titulo);
                printf("Posicao : %s\n", imovel[i].apartamento.posicao);
				printf("Quartos : %d\n", imovel[i].apartamento.quartos);
				printf("Area : %f\n", imovel[i].apartamento.area);
				printf("Andar : %d\n", imovel[i].apartamento.andar);
				printf("Valor do condominio : %f\n", imovel[i].apartamento.valorCond);
				printf("Garagem : %d\n\n\n", imovel[i].apartamento.garagem);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);
            }else if(imovel[i].estado == 3){
                printf("Imovel: Terreno\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
                printf("Endereco : %s\n", imovel[i].endereco);
                printf("CEP : %s\n", imovel[i].cep);
                printf("Valor : %.1f\n", imovel[i].valor);
                printf("Disponibilidade do imovel: %s\n", imovel[i].disponivel);
                printf("Titulo do imovel : %s\n", imovel[i].titulo);
                printf("Area do terreno : %f\n\n\n", imovel[i].terreno.area);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);
            }else{
                printf("Imovel nao encontrado\n");
            }
        }

    }

    PAUSE;
}

//Salva as informacoes do imovel no vetor imovel e faz um arquivo .txt
void salvaArquivoImovel(int flag) {
	FILE* arquivo;
	int i;

	arquivo = fopen("dadosImovel.txt", "w");
	if (arquivo <= 0) {
		puts("!!!Erro ao abrir o arquivo!!!");
		return;
	}

	for (i = 0; i < 100; i++) {
		if (imovel[i].cidade[0] != 0) {//informacoes do cadastro
			fprintf(arquivo, "%s\n", imovel[i].cidade);
			fprintf(arquivo, "%s\n", imovel[i].bairro);
			fprintf(arquivo, "%s\n", imovel[i].endereco);
			fprintf(arquivo, "%s\n", imovel[i].cep);
			fprintf(arquivo, "%f\n", imovel[i].valor);
			fprintf(arquivo, "%s\n", imovel[i].disponivel);
			fprintf(arquivo, "%s\n", imovel[i].titulo);

			if (flag == 1) {//informacoes da casa
				fprintf(arquivo, "%d\n", imovel[i].casa.pavimentos);
				fprintf(arquivo, "%d\n", imovel[i].casa.quartos);
				fprintf(arquivo, "%f\n", imovel[i].casa.areaTerreno);
				fprintf(arquivo, "%f\n", imovel[i].casa.areaConst);
			}
			else if (flag == 2) {//informacoes do apartamento
				fprintf(arquivo, "%s\n", imovel[i].apartamento.posicao);
				fprintf(arquivo, "%d\n", imovel[i].apartamento.quartos);
				fprintf(arquivo, "%f\n", imovel[i].apartamento.area);
				fprintf(arquivo, "%d\n", imovel[i].apartamento.andar);
				fprintf(arquivo, "%f\n", imovel[i].apartamento.valorCond);
				fprintf(arquivo, "%d\n", imovel[i].apartamento.garagem);
			}
			else if (flag == 3) {//informacoes do terreno
				fprintf(arquivo, "%f\n", imovel[i].terreno.area);
			}
		}
	}

	fclose(arquivo);
}

int menu1() {//Menu de inicio do programa

	int tecla, posicao = 1;

	while (1) {

		CLEAR;

		if (posicao == 1) {
			printf("\n\tEscolha uma opcao:\n\n");
			printf("\t%sCadastrar Imovel\n", ">>");
			printf("Consultar imoveis disponiveis\n");
			printf("Buscar imoveis\n");
			printf("Imoveis disponiveis\n");
			printf("Excluir Imovel\n");
			printf("Editar imovel\n");
			printf("Ler lista\n");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 1;
			else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 8;
		}
		else if (posicao == 2) {
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("\t%sConsultar imoveis disponiveis\n", ">>");
			printf("Buscar imoveis\n");
			printf("Imoveis disponiveis\n");
			printf("Excluir Imovel\n");
			printf("Editar imovel\n");
			printf("Ler lista\n");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 2;
			else if (tecla == SETA_BAIXO)
				posicao = 3;
			else if(tecla == SETA_CIMA)
				posicao = 1;
		}
		else if (posicao == 3) {
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("Consultar imoveis disponiveis\n");
			printf("\t%sBuscar imoveis\n", ">>");
			printf("Imoveis disponiveis\n");
			printf("Excluir Imovel\n");
			printf("Editar imovel\n");
			printf("Ler lista\n");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 3;
			else if (tecla == SETA_BAIXO)
				posicao = 4;
			else if (tecla == SETA_CIMA)
				posicao = 2;
		}
		else if (posicao == 4) {
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("Consultar imoveis disponiveis\n");
			printf("Buscar imoveis\n");
			printf("\t%sImoveis disponiveis\n", ">>");
			printf("Excluir Imovel\n");
			printf("Editar imovel\n");
			printf("Ler lista\n");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 4;
			else if (tecla == SETA_BAIXO)
				posicao = 5;
			else if (tecla == SETA_CIMA)
				posicao = 3;
		}
		else if (posicao == 5) {
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("Consultar imoveis disponiveis\n");
			printf("Buscar imoveis\n");
			printf("Imoveis disponiveis\n");
			printf("\t%sExcluir Imovel\n", ">>");
			printf("Editar imovel\n");
			printf("Ler lista\n");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 5;
			else if (tecla == SETA_BAIXO)
				posicao = 6;
			else if (tecla == SETA_CIMA)
				posicao = 4;
		}
		else if (posicao == 6) {
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("Consultar imoveis disponiveis\n");
			printf("Buscar imoveis\n");
			printf("Imoveis disponiveis\n");
			printf("Excluir Imovel\n");
			printf("\t%sEditar imovel\n", ">>");
			printf("Ler lista\n");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 6;
			else if (tecla == SETA_BAIXO)
				posicao = 7;
			else if (tecla == SETA_CIMA)
				posicao = 5;

		}else if (posicao == 7) {
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("Consultar imoveis disponiveis\n");
			printf("Buscar imoveis\n");
			printf("Imoveis disponiveis\n");
			printf("Excluir Imovel\n");
			printf("Editar imovel\n");
			printf("\t%sLer lista\n", ">>");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 7;
			else if (tecla == SETA_BAIXO)
				posicao = 8;
			else if (tecla == SETA_CIMA)
				posicao = 6;
		}
		else if (posicao == 8) {
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("Consultar imoveis disponiveis\n");
			printf("Buscar imoveis\n");
			printf("Imoveis disponiveis\n");
			printf("Excluir Imovel\n");
			printf("Editar imovel\n");
			printf("Ler lista\n");
			printf("\t%sSair\n", ">>");

			tecla = getch();

			if (tecla == ENTER)
				return 8;
			else if (tecla == SETA_BAIXO)
				posicao = 1;
			else if (tecla == SETA_CIMA)
				posicao = 7;
		}
	}
}

int menu2() {//menu apos o usario selecionar a opção cadastrar

	int tecla, posicao = 1;

	while (1) {

		CLEAR;

		if (posicao == 1) {
			printf("\n\tEscolha uma opcao:\n\n");
			printf("\t%sCasa\n", ">>");
			printf("Apartamento\n");
			printf("Terreno\n");
			printf("Voltar\n");

			tecla = getch();

			if (tecla == ENTER)
				return 1;
			else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 4;
		}

		else if (posicao == 2) {
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Casa\n");
			printf("\t%sApartamento\n", ">>");
			printf("Terreno\n");
			printf("Voltar\n");

			tecla = getch();

			if (tecla == ENTER)
				return 2;
			else if (tecla == SETA_BAIXO)
				posicao = 3;
			else if (tecla == SETA_CIMA)
				posicao = 1;
		}

		else if (posicao == 3) {

			printf("\n\tEscolha uma opcao:\n\n");
			printf("Casa\n");
			printf("Apartamento\n");
			printf("\t%sTerreno\n", ">>");
			printf("Voltar\n");

			tecla = getch();

			if (tecla == ENTER)
				return 3;

			else if (tecla == SETA_BAIXO)
				posicao = 4;

			else if (tecla == SETA_CIMA)
				posicao = 2;
		}

		else if (posicao == 4) {
				printf("\n\tEscolha uma opcao:\n\n");
				printf("Casa\n", ">>");
				printf("Apartamento\n");
				printf("Terreno\n");
				printf("\t%sVoltar\n", ">>");

				tecla = getch();

				if (tecla == ENTER)
					return 4;
				else if (tecla == SETA_BAIXO)
					posicao = 1;
				else if (tecla == SETA_CIMA)
					posicao = 3;
		}
	}
}

//menu para salvar as informacoes no arquivo
int menu3(int flag){
    int tecla, posicao = 1;

	while (1){

		CLEAR;

		if (posicao == 1){
			printf("\n\tDeseja salvar as informacoes?\n\n");
			printf("\t%sSim\n", ">>");
			printf("Nao\n");

			tecla = getch();

			if (tecla == ENTER){
                salvaArquivoImovel(flag);
				return 1;
			}
			else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 2;
		}
		else if (posicao == 2){
			printf("\n\tDeseja salvar as informacoes?\n\n");
			printf("Sim\n");
			printf("\t%sNao\n", ">>");

			tecla = getch();

			if (tecla == ENTER)
				return 1;
			else if (tecla == SETA_BAIXO)
				posicao = 1;
			else if (tecla == SETA_CIMA)
				posicao = 1;
		}
	}
}

int menu4(){

	int tecla, posicao = 1;

	while (1){

		CLEAR;

		if (posicao == 1){
			printf("\n\tEscolha uma opcao:\n\n");
			printf("\t%sTitulo\n", ">>");
			printf("Bairro\n");
			printf("Valor\n");
			printf("Voltar\n");

			tecla = getch();

			if (tecla == ENTER)
				return 1;
			else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 3;
		}
		else if (posicao == 2){
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Titulo\n");
			printf("\t%sBairro\n", ">>");
			printf("Valor\n");
			printf("Voltar\n");

			tecla = getch();

			if (tecla == ENTER)
				return 2;
			else if (tecla == SETA_BAIXO)
				posicao = 3;
			else if (tecla == SETA_CIMA)
				posicao = 1;
		}
		else if (posicao == 3){

			printf("\n\tEscolha uma opcao:\n\n");
			printf("Titulo\n");
			printf("Bairro\n");
			printf("\t%sValor\n", ">>");
			printf("Voltar\n");

			tecla = getch();

			if (tecla == ENTER)
				return 3;

			else if (tecla == SETA_BAIXO)
				posicao = 4;

			else if (tecla == SETA_CIMA)
				posicao = 2;
		}
		else if (posicao == 4){
				printf("\n\tEscolha uma opcao:\n\n");
			printf("Titulo\n");
			printf("Bairro\n");
			printf("Valor\n");
			printf("\t%sVoltar\n", ">>");

				tecla = getch();

				if (tecla == ENTER)
					return 4;
				else if (tecla == SETA_BAIXO)
					posicao = 1;
				else if (tecla == SETA_CIMA)
					posicao = 3;
		}
	}
}

int menu5(){
	int tecla, posicao = 1;

	while (1){

		CLEAR;

		if (posicao == 1){
			printf("\n\tEscolha uma opcao:\n\n");
			printf("\t%sAluguel\n", ">>");
			printf("Venda\n");
			printf("Voltar\n");

			tecla = getch();

			if (tecla == ENTER){
				return 1;
			}
			else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 3;
		}else if (posicao == 2){
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Aluguel\n");
			printf("\t%sVenda\n", ">>");
			printf("Voltar\n");

			tecla = getch();

			if (tecla == ENTER)
				return 2;
			else if (tecla == SETA_BAIXO)
				posicao = 3;
			else if (tecla == SETA_CIMA)
				posicao = 1;
		}else if (posicao == 3){
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Aluguel\n");
			printf("Venda\n");
			printf("\t%sVoltar\n", ">>");

			tecla = getch();

			if (tecla == ENTER)
				return 3;
			else if (tecla == SETA_BAIXO)
				posicao = 1;
			else if (tecla == SETA_CIMA)
				posicao = 2;
		}

	}
}

void CadastroAll(int flag){

	 int i;

    while(1){
		
		int posVaga = -1;
      	
		for(i = 0; i<100; i++){
			if(imovel[i].titulo[0] == 0){
				posVaga = i;
				break;
			}
        }

		CLEAR;

        if(flag == 1){
			imovel[posVaga].estado = 1;
			printf("Digite a cidade do seu imovel : ");
			fgets(imovel[posVaga].cidade,100,stdin);
			imovel[posVaga].cidade[strlen(imovel[posVaga].cidade)-1] = '\0';

			printf("Digite o bairro do seu imovel : ");
			fgets(imovel[posVaga].bairro,100,stdin);
			imovel[posVaga].bairro[strlen(imovel[posVaga].bairro)-1] = '\0';
			
			printf("Digite o endereco do seu imovel : ");
			fgets(imovel[posVaga].endereco,100,stdin);
			imovel[posVaga].endereco [strlen(imovel[posVaga].endereco)-1] = '\0';

			printf("Digite o CEP do seu imovel : ");
			fgets(imovel[posVaga].cep,15,stdin);
			imovel[posVaga].cep [strlen(imovel[posVaga].cep)-1] = '\0';

			printf("Digite o valor do seu imovel : ");
			scanf("%f", &imovel[posVaga].valor);
			FLUSH;

			printf("Digite a disponibilidade do seu imovel (Aluguel ou Venda) : ");
			fgets(imovel[posVaga].disponivel,10,stdin);
			imovel[posVaga].disponivel [strlen(imovel[posVaga].disponivel)-1] = '\0';

			printf("Digite ao titulo de venda do seu imovel : ");
			fgets(imovel[posVaga].titulo,100,stdin);
			imovel[posVaga].titulo [strlen(imovel[posVaga].titulo)-1] = '\0';
			
            printf("Digite a quantidade de pavimentos da casa : ");
            scanf("%d", &imovel[posVaga].casa.pavimentos);
            FLUSH;

            printf("Digite a quantidade de quartos da casa : ");
            scanf("%d", &imovel[posVaga].casa.quartos);
            FLUSH;

            printf("Digite a area total do terreno (em metros quadrados) : ");
            scanf("%f", &imovel[posVaga].casa.areaTerreno);
            FLUSH;

            printf("Digite a area construida (em metros quadrados) : ");
            scanf("%f", &imovel[posVaga].casa.areaConst);
            FLUSH;

			break;

        }else if(flag == 2){

			imovel[posVaga].estado = 2;
			printf("Digite a cidade do seu imovel : ");
			fgets(imovel[posVaga].cidade,100,stdin);
			imovel[posVaga].cidade[strlen(imovel[posVaga].cidade)-1] = '\0';

			printf("Digite o bairro do seu imovel : ");
			fgets(imovel[posVaga].bairro,100,stdin);
			imovel[posVaga].bairro [strlen(imovel[posVaga].bairro)-1] = '\0';
			
			printf("Digite o endereco do seu imovel : ");
			fgets(imovel[posVaga].endereco,100,stdin);
			imovel[posVaga].endereco [strlen(imovel[posVaga].endereco)-1] = '\0';

			printf("Digite o CEP do seu imovel : ");
			fgets(imovel[posVaga].cep,15,stdin);
			imovel[posVaga].cep [strlen(imovel[posVaga].cep)-1] = '\0';

			printf("Digite o valor do seu imovel : ");
			scanf("%f", &imovel[posVaga].valor);
			FLUSH;

			printf("Digite a disponibilidade do seu imovel (Aluguel ou Venda) : ");
			fgets(imovel[posVaga].disponivel,10,stdin);
			imovel[posVaga].disponivel [strlen(imovel[posVaga].disponivel)-1] = '\0';

			printf("Digite ao titulo de venda do seu imovel : ");
			fgets(imovel[posVaga].titulo,100,stdin);
			imovel[posVaga].titulo [strlen(imovel[posVaga].titulo)-1] = '\0';

            printf("Digite a posicao do apartamento : ");
            fgets(imovel[posVaga].apartamento.posicao,100,stdin);
            imovel[posVaga].apartamento.posicao [strlen(imovel[posVaga].apartamento.posicao)-1] = '\0';

            printf("Digite a quantidade de quartos do apartamento : ");
            scanf("%d", &imovel[posVaga].apartamento.quartos);
            FLUSH;

            printf("Digite a area total do apartamento(em metros quadrados) : ");
            scanf("%f", &imovel[posVaga].apartamento.area);
            FLUSH;

            printf("Digite o andar do apartamento : ");
            scanf("%d", &imovel[posVaga].apartamento.andar);
            FLUSH;

            printf("Digite o valor do condominio : ");
            scanf("%f", &imovel[posVaga].apartamento.valorCond);

            printf("Digite o numero de vagas de garagem : ");
            scanf("%d", &imovel[posVaga].apartamento.garagem);
            FLUSH;

            break;

        }else if(flag == 3){

			imovel[posVaga].estado = 3;
			printf("Digite a cidade do seu imovel : ");
			fgets(imovel[posVaga].cidade,100,stdin);
			imovel[posVaga].cidade[strlen(imovel[posVaga].cidade)-1] = '\0';

			printf("Digite o bairro do seu imovel : ");
			fgets(imovel[posVaga].bairro,100,stdin);
			imovel[posVaga].bairro [strlen(imovel[posVaga].bairro)-1] = '\0';
			
			printf("Digite o endereco do seu imovel : ");
			fgets(imovel[posVaga].endereco,100,stdin);
			imovel[posVaga].endereco [strlen(imovel[posVaga].endereco)-1] = '\0';

			printf("Digite o CEP do seu imovel : ");
			fgets(imovel[posVaga].cep,15,stdin);
			imovel[posVaga].cep [strlen(imovel[posVaga].cep)-1] = '\0';

			printf("Digite o valor do seu imovel : ");
			scanf("%f", &imovel[posVaga].valor);
			FLUSH;

			printf("Digite a disponibilidade do seu imovel (Aluguel ou Venda) : ");
			fgets(imovel[posVaga].disponivel,10,stdin);
			imovel[posVaga].disponivel [strlen(imovel[posVaga].disponivel)-1] = '\0';

			printf("Digite ao titulo de venda do seu imovel : ");
			fgets(imovel[posVaga].titulo,100,stdin);
			imovel[posVaga].titulo [strlen(imovel[posVaga].titulo)-1] = '\0';

            printf("Digite a area do terreno (em metros quadrados) : ");
            scanf("%f", &imovel[posVaga].terreno.area);
            FLUSH;

			break;
        }
        i++;
	}
}

void Exibe(){//Função que exibe imoveis disponiveis

	CLEAR;
	int i,cont = 0;
	for(i=0;i<100;i++){
		if(imovel[i].cidade[0] != 0){

			if(imovel[i].estado == 1){
				//print das informações da casa
				printf("Imovel : Casa\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
				printf("Bairro : %s\n", imovel[i].bairro);
				printf("Endereco : %s\n", imovel[i].endereco);
				printf("CEP : %s\n", imovel[i].cep);
				printf("Valor : %.1f\n", imovel[i].valor);
				printf("Disponibilidade : %s\n", imovel[i].disponivel);
				printf("Titulo do imovel : %s\n", imovel[i].titulo);
				printf("Pavimentos : %d\n", imovel[i].casa.pavimentos);
				printf("Quartos : %d\n", imovel[i].casa.quartos);
				printf("Area do terreno : %.1f\n", imovel[i].casa.areaTerreno);
				printf("Area construida : %.1f\n\n\n", imovel[i].casa.areaConst);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);
				cont++;
			}else if(imovel[i].estado == 2){
				//print das informações do apartamento
				printf("Imovel : Apartamento\n\n");
				printf("Cidade: %s\n", imovel[i].cidade);
				printf("Bairro : %s\n", imovel[i].bairro);
				printf("Endereco: %s\n", imovel[i].endereco);
				printf("CEP: %s\n", imovel[i].cep);
				printf("Valor: %.1f\n", imovel[i].valor);
				printf("Disponibilidade : %s\n", imovel[i].disponivel);
				printf("Titulo do imovel : %s\n", imovel[i].titulo);
				printf("Posicao : %s\n", imovel[i].apartamento.posicao);
				printf("Quartos : %d\n", imovel[i].apartamento.quartos);
				printf("Area : %f\n", imovel[i].apartamento.area);
				printf("Andar : %d\n", imovel[i].apartamento.andar);
				printf("Valor do condominio : %f\n", imovel[i].apartamento.valorCond);
				printf("Garagem : %d\n\n\n", imovel[i].apartamento.garagem);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);
				cont++;
			}else if(imovel[i].estado == 3){
				//print das informações do terreno
				printf("Imovel : Terreno\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
				printf("Bairro : %s\n", imovel[i].bairro);
				printf("Endereco : %s\n", imovel[i].endereco);
				printf("CEP: %s\n", imovel[i].cep);
				printf("Valor : %.1f\n", imovel[i].valor);
				printf("Disponibilidade : %s\n", imovel[i].disponivel);
				printf("Titulo do imovel : %s\n", imovel[i].titulo);
				printf("Area do terreno : %f\n\n\n", imovel[i].terreno.area);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);
				cont++;
			}
		}
	}
	printf("Restam %d vagas para cadastro\n\n", i-cont);		
	PAUSE;
}


int main(void) {

    int flagmenu = 0, flaglobal;

    while(1){

        switch(menu1()){
            case 1:
                flagmenu = 1;
                CLEAR;
                switch(menu2()){
					case 1:
						CadastroAll(1);
						menu3(1);
						flagmenu = 0;
						break;
					case 2:
						CadastroAll(2);
						menu3(2);
						flagmenu = 0;
						break;
					case 3:
						CadastroAll(3);
						menu3(3);
						flagmenu = 0;
						break;
					case 4:
						flagmenu = 0;
						break;
				}
				break;
            case 2:
				Exibe();
				break;
			case 3:
				switch (menu4()){
					case 1:
						BuscaTitulo();
						flagmenu = 0;
						break;
					case 2:
						BuscaBairro();
						flagmenu = 0;
						break;
					case 3:
						BuscaValor();
						flagmenu = 0;
						break;
					case 4:
						flagmenu = 0;
						break;
				}
				break;
			case 4:
				switch(menu5()){
					case 1:
						disponibilidade(1);
						flagmenu = 0;
						break;
					case 2:
						disponibilidade(2);
						flagmenu = 0;
						break;
					case 3:
						flagmenu = 0;
						break;
				}
				break;
			case 5:
				DeletaImovel();
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				flagmenu = 1;
				break;
        }
        if(flagmenu)
            break;
    }

	return 0;
}