#include<stdio.h>
    
int main(){
    int n;
    printf("Enter number :")  ; 
    scanf("%d",&n);
    int a=1;
    int b=1;
    for(int i=1;i<=n;i++){
        

        int c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;


    }
    

    return 0;
}