#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main (){

FILE *fptr1 = NULL;
char c='a';


fptr1=fopen("utsab.txt","w");
if (fptr1 == NULL){
	printf("Error!");
}

fputc(c,fptr1);
fclose(fptr1);
}
