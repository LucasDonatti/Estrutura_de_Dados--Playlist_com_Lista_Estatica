#include "tipos.h"

void playMusica(TListaMusicas *p)
{
	if(p->tamanhoLista > 0)
	{
		printf("\n ************* T O C A N D O ************* ");
		printf("\n ========================================= \n");
		printf("\n Musica: %s", p->listaMusicas[0].nomeMusica);
		printf("\n Banda: %s", p->listaMusicas[0].banda);
		printf("\n Duracao: %d\n", p->listaMusicas[0].duracao);
		printf("\n ========================================= \n");
		
		for(int i = 0; i < p->tamanhoLista; i++)
		{
			p->listaMusicas[i] = p->listaMusicas[i+1];
		}
		
		p->tamanhoLista--;
	}
	else
	{
		printf("\n Playlist vazia!\n");
	}
}
