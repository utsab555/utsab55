#include<stdio.h>
main (){
	int number,isLowercase,isUppercase;
	printf("Enter 7 or 10: ");
	scanf("%d", &number);
	
	if(number == 7){
		char m,a,d,r,i,s;
		printf("Great! You've chosen Ronaldo!");
		printf("Which club was the best for ronaldo: ");
		scanf("%c%c%c%c%c%c",&m,&a,&d,&r,&i,&s);
		isLowercase = (m == 'm'|| a == 'a'|| d == 'd'|| r == 'r'|| i == 'i'|| s == 'd');
		isUppercase = (m == 'M'|| a == 'A'|| d == 'D'|| r == 'R'||i == 'I'|| s == 'D');
		
		if(isLowercase || isUppercase){
			printf("You know football! Respected!");
		}
			else{
				printf("You dont know what is football!");
			}
		
	}
else{
	printf("invalid command! ");
}


return 0;
}
