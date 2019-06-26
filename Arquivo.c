#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Salva as informações do imovel no vetor imovel e faz um arquivo txt.
void salvaArquivoImovel(int flag) {
	FILE* arquivo;
	int i;

	arquivo = fopen("dadosImovel.txt", "w");
	if (arquivo <= 0) {
		puts("!!!Erro ao abrir o arquivo!!!");
		return;
	}

	for (i = 0; i < 100; i++) {
		if (imovel[i].cidade != 0) {//informacoes do cadastro
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

//ler todas as informações do vetor imovel contidas no arquivo .txt
void lerArquivoImovel(int flag) {
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
	}

	fclose(arquivo);
}

/*void salvaArquivo(){
	FILE* arquivo;

	arquivo = fopen("dados.txt", "w");
	if (arquivo <= 0){
		puts("!!!Erro ao abrir o arquivo!!!");
		return;
	}

	fwrite(imovel, 100, sizeof(t_cadastro), arquivo);
	fclose(arquivo);
}
*/

/*void lerArquivo(){
	FILE* arquivo;

	arquivo = fopen("dados.txt", "r");
	if (arquivo <= 0) {
		puts("!!!Erro ao abrir o arquivo para leitura!!!");
		return;
	}

	fread(imovel, 100, sizeof(t_cadastro), arquivo);
	fclose(arquivo);
}
*/


//FALTA FAZER ALGUMAS COISAS NA FUNCAO LerArquivoImovel E FALTA AJEITAR A MAIN PARA O TESTE

/*int main(){
	int i;

	lerArquivoTexto();

	// Exibicao do vetor imovel
	for (i = 0; i < 10; i++){
		if (imovel[i].pavimentos!= 0){
			printf("Pavimentos: %d\n", imovel[i].pavimentos);
			printf("Quartos: %d\n", imovel[i].quartos);
			printf("Area do terreno: %f\n", imovel[i].areaTerreno);
			printf("Area de construcao: %f\n", imovel[i].areaConst);
		}
	}

	int posVaga = -1;

	for (i = 0; i < 10; i++){
		if (imovel[i].pavimentos == 0){
			posVaga = i;
			break;
		}
	}

	puts("Cadastro Casa");
	puts("Digite o numero de pavimentos: ");
	scanf("%d", &imovel[posVaga].pavimentos);
	puts("Digite o numero de quartos: ");
	scanf("%d", &imovel[posVaga].quartos);
	puts("Digite a area do terreno: ");
	scanf("%f", &imovel[posVaga].areaTerreno);
	puts("Digite a area de construcao: ");
	scanf("%f", &imovel[posVaga].areaConst);



	// Exibicao do vetor imovel
	for (i = 0; i < 10; i++){
		if (imovel[i].pavimentos != 0){
			printf("Pavimentos: %d\n", imovel[i].pavimentos);
			printf("Quartos: %d\n", imovel[i].quartos);
			printf("Area do terreno: %f\n", imovel[i].areaTerreno);
			printf("Area de construcao: %f\n", imovel[i].areaConst);
		}
	}

	salvaArquivoTexto();

	return 0;
}
*/
