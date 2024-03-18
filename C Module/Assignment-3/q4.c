#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    
    int fact=1;
    int i=1;
    while (i<=n)
    {
        
        printf("%d * ",i);
        
        fact*=i;
        
        
        i++;
    }
    printf("\b\b=%d",fact);
    
    return 0;    
}