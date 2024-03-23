#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int i=2;
    printf("%d =",n);

    while (n!=1)
    {   while(n%i==0){
        printf("%d *",i);
        n=n/i;    
    }
     i++;    
    }
    i--;
    printf("%d *\b",i);       
    return 0;
}