#include <stdio.h>
#include <string.h>

typedef struct nodoarb{
	struct nodoarb *izq, *der;
	void* dato;
} NodoArb;

NodoArb *creaNodoArb(void *dato, NodoArb *izq, NodoArb *der);
void imprimePos(NodoArb *r, void(*f)(void *));
void imprimeIn(NodoArb *r, void(*f)(void *));
int eval(NodoArb *r);

