#include<stdio.h>
int main(){
	int n1,n2,n3,max;
	printf("Enter 1st number:");
	scanf("%d",&n1);
	printf("Enter 2nd number:");
	scanf("%d",&n2);
	printf("Enter 3rd number:");
	scanf("%d",&n3);
/*
	if(n1>n2 && n1>n3)	printf("%d is maximum",n1);
	else	if(n2>n3 && n2>n1)	printf("%d is maximum",n2);
	else	printf("%d is maximum",n3);
*/
	max = (n1>n2)?(n1>n3?n1:n3):(n2>n3?n2:n3);
	printf("%d is maximum \n",max);
	return 0;
	}

