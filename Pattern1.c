#include <stdio.h>
#include<conio.h>
void main(){
int a[2][3], i,j;
printf("Enter elements of 2x3 matrix: \n");
for (i=0;i<2;i++){
	for(j=0;j<3;j++){
		scanf("%d",&a[i][j]);
	}
}
for (i=0;i<2;i++){
	for(j=0;j<3;j++){
		printf("%d\t",a[i][j]);
	}
	printf("\n");
}

printf("\nPress enter to transpose the matrix shown!!");
getch();
printf("\nTranspose of matrix: \n");

for (i=0;i<3;i++){
	for(j=0;j<2;j++){
		printf("%d	",a[j][i]);
	}
	printf("\n");
}
}

