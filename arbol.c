#include <stdio.h>
#include <stdlib.h>
#include "arbol.h"

NodoArb *creaNodoArb(void *dato, NodoArb *izq, NodoArb *der) {
	NodoArb *nvo = (NodoArb*)malloc(sizeof(NodoArb));
	nvo -> dato = dato;
	nvo -> izq = izq;
	nvo -> der = der;
	return nvo;
}

void imprimePos(NodoArb *r, void(*f)(void *)) {
	if(!r) 
		return;
	imprimePos(r -> izq, f);
	imprimePos(r -> der, f);
	f(r -> dato);
}

void imprimeIn(NodoArb *r, void(*f)(void *)) {
	if(!r) 
		return;
	imprimePos(r -> izq, f);
	f(r -> dato);
	imprimePos(r -> der, f);
}

int eval(NodoArb *r) {
	char c = *(char *)(r -> dato);
	if(r -> izq == NULL && r -> der == NULL)
		return c - '0';
	if(c == '+')
		return eval(r -> izq) + eval(r -> der);
	if(c == '-')
		return eval(r -> izq) - eval(r -> der);
	if(c == '*')
		return eval(r -> izq) * eval(r -> der);
	if(c == '/' && eval(r -> der) != 0) 
		return eval(r -> izq) / eval(r -> der);	
		return 0;
}
