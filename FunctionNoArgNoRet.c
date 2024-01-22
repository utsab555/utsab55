//with argument with return type
#include<stdio.h>
#include<conio.h>
//declaring function
int cmp (int,int,int);


void main(){
	int u,n,c;
	printf("Enter two numbers: ");
	scanf("%d%d",&u,&n);
	c = cmp (u,n);
	printf("The maximum number among these is: %d",c);

}

//defining function
int cmp (int x,int y,int z){

	
	if (x>y)
	return x;
	
	else
	return y;
	
}


	




