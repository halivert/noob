#include <stdio.h>

//Promedia n calificaciones

void de(float *calf, float *a, int *i){
	printf("Introduzca las calificaciones\nCuando desee ");
	printf("terminar introduzca un \"0\"\n");
	do{
		scanf("%f", calf);
		(*a) += (*calf);
		(*i) += 1;
	}
	while ((*calf) != 0);
	if ((*i)==1){
		(*i) = 0;
		printf("Introduzca al menos una calificación\n\n");
		de(calf, a, i);
	}
	else
		(*a) = (*a)/((*i)-1);
}

void impr(float *calf, float *a, int *i){
	if ((*i)!=1){
		printf("El promedio de las calificaciones es: ");
		printf("%0.2f\n", (*a));
	}
}

main(){
	float calf;
	float a = 0;
	int i = 0;
	de(&calf, &a, &i);
	impr(&calf, &a, &i);
}
