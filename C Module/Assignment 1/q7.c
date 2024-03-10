#include<stdio.h>
int main(){
	int n,mod;
	
	printf("Enter a four digit number");
	scanf("%d",&n);
	int temp =n;
	for(int i=1;i<=4;i++){
		mod =temp%10;
		temp/=10;
		printf("%d ",mod);
	}
	return 0;
	}
