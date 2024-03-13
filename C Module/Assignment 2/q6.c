#include<stdio.h>
int main()
	{
	int n,temp,rev=0,mod=n;
	printf("Enter number: ");
	scanf("%d",&n);
	temp=n;
	
	// reversing number
	while(temp !=0){
	mod=temp%10;
	rev=rev*10+mod;
	temp/=10;
	}
	if(rev==n)	printf("%d is pallindrome\n",n);
	else printf("%d is not paillindrome\n",n);

















	return 0;
	}


