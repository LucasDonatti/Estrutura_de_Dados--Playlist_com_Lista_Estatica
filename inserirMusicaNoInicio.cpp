#include "tipos.h"

void inserirMusicaNoInicio(TListaMusicas *p)
{
	if(p->tamanhoLista < 10)
	{
		for(int i = p->tamanhoLista-1; i >= 0; i--)
		{
			p->listaMusicas[i+1] = p->listaMusicas[i];
		}
		
		printf("\n Informe nome da musica: ");
		fflush(stdin);
		gets(p->listaMusicas[0].nomeMusica);
		
		printf(" Informe a banda/artista: ");
		fflush(stdin);
		gets(p->listaMusicas[0].banda);
		
		printf(" Informe a duracao: ");
		scanf("%d", &p->listaMusicas[0].duracao);
		
		p->tamanhoLista++;
	}
	else
	{
		printf("\n Playlist cheia!\n");
	}
}
