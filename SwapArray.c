#include <stdio.h>
#include <conio.h>
void main() 

{
int a[4]={0,1,2,3},b[4]={7,8,9,4},c[4],i;
for(i=0;i<4;i++){
	c[i]=a[i];
	a[i]=b[i];
	b[i]=c[i];
}
printf("After swapping \n");
printf("Value of a are: \n");
for (i=0;i<4;i++){
	printf("%d\t",a[i]);
	}
printf("\nValue of b are: \n");
for (i=0;i<4;i++){
	printf("%d\t",b[i]);
}

}






