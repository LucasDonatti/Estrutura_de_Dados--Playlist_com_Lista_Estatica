#include "tipos.h"

void inserirMusicaNoFim(TListaMusicas *p)
{
	if(p->tamanhoLista < 10)
	{
		printf("\n Informe nome da musica: ");
		fflush(stdin);
		gets(p->listaMusicas[p->tamanhoLista].nomeMusica);
		
		printf(" Informe a banda/artista: ");
		fflush(stdin);
		gets(p->listaMusicas[p->tamanhoLista].banda);
		
		printf(" Informe a duracao: ");
		scanf("%d", &p->listaMusicas[p->tamanhoLista].duracao);
		
		p->tamanhoLista++;
	}
	else
	{
		printf("\n Playlist cheia!\n");	
	}
}
