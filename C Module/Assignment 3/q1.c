#include<stdio.h>
int main(){
    char ch ;
    printf("Enter character : ");
    scanf("%c",&ch);
    int num;
    printf("Enter no of times to be printed: ");
    scanf("%d",&num);
    int i =1;
    while(i<=num){
        printf("%c",ch);
        i++;
    }
        
    return 0;    
}