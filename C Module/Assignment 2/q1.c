#include<stdio.h>
int main(){
    int a,b,divide;
    printf("Enter dividend :");
    scanf("%d",&a);
    printf("Enter divisor :");
    scanf("%d",&b);
   
    if(b==0)  printf("display error: cant divide");
    else printf("%d",a/b);
    return 0;
}