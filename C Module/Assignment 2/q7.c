#include<stdio.h>
int main()
	{
	int n;
	//a) without using logical operater
	printf("Enter year :");
	scanf("%d",&n);
/*	a)
	if (n%4==0)
		{
			if(n%100!=0)	printf("leap year");
			else
			{
				if(n%400==0)
				{
					printf("leap year");

				
				}
				else printf("Not a leap year");
			
			}
		}	
*/	
	
// b)
//		if(n%4==0 &&( n%100!=0 || n%400==0))	printf("leap year");
//		else printf("not a leap year");
	n%4==0 ?(n%400==0?printf("leap year"):(n%100!=0 ? printf("leap year"))) :printf("not leap year")      :printf("leap  : printf("not a leap year");
	

	return 0;
	}


