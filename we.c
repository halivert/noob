#include <stdio.h>

//Arreglos bidimensionales

/*void mult(int *a[2][2]){
	int i = 0;
	for (i ; i <= 1 ; i++){
		printf("%d", *a[i][i]);
	}
}*/

main(){
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	int i = 0;
/*	a[0][0] = 00;
	a[0][1] = 10;
	a[0][2] = 20;
	a[1][0] = 100;
	a[1][1] = 110;				
	a[1][2] = 120;*/
	for (i ; i <=2 ; i++){
		int j = 0;
		for (j ; j <=2 ; j++){	
			if (i==0 && j==0)
			printf("La diagonal es:\n");
			if (i==j)
			printf("%d\n", a[i][j]);
//			printf("%d\n", a[i][j]);
		}
	}
}
