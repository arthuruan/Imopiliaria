#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Cadastro.h"

//Salva as informações do vetor imovel em um arquivo .txt
void salvaArquivoImovel() {
	FILE* arquivo;
	int i;

	arquivo = fopen("dadosImovel.txt", "w");
	if (arquivo <= 0) {
		puts("!!!Erro ao abrir o arquivo!!!");
		return;
	}

	for (i = 0; i < 100; i++) {
		if (imovel[i].estado != 0) {
			if (imovel[i].estado == 1) {//Informacoes da casa
				fprintf(arquivo, "%d\n", imovel[i].estado);
				fprintf(arquivo, "%s\n", imovel[i].cidade);
				fprintf(arquivo, "%s\n", imovel[i].bairro);
				fprintf(arquivo, "%s\n", imovel[i].endereco);
				fprintf(arquivo, "%s\n", imovel[i].cep);
				fprintf(arquivo, "%.2f\n", imovel[i].valor);
				fprintf(arquivo, "%s\n", imovel[i].disponivel);
				fprintf(arquivo, "%s\n", imovel[i].titulo);
				fprintf(arquivo, "%d\n", imovel[i].casa.pavimentos);
				fprintf(arquivo, "%d\n", imovel[i].casa.quartos);
				fprintf(arquivo, "%.2f\n", imovel[i].casa.areaTerreno);
				fprintf(arquivo, "%.2f\n\n", imovel[i].casa.areaConst);
			}
			else if (imovel[i].estado == 2) {//Informacoes do apartamento
				fprintf(arquivo, "%d\n", imovel[i].estado);
				fprintf(arquivo, "%s\n", imovel[i].cidade);
				fprintf(arquivo, "%s\n", imovel[i].bairro);
				fprintf(arquivo, "%s\n", imovel[i].endereco);
				fprintf(arquivo, "%s\n", imovel[i].cep);
				fprintf(arquivo, "%.2f\n", imovel[i].valor);
				fprintf(arquivo, "%s\n", imovel[i].disponivel);
				fprintf(arquivo, "%s\n", imovel[i].titulo);
				fprintf(arquivo, "%s\n", imovel[i].apartamento.posicao);
				fprintf(arquivo, "%d\n", imovel[i].apartamento.quartos);
				fprintf(arquivo, "%.2f\n", imovel[i].apartamento.area);
				fprintf(arquivo, "%d\n", imovel[i].apartamento.andar);
				fprintf(arquivo, "%.2f\n", imovel[i].apartamento.valorCond);
				fprintf(arquivo, "%d\n\n", imovel[i].apartamento.garagem);
			}
			else if (imovel[i].estado == 3) {// Informacoes do terreno
				fprintf(arquivo, "%d\n", imovel[i].estado);
				fprintf(arquivo, "%s\n", imovel[i].cidade);
				fprintf(arquivo, "%s\n", imovel[i].bairro);
				fprintf(arquivo, "%s\n", imovel[i].endereco);
				fprintf(arquivo, "%s\n", imovel[i].cep);
				fprintf(arquivo, "%.2f\n", imovel[i].valor);
				fprintf(arquivo, "%s\n", imovel[i].disponivel);
				fprintf(arquivo, "%s\n", imovel[i].titulo);
				fprintf(arquivo, "%.2f\n\n", imovel[i].terreno.area);
			}
		}
	}

	fclose(arquivo);
}

//Ler todas as informações do vetor imovel contidas no arquivo .txt
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

		fscanf(arquivo, "%d\n", &imovel[i].estado);
		if (imovel[i].estado == 1) {//ler informacoes da casa
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
			fscanf(arquivo, "%d\n", &imovel[i].casa.pavimentos);
			fscanf(arquivo, "%d\n", &imovel[i].casa.quartos);
			fscanf(arquivo, "%f\n", &imovel[i].casa.areaTerreno);
			fscanf(arquivo, "%f\n\n", &imovel[i].casa.areaConst);
		}
		else if (imovel[i].estado == 2) {//ler informacoes do apartamento
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
			fgets(imovel[i].apartamento.posicao, 100, arquivo);
			imovel[i].apartamento.posicao[strlen(imovel[i].apartamento.posicao) - 1] = '\0';
			fscanf(arquivo, "%d\n", &imovel[i].apartamento.quartos);
			fscanf(arquivo, "%f\n", &imovel[i].apartamento.area);
			fscanf(arquivo, "%d\n", &imovel[i].apartamento.andar);
			fscanf(arquivo, "%f\n", &imovel[i].apartamento.valorCond);
			fscanf(arquivo, "%d\n\n", &imovel[i].apartamento.garagem);
		}
		else if (imovel[i].estado == 3) {//ler informacoes do terreno
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
			fscanf(arquivo, "%f\n\n", &imovel[i].terreno.area);
		}
	}

	fclose(arquivo);
}
