#include<stdio.h>
int main(){
    int n;
    printf("Enter number whose table needs to be calculated:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        int table= n*i;
        printf("%d * %d = %d \n",n,i,table);
        }
    return 0;
}