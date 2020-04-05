#include <stdio.h>

//Suma una serie de números

void de(float *x, float *y)
{
	printf("Introduzca el número\n");
	printf("Cuando desee terminar la suma introduzca un '0'\n");
	do 
	{	
		scanf("%f", x);
		(*y) += (*x);
	}
	while ((*x) != 0);
}

main ()
{
	float x, y;
	de(&x, &y);
	printf("La suma de los números es: %0.2f\n", y);
}
