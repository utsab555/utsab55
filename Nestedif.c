#include<stdio.h>
main (){
	int age,salary;
	printf("Enter the age: ");
	scanf("%d",&age);
    printf("Enter the salary: ");
	scanf("%d",&salary);
	
	if(age < 50){
		if(salary <= 20000){
			printf("You are normal staff!");
		}
		else{
			printf("You are leader staff!");
		}
	}
		else{
			printf("You are retired!");
			
		}
	



return 0;
}

