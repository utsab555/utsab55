#include <stdio.h>
#include<string.h>
void main()
{
char u[30],r[30],l[30];
int i,l1,l2,l3;
	
	printf("Enter your name: \n");
	gets(u);
	
		printf("Loves or is_married_to?: \n");
	gets(l);
	
	printf("Enter your lovers name: \n");
	gets(r);
	

	
	l1 = strlen(u);
	l2 = strlen(r);
	l3 = strlen(l);
	
	for(i=0;i<=l3;i++){
		u[l1+i]=l[i];
	}

	
	l1=strlen(u);
	
	for(i=0;i<=l2;i++){
		u[l1+i]=r[i];
	}
	
	printf("%s",u);
	
	
}
