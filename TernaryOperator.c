#include<stdio.h>
main (){
	int number;
	printf("Enter 7 or 10: ");
	scanf("%d",&number );
	
	switch(number){
	
	case 7:
		printf("Ronaldo is the goat!");
	break;
	
	case 10:
	printf("Messi is the goat!");
	break;
	
	default:
	printf("Invalid Number!");	
}

}
