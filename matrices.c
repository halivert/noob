#include <stdio.h>

void llenar(int mata, int matb, int matc){
	int i = 1;
	int j = 1;
	for (i ; i <= 5 ; i++){
		for (j ; j <= 5 ; j++){
			printf("Introduce datos de entrada a%d%d",i,j);
			scanf ("%d", &i);
		}
	}
}

main(){
	int mata[5][5];
	int matb[5][5];
	int matc[5][5];
	llenar(&mata,&matb,&matc);

}
