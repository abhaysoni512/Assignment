#include<stdio.h>
int main(){
	char ch;
	scanf("Enter char :%c",&ch);
	int k= sizeof(ch);
	printf("%d is decimal form of %c\n",k,k);
	printf("%o is charcter form of %c\n",k,k);
	printf("%x is charcter form of %c\n",k,k);
	return 0;
}
