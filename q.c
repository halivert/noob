#include <stdio.h>

//Imprime un rectángulo

main (){
	int x = 0;
	int i = 0;
	for(i ; i<=9 ; i++){
		printf("*");
	}
	printf("\n");
	for(x ; x <=8 ; x++){
		int j = 0;
		for (j ; j<=1 ; j++){
			printf("*        ");
		}
		printf("\n");
	}
	for(x ; x>=0 ; x--)
		printf("*");
		printf("\n");
}
