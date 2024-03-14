#include<stdio.h>
int main()
	{
	int month,year;
	printf("Enter month no: ");
	scanf("%d",&month);
	printf("Enter year no: ");
	scanf("%d",&year);
	int y=year;
	if(month==1|3|5|7|8|10|12)	
		printf("no of days = 31");

		
	else if(month==2){
	
	if((y%4==0||y%400)&&y%100!=0)
		printf("no of days = 29");
	else
		printf("no of days = 28");
	}	
	else
		printf("no of days =30");

	return 0;
	}


