#include <stdio.h>

main(){
	int x,y,z,w,v;
	printf("Introduce 5 números\n");
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
	scanf("%d", &w);
	scanf("%d", &v);
	if(x>y){
		if(y>z){
			if(z>w){
				if(w>v){
					printf("El mayor es %d\n", x);
					printf("El menor es %d\n", v);
				}
				else{
					if(v>x){
						printf("El mayor es %d\n", v);
						printf("El menor es %d\n", w);
					}
					else{
						printf("El mayor es %d\n", x);
					}
				}
			}
			else{
				if(w>x){
					printf("El mayor es %d\n", w);
				}
				else{
					printf("El mayor es %d\n", x);
				}
			}
		}
		else{
			if(z>x){
				printf("El mayor es %d\n", z);
			}
			else{
				printf("El mayor es %d\n", x);
			}
		}
	}
	else{
		if(x>z){
			if(z>w){
				if(w>v){
					printf("El mayor es %d\n", y);
				}
				else{
					if(v>y){
						printf("El mayor es %d\n", v);
					}
					else{
						printf("El mayor es %d\n", x);
					}
				}
			}
			else{
				if(w>y){
					printf("El mayor es %d\n", w);
				}
			}
		}
	}
}

