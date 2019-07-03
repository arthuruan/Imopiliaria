/*
Imopiliaria
Produtores: Arthur Dionizio, Arthur Ruan, Samuel Laerte, Thiago Palacios.
versão alpha: 0.1
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
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
//                          função de cadastro
void CadastroAll(int flag) {

	int i;

	while (1) {

		int posVaga = -1;

		for (i = 0; i < 100; i++) {
			if (imovel[i].titulo[0] == 0) {
				posVaga = i;
				break;
			}
		}

		CLEAR;

		if (flag == 1) {
			imovel[posVaga].estado = 1;
			printf("Digite a cidade do seu imovel : ");
			fgets(imovel[posVaga].cidade, 100, stdin);
			imovel[posVaga].cidade[strlen(imovel[posVaga].cidade) - 1] = '\0';

			printf("Digite o bairro do seu imovel : ");
			fgets(imovel[posVaga].bairro, 100, stdin);
			imovel[posVaga].bairro[strlen(imovel[posVaga].bairro) - 1] = '\0';

			printf("Digite o endereco do seu imovel : ");
			fgets(imovel[posVaga].endereco, 100, stdin);
			imovel[posVaga].endereco[strlen(imovel[posVaga].endereco) - 1] = '\0';

			printf("Digite o CEP do seu imovel : ");
			fgets(imovel[posVaga].cep, 15, stdin);
			imovel[posVaga].cep[strlen(imovel[posVaga].cep) - 1] = '\0';

			printf("Digite o valor do seu imovel : ");
			scanf("%f", &imovel[posVaga].valor);
			FLUSH;

			printf("Digite a disponibilidade do seu imovel (Aluguel ou Venda) : ");
			fgets(imovel[posVaga].disponivel, 10, stdin);
			imovel[posVaga].disponivel[strlen(imovel[posVaga].disponivel) - 1] = '\0';

			printf("Digite ao titulo de venda do seu imovel : ");
			fgets(imovel[posVaga].titulo, 100, stdin);
			imovel[posVaga].titulo[strlen(imovel[posVaga].titulo) - 1] = '\0';

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

		}
		else if (flag == 2) {

			imovel[posVaga].estado = 2;
			printf("Digite a cidade do seu imovel : ");
			fgets(imovel[posVaga].cidade, 100, stdin);
			imovel[posVaga].cidade[strlen(imovel[posVaga].cidade) - 1] = '\0';

			printf("Digite o bairro do seu imovel : ");
			fgets(imovel[posVaga].bairro, 100, stdin);
			imovel[posVaga].bairro[strlen(imovel[posVaga].bairro) - 1] = '\0';

			printf("Digite o endereco do seu imovel : ");
			fgets(imovel[posVaga].endereco, 100, stdin);
			imovel[posVaga].endereco[strlen(imovel[posVaga].endereco) - 1] = '\0';

			printf("Digite o CEP do seu imovel : ");
			fgets(imovel[posVaga].cep, 15, stdin);
			imovel[posVaga].cep[strlen(imovel[posVaga].cep) - 1] = '\0';

			printf("Digite o valor do seu imovel : ");
			scanf("%f", &imovel[posVaga].valor);
			FLUSH;

			printf("Digite a disponibilidade do seu imovel (Aluguel ou Venda) : ");
			fgets(imovel[posVaga].disponivel, 10, stdin);
			imovel[posVaga].disponivel[strlen(imovel[posVaga].disponivel) - 1] = '\0';

			printf("Digite ao titulo de venda do seu imovel : ");
			fgets(imovel[posVaga].titulo, 100, stdin);
			imovel[posVaga].titulo[strlen(imovel[posVaga].titulo) - 1] = '\0';

			printf("Digite a posicao do apartamento : ");
			fgets(imovel[posVaga].apartamento.posicao, 100, stdin);
			imovel[posVaga].apartamento.posicao[strlen(imovel[posVaga].apartamento.posicao) - 1] = '\0';

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

		}
		else if (flag == 3) {

			imovel[posVaga].estado = 3;
			printf("Digite a cidade do seu imovel : ");
			fgets(imovel[posVaga].cidade, 100, stdin);
			imovel[posVaga].cidade[strlen(imovel[posVaga].cidade) - 1] = '\0';

			printf("Digite o bairro do seu imovel : ");
			fgets(imovel[posVaga].bairro, 100, stdin);
			imovel[posVaga].bairro[strlen(imovel[posVaga].bairro) - 1] = '\0';

			printf("Digite o endereco do seu imovel : ");
			fgets(imovel[posVaga].endereco, 100, stdin);
			imovel[posVaga].endereco[strlen(imovel[posVaga].endereco) - 1] = '\0';

			printf("Digite o CEP do seu imovel : ");
			fgets(imovel[posVaga].cep, 15, stdin);
			imovel[posVaga].cep[strlen(imovel[posVaga].cep) - 1] = '\0';

			printf("Digite o valor do seu imovel : ");
			scanf("%f", &imovel[posVaga].valor);
			FLUSH;

			printf("Digite a disponibilidade do seu imovel (Aluguel ou Venda) : ");
			fgets(imovel[posVaga].disponivel, 10, stdin);
			imovel[posVaga].disponivel[strlen(imovel[posVaga].disponivel) - 1] = '\0';

			printf("Digite ao titulo de venda do seu imovel : ");
			fgets(imovel[posVaga].titulo, 100, stdin);
			imovel[posVaga].titulo[strlen(imovel[posVaga].titulo) - 1] = '\0';

			printf("Digite a area do terreno (em metros quadrados) : ");
			scanf("%f", &imovel[posVaga].terreno.area);
			FLUSH;

			break;
		}
		i++;
	}
}

//                       ler todas as informações do vetor imovel contidas no arquivo .txt
void lerArquivoImovel() {
	FILE* arquivo;
	int i;

	arquivo = fopen("dadosImovel.txt", "r");
	if (arquivo <= 0) {
		puts("!!!Erro ao abrir o arquivo!!!");
		return;
	}

	for (i = 0; i < 100; i++) {
		if (feof(arquivo))
			break;

		//ler cadastro
		fgets(imovel[i].cidade, 100, arquivo);
		imovel[i].cidade[strlen(imovel[i].cidade) - 1] = '\0';
		fgets(imovel[i].bairro, 50, arquivo);
		imovel[i].bairro[strlen(imovel[i].bairro) - 1] = '\0';
		fgets(imovel[i].endereco, 100, arquivo);
		imovel[i].endereco[strlen(imovel[i].endereco) - 1] = '\0';
		fgets(imovel[i].cep, 15, arquivo);
		imovel[i].cep[strlen(imovel[i].cep) - 1] = '\0';
		fscanf(arquivo, "%f\n", &imovel[i].valor);
		fgets(imovel[i].disponivel, 10, arquivo);
		imovel[i].disponivel[strlen(imovel[i].disponivel) - 1] = '\0';
		fgets(imovel[i].titulo, 100, arquivo);
		imovel[i].titulo[strlen(imovel[i].titulo) - 1] = '\0';

		if (imovel[i].estado == 1) {//ler informacoes da casa
			fscanf(arquivo, "%d\n", &imovel[i].casa.pavimentos);
			fscanf(arquivo, "%d\n", &imovel[i].casa.quartos);
			fscanf(arquivo, "%.1f\n", &imovel[i].casa.areaTerreno);
			fscanf(arquivo, "%.1f\n", &imovel[i].casa.areaConst);
		}
		else if (imovel[i].estado == 2) {//ler informacoes do apartamento
			fgets(imovel[i].apartamento.posicao, 100, arquivo);
			imovel[i].apartamento.posicao[strlen(imovel[i].apartamento.posicao) - 1] = '\0';
			fscanf(arquivo, "%d\n", &imovel[i].apartamento.quartos);
			fscanf(arquivo, "%f\n", &imovel[i].apartamento.area);
			fscanf(arquivo, "%d\n", &imovel[i].apartamento.andar);
			fscanf(arquivo, "%.1f\n", &imovel[i].apartamento.valorCond);
			fscanf(arquivo, "%d\n", &imovel[i].apartamento.garagem);
		}
		else if (imovel[i].estado == 3) {//ler informacoes do terreno
			fscanf(arquivo, "%.1f\n", &imovel[i].terreno.area);
		}
	}

	fclose(arquivo);
}

//                            Salva as informacoes do imovel no vetor imovel e faz um arquivo .txt
void salvaArquivoImovel() {
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
			fprintf(arquivo, "%.1f\n", imovel[i].valor);
			fprintf(arquivo, "%s\n", imovel[i].disponivel);
			fprintf(arquivo, "%s\n", imovel[i].titulo);

			if (imovel[i].estado == 1) {//informacoes da casa
				fprintf(arquivo, "%d\n", imovel[i].casa.pavimentos);
				fprintf(arquivo, "%d\n", imovel[i].casa.quartos);
				fprintf(arquivo, "%.1f\n", imovel[i].casa.areaTerreno);
				fprintf(arquivo, "%.1f\n", imovel[i].casa.areaConst);
			}
			else if (imovel[i].estado == 2) {//informacoes do apartamento
				fprintf(arquivo, "%s\n", imovel[i].apartamento.posicao);
				fprintf(arquivo, "%d\n", imovel[i].apartamento.quartos);
				fprintf(arquivo, "%.1f\n", imovel[i].apartamento.area);
				fprintf(arquivo, "%d\n", imovel[i].apartamento.andar);
				fprintf(arquivo, "%.1f\n", imovel[i].apartamento.valorCond);
				fprintf(arquivo, "%d\n", imovel[i].apartamento.garagem);
			}
			else if (imovel[i].estado == 3) {//informacoes do terreno
				fprintf(arquivo, "%.1f\n", imovel[i].terreno.area);
			}
		}
	}

	fclose(arquivo);
}
//                  função Editar imoveis
void EditaImovel()
{
	float floatResp;
	int i, codigo, resp, respItem, respInt, estado=0;
	char strResp[100];

	CLEAR;

	printf("Digite o codigo do seu imovel: ");
	scanf("%d", &codigo);
	codigo--;

	FLUSH;

	while(1)
	{                                                 //parte reciclada
		for(i=0;i<100;i++){
			if(i == codigo){

				estado = imovel[i].estado;

				if(imovel[i].estado == 1){                                  //1 = casa
	
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

				}else if(imovel[i].estado == 2){                               //2 = apartamento

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

				}else if(imovel[i].estado == 3){                               //3 = terreno

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
				PAUSE;
			}
		}
			CLEAR;

			if(menu6() == 1)
			{	

				if(estado == 1){                                  //1 = casa

					printf("Imovel: Casa\n\n");
					printf("1-Cidade: %s\n", imovel[codigo].cidade);
					printf("2-Endereco: %s\n", imovel[codigo].endereco);
					printf("3-Bairro: %s\n", imovel[codigo].bairro);
					printf("4-CEP: %s\n", imovel[codigo].cep);
					printf("5-Valor: %.1f\n", imovel[codigo].valor);
					printf("6-Disponibilidade do imovel: %s\n", imovel[codigo].disponivel);
					printf("7-Titulo de venda do imovel: %s\n", imovel[codigo].titulo);
					printf("8-Pavimentos: %d\n", imovel[codigo].casa.pavimentos);
					printf("9-Quartos: %d\n", imovel[codigo].casa.quartos);
					printf("10-Area do terreno: %.1f\n", imovel[codigo].casa.areaTerreno);
					printf("11-Area construida: %.1f\n", imovel[codigo].casa.areaConst);

					printf("Digite o numero do item a ser editado: ");
					scanf("%d", &respItem);
					FLUSH;
				
					switch (respItem)
					{
						case 1://CIDADE
							printf("Anterior: %s\nNovo: ", imovel[codigo].cidade);
							fgets(strResp, 100, stdin);
							CLEAR;

							printf("Nova informação: %s\n", strResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								strcpy(imovel[codigo].cidade, strResp);
							}	
						break;

						case 2://ENDERECO
							printf("Anterior: %s\nNovo: ", imovel[codigo].endereco);
							fgets(strResp, 100, stdin);
							strResp[strlen(strResp) - 1] = '\0';
							CLEAR;

							printf("Nova informação: %s\n", strResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								strcpy(imovel[codigo].endereco, strResp);
							}
						break;

						case 3://BAIRRO
							printf("Anterior: %s\nNovo: ", imovel[codigo].bairro);
							fgets(strResp, 100, stdin);
							strResp[strlen(strResp) - 1] = '\0';
							CLEAR;

							printf("Nova informacao: %s\n", strResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								strcpy(imovel[codigo].bairro, strResp);
							}
						break;

						case 4://CEP
							printf("Anterior: %s\nNovo: ", imovel[codigo].cep);
							fgets(strResp, 100, stdin);
							strResp[strlen(strResp) - 1] = '\0';
							CLEAR;

							printf("Nova informacao: %s\n", strResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								strcpy(imovel[codigo].cep, strResp);
							}
						break;

						case 5://VALOR $
							printf("Anterior: %.2f\nNovo: ", imovel[codigo].valor);
							scanf("%f", &floatResp);
							CLEAR;

							printf("Nova informacao: %.2f\n", floatResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								imovel[codigo].valor = floatResp;
							}
						break;

						case 6://DISPONIBILIDADE
							printf("Anterior: %s\nNovo(aluguel ou venda): ", imovel[codigo].disponivel);
							fgets(strResp, 10, stdin);
							strResp[strlen(strResp) - 1] = '\0';
							CLEAR;

							printf("Nova informacao: %s\n", strResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								strcpy(imovel[codigo].disponivel, strResp);
							}
						break;

						case 7://TITULO
							printf("Anterior: %s\nNovo: ", imovel[codigo].titulo);
							fgets(strResp, 100, stdin);
							strResp[strlen(strResp) - 1] = '\0';
							CLEAR;

							printf("Nova informacao: %s\n", strResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								strcpy(imovel[codigo].titulo, strResp);
							}
						break;

						case 8://PAVIMENTOS
							printf("Anterior: %d\nNovo: ", imovel[codigo].casa.pavimentos);
							scanf("%d", &respInt);
							CLEAR;

							printf("Nova informacao: %d\n", respInt);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								imovel[codigo].casa.pavimentos = respInt;
							}
						break;

						case 9://QUARTOS
							printf("Anterior: %d\nNovo: ", imovel[codigo].casa.quartos);
							scanf("%d", &respInt);
							CLEAR;

							printf("Nova informacao: %d\n", respInt);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								imovel[codigo].casa.quartos = respInt;
							}
						break;

						case 10://AREA DO TERRENO
							printf("Anterior: %.2f\nNovo: ", imovel[codigo].casa.areaTerreno);
							scanf("%f", &floatResp);
							CLEAR;

							printf("Nova informacao: %.2f\n", floatResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								imovel[codigo].casa.areaTerreno = floatResp;
							}
						break;

						case 11://AREA CONSTRUIDA
							printf("Anterior: %.2f\nNovo: ", imovel[codigo].casa.areaConst);
							scanf("%f", &floatResp);
							CLEAR;

							printf("Nova informacao: %.2f\n", floatResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								imovel[codigo].casa.areaConst = floatResp;
							}
						break;

					}

				}else if(estado == 2){                               //2 = apartamento

					printf("Imovel: Apartamento\n\n");
					printf("1-Cidade: %s\n", imovel[codigo].cidade);
					printf("2-Endereco: %s\n", imovel[codigo].endereco);
					printf("3-Bairro: %s\n", imovel[codigo].bairro);
					printf("4-CEP: %s\n", imovel[codigo].cep);
					printf("5-Valor: %.1f\n", imovel[codigo].valor);
					printf("6-Disponibilidade do imovel: %s\n", imovel[codigo].disponivel);
					printf("7-Titulo de venda do imovel: %s\n", imovel[codigo].titulo);
					printf("8-Posicao : %s\n", imovel[codigo].apartamento.posicao);
					printf("9-Quartos : %d\n", imovel[codigo].apartamento.quartos);
					printf("10-Area : %f\n", imovel[codigo].apartamento.area);
					printf("11-Andar : %d\n", imovel[codigo].apartamento.andar);
					printf("12-Valor do condominio : %f\n", imovel[codigo].apartamento.valorCond);
					printf("13-Garagem : %d\n", imovel[codigo].apartamento.garagem);

					printf("Digite o numero do item a ser editado: ");
					scanf("%d", &respItem);
					FLUSH;

					switch (respItem)
					{
						case 1://CIDADE
							printf("Anterior: %s\nNovo: ", imovel[codigo].cidade);
							fgets(strResp, 100, stdin);
							CLEAR;

							printf("Nova informação: %s\n", strResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								strcpy(imovel[codigo].cidade, strResp);
							}	
						break;

						case 2://ENDERECO
							printf("Anterior: %s\nNovo: ", imovel[codigo].endereco);
							fgets(strResp, 100, stdin);
							strResp[strlen(strResp) - 1] = '\0';
							CLEAR;

							printf("Nova informação: %s\n", strResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								strcpy(imovel[codigo].endereco, strResp);
							}
						break;

						case 3://BAIRRO
							printf("Anterior: %s\nNovo: ", imovel[codigo].bairro);
							fgets(strResp, 100, stdin);
							strResp[strlen(strResp) - 1] = '\0';
							CLEAR;

							printf("Nova informacao: %s\n", strResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								strcpy(imovel[codigo].bairro, strResp);
							}
						break;

						case 4://CEP
							printf("Anterior: %s\nNovo: ", imovel[codigo].cep);
							fgets(strResp, 100, stdin);
							strResp[strlen(strResp) - 1] = '\0';
							CLEAR;

							printf("Nova informacao: %s\n", strResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								strcpy(imovel[codigo].cep, strResp);
							}
						break;

						case 5://VALOR $
							printf("Anterior: %.2f\nNovo: ", imovel[codigo].valor);
							scanf("%f", &floatResp);
							CLEAR;

							printf("Nova informacao: %.2f\n", floatResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								imovel[codigo].valor = floatResp;
							}
						break;

						case 6://DISPONIBILIDADE
							printf("Anterior: %s\nNovo(aluguel ou venda): ", imovel[codigo].disponivel);
							fgets(strResp, 10, stdin);
							strResp[strlen(strResp) - 1] = '\0';
							CLEAR;

							printf("Nova informacao: %s\n", strResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								strcpy(imovel[codigo].disponivel, strResp);
							}
						break;

						case 7://TITULO
							printf("Anterior: %s\nNovo: ", imovel[codigo].titulo);
							fgets(strResp, 100, stdin);
							strResp[strlen(strResp) - 1] = '\0';
							CLEAR;

							printf("Nova informacao: %s\n", strResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								strcpy(imovel[codigo].titulo, strResp);
							}
						break;

						case 8://POSICAO
							printf("Anterior: %s\nNovo(nascente sul ou nascente norte): ", imovel[codigo].apartamento.posicao);
							fgets(strResp, 100, stdin);
							strResp[strlen(strResp) - 1] = '\0';
							CLEAR;

							printf("Nova informacao: %s\n", strResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								strcpy(imovel[codigo].apartamento.posicao, strResp);
							}
						break;

						case 9://QUARTOS
							printf("Anterior: %d\nNovo: ", imovel[codigo].apartamento.quartos);
							scanf("%d", &respInt);
							CLEAR;

							printf("Nova informacao: %d\n", respInt);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								imovel[codigo].apartamento.quartos = respInt;
							}
						break;

						case 10://AREA DO AP
							printf("Anterior: %.2f\nNovo: ", imovel[codigo].apartamento.area);
							scanf("%f", &floatResp);
							CLEAR;


							printf("Nova informacao: %.2f\n", floatResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								imovel[codigo].apartamento.area = floatResp;
							}
						break;

						case 11://ANDAR DO AP
							printf("Anterior: %d\nNovo: ", imovel[codigo].apartamento.andar);
							scanf("%d", &respInt);
							CLEAR;

							printf("Nova informacao: %d\n", respInt);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								imovel[codigo].apartamento.andar = respInt;
							}
						break;

						case 12://VALOR DO CONDOMINIO
							printf("Anterior: %.2f\nNovo: ", imovel[codigo].apartamento.valorCond);
							scanf("%f", &floatResp);
							CLEAR;


							printf("Nova informacao: %.2f\n", floatResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								imovel[codigo].apartamento.valorCond = floatResp;
							}
						break;

						case 13://GARAGEM
							printf("Anterior: %d\nNovo: ", imovel[codigo].apartamento.garagem);
							scanf("%d", &respInt);
							CLEAR;

							printf("Nova informacao: %d\n", respInt);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								imovel[codigo].apartamento.garagem = respInt;
							}
						break;


					}

				}else if(estado == 3){                               //3 = terreno

					printf("Imovel: Terreno\n\n");
					printf("1-Cidade: %s\n", imovel[codigo].cidade);
					printf("2-Endereco: %s\n", imovel[codigo].endereco);
					printf("3-Bairro: %s\n", imovel[codigo].bairro);
					printf("4-CEP: %s\n", imovel[codigo].cep);
					printf("5-Valor: %.1f\n", imovel[codigo].valor);
					printf("6-Disponibilidade do imovel: %s\n", imovel[codigo].disponivel);
					printf("7-Titulo de venda do imovel: %s\n", imovel[codigo].titulo);
					printf("8-Area do terreno : %f\n", imovel[codigo].terreno.area);

					printf("Digite o numero do item a ser editado: ");
					scanf("%d", &respItem);
					FLUSH;

					switch (respItem)
					{
						case 1://CIDADE
							printf("Anterior: %s\nNovo: ", imovel[codigo].cidade);
							fgets(strResp, 100, stdin);
							CLEAR;

							printf("Nova informação: %s\n", strResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								strcpy(imovel[codigo].cidade, strResp);
							}	
						break;

						case 2://ENDERECO
							printf("Anterior: %s\nNovo: ", imovel[codigo].endereco);
							fgets(strResp, 100, stdin);
							strResp[strlen(strResp) - 1] = '\0';
							CLEAR;

							printf("Nova informação: %s\n", strResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								strcpy(imovel[codigo].endereco, strResp);
							}
						break;

						case 3://BAIRRO
							printf("Anterior: %s\nNovo: ", imovel[codigo].bairro);
							fgets(strResp, 100, stdin);
							strResp[strlen(strResp) - 1] = '\0';
							CLEAR;

							printf("Nova informacao: %s\n", strResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								strcpy(imovel[codigo].bairro, strResp);
							}
						break;

						case 4://CEP
							printf("Anterior: %s\nNovo: ", imovel[codigo].cep);
							fgets(strResp, 100, stdin);
							strResp[strlen(strResp) - 1] = '\0';
							CLEAR;

							printf("Nova informacao: %s\n", strResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								strcpy(imovel[codigo].cep, strResp);
							}
						break;

						case 5://VALOR $
							printf("Anterior: %.2f\nNovo: ", imovel[codigo].valor);
							scanf("%f", &floatResp);
							CLEAR;

							printf("Nova informacao: %.2f\n", floatResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								imovel[codigo].valor = floatResp;
							}
						break;

						case 6://DISPONIBILIDADE
							printf("Anterior: %s\nNovo(aluguel ou venda): ", imovel[codigo].disponivel);
							fgets(strResp, 10, stdin);
							strResp[strlen(strResp) - 1] = '\0';
							CLEAR;

							printf("Nova informacao: %s\n", strResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								strcpy(imovel[codigo].disponivel, strResp);
							}
						break;

						case 7://TITULO
							printf("Anterior: %s\nNovo: ", imovel[codigo].titulo);
							fgets(strResp, 100, stdin);
							strResp[strlen(strResp) - 1] = '\0';
							CLEAR;

							printf("Nova informacao: %s\n", strResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								strcpy(imovel[codigo].titulo, strResp);
							}
						break;

						case 8://AREA DO TERRENO
							printf("Anterior: %.2f\nNovo: ", imovel[codigo].terreno.area);
							scanf("%f", &floatResp);
							CLEAR;


							printf("Nova informacao: %.2f\n", floatResp);
							PAUSE;
							CLEAR;

							if(menu7());
							{
								imovel[codigo].terreno.area = floatResp;
							}
						break;
					}
					
				}else {
					printf("Nao foram encontrados imoveis");
				}
			}
	PAUSE;
	break;
	}
}


//                  função Deletar imoveis
void DeletaImovel(){
	
	int i, codigo;

	CLEAR;

	printf("Digite o codigo do seu imovel: ");
    scanf("%d", &codigo);
	FLUSH;

	codigo --;

	for(i = codigo ; i<100 ; i++){
		imovel[i]=imovel[i+1];
		salvaArquivoImovel();
	}
}
//                             função para mostrar alugueis e vendas
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
//                     função buscar valores
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
			
			if(imovel[i].estado == 1){ //1 = casa

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

            }else if(imovel[i].estado == 2){ //2 = apartamento

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

            }else if(imovel[i].estado == 3){ //3 = terreno

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
//                   busca por bairro
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
//                   busca por titulo
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
//                            Menu de inicio do programa
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
int menu3(){
    int tecla, posicao = 1;

	while (1){

		CLEAR;

		if (posicao == 1){
			printf("\n\tDeseja salvar as informacoes?\n\n");
			printf("\t%sSim\n", ">>");
			printf("Nao\n");

			tecla = getch();

			if (tecla == ENTER){
                salvaArquivoImovel();
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
//                   menu de confirmação de edição de imoveis
int menu6()
{
	int tecla, posicao = 1;
	
	while (1){

		CLEAR;

		if (posicao == 1){
			printf("\n\tDeseja editar esse imovel?\n\n");
			printf("\t%sSim\n", ">>");
			printf("Nao\n");

			tecla = getch();

			if (tecla == ENTER){
				return 1;
			}
			else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 2;
		}
		else if (posicao == 2){
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
//                 função confirma? sim ou nao.
void menu7()
{
	int tecla, posicao = 1;

	while (1){

		CLEAR;

		if (posicao == 1){
			printf("\n\tConfirmar?\n\n");
			printf("\t%sSim\n", ">>");
			printf("Nao\n");

			tecla = getch();

			if (tecla == ENTER){
				return 1;
			}
			else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 2;
		}
		else if (posicao == 2){
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

    int flagmenu = 0;

    while(1){

        switch(menu1()){
            case 1:
                flagmenu = 1;
                CLEAR;
                switch(menu2()){
					case 1:
						CadastroAll(1);
						menu3();
						flagmenu = 0;
						break;
					case 2:
						CadastroAll(2);
						menu3();
						flagmenu = 0;
						break;
					case 3:
						CadastroAll(3);
						menu3();
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
				EditaImovel();
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