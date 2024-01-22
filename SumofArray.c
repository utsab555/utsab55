//Wap to print 2x2 matrix...
#include <stdio.h>
#include <conio.h>
int main(){
	int a[2][2],i,j,sum=0;
	
	printf("Enter the array: \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t", a [i][j]);
		}
		printf("\n");
	}
	getch ();
	printf("Now im gonna give you summed version of this matrix..");
	getch();
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum = sum + a[i][j];
		}
	}
	printf("\2nThe sum of all elements in the matrix is: %d",sum);
}

