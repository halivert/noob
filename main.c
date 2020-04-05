#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

char* creaChar(char c){
	char* nvo;
	nvo = (char*)malloc(sizeof(char));
	*nvo = c;
	return nvo;
}

int main(){
	Pila* p;
	char cad[1000];
	char* b;
	int* a;
	int i, q = 0;
	printf("\nIntroduce una cadena\n");
	p = creaPila(1000);

	for(i=0 ; i < 1000 ; i++){
		scanf("%[^\n]", &cad[i]);
	}

	for(i=0; cad[i] ; i++){
		if(cad[i] != ' ')
			push(p, creaChar(cad[i]));
		else
			q++;
	}
	
	q += p->tope - 1;

	for(i=0 ; i<=q ; i++){
		a = (int*)top(p);
		b = (char*)a;
		if(cad[i] == ' ')
			continue;
		if((*b) == cad[i])
			pop(p);
	}
	
	if(empty(p) != 0)
		printf("La cadena es palíndromo\n\n");
	else
		printf("La cadena no es un palíndromo\n\n");

	return 0;
}
