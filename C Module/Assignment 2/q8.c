#include<stdio.h>
int main()
	{
	int qty;
	
	printf("Enter number of quantity:");
	scanf("%d",&qty);
	if(qty<=30)	printf("total price = %d\n",qty*5);

	else if(30<qty<=50)	printf("total price =%f\n",qty*4.5);
	else	printf("total price = %f\n",qty*4.25);

	return 0;
	}


