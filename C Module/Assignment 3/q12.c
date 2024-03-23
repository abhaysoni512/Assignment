#include<stdio.h>
int main(){
    int b,in,power;
    printf("Input:  Base: ");
    scanf("%d",&b);
    printf("index:  ");
    scanf("%d",&b);
    power=1;
    for(int i=1;i<=in;i++)
    {
        power*=b;
    }
    printf("%d",power);
    
    return 0;    
}
