#include<stdio.h>
main(){
	int num1,num2,num3;
	printf("Enter three numbers: ");
	scanf("%d%d%d", &num1,&num2,&num3);
	if(num1>num2 && num1>num3){
		printf("Num1 is Greatest!!");
	
		}
			else if(num2>num1 && num2>num3){
			printf("Num2 is Greatest!!");
			
	}
	else if(num3>num1 && num3>num2){
		printf("Num3 is Greatest!!");
	}
	else{
		printf("All are equal!!");
	}
	
	
	return 0;
}
