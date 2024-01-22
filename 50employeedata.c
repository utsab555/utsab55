#include<stdio.h>
#include <conio.h>

struct employee{
	char name[50];
	int address[50];
	int salary;
	
};
void main(){
	struct employee e[50];
	int i,j;
	

	for(i=0,j=1;i<50,j<=50;i++,j++){
		printf("Enter name address and salary of  employee%d: \n",j );
		scanf("%s %s %d",e[i].name,e[i].address,&e[i].salary);
		
	}
	
	printf("\nThe details of 50 employees are as follows: \n");
	for(i=0,j=1;i<50,j<=50;i++,j++){
		printf("employee%d data: \n",j);
		printf("Name = %s\n", e[i].name);
		printf("Address = %s\n", e[i].address);
		printf("Salary = %d\n", e[i].salary);
		
	
		
	}
}
