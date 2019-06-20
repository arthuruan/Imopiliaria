#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char casa[10];

void salvaArquivosT() {

	FILE* arquivo;
	int i;

	arquivo = fopen("dadosCasa.txt", "w");

	if (arquivo <= 0) {
		puts("!!!Erro ao abrir o arquivo!!!");
		return;
	}

	for (i = 0; i < 10; i++) {
		if (casa[i] != 0) {
			fprintf(arquivo, "%s\n", casa[i]);
		}
	}

	fclose(arquivo);
}

void salvaArquivo() {
	FILE* arquivo;
	arquivo = fopen("dados.txt", "w");
	if (arquivo <= 0) {
		printf("!!!Erro ao abrir o arquivo!!!\n");
		return;
	}

	fwrite(casa, 10, sizeof(casa), arquivo);
	fclose(arquivo);
}

void lerArquivos() {
	FILE* arquivo;
	int i;

	arquivo = fopen("dadosCasa.txt", "r");

	if (arquivo <= 0) {
		printf("!!!Erro ao abrir o arquivo!!!\n");
		return;
	}

	for (i = 0; i < 10; i++) {
		if (feof(arquivo))
			break;
		fgets(casa, 10, arquivo);
	}

	fclose(arquivo);
}

void lerArquivo() {
	FILE* arquivo;

	arquivo = fopen("dados.txt", "r");

	if (arquivo <= 0) {
		puts("!!!Erro ao abrir o arquivo!!!");
		return;
	}
	fread(casa, sizeof(casa), 10, arquivo);

	fclose(arquivo);
}

int main() {
	int i;

	lerArquivo();
	// Exibicao do Vetor
	for (i = 0; i < 1; i++) {
		if (casa[i] != 0) {
			printf("Nome: \n", casa[i]);
		}
	}

	salvaArquivosT();

	system("pause");
	return 0;
}
