#include <stdio.h>
#include <string.h>
void main ()
{
	int flag =0,i;
	char s1[50],s2[50];
	
	printf("Enter string: \n");
	gets(s1);
	
	
	printf("Enter second string: \n");
	gets(s2);
	
	for(i=0;i<s1[i]!='\0'||s2[i]!='\0';i++){
		if(s1[i]!=s2[i]){
			flag++;
			break;
		}
	}
	
	
	if(flag == 0){
		printf("same");
		
	}
	else{
		printf("not same\n");
		
	}
	
}
