#include <stdio.h>

//Algoritmo de Euclides

//Datos de entrada
void de(int *x, int *y){	
	printf("Introduce un número:\n");
	scanf("%i", x);
	printf("Introduce un número:\n");
	scanf("%i", y);	
}

//Comprueba el mayor
void may(int *x, int *y, int *z){

	if ((*x)>(*y)){
	(*z) = (*x)%(*y);
	if((*z)==0){
		printf("El máximo común divisor es: %i\n", *y);
		}
	}
	else{
	(*z) = (*y)%(*x);
	if((*z)==0){
		printf("El máximo común divisor es: %i\n", *x);
		}
	}
}

//Extrae el MCD
void buc(int *x, int *y, int *z, int *w){
	
	if((*x)>(*y)){
		do{
		(*w) = (*y)%(*z);
		if((*w)==0)
			printf("El máximo común divisor es: %i\n", *z);
		else{
		(*y) = (*z);
		(*z) = (*w);
		}
		}
		while((*w)!=0);
	}
	else{
		do{
		(*w) = (*x)%(*z);
		if((*w)==0)
			printf("El máximo común divisor es: %i\n", *z);
		else{
		(*x) = (*z);
		(*z) = (*w);
		}
		}
		while((*w)!=0);
}
}

main(){
	int x, y, z, w;
	de(&x,&y);
	may(&x,&y,&z);
	if(z!=0)
	buc(&x,&y,&z,&w);
}
