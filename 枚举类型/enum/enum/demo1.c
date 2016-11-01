#include <stdio.h>
#include <stdlib.h>

enum test
{
	A=5,B,C
	/*
	A=5
	B=6
	C=7
	*/
};

int main(){
	enum test demo;
	demo = B; 
	
	printf("%d",demo);
	system("pause");
	return 0;
}
