#include<stdio.h>
int main(){
	float x,y;
	printf("enter x ordinate");
	scanf("%f",&x);
	printf("enter y ordinate");
	scanf("%f",&y);
	if(x==0 && y==0)	printf("Origin\n");
	else if(x>0 && y>0)	printf("1st quad\n");
	else if(x>0 && y<0)	printf("4th quad\n");
	else if(x<0 && y<0)	printf("3rd quad\n");
	else if(x<0 && y>0)	printf("2nd quad\n");
	else if(x==0 )	printf("y axis\n");
	else if(y==0)	printf("x axis\n");
	

	return 0;





}
