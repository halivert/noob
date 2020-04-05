#include <stdio.h>
#include <math.h>

//Potencias de dos, compilar con -lm al final

void sum(long long *i){
	int n=0;
	for (n;n<=37;n++){
		(*i) = pow(2,n);
		printf("2^%d\t", n);
		printf("%lld\n", (*i));
	}
}

main(){
	long long i;
	sum(&i);
}
