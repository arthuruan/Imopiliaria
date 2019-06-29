void DeletaImovel(int imovelN){//recebe a posicao do imovel no vetor, zera essa posicao, e dps desloca tudo
	
	int i, posicao;

	CLEAR;

	printf("Digite a posicoa do seu imovel: ");
    scanf("%d", &posicao);
	FLUSH;

	for(i = posicao ; i<100 ; i++){
		imovel[i]=imovel[i+1];
	}
}