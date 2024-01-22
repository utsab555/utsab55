#include<stdio.h>
main()
{
	int a,b,c,choice;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	printf("***Menu***\n");
	printf(" 1->Sum\n 2->Subtract\n 3->Multiply\n 4->Divide\n");
	printf("Enter what you want to do?\n");
	scanf("%d", &choice);
	if(choice == 1){
		c= a+b;
	}
else if(choice == 2){
	c= a-b;
}

else if(choice == 3){
	c= a*b;
}
else if(choice == 4){
	c= a/b;
}
printf("The result is: %d",c);

}
