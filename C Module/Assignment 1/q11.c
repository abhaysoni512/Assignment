#include<stdio.h>
#include<limits.h>

int main(){
	printf("Range of char is : %d to %d\n",SCHAR_MIN,SCHAR_MAX);
	printf("Range of unsigned char is : 0 to %d\n",UCHAR_MAX);
	printf("Range of int is : %d to %d\n",INT_MIN,INT_MAX);
	printf("Range of unsigned is : 0 to %d\n",UINT_MAX);

	return 0;
}
