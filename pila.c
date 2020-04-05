#include <stdio.h>
#include <stdlib.h>
#include "pila.h"


Pila* creaPila(int n){
	Pila* nvo;
	nvo = (Pila *)malloc(sizeof(Pila));
	nvo -> eltos = (void **)malloc( n*sizeof (void*));
	nvo -> tope = 0;
	return nvo;
}

void push(Pila* p, void* dato){
	p -> eltos [p -> tope] = dato;
	p -> tope = p -> tope + 1;
}

void* pop(Pila *p){
	p -> tope = p -> tope - 1;
	return p -> eltos[p -> tope];
}

int empty(Pila * p){
	return p -> tope == 0;
}

void* top(Pila* p){
	return p -> eltos [p -> tope -1];
}

char* creaChar(char c){
	char* nvo;
	nvo = (char*)malloc(sizeof(char));
	*nvo = c;
	return nvo;
}
