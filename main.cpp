#include "tipos.h"

int main()
{
	TListaMusicas playlist;
	inicializarLista(&playlist);
	
	int opcao;
	do
	{
		printf("\n 1 - Inserir no fim da playlist");
		printf("\n 2 - Inserir no inicio da playlist");
		printf("\n 3 - Listar musicas da playlist");
		printf("\n 4 - Play"); // Seleciona a musica da 1ª posicao
		printf("\n 5 - Buscar musica por nome");
		printf("\n 0 - Sair");
		printf("\n Escolha uma opcao: ");
		scanf("%d", &opcao);
		switch(opcao)
		{
			case 1 : inserirMusicaNoFim(&playlist); break;
			case 2 : inserirMusicaNoInicio(&playlist); break;
			case 3 : listarMusicas(&playlist); break;
			case 4 : playMusica(&playlist); break;
			case 5 : buscarPorNome(&playlist); break;
		}
		printf("\n\n\n");
		system("pause");
		system("cls");
	}while(opcao != 0);
	
	printf("\n\n\n");
	system("pause");
}
