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

int menu1() {//Menu de inicio do programa

	int tecla, posicao = 1;

	while (1) {

		CLEAR;

		if (posicao == 1) {
			printf("\n\tSeja bem-vindo ao Imopiilaria\n\n");
			printf("Escolha uma opcao:\n\n");
			printf("\t%sCadastrar Imovel\n", ">>");
			printf("Excluir Imovel\n");
			printf("Salvar\n");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 1;
			else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 4;
		}

		else if (posicao == 2) {
			printf("\n\tSeja bem-vindo ao Imopiilaria\n\n");
			printf("Escolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("\t%sExcluir Imovel\n", ">>");
			printf("Salvar\n");
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
			printf("\n\tSeja bem-vindo ao Imopiilaria\n\n");
			printf("Escolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("Excluir Imovel\n");
			printf("\t%sSalvar\n", ">>");
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
			printf("\n\tSeja bem-vindo ao Imopiilaria\n\n");
			printf("Escolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("Excluir Imovel\n");
			printf("Salvar\n");
			printf("\t%sSair\n", ">>");

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

int menu2() {//menu apos o usario selecionar a opção cadastrar

	int tecla, posicao = 1;

	while (1) {

		CLEAR;

		if (posicao == 1) {
			printf("Escolha uma opcao:\n\n");
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
				posicao = 3;
		}

		else if (posicao == 2) {
			printf("Escolha uma opcao:\n\n");
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

			printf("Escolha uma opcao:\n\n");
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
				printf("Escolha uma opcao:\n\n");
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

int main(void) {

    int flagmenu=0;

    while(1){

        switch(menu1()){
            case 1:
                flagmenu = 1;
                CLEAR;
                switch(menu2()){
					case 1:
						break;
					case 2:
						break;
					case 3:
						break;
					case 4:
						break;
				}
                break;
            case 2:
                break;
			case 3:
				break;
			case 4:
				break;
        }
        if(flagmenu)
            break;
    }
}