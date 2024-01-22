#include <stdio.h>

void display(char [30]);

void main(){
    char str[30];
	printf("Enter the string: ");
	gets(str);
	display (str);
	
	
}

void display(char str[30]){
	printf("The string is: %s",str);
}



