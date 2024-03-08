#include<stdio.h>
int main(){
	int n;
	scanf("Enter a number :%d",&n);
	char ch = (char)n;
	printf("%c is charcter form of %d\n",ch,n);
	printf("%o is octal  form of %d\n",n,n);
	printf("%x is hexadecimal  form of %d\n",n,n);
	return 0;
}	
