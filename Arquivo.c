#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Salva as informações do imovel no vetor imovel e faz um arquivo txt.
void salvaArquivoImovel() {
	FILE* arquivo;
	int i;

	arquivo = fopen("dadosImovel.txt", "w+");
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
				fprintf(arquivo, "%.1f\n\n", imovel[i].casa.areaConst);
			}
			else if (imovel[i].estado == 2) {//informacoes do apartamento
				fprintf(arquivo, "%s\n", imovel[i].apartamento.posicao);
				fprintf(arquivo, "%d\n", imovel[i].apartamento.quartos);
				fprintf(arquivo, "%f\n", imovel[i].apartamento.area);
				fprintf(arquivo, "%d\n", imovel[i].apartamento.andar);
				fprintf(arquivo, "%.1f\n", imovel[i].apartamento.valorCond);
				fprintf(arquivo, "%d\n\n", imovel[i].apartamento.garagem);
			}
			else if (imovel[i].estado == 3) {//informacoes do terreno
				fprintf(arquivo, "%.1f\n\n", imovel[i].terreno.area);
			}
		}
	}

	fclose(arquivo);
}

//ler todas as informações do vetor imovel contidas no arquivo txt.
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
			fscanf(arquivo, "%f\n", &imovel[i].casa.areaTerreno);
			fscanf(arquivo, "%f\n", &imovel[i].casa.areaConst);
		}
		else if (imovel[i].estado == 2) {//ler informacoes do apartamento
			fgets(imovel[i].apartamento.posicao, 100, arquivo);
			imovel[i].apartamento.posicao[strlen(imovel[i].apartamento.posicao) - 1] = '\0';
			fscanf(arquivo, "%d\n", &imovel[i].apartamento.quartos);
			fscanf(arquivo, "%f\n", &imovel[i].apartamento.area);
			fscanf(arquivo, "%d\n", &imovel[i].apartamento.andar);
			fscanf(arquivo, "%f\n", &imovel[i].apartamento.valorCond);
			fscanf(arquivo, "%d\n", &imovel[i].apartamento.garagem);
		}
		else if (imovel[i].estado == 3) {//ler informacoes do terreno
			fscanf(arquivo, "%f\n", &imovel[i].terreno.area);
		}
	}

	fclose(arquivo);
}

