#include<stdio.h>
int main(){
/*	int n1,n2;
	
	printf("Enter first number\n:");
	scanf("%d",&n1);
	printf("Enter second number\n:");
	scanf("%d",&n2);
	int sum =n1+n2;
	printf("sum = %d\n",sum);
	int subtract =n1-n2;
	printf("subtract = %d\n",subtract);
	int product = n1*n2;
	printf("product = %d\n",product); 
	//test:
    // unsigned
	unsigned int n1,n2,sum;
	printf("Enter first number:\n");
	scanf("%u",&n1);
	printf("Enter second number:\n");
	scanf("%u",&n2);
	printf("sum = %u\n ", n1+n2);
	
	
	// long 

	unsigned long n1,n2,sum;
	printf("Enter first number:\n");
	scanf("%ld",&n1);
	printf("Enter second number:\n");
	scanf("%ld",&n2);
	printf("sum = %ld\n ", n1+n2);
	*/
	unsigned char ch1,ch2,sum;
	printf("Enter 1st character\n:");
	scanf("%c",&ch1);
	printf("Enter 2nd  character:\n");
	scanf("%*c%c",&ch2);
	printf("sum = %d",ch1+ch2);


	
	return 0;
	}
