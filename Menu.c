#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "Menu.h"
#include "Arquivo.h"

//Menu de inicio do programa
int menu1() {

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
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 1;
			else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 7;
		}else if (posicao == 2) {
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("\t%sConsultar imoveis disponiveis\n", ">>");
			printf("Buscar imoveis\n");
			printf("Imoveis disponiveis\n");
			printf("Excluir Imovel\n");
			printf("Editar imovel\n");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 2;
			else if (tecla == SETA_BAIXO)
				posicao = 3;
			else if (tecla == SETA_CIMA)
				posicao = 1;
		}else if (posicao == 3) {
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("Consultar imoveis disponiveis\n");
			printf("\t%sBuscar imoveis\n", ">>");
			printf("Imoveis disponiveis\n");
			printf("Excluir Imovel\n");
			printf("Editar imovel\n");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 3;
			else if (tecla == SETA_BAIXO)
				posicao = 4;
			else if (tecla == SETA_CIMA)
				posicao = 2;
		}else if (posicao == 4) {
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("Consultar imoveis disponiveis\n");
			printf("Buscar imoveis\n");
			printf("\t%sImoveis disponiveis\n", ">>");
			printf("Excluir Imovel\n");
			printf("Editar imovel\n");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 4;
			else if (tecla == SETA_BAIXO)
				posicao = 5;
			else if (tecla == SETA_CIMA)
				posicao = 3;
		}else if (posicao == 5) {
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("Consultar imoveis disponiveis\n");
			printf("Buscar imoveis\n");
			printf("Imoveis disponiveis\n");
			printf("\t%sExcluir Imovel\n", ">>");
			printf("Editar imovel\n");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 5;
			else if (tecla == SETA_BAIXO)
				posicao = 6;
			else if (tecla == SETA_CIMA)
				posicao = 4;
		}else if (posicao == 6) {
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("Consultar imoveis disponiveis\n");
			printf("Buscar imoveis\n");
			printf("Imoveis disponiveis\n");
			printf("Excluir Imovel\n");
			printf("\t%sEditar imovel\n", ">>");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 6;
			else if (tecla == SETA_BAIXO)
				posicao = 7;
			else if (tecla == SETA_CIMA)
				posicao = 5;

		}
		else if (posicao == 7) {
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("Consultar imoveis disponiveis\n");
			printf("Buscar imoveis\n");
			printf("Imoveis disponiveis\n");
			printf("Excluir Imovel\n");
			printf("Editar imovel\n");
			printf("\t%sSair\n", ">>");

			tecla = getch();

			if (tecla == ENTER)
				return 7;
			else if (tecla == SETA_BAIXO)
				posicao = 1;
			else if (tecla == SETA_CIMA)
				posicao = 6;
		}
	}
}

//Menu apos o usario selecionar a opção cadastrar
int menu2() {

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
		}else if (posicao == 2) {
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
		}else if (posicao == 3) {

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
		}else if (posicao == 4) {
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

int menu3(int pos){//menu para salvar as informacoes no arquivo

    int tecla, posicao = 1;

	while (1) {

		CLEAR;

		if (posicao == 1) {
			printf("\n\tDeseja salvar as informacoes?\n\n");
			printf("\t%sSim\n", ">>");
			printf("Nao\n");

			tecla = getch();

			if (tecla == ENTER) {
				salvaArquivoImovel();
				return 1;
			}else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 2;
		}else if (posicao == 2){
			printf("\n\tDeseja salvar as informacoes?\n\n");
			printf("Sim\n");
			printf("\t%sNao\n", ">>");

			tecla = getch();

			if (tecla == ENTER){
                deletavetor(pos);
				return 1;
			}
			else if (tecla == SETA_BAIXO)
				posicao = 1;
			else if (tecla == SETA_CIMA)
				posicao = 1;
		}
	}
}

int menu4(){//menu para as funções de buscar por titulo, bairro e valor

	int tecla, posicao = 1;

	while (1) {

		CLEAR;

		if (posicao == 1) {
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
		}else if (posicao == 2){
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
		}else if (posicao == 3){
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
		}else if (posicao == 4){
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

int menu5(){//menu feito para a função disponibilidade, com opções de alguel e venda

	int tecla, posicao = 1;

	while (1) {

		CLEAR;

		if (posicao == 1) {
			printf("\n\tEscolha uma opcao:\n\n");
			printf("\t%sAluguel\n", ">>");
			printf("Venda\n");
			printf("Voltar\n");

			tecla = getch();

			if (tecla == ENTER) {
				return 1;
			}
			else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 3;
		}
		else if (posicao == 2) {
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
		}
		else if (posicao == 3) {
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

//Menu de confirmação de edição de imoveis
int menu6() {
	int tecla, posicao = 1;

	while (1) {

		CLEAR;

		if (posicao == 1) {
			printf("\n\tDeseja editar esse imovel?\n\n");
			printf("\t%sSim\n", ">>");
			printf("Nao\n");

			tecla = getch();

			if (tecla == ENTER) {
				return 1;
			}
			else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 2;
		}
		else if (posicao == 2) {
			printf("\n\tDeseja editar esse imovel?\n\n");
			printf("Sim\n");
			printf("\t%sNao\n", ">>");

			tecla = getch();

			if (tecla == ENTER)
				return 0;
			else if (tecla == SETA_BAIXO)
				posicao = 1;
			else if (tecla == SETA_CIMA)
				posicao = 1;
		}
	}
}
//Função confirma? sim ou nao.
int menu7() {
	int tecla, posicao = 1;

	while (1) {

		CLEAR;

		if (posicao == 1) {
			printf("\n\tConfirmar?\n\n");
			printf("\t%sSim\n", ">>");
			printf("Nao\n");

			tecla = getch();

			if (tecla == ENTER) {
				return 1;
			}
			else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 2;
		}
		else if (posicao == 2) {
			printf("\n\tConfirmar?\n\n");
			printf("Sim\n");
			printf("\t%sNao\n", ">>");

			tecla = getch();

			if (tecla == ENTER)
				return 0;
			else if (tecla == SETA_BAIXO)
				posicao = 1;
			else if (tecla == SETA_CIMA)
				posicao = 1;
		}
	}
}
