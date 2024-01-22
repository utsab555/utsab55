/*
print the following: 
....
...
..

*/
#include<stdio.h>
main (){
//declaring the variables..	
int i,j;
//using nested loop
// "." is printed till j condition meets(4 times)
// after it loops the row pattern then it loops column pattern (5 times)

for (i=1;i<=5;i++)/*column pattern*/{
	
	for(j=1;j<=4;j++)/*row pattern*/{
		
		printf(".");/*prints "."*/
		
	}
	// gives new line
	printf("\n");
}

  
return 0;
}
