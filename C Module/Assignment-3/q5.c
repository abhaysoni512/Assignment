#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    
    int fact=1;
    int i=n;
    while (i!=0)
    {
        printf("%d * ",i);
        fact*=i;
        i--;
    }
    printf("\b\b=%d",fact);
    
    return 0;    
}