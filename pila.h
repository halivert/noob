#include <stdio.h>
#include <stdlib.h>

struct pila{
	int tope;
	void** eltos;
};
typedef struct pila Pila;

Pila* creaPila(int n);
void push(Pila* p, void* dato);
void* pop(Pila* p);
int empty(Pila* p);
void* top(Pila* p);
char* creaChar(char c);

