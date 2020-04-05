#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "perros.h"

Perro* creaPerro(char nombre[], char raza[], int edad, char genero){
	Perro* nvo;
	nvo = (Perro*)malloc(sizeof(Perro));
	strcpy(nvo -> nombre, nombre);
	strcpy(nvo -> raza, raza);
	nvo -> edad = edad;
	nvo -> genero = genero;
	return nvo;
}

void imprimePerro(void* p){
	Perro *pe = (Perro*)p;
	puts(pe -> nombre);
	puts(pe -> raza);
	printf("%d\n", pe -> edad);
	printf("%c\n", pe -> genero);
	return;
}
