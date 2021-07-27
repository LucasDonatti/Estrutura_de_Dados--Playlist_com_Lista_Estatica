#include "tipos.h"

void buscarPorNome(TListaMusicas *p)
{
	if(p->tamanhoLista > 0)
	{
		char musicaBuscada[50];
		
		printf("\n Nome da musica que deseja buscar: ");
		fflush(stdin);
		gets(musicaBuscada);
				
		int posicao = -1;	
		for(int i = 0; i < p->tamanhoLista || posicao == -1; i++)
		{
			if(strcmp(musicaBuscada, p->listaMusicas[i].nomeMusica) == 0)
			{
				posicao = i;
			}
		}
		
		if(posicao != -1)
		{
			printf("\n Musica presente na playlist na posicao %d\n", posicao+1);
		}
		else
		{
			printf("\n Musica nao esta na playlist\n");
		}
	}
	else
	{
		printf("\n Playlist vazia\n");
	}
}
