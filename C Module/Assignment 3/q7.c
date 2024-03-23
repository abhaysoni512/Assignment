#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int i=1;
    int factor=1;
    
    while(i<=n/2 ){
         
         if(n%i==0 ) 
         { 
         factor=i;
         if(factor>n/factor) goto here;
         printf("%d * %d =%d\n",factor , n/factor,n);
         
         }
         
         i++;
         
    
    }

    here:
    return 0;    
}