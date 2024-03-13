#include<stdio.h>
int main(){
    int a,b;
    printf("enter 1st number:");
    scanf("%d",&a);
    printf("enter 2nd number:");
    scanf("%d",&b);
   // if(a>b) printf("%d is greater one",a);
   // else printf("%d is greater one",b);
    int max =(a>b)? printf("%d is greater one",a):printf("%d is greater one",b);
    
    return 0;
}