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
    t_casa casa;
    t_apartamento apartamento;
    t_terreno terreno;
}t_cadastro;

t_cadastro imovel[100];

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
			printf("Salvar lista\n");
			printf("Ler lista\n");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 1;
			else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 9;
		}
		else if (posicao == 2) {
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("\t%sConsultar imoveis disponiveis\n", ">>");
			printf("Buscar imoveis\n");
			printf("Imoveis disponiveis\n");
			printf("Excluir Imovel\n");
			printf("Editar imovel\n");
			printf("Salvar lista\n");
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
			printf("Salvar lista\n");
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
			printf("Salvar lista\n");
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
			printf("Salvar lista\n");
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
			printf("Salvar lista\n");
			printf("Ler lista\n");
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
			printf("\t%sSalvar lista\n", ">>");
			printf("Ler lista\n");
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
			printf("Salvar lista\n");
			printf("\t%sLer lista\n", ">>");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 8;
			else if (tecla == SETA_BAIXO)
				posicao = 9;
			else if (tecla == SETA_CIMA)
				posicao = 7;
		}
		else if (posicao == 9) {
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("Consultar imoveis disponiveis\n");
			printf("Buscar imoveis\n");
			printf("Imoveis disponiveis\n");
			printf("Excluir Imovel\n");
			printf("Editar imovel\n");
			printf("Salvar lista\n");
			printf("Ler lista\n");
			printf("\t%sSair\n", ">>");

			tecla = getch();

			if (tecla == ENTER)
				return 9;
			else if (tecla == SETA_BAIXO)
				posicao = 1;
			else if (tecla == SETA_CIMA)
				posicao = 8;
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
				posicao = 3;
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

void CadastroAll(int flag){

	int i;

    while(1){

		CLEAR;
        printf("Digite a cidade do seu imovel : ");
        fgets(imovel[i].cidade,100,stdin);
        imovel[i].cidade[strlen(imovel[i].cidade)-1] = '\0';

        printf("Digite o endereco do seu imovel : ");
        fgets(imovel[i].endereco,100,stdin);
        imovel[i].endereco [strlen(imovel[i].endereco)-1] = '\0';

        printf("Digite o CEP do seu imovel : ");
        fgets(imovel[i].cep,15,stdin);
        imovel[i].cep [strlen(imovel[i].cep)-1] = '\0';

        printf("Digite o valor do seu imovel : ");
        scanf("%f", &imovel[i].valor);
        FLUSH;

        printf("Digite a disponibilidade do seu imovel (Aluguel ou Venda) : ");
        fgets(imovel[i].disponivel,10,stdin);
        imovel[i].disponivel [strlen(imovel[i].disponivel)-1] = '\0';

        printf("Digite ao titulo de venda do seu imovel : ");
        fgets(imovel[i].titulo,100,stdin);
        imovel[i].titulo [strlen(imovel[i].titulo)-1] = '\0';

        if(flag == 1){
            printf("Digite a quantidade de pavimentos da casa : ");
            scanf("%d", &imovel[i].casa.pavimentos);
            FLUSH;

            printf("Digite a quantidade de quartos da casa : ");
            scanf("%d", &imovel[i].casa.quartos);
            FLUSH;

            printf("Digite a area total do terreno (em metros quadrados) : ");
            scanf("%f", &imovel[i].casa.areaTerreno);
            FLUSH;

            printf("Digite a area construida (em metros quadrados) : ");
            scanf("%f", &imovel[i].casa.areaConst);
            FLUSH;

			break;

        }else if(flag == 2){
            
            printf("Digite a posicao do apartamento : ");
            fgets(imovel[i].apartamento.posicao,100,stdin);
            imovel[i].apartamento.posicao [strlen(imovel[i].apartamento.posicao)-1] = '\0';

            printf("Digite a quantidade de quartos do apartamento : ");
            scanf("%d", &imovel[i].apartamento.quartos);
            FLUSH;

            printf("Digite a area total do apartamento(em metros quadrados) : ");
            scanf("%f", &imovel[i].apartamento.area);
            FLUSH;

            printf("Digite o andar do apartamento : ");
            scanf("%d", &imovel[i].apartamento.andar);
            FLUSH;

            printf("Digite o valor do condominio : ");
            scanf("%f", &imovel[i].apartamento.valorCond);

            printf("Digite o numero de vagas de garagem : ");
            scanf("%d", &imovel[i].apartamento.garagem);
            FLUSH;

            break;

        }else if(flag == 3){
            printf("Digite a area do terreno (em metros quadrados) : ");
            scanf("%f", &imovel[i].terreno.area);
            FLUSH;

			break;

        }
        i++;
	}
}

void ExibiAll(){//em teste

	CLEAR;

	for(int i = 0; i<3; i++){
        //if(imovel[i].titulo[0] != 0)
			printf("cidade: %s\n", imovel[i].cidade);
			printf("endereco: %s\n", imovel[i].endereco);
			printf("CEP: %s\n", imovel[i].cep);
			printf("valor: %.1f\n", imovel[i].valor);
			printf("disponivel: %s\n", imovel[i].disponivel);
			printf("titulo: %s\n", imovel[i].titulo);
			printf("pavimentos: %d\n", imovel[i].casa.pavimentos);
			printf("quartos: %d\n", imovel[i].casa.quartos);
			printf("Area do terreno: %.1f\n", imovel[i].casa.areaTerreno);
			printf("Area construida: %.1f\n\n\n", imovel[i].casa.areaConst);
			//getchar();
        }		
		//else break;
	}

	system("pause");
}

int main(void) {

    int flagmenu = 0;

    while(1){

        switch(menu1()){
            case 1:
                flagmenu = 1;
                CLEAR;
                switch(menu2()){
					case 1:
						CadastroAll(1);
						flagmenu = 0;
						break;
					case 2:
						CadastroAll(2);
						flagmenu = 0;
						break;
					case 3:
						CadastroAll(3);
						flagmenu = 0;
						break;
					case 4:
						flagmenu = 0;
						break;
				}
                break;
            case 2:
                break;
			case 3:
				ExibiAll();
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				flagmenu = 1;
				break;
        }
        if(flagmenu)
            break;
    }

	return 0;
}