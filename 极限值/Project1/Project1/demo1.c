#include <limits.h>
#include <stdio.h>
#include <float.h>





int main(){

	printf("%d -> %d \n",CHAR_MIN,CHAR_MAX);
	printf("%u \n",UCHAR_MAX);


	printf("%d -> %d \n",SHRT_MIN,SHRT_MAX);
	printf("%u \n",USHRT_MAX);


	printf("%d -> %d \n",INT_MIN,INT_MAX);
	printf("%u \n",UINT_MAX);


	printf("%ld -> %ld \n",LONG_MIN,LONG_MAX);
	printf("%u \n",ULONG_MAX);

	printf("%lld -> %lld \n",LLONG_MIN,LLONG_MAX);
	printf("%llu \n",ULLONG_MAX);


	printf("%.3e \n",FLT_MIN);
	printf("%.3e \n",FLT_MAX);


	printf("%.3e \n",DBL_MAX);
	printf("%.3e \n",DBL_MIN);

	printf("%.3Le \n",LDBL_MAX);
	printf("%.3Le \n",LDBL_MIN);

	printf("%u \n",FLT_DIG);
	printf("%u \n",DBL_DIG);


	printf("%u \n",FLT_DIG);
	printf("%u \n",DBL_DIG);
	printf("%u \n",LDBL_DIG);































	getchar();
	return 0;
}






