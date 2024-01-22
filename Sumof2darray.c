#include <stdio.h>
#include <conio.h>
#define N 50
void main(){
	int a[N][N],b[N][N],c[N][N],i,j,k,m,n,p,q,sum;
	
	printf("enter rows and column for first matrix: \n");
	scanf("%d%d",&m,&n);
	
	printf("Enter elements of first matrix: \n");
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter rows and column for second matrix: \n");
	scanf("%d%d",&p,&q);
	
	printf("Enter elements of second matrix: \n");
	for (i=0;i<p;i++){
		for(j=0;j<q;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	if (n != p){
		printf("\nNot applicable to multiply");
	}
	else{
		printf("Matrix after multiplication: \n");
		for(i=0;i<n;i++){
			for(j=0;j<p;j++){
				sum=0;
				for(k=0;k<n;k++){
					sum = (a[i][k] * b[k][j]) + sum;
				}
				c[i][j]=sum;
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
}
	




