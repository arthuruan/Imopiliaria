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

	printf("---------------Seja bem-vindo ao Imopiilaria---------------\n\n\n\n\n");

	system("pause");

	while (1) {

		CLEAR;

		if (posicao == 1) {
			printf("Escolha uma opcao:\n");
			printf("\t%sCadastrar Imovel\n", ">>");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 1;
			else if (tecla == SETA_BAIXO || tecla == SETA_CIMA)
				posicao = 2;
		}

		else if (posicao == 2) {
			printf("Escolha uma opção:\n");
			printf("Cadastrar Imovel\n");
			printf("\t%sSair\n", ">>");

			tecla = getch();

			if (tecla == ENTER)
				return 2;
			else if (tecla == SETA_BAIXO || tecla == SETA_CIMA)
				posicao = 1;
		}
	}
}

int menu2() {//menu apos o usario selecionar a opção cadastrar

	int tecla, posicao = 1;

	while (1) {

		CLEAR;

		if (posicao == 1) {
			printf("Escolha uma opcao:\n");
			printf("\t%sCasa\n", ">>");
			printf("Apartamento\n");
			printf("Terreno\n");

			tecla = getch();

			if (tecla == ENTER)
				return 3;
			else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 3;
		}

		else if (posicao == 2) {
			printf("Escolha uma opcao:\n");
			printf("Casa\n");
			printf("\t%sApartamento\n", ">>");
			printf("Terreno\n");

			tecla = getch();

			if (tecla == ENTER)
				return 4;
			else if (tecla == SETA_BAIXO)
				posicao = 3;
			else if (tecla == SETA_CIMA)
				posicao = 1;
		}

		else if (posicao == 3) {

			printf("Escolha uma opcao:\n");
			printf("Casa\n");
			printf("Apartamento\n");
			printf("\t%sTerreno\n", ">>");

			tecla = getch();

			if (tecla == ENTER)
				return 5;

			else if (tecla == SETA_BAIXO)
				posicao = 1;

			else if (tecla == SETA_CIMA)
				posicao = 2;
		}

	}
}

int main(void) {

    int flagmenu=0;

    while(1){
        switch(menu1()){
            case 1:
                flagmenu = 1;
                system("cls");
                menu2();
                break;
            case 2:
                return 0;
        }
        if(flagmenu)
            break;
    }
	return 0;
}