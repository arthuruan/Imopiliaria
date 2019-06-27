void DeletaImovel(int imovelN) //recebe a posicao do imovel no vetor, zera essa posicao, e dps desloca tudo
{
	int k;//contador

	for(k = imovelN ; k<100 ; k++)
	{
		imovel[k]=imovel[k+1];
	}
}