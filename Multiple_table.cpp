#include <stdio.h>

int main() {
   
   int number,i,a;
   
   printf("Enter the desired number: ");
   scanf("%d",&number);
   
   for(i=1;i<=10;i++){
   	a = number * i;
   printf("%d * %d = %d\n",number,i,a);	
   	
   }
}
   
