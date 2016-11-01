#include <stdio.h>

int main(){

	int i=1;

	tt:printf("%d\n",i++);      
	     
	
	if (i<10)
		goto tt;



	getchar();
	return 0;
}