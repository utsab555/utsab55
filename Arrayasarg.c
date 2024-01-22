#include <stdio.h>
//function declaration
int avg (int[],int );

void main(){
	int i,average,size;
	int marks[5];
		printf("Enter marks of 5 students: \n");
	for(i=0;i<5;i++){
		scanf("%d",&marks[i]);
	}
    size = sizeof (marks)/sizeof(marks[0]);
	//function calling
	average= avg(marks,size);
	printf("\nThe average is %d",average);
}
//function definition
int avg (int marks[],int a){
	int i,sum=0,av=0;
	for(i=0;i<a;i++){
		sum= sum + marks[i];
	}
	av = sum/a;
	return av;
}


