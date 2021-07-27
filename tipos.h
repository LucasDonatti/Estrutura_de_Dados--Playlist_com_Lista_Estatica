#ifndef _tipos_
#define _tipos_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tipoMusica
{
	char nomeMusica[50];
	char banda[50];
	int duracao;
}TMusica;

typedef struct tipoListaMusicas
{
	TMusica listaMusicas[10];
	int tamanhoLista;
}TListaMusicas;

void inicializarLista(TListaMusicas *p);
void inserirMusicaNoFim(TListaMusicas *p);
void inserirMusicaNoInicio(TListaMusicas *p);
void listarMusicas(TListaMusicas *p);
void playMusica(TListaMusicas *p);
void buscarPorNome(TListaMusicas *p);

#endif
