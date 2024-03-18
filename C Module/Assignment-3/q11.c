#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int fact=1;
    printf("factorial:");
    for(int i=1;i<=n;i++) fact*=i;
    printf("%d",fact);
    return 0;    
}
