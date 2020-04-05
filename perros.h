#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct perro{
	char nombre[100];
	char raza[50];
	int edad;
	char genero;
} Perro;

Perro* creaPerro(char [], char [], int, char);
void imprimePerro(void*);
