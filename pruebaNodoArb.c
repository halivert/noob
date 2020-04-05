#include <stdio.h>
#include "arbol.h"
#include "pila.h"
#define TAM 100

void imprimeAlgo() {

}

int main(void) {
	Pila *p;
	NodoArb *a, *b, *c, *d;
	char cad[TAM];
	int i;
	
	p = creaPila(TAM);
	printf("Introduce una operación\n");
	for (i = 0; i < TAM; i++) {
		scanf("%[^\n]", &cad[i]);
	}

	for (i = 0; cad[i]; i++) {
		a = creaNodoArb(creaChar(cad[i]), NULL, NULL);
		if(cad[i] != '+' && cad[i] != '-' && cad[i] != '*' && cad[i] != '/') {
			push(p, a);
		}
		else {
			b = pop(p);
			c = pop(p);
			d = creaNodoArb(creaChar(cad[i]), b, c);
			push(p, d);
		}
	}
	
	printf("%d\n", eval(d));
	
	return 0;
}
