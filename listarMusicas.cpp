#include "tipos.h"

void listarMusicas(TListaMusicas *p)
{
	if(p->tamanhoLista > 0)
	{
		printf("\n ************ P L A Y L I S T ************ ");
		printf("\n ========================================= \n");
		for(int i = 0; i< p->tamanhoLista; i++)
		{
			printf("\n  Posicao: %da", i+1);
			printf("\n   Musica: %s", p->listaMusicas[i].nomeMusica);
			printf("\n    Banda: %s", p->listaMusicas[i].banda);
			printf("\n  Duracao: %d", p->listaMusicas[i].duracao);
			printf("\n\n ========================================= \n");
		}
	}
	else
	{
		printf("\n Playlist vazia!\n");
	}
}
