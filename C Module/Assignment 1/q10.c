#include<stdio.h>
#include<math.h>

int main(){
	float s1,s2,s3,s,peri,area;
	printf("Enter 1st side:");
	scanf("%f",&s1);
	printf("Enter 2nd side:");
	scanf("%f",&s2);
	printf("Enter 3rd side:");
	scanf("%f",&s3);
	peri =(s1+s2+s3)/2;
	s= peri/2 ;
	area =sqrt( s*(s-s1)*(s-s2)*(s-s3));
	
	printf("Perimeter and Area of trigle is %f, %f",peri,area);
	return 0;
	}


