#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pila.h"

char* creaChar(char c);

int main(){
	Pila* p;
	char cad[100];
	char* b;
	int i;
	int *a;
	printf("\nIntroduce una cadena\n");
	p = creaPila(100);
	printf("%d\n", p->tope);
	for(i = 0 ; cad[i] <= '\n' ; i++){
		scanf("%[^\n]", &cad[i]);
	}

	for(i = 0; cad[i] ; i++){
		push(p, creaChar(cad[i]));
	}

	int q = p -> tope-1;
	printf("\n%d\n%d\n", p->tope, q);

	for(i=0;i<=q;i++){
		int* e = (int*)top(p);
		char* y = (char*)e;
		printf("%c", (*y));
		pop(p);
	}

	printf("\n%d\n%d\n", p->tope, q);

	for(i = 0; cad[i] ; i++){
		if(cad[i] != ' ')
			push(p, creaChar(cad[i]));
	}


	printf("\n%d\n", p -> tope);

	for(i = 0 ; i <= q ; i++){
		a = (int*)top(p);
		b = (char*)a;
		if(cad[i] == ' ')
			continue;
		if((*b) == cad[i]){
			pop(p);
		}

		printf("%c\t", cad[i]);
		printf("%d\t", (int)cad[i]);
		printf("%c\n", (*b));

	}

	if(0 >= empty(p))
		printf("La cadena es palíndromo\n");
		printf("\n");
	return 0;
}	

char* creaChar(char c){
	char* nvo;
	nvo = (char*)malloc(sizeof(char));
	*nvo = c;
	return nvo;
}

