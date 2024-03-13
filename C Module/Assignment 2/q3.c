#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    if(n<=0)  printf("-ve number");
    else if(n>=0) printf("+ve number");
    else printf("zero number");
    return 0;
}
