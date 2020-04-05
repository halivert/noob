#include <stdio.h>
#include <stdlib.h>
struct racional{
int num,dem;
};
typedef struct racional Racional;
Racional *creaRacional (int num,int dem)
{
	Racional *nvo;
	nvo=(Racional*) malloc (sizeof (Racional));
	nvo -> num=num;
		if(dem==0)
		 	return NULL;
		nvo-> dem=dem;
	return nvo;
}

Racional *divRacional(Racional *r1, Racional *r2)
{
	return creaRacional(r1->num*r2->dem, r1->dem*r2->num);
}

Racional *multRacional(Racional *r1, Racional *r2)
{
	return creaRacional(r1->num*r2->num, r1->dem*r2->dem);
}

Racional *sumRacional(Racional *r1, Racional *r2)
{
	return creaRacional(r1->num*r2->dem+r1->dem*r2->num,r1->dem*r2->dem);
}
int igualRacional(Racional *r1, Racional *r2)
{
	return r1->num*r2->dem==r2->num*r1->dem;

}

int getNumerador(Racional *r1)
{
	return r1->num; 
}

int getDenominador(Racional *r2)
{
	return r2->dem; 
}


void imprimeRacional(void *r)
{
	Racional *ra=(Racional*)r;
	printf("%d / %d\n", ra->num, ra->dem);
}
main()
{
	Racional *r1,*r2,*r3,*r4,*r5;
	int r6,r7,r8;
	int an,ad,bn,bd;
	printf("Racional 1 numerador \n");		
	scanf("%d",&an);
	printf("Racional 1 denominador \n");		
	scanf("%d",&ad);
	printf("Racional 2 numerador \n");		
	scanf("%d",&bn);
	printf("Racional 2 denominador \n");		
	scanf("%d",&bd);
	r1=creaRacional(an,ad);
	r2=creaRacional(bn,bd);
	
	r3=sumRacional(r1,r2);
	r4=multRacional(r1,r2);
	r5=divRacional(r1,r2);
	r6=igualRacional(r1,r2);
	printf("Racional 1\n");	
	imprimeRacional((void*)r1);
	printf("Racional 2\n");	
	imprimeRacional((void*)r2);
	printf("Suma de racional\n");
	imprimeRacional((void*)r3);
	printf("Multiplicacion de racional\n");
	imprimeRacional((void*)r4);
	printf("Division de racional\n");
	imprimeRacional((void*)r5);
		if(r6==0)
			printf("Los racionales son diferentes \n");
		else 
			printf("Los racionales son iguales \n");
	printf("Numerador 1 : ");
	r7=getNumerador(r1);
	printf("%d\n",r7);
	printf("Denominador 2 : ");
	r8=getNumerador(r2);
	printf("%d\n",r8);
}


