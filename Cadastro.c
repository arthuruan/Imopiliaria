#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "Cadastro.h"
#include "Menu.h"
#include "Arquivo.h"

//Função de cadastro
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

		if (flag == 1) {//Cadastro da casa

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
		else if (flag == 2) {//Cadastro do apartamento

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
		else if (flag == 3) {//Cadastro do terreno

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
	menu3(i);//menu que pede a confimação para salvar o cadastro
}

//Função que exibe imoveis disponiveis
void Exibe() {

	CLEAR;
	int i, cont = 0;

	for (i = 0; i < 100; i++) {
		if (imovel[i].estado != 0) {

			if (imovel[i].estado == 1) {//print das informações da casa
				printf("Imovel : Casa\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
				printf("Bairro : %s\n", imovel[i].bairro);
				printf("Endereco : %s\n", imovel[i].endereco);
				printf("CEP : %s\n", imovel[i].cep);
				printf("Valor : %.2f\n", imovel[i].valor);
				printf("Disponibilidade : %s\n", imovel[i].disponivel);
				printf("Titulo do imovel : %s\n", imovel[i].titulo);
				printf("Pavimentos : %d\n", imovel[i].casa.pavimentos);
				printf("Quartos : %d\n", imovel[i].casa.quartos);
				printf("Area do terreno : %.2f\n", imovel[i].casa.areaTerreno);
				printf("Area construida : %.2f\n\n\n", imovel[i].casa.areaConst);
				printf("Posicao de cadastro do imovel: %d\n\n", i + 1);
				cont++;
			}
			else if (imovel[i].estado == 2) {//print das informações do apartamento
				printf("Imovel : Apartamento\n\n");
				printf("Cidade: %s\n", imovel[i].cidade);
				printf("Bairro : %s\n", imovel[i].bairro);
				printf("Endereco: %s\n", imovel[i].endereco);
				printf("CEP: %s\n", imovel[i].cep);
				printf("Valor: %.2f\n", imovel[i].valor);
				printf("Disponibilidade : %s\n", imovel[i].disponivel);
				printf("Titulo do imovel : %s\n", imovel[i].titulo);
				printf("Posicao : %s\n", imovel[i].apartamento.posicao);
				printf("Quartos : %d\n", imovel[i].apartamento.quartos);
				printf("Area : %.2f\n", imovel[i].apartamento.area);
				printf("Andar : %d\n", imovel[i].apartamento.andar);
				printf("Valor do condominio : %.2f\n", imovel[i].apartamento.valorCond);
				printf("Garagem : %d\n\n\n", imovel[i].apartamento.garagem);
				printf("Posicao de cadastro do imovel: %d\n\n", i + 1);
				cont++;
			}
			else if (imovel[i].estado == 3) {//print das informações do terreno
				printf("Imovel : Terreno\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
				printf("Bairro : %s\n", imovel[i].bairro);
				printf("Endereco : %s\n", imovel[i].endereco);
				printf("CEP: %s\n", imovel[i].cep);
				printf("Valor : %.2f\n", imovel[i].valor);
				printf("Disponibilidade : %s\n", imovel[i].disponivel);
				printf("Titulo do imovel : %s\n", imovel[i].titulo);
				printf("Area do terreno : %.2f\n\n\n", imovel[i].terreno.area);
				printf("Posicao de cadastro do imovel: %d\n\n", i + 1);
				cont++;
			}
		}
	}
	printf("Restam %d vagas para cadastro\n\n", i - cont);
	PAUSE;
}

//Busca por titulo
void BuscaTitulo() {

	CLEAR;
	char stringtitulo[100];//variavel usada para buscar os titulos
	int i;
	printf("Digite o titulo do imovel desejado: ");
	fgets(stringtitulo, 100, stdin);
	stringtitulo[strlen(stringtitulo) - 1] = '\0';

	CLEAR;
	for (i = 0; i < 100; i++) {
		if (!strncmp(imovel[i].titulo, stringtitulo, strlen(stringtitulo))) {
			if (imovel[i].estado == 1) {//1 = casa
				printf("Imovel: Casa\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
				printf("Endereco : %s\n", imovel[i].endereco);
				printf("CEP : %s\n", imovel[i].cep);
				printf("Valor : %.2f\n", imovel[i].valor);
				printf("Disponibilidade do imovel: %s\n", imovel[i].disponivel);
				printf("Titulo do imovel: %s\n", imovel[i].titulo);
				printf("Pavimentos : %d\n", imovel[i].casa.pavimentos);
				printf("Quartos : %d\n", imovel[i].casa.quartos);
				printf("Area do terreno : %.2f\n", imovel[i].casa.areaTerreno);
				printf("Area construida : %.2f\n\n\n", imovel[i].casa.areaConst);
				printf("Posicao de cadastro do imovel: %d\n\n", i + 1);
			}
			else if (imovel[i].estado == 2) {//2 = apartamento
				printf("Imovel: Apartamento\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
				printf("Endereco : %s\n", imovel[i].endereco);
				printf("CEP : %s\n", imovel[i].cep);
				printf("Valor: %.2f\n", imovel[i].valor);
				printf("Disponibilidade do imovel  %s\n", imovel[i].disponivel);
				printf("Titulo do imovel: %s\n", imovel[i].titulo);
				printf("Posicao : %s\n", imovel[i].apartamento.posicao);
				printf("Quartos : %d\n", imovel[i].apartamento.quartos);
				printf("Area : %.2f\n", imovel[i].apartamento.area);
				printf("Andar : %d\n", imovel[i].apartamento.andar);
				printf("Valor do condominio : %f\n", imovel[i].apartamento.valorCond);
				printf("Garagem : %d\n\n\n", imovel[i].apartamento.garagem);
				printf("Posicao de cadastro do imovel: %d\n\n", i + 1);
			}
			else if (imovel[i].estado == 3) {//3 = terreno
				printf("Imovel: Terreno\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
				printf("Endereco : %s\n", imovel[i].endereco);
				printf("CEP : %s\n", imovel[i].cep);
				printf("Valor : %.2f\n", imovel[i].valor);
				printf("Disponibilidade do imovel: %s\n", imovel[i].disponivel);
				printf("Titulo do imovel : %s\n", imovel[i].titulo);
				printf("Area do terreno : %.2f\n\n\n", imovel[i].terreno.area);
				printf("Posicao de cadastro do imovel: %d\n\n", i + 1);
			}
			else{
				printf("Imovel nao encontrado\n");
			}
		}
	}

	PAUSE;
}

//Busca por bairro
void BuscaBairro() {
	CLEAR;
	char stringbairro[50];//variavel para busca de bairros
	int flag, i;

	printf("Digite o bairro do imovel desejado: ");
	fgets(stringbairro, 50, stdin);
	stringbairro[strlen(stringbairro) - 1] = '\0';
	CLEAR;

	for (i = 0; i < 100; i++) {
		if (!strncmp(imovel[i].bairro, stringbairro, strlen(stringbairro))) {
			if (imovel[i].estado == 1) {//1 = casa
				printf("Imovel: Casa\n\n");
				printf("Cidade: %s\n", imovel[i].cidade);
				printf("Endereco: %s\n", imovel[i].endereco);
				printf("Bairro: %s\n", imovel[i].bairro);
				printf("CEP: %s\n", imovel[i].cep);
				printf("Valor: %.2f\n", imovel[i].valor);
				printf("Disponibilidade do imovel: %s\n", imovel[i].disponivel);
				printf("Titulo de venda do imovel: %s\n", imovel[i].titulo);
				printf("Pavimentos: %d\n", imovel[i].casa.pavimentos);
				printf("Quartos: %d\n", imovel[i].casa.quartos);
				printf("Area do terreno: %.2f\n", imovel[i].casa.areaTerreno);
				printf("Area construida: %.2f\n", imovel[i].casa.areaConst);
				printf("Posicao de cadastro do imovel: %d\n\n", i + 1);
			}
			else if (imovel[i].estado == 2) {//2 = apartamento
				printf("Imovel: Apartamento\n\n");
				printf("Cidade: %s\n", imovel[i].cidade);
				printf("Endereco: %s\n", imovel[i].endereco);
				printf("Bairro: %s\n", imovel[i].bairro);
				printf("CEP: %s\n", imovel[i].cep);
				printf("Valor: %.2f\n", imovel[i].valor);
				printf("Disponibilidade do imovel: %s\n", imovel[i].disponivel);
				printf("Titulo de venda imovel: %s\n", imovel[i].titulo);
				printf("Posicao : %s\n", imovel[i].apartamento.posicao);
				printf("Quartos : %d\n", imovel[i].apartamento.quartos);
				printf("Area : %.2f\n", imovel[i].apartamento.area);
				printf("Andar : %d\n", imovel[i].apartamento.andar);
				printf("Valor do condominio : %f\n", imovel[i].apartamento.valorCond);
				printf("Garagem : %d\n", imovel[i].apartamento.garagem);
				printf("Posicao de cadastro do imovel: %d\n\n", i + 1);
			}
			else if (imovel[i].estado == 3) {//3 = terreno
				printf("Imovel: Terreno\n\n");
				printf("Cidade: %s\n", imovel[i].cidade);
				printf("Endereco: %s\n", imovel[i].endereco);
				printf("Bairro: %s\n", imovel[i].bairro);
				printf("CEP: %s\n", imovel[i].cep);
				printf("Valor: %.2f\n", imovel[i].valor);
				printf("Disponibilidade do imovel: %s\n", imovel[i].disponivel);
				printf("Titulo de venda do imovel: %s\n", imovel[i].titulo);
				printf("Area do terreno : %f\n", imovel[i].terreno.area);
				printf("Posicao de cadastro do imovel: %d\n\n", i + 1);
			}
			else{
				printf("Imovel nao encontrado\n");
			}
		}

	}
	PAUSE;
}

//Função buscar valores
void BuscaValor() {
	CLEAR;
	float valor;
	int i;

	printf("Digite o valor base para a consulta: ");
	scanf("%f", &valor);
	FLUSH;

	CLEAR;
	printf("Imoveis com valores maior disponiveis :\n\n");
	for (i = 0; i < 100; i++) {
		if (valor <= imovel[i].valor) {

			if (imovel[i].estado == 1) {//1 = casa
				printf("Imovel: Casa\n\n");
				printf("Cidade: %s\n", imovel[i].cidade);
				printf("Endereco: %s\n", imovel[i].endereco);
				printf("Bairro: %s\n", imovel[i].bairro);
				printf("CEP: %s\n", imovel[i].cep);
				printf("Valor: %.2f\n", imovel[i].valor);
				printf("Disponibilidade do imovel: %s\n", imovel[i].disponivel);
				printf("Titulo de venda do imovel: %s\n", imovel[i].titulo);
				printf("Pavimentos: %d\n", imovel[i].casa.pavimentos);
				printf("Quartos: %d\n", imovel[i].casa.quartos);
				printf("Area do terreno: %.2f\n", imovel[i].casa.areaTerreno);
				printf("Area construida: %.2f\n", imovel[i].casa.areaConst);
				printf("Posicao de cadastro do imovel: %d\n\n", i + 1);
			}
			else if (imovel[i].estado == 2) {//2 = apartamento
				printf("Imovel: Apartamento\n\n");
				printf("Cidade: %s\n", imovel[i].cidade);
				printf("Endereco: %s\n", imovel[i].endereco);
				printf("Bairro: %s\n", imovel[i].bairro);
				printf("CEP: %s\n", imovel[i].cep);
				printf("Valor: %.2f\n", imovel[i].valor);
				printf("Disponibilidade do imovel: %s\n", imovel[i].disponivel);
				printf("Titulo de venda imovel: %s\n", imovel[i].titulo);
				printf("Posicao : %s\n", imovel[i].apartamento.posicao);
				printf("Quartos : %d\n", imovel[i].apartamento.quartos);
				printf("Area : %.2f\n", imovel[i].apartamento.area);
				printf("Andar : %d\n", imovel[i].apartamento.andar);
				printf("Valor do condominio : %.2f\n", imovel[i].apartamento.valorCond);
				printf("Garagem : %d\n", imovel[i].apartamento.garagem);
				printf("Posicao de cadastro do imovel: %d\n\n", i + 1);
			}
			else if (imovel[i].estado == 3) {//3 = terreno
				printf("Imovel: Terreno\n\n");
				printf("Cidade: %s\n", imovel[i].cidade);
				printf("Endereco: %s\n", imovel[i].endereco);
				printf("Bairro: %s\n", imovel[i].bairro);
				printf("CEP: %s\n", imovel[i].cep);
				printf("Valor: %.2f\n", imovel[i].valor);
				printf("Disponibilidade do imovel: %s\n", imovel[i].disponivel);
				printf("Titulo de venda do imovel: %s\n", imovel[i].titulo);
				printf("Area do terreno : %.2f\n", imovel[i].terreno.area);
				printf("Posicao de cadastro do imovel: %d\n\n", i + 1);
			}
			else{
				printf("Nao foram encontrados imoveis");
			}

		}
	}
	PAUSE;
}
//função de busca por alguel || venda
void disponibilidade(int disp){//parametro de entrada do menu5 para saber se é aluguel ou venda

	CLEAR;

	int i;

	for(i=0;i<100;i++){

		if(disp == 1 && !strcmp(imovel[i].disponivel,"aluguel")){
		//condição de quando o parametro escolhido for aluguel
			if(imovel[i].estado == 1){
				//informações casa
				printf("Imovel : Casa\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
				printf("Endereco : %s\n", imovel[i].endereco);
				printf("CEP : %s\n", imovel[i].cep);
				printf("Valor : %.2f\n", imovel[i].valor);
				printf("Disponibilidade : %s\n", imovel[i].disponivel);
				printf("Titulo do imovel : %s\n", imovel[i].titulo);
				printf("Pavimentos : %d\n", imovel[i].casa.pavimentos);
				printf("Quartos : %d\n", imovel[i].casa.quartos);
				printf("Area do terreno : %.2f\n", imovel[i].casa.areaTerreno);
				printf("Area construida : %.2f\n\n", imovel[i].casa.areaConst);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);

			}else if(imovel[i].estado == 2){
				//informaçõees apartamento
				printf("Imovel : Apartamento\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
				printf("Endereco : %s\n", imovel[i].endereco);
				printf("CEP : %s\n", imovel[i].cep);
				printf("Valor: %.2f\n", imovel[i].valor);
				printf("Disponibilidade  %s\n", imovel[i].disponivel);
				printf("Titulo do imovel : %s\n", imovel[i].titulo);
				printf("Posicao : %s\n", imovel[i].apartamento.posicao);
				printf("Quartos : %d\n", imovel[i].apartamento.quartos);
				printf("Area : %.2f\n", imovel[i].apartamento.area);
				printf("Andar : %d\n", imovel[i].apartamento.andar);
				printf("Valor do condominio : %.2f\n", imovel[i].apartamento.valorCond);
				printf("Garagem : %d\n\n", imovel[i].apartamento.garagem);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);

			}else if(imovel[i].estado == 3){
				//informações terreno
				printf("Imovel : Terreno\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
				printf("Endereco : %s\n", imovel[i].endereco);
				printf("CEP : %s\n", imovel[i].cep);
				printf("Valor : %.2f\n", imovel[i].valor);
				printf("Disponibilidade : %s\n", imovel[i].disponivel);
				printf("Titulo ddo imovel  : %s\n", imovel[i].titulo);
				printf("Area do terreno : %.2f\n\n", imovel[i].terreno.area);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);

			}
		}else if(disp == 2 && !strcmp(imovel[i].disponivel,"venda")){
		//condição de quando o parametro escolhido for venda
			if(imovel[i].estado == 1){
				//informações casa
				printf("Imovel : Casa\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
				printf("Endereco : %s\n", imovel[i].endereco);
				printf("CEP : %s\n", imovel[i].cep);
				printf("Valor : %.2f\n", imovel[i].valor);
				printf("Disponibilidade : %s\n", imovel[i].disponivel);
				printf("Titulo do imovel : %s\n", imovel[i].titulo);
				printf("Pavimentos : %d\n", imovel[i].casa.pavimentos);
				printf("Quartos : %d\n", imovel[i].casa.quartos);
				printf("Area do terreno : %.2f\n", imovel[i].casa.areaTerreno);
				printf("Area construida : %.2f\n\n", imovel[i].casa.areaConst);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);

			}else if(imovel[i].estado == 2){
				//informações apartamento
				printf("Imovel : Apartamento\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
				printf("Endereco : %s\n", imovel[i].endereco);
				printf("CEP : %s\n", imovel[i].cep);
				printf("Valor: %.2f\n", imovel[i].valor);
				printf("Disponibilidade  %s\n", imovel[i].disponivel);
				printf("Titulo do imovel : %s\n", imovel[i].titulo);
				printf("Posicao : %s\n", imovel[i].apartamento.posicao);
				printf("Quartos : %d\n", imovel[i].apartamento.quartos);
				printf("Area : %.2f\n", imovel[i].apartamento.area);
				printf("Andar : %d\n", imovel[i].apartamento.andar);
				printf("Valor do condominio : %.2f\n", imovel[i].apartamento.valorCond);
				printf("Garagem : %d\n\n", imovel[i].apartamento.garagem);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);

			}else if(imovel[i].estado == 3){
				//informações terreno
				printf("Imovel : Terreno\n\n");
				printf("Cidade : %s\n", imovel[i].cidade);
				printf("Endereco : %s\n", imovel[i].endereco);
				printf("CEP : %s\n", imovel[i].cep);
				printf("Valor : %.2f\n", imovel[i].valor);
				printf("Disponibilidade : %s\n", imovel[i].disponivel);
				printf("Titulo ddo imovel  : %s\n", imovel[i].titulo);
				printf("Area do terreno : %.2f\n\n", imovel[i].terreno.area);
				printf("Posicao de cadastro do imovel: %d\n\n", i+1);
			}//fim do if secundario
		}//fim do if principal
	}//fim do for

	PAUSE;

}//fim da função

//Função para deletar imoveis
void DeletaImovel() {
	int i, posicao;

	CLEAR;

	printf("Digite a posicoa do seu imovel: ");
	scanf("%d", &posicao);
	FLUSH;

	posicao--;

	for (i = posicao; i < 100; i++) {
		imovel[i] = imovel[i + 1];
		salvaArquivoImovel();
	}
}

void deletavetor(int posicao){
    int i;
    for (i = posicao; i < 100; i++) {
        imovel[i] = imovel[i + 1];
    }
}

//funcao edita imovel
void EditaImovel(){
	float floatResp;
	int i, codigo, resp, respItem, respInt, estado = 0;
	char strResp[100];

	CLEAR;

	printf("Digite o codigo do seu imovel: ");
	scanf("%d", &codigo);
	codigo--;

	CLEAR;
	FLUSH;

	while (1) {//parte reciclada
		for (i = 0; i < 100; i++) {
			if (i == codigo) {

				estado = imovel[i].estado;

				if (imovel[i].estado == 1) {//1 = casa
					printf("Imovel: Casa\n\n");
					printf("Cidade: %s\n", imovel[i].cidade);
					printf("Endereco: %s\n", imovel[i].endereco);
					printf("Bairro: %s\n", imovel[i].bairro);
					printf("CEP: %s\n", imovel[i].cep);
					printf("Valor: %.2f\n", imovel[i].valor);
					printf("Disponibilidade do imovel: %s\n", imovel[i].disponivel);
					printf("Titulo de venda do imovel: %s\n", imovel[i].titulo);
					printf("Pavimentos: %d\n", imovel[i].casa.pavimentos);
					printf("Quartos: %d\n", imovel[i].casa.quartos);
					printf("Area do terreno: %.2f\n", imovel[i].casa.areaTerreno);
					printf("Area construida: %.2f\n", imovel[i].casa.areaConst);
					printf("Posicao de cadastro do imovel: %d\n\n", i + 1);
				}
				else if (imovel[i].estado == 2) {//2 = apartamento
					printf("Imovel: Apartamento\n\n");
					printf("Cidade: %s\n", imovel[i].cidade);
					printf("Endereco: %s\n", imovel[i].endereco);
					printf("Bairro: %s\n", imovel[i].bairro);
					printf("CEP: %s\n", imovel[i].cep);
					printf("Valor: %.2f\n", imovel[i].valor);
					printf("Disponibilidade do imovel: %s\n", imovel[i].disponivel);
					printf("Titulo de venda imovel: %s\n", imovel[i].titulo);
					printf("Posicao : %s\n", imovel[i].apartamento.posicao);
					printf("Quartos : %d\n", imovel[i].apartamento.quartos);
					printf("Area : %.2f\n", imovel[i].apartamento.area);
					printf("Andar : %d\n", imovel[i].apartamento.andar);
					printf("Valor do condominio : %.2f\n", imovel[i].apartamento.valorCond);
					printf("Garagem : %d\n", imovel[i].apartamento.garagem);
					printf("Posicao de cadastro do imovel: %d\n\n", i + 1);
				}
				else if (imovel[i].estado == 3) {//3 = terreno
					printf("Imovel: Terreno\n\n");
					printf("Cidade: %s\n", imovel[i].cidade);
					printf("Endereco: %s\n", imovel[i].endereco);
					printf("Bairro: %s\n", imovel[i].bairro);
					printf("CEP: %s\n", imovel[i].cep);
					printf("Valor: %.2f\n", imovel[i].valor);
					printf("Disponibilidade do imovel: %s\n", imovel[i].disponivel);
					printf("Titulo de venda do imovel: %s\n", imovel[i].titulo);
					printf("Area do terreno : %.2f\n", imovel[i].terreno.area);
					printf("Posicao de cadastro do imovel: %d\n\n", i + 1);
				}
				else
					printf("\nImovel nao encontrado\n\n");
				PAUSE;
			}
		}

		CLEAR;

		if (menu6() == 1) {
			if (estado == 1) {//1 = casa
				CLEAR;
				printf("Imovel: Casa\n\n");
				printf("1-Cidade: %s\n", imovel[codigo].cidade);
				printf("2-Endereco: %s\n", imovel[codigo].endereco);
				printf("3-Bairro: %s\n", imovel[codigo].bairro);
				printf("4-CEP: %s\n", imovel[codigo].cep);
				printf("5-Valor: %.2f\n", imovel[codigo].valor);
				printf("6-Disponibilidade do imovel: %s\n", imovel[codigo].disponivel);
				printf("7-Titulo de venda do imovel: %s\n", imovel[codigo].titulo);
				printf("8-Pavimentos: %d\n", imovel[codigo].casa.pavimentos);
				printf("9-Quartos: %d\n", imovel[codigo].casa.quartos);
				printf("10-Area do terreno: %.2f\n", imovel[codigo].casa.areaTerreno);
				printf("11-Area construida: %.2f\n\n", imovel[codigo].casa.areaConst);

				printf("Digite o numero do item a ser editado: ");
				scanf("%d", &respItem);
				FLUSH;

				switch (respItem) {
					case 1://CIDADE
						printf("Anterior: %s\nNovo: ", imovel[codigo].cidade);
						fgets(strResp, 100, stdin);
						strResp[strlen(strResp) - 1] = '\0';
						CLEAR;

						printf("Nova informacao: %s\n", strResp);

						CLEAR;

						if (menu7());
						{
							strcpy(imovel[codigo].cidade, strResp);
						}
						break;
					case 2://ENDERECO
						printf("Anterior: %s\nNovo: ", imovel[codigo].endereco);
						fgets(strResp, 100, stdin);
						strResp[strlen(strResp) - 1] = '\0';
						CLEAR;

						printf("Nova informacao: %s\n", strResp);

						CLEAR;

						if (menu7());
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

						CLEAR;

						if (menu7());
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

						if (menu7());
						{
							strcpy(imovel[codigo].cep, strResp);
						}
						break;
					case 5://VALOR $
						printf("Anterior: %.2f\nNovo: ", imovel[codigo].valor);
						scanf("%f", &floatResp);
						CLEAR;

						printf("Nova informacao: %.2f\n", floatResp);

						CLEAR;

						if (menu7());
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

						CLEAR;

						if (menu7());
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

						CLEAR;

						if (menu7());
						{
							strcpy(imovel[codigo].titulo, strResp);
						}
						break;
					case 8://PAVIMENTOS
						printf("Anterior: %d\nNovo: ", imovel[codigo].casa.pavimentos);
						scanf("%d", &respInt);
						CLEAR;

						printf("Nova informacao: %d\n", respInt);

						CLEAR;

						if (menu7());
						{
							imovel[codigo].casa.pavimentos = respInt;
						}
						break;
					case 9://QUARTOS
						printf("Anterior: %d\nNovo: ", imovel[codigo].casa.quartos);
						scanf("%d", &respInt);
						CLEAR;

						printf("Nova informacao: %d\n", respInt);

						CLEAR;

						if (menu7());
						{
							imovel[codigo].casa.quartos = respInt;
						}
						break;
					case 10://AREA DO TERRENO
						printf("Anterior: %.2f\nNovo: ", imovel[codigo].casa.areaTerreno);
						scanf("%f", &floatResp);
						CLEAR;

						printf("Nova informacao: %.2f\n", floatResp);

						CLEAR;

						if (menu7());
						{
							imovel[codigo].casa.areaTerreno = floatResp;
						}
						break;
					case 11://AREA CONSTRUIDA
						printf("Anterior: %.2f\nNovo: ", imovel[codigo].casa.areaConst);
						scanf("%f", &floatResp);
						CLEAR;

						printf("Nova informacao: %.2f\n", floatResp);

						CLEAR;

						if (menu7());
						{
							imovel[codigo].casa.areaConst = floatResp;
						}
						break;
				}
			}
			else if (estado == 2) {//2 = apartamento
				CLEAR;
				printf("Imovel: Apartamento\n\n");
				printf("1-Cidade: %s\n", imovel[codigo].cidade);
				printf("2-Endereco: %s\n", imovel[codigo].endereco);
				printf("3-Bairro: %s\n", imovel[codigo].bairro);
				printf("4-CEP: %s\n", imovel[codigo].cep);
				printf("5-Valor: %.2f\n", imovel[codigo].valor);
				printf("6-Disponibilidade do imovel: %s\n", imovel[codigo].disponivel);
				printf("7-Titulo de venda do imovel: %s\n", imovel[codigo].titulo);
				printf("8-Posicao : %s\n", imovel[codigo].apartamento.posicao);
				printf("9-Quartos : %d\n", imovel[codigo].apartamento.quartos);
				printf("10-Area : %.2f\n", imovel[codigo].apartamento.area);
				printf("11-Andar : %d\n", imovel[codigo].apartamento.andar);
				printf("12-Valor do condominio : %.2f\n", imovel[codigo].apartamento.valorCond);
				printf("13-Garagem : %d\n\n", imovel[codigo].apartamento.garagem);

				printf("Digite o numero do item a ser editado: ");
				scanf("%d", &respItem);
				FLUSH;

				switch (respItem) {
					case 1://CIDADE
						printf("Anterior: %s\nNovo: ", imovel[codigo].cidade);
						fgets(strResp, 100, stdin);
						strResp[strlen(strResp) - 1] = '\0';
						CLEAR;

						printf("Nova informacao: %s\n", strResp);

						CLEAR;

						if (menu7());
						{
							strcpy(imovel[codigo].cidade, strResp);
						}
						break;
					case 2://ENDERECO
						printf("Anterior: %s\nNovo: ", imovel[codigo].endereco);
						fgets(strResp, 100, stdin);
						strResp[strlen(strResp) - 1] = '\0';
						CLEAR;

						printf("Nova informacao: %s\n", strResp);

						CLEAR;

						if (menu7());
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

						CLEAR;

						if (menu7());
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

						CLEAR;

						if (menu7());
						{
							strcpy(imovel[codigo].cep, strResp);
						}
						break;
					case 5://VALOR $
						printf("Anterior: %.2f\nNovo: ", imovel[codigo].valor);
						scanf("%f", &floatResp);
						CLEAR;

						printf("Nova informacao: %.2f\n", floatResp);

						CLEAR;

						if (menu7());
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

						CLEAR;

						if (menu7());
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

						CLEAR;

						if (menu7());
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

						CLEAR;

						if (menu7());
						{
							strcpy(imovel[codigo].apartamento.posicao, strResp);
						}
						break;

					case 9://QUARTOS
						printf("Anterior: %d\nNovo: ", imovel[codigo].apartamento.quartos);
						scanf("%d", &respInt);
						CLEAR;

						printf("Nova informacao: %d\n", respInt);

						CLEAR;

						if (menu7());
						{
							imovel[codigo].apartamento.quartos = respInt;
						}
						break;

					case 10://AREA DO AP
						printf("Anterior: %.2f\nNovo: ", imovel[codigo].apartamento.area);
						scanf("%f", &floatResp);
						CLEAR;


						printf("Nova informacao: %.2f\n", floatResp);

						CLEAR;

						if (menu7());
						{
							imovel[codigo].apartamento.area = floatResp;
						}
						break;
					case 11://ANDAR DO AP
						printf("Anterior: %d\nNovo: ", imovel[codigo].apartamento.andar);
						scanf("%d", &respInt);
						CLEAR;

						printf("Nova informacao: %d\n", respInt);

						CLEAR;

						if (menu7());
						{
							imovel[codigo].apartamento.andar = respInt;
						}
						break;
					case 12://VALOR DO CONDOMINIO
						printf("Anterior: %.2f\nNovo: ", imovel[codigo].apartamento.valorCond);
						scanf("%f", &floatResp);
						CLEAR;


						printf("Nova informacao: %.2f\n", floatResp);

						CLEAR;

						if (menu7());
						{
							imovel[codigo].apartamento.valorCond = floatResp;
						}
						break;
					case 13://GARAGEM
						printf("Anterior: %d\nNovo: ", imovel[codigo].apartamento.garagem);
						scanf("%d", &respInt);
						CLEAR;

						printf("Nova informacao: %d\n", respInt);

						CLEAR;

						if (menu7());
						{
							imovel[codigo].apartamento.garagem = respInt;
						}
						break;
				}
			}
			else if (estado == 3) {//3 = terreno
				CLEAR;
				printf("Imovel: Terreno\n\n");
				printf("1-Cidade: %s\n", imovel[codigo].cidade);
				printf("2-Endereco: %s\n", imovel[codigo].endereco);
				printf("3-Bairro: %s\n", imovel[codigo].bairro);
				printf("4-CEP: %s\n", imovel[codigo].cep);
				printf("5-Valor: %.2f\n", imovel[codigo].valor);
				printf("6-Disponibilidade do imovel: %s\n", imovel[codigo].disponivel);
				printf("7-Titulo de venda do imovel: %s\n", imovel[codigo].titulo);
				printf("8-Area do terreno : %.2f\n\n", imovel[codigo].terreno.area);

				printf("Digite o numero do item a ser editado: ");
				scanf("%d", &respItem);
				FLUSH;

				switch (respItem) {
				case 1://CIDADE
					printf("Anterior: %s\nNovo: ", imovel[codigo].cidade);
					fgets(strResp, 100, stdin);
					strResp[strlen(strResp) - 1] = '\0';
					CLEAR;

					printf("Nova informacao: %s\n", strResp);

					CLEAR;

					if (menu7());
					{
						strcpy(imovel[codigo].cidade, strResp);
					}
					break;
				case 2://ENDERECO
					printf("Anterior: %s\nNovo: ", imovel[codigo].endereco);
					fgets(strResp, 100, stdin);
					strResp[strlen(strResp) - 1] = '\0';
					CLEAR;

					printf("Nova informacao: %s\n", strResp);

					CLEAR;

					if (menu7());
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

					CLEAR;

					if (menu7());
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

					CLEAR;

					if (menu7());
					{
						strcpy(imovel[codigo].cep, strResp);
					}
					break;
				case 5://VALOR $
					printf("Anterior: %.2f\nNovo: ", imovel[codigo].valor);
					scanf("%f", &floatResp);
					CLEAR;

					printf("Nova informacao: %.2f\n", floatResp);

					CLEAR;

					if (menu7());
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

					CLEAR;

					if (menu7()); {
						strcpy(imovel[codigo].disponivel, strResp);
					}
					break;
				case 7://TITULO
					printf("Anterior: %s\nNovo: ", imovel[codigo].titulo);
					fgets(strResp, 100, stdin);
					strResp[strlen(strResp) - 1] = '\0';
					CLEAR;

					printf("Nova informacao: %s\n", strResp);

					CLEAR;

					if (menu7());
					{
						strcpy(imovel[codigo].titulo, strResp);
					}
					break;
				case 8://AREA DO TERRENO
					printf("Anterior: %.2f\nNovo: ", imovel[codigo].terreno.area);
					scanf("%f", &floatResp);
					CLEAR;

					printf("Nova informacao: %.2f\n", floatResp);

					CLEAR;

					if (menu7());
					{
						imovel[codigo].terreno.area = floatResp;
					}
					break;
				}
			}
			else
				printf("\nNao foi possivel acessar o imovel\n\n");
		}
		salvaArquivoImovel();

		break;
	}
}
