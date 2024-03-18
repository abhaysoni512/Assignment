#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int i=2;
    int ml =n/2;
    printf("all factors :");
    
    while (i!=ml)
    {  
       if(n%i==0)  
       { printf("%d,",i) ;
       
       }
       i++;
    }
    
    return 0;
}