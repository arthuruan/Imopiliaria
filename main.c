/*
Imopiliaria
Produtores: Arthur Dionizio, Arthur Ruan, Samuel Laerte, Thiago Palacios.
vers�o alpha: 1.0
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "Cadastro.h"
#include "Menu.h"
#include "Arquivo.h"

int main(void) {

    int flagmenu = 0;//flag criada para facilitar a navegação entre o menu principal e os secundarios

	lerArquivoImovel();

    while(1){

        switch(menu1()){//switch do menu principal
            case 1://cadastro
                flagmenu = 1;
                CLEAR;
                switch(menu2()){//switch secundario com o menu que remete opções para cadastro
					case 1://opção casa
						CadastroAll(1);
						flagmenu = 0;
						break;
					case 2://opção apartamento
						CadastroAll(2);
						flagmenu = 0;
						break;
					case 3://opção terreno
						CadastroAll(3);
						flagmenu = 0;
						break;
					case 4://opção voltar para o menu principal
						flagmenu = 0;
						break;
				}
				break;
            case 2://opçao consultar imoveis disponivel
				Exibe();
				break;
			case 3://opção de busca
				switch (menu4()){//menu secundario para saber o tipo da busca
					case 1://busca por titulo
						BuscaTitulo();
						flagmenu = 0;
						break;
					case 2://busca por bairro
						BuscaBairro();
						flagmenu = 0;
						break;
					case 3://busca por valor
						BuscaValor();
						flagmenu = 0;
						break;
					case 4://volta par ao menu principal
						flagmenu = 0;
						break;
				}
				break;
			case 4://op��o que exibe imovel para aluguel || venda
				switch(menu5()){//menu secundario com opções de aluguel ou venda
					case 1://op��o por aluguel
						disponibilidade(1);
						flagmenu = 0;
						break;
					case 2://opção por venda
						disponibilidade(2);
						flagmenu = 0;
						break;
					case 3://volta menu principal
						flagmenu = 0;
						break;
				}
				break;
			case 5://opçõo para deletar um cadastro
				DeletaImovel();
				break;
			case 6://opção para editar um cadastro
				EditaImovel();
				break;
			case 7://encerrar o programa
				flagmenu = 1;
				break;
        }//fim do switch principal
        if(flagmenu)//if criado para sair do while
            break;
    }//fim do while

	return 0;
}//fim da função main
