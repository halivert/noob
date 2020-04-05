#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pila.h"
#include "arbol.h"
#define TAM 100

int main(void){
	char *cad[TAM]/*, *anim[TAM]*/;
	char c, r;
	Pila *p;
	NodoArb *n1, *n2, *n;
	int i;
	
	p = creaPila(TAM);
	n1 = creaNodoArb(strdup("Rinoceronte\n"), NULL, NULL);
	n2 = creaNodoArb(strdup("¿Vive en la tierra?\n"), NULL, n1);
	push(p, n1);
	push(p, n2);
	
	do {
		n2 = pop(p);
		n1 = pop(p);
		n = creaNodoArb(strdup((char *)n2 -> dato), NULL, n1);
		printf("%s", (char *)n -> dato);
		scanf("%c", &c);
		if (c == 's'){
			n = n -> der;
			scanf("%c", &r);
		}
		else {
			printf("¿Qué animal era?\n");
			scanf("%s", cad[TAM]);
			n1 = creaNodoArb(strdup(*cad), NULL, NULL);
			printf("Escribe una pregunta relacionada con el animal\n");
			scanf("%s", cad[TAM]);
			n2 = creaNodoArb(strdup(*cad), NULL, NULL);
			push(p, n1);
			push(p, n2);
		}
		
	} 	while (n -> izq != NULL && n -> der != NULL);
		
	return 0;
}
