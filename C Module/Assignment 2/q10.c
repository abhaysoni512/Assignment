#include<stdio.h>
int main(){
	char ch;
	printf("Enter character: ");
	scanf("%c",&ch);
	if((ch>=65 && ch<=90)|| (ch>=97 && ch<=122)){
		printf("ALPHABET\n");	
		if(ch>=65 && ch<=90)	printf("Uppercase\n");
		else printf("Lowercase\n");
	}
	else if(ch>=48 && ch<=57)	printf("Digit\n");
	else if(ch==' '||ch=='	'||ch=='\r'||ch=='\n')	printf("Space\n");
	else printf("Not listed above\n");









	return 0;
}
