//WAP to find whether a number is even or odd
#include<stdio.h>

int main(){
	//Declaring variable
	int Number;
	//Getting user input
	printf("Enter the number: \n");
	scanf("%d", &Number);
	//checking whether even or odd and printing
	if(Number % 2 == 0){
		printf("The number is even!\n");
		
	}
	else {
		printf("The number is odd.\n ");
	}
	
	
	return 0;
}

