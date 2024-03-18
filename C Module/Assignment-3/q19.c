#include<stdio.h>
int main(){
	int lm,lh;
	printf("Enter lower range:	");
	scanf("%d",&lm);
	printf("Enter higher range:	");
	scanf("%d",&lh);
	
	for(int i=1;i<=10;i++)
	{	
		int temp=lm;
		for(int j=1;j<=4;j++)
		{	
			printf("%d ",temp*i);
			temp++;

		}

		printf("\n ");
	}	


	return 0;
}
