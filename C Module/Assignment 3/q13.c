#include<stdio.h>
int main(){
    int a=1,b=1,sum=2;
    int n;
    printf("Enter number upto which we need to print:");
    scanf("%d",&n);
    printf("fibonacci series :  ");
    if(n==1)    printf("1");
    if(n==2)    printf("1 1");
    
    for(int i=3;i<=n;i++){
        sum = a+b;
        printf("%d ",sum);
        b=sum;
        a=b;
        
    }
    
    return 0;    
}