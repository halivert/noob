#include <stdio.h>

//Suma dos números

void d(int *x, int *y) 	//Punteros
{
	printf("Anota\n");
	scanf("%i\n",x);   	//Guarda un  parametro en x, entero
	scanf("%i",y);		//Guarda un  parametro en y, entero
}

main ()
{
	int x,y;
	d(&x,&y); 	//Dirección
	x = x+y;
	printf("%i\n",x);
}
