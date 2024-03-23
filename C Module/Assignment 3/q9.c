#include<stdio.h>
#include<math.h>
int main(){
    int n1,n2;
    printf("Enter number1: ");
    scanf("%d",&n1);
    printf("Enter number2: ");
    scanf("%d",&n2);
    printf("GCD of %d and %d is ",n1,n2);
    
    if(n1<n2){
        int temp;
        temp=n1;
        n1=n2;
        n2=temp;
        
    }
    
     
    
    int rem;
    while (n1>n2)
    {
      rem =n1%n2;
      n1=n2;
      n2=rem;

    }
    printf("%d",rem);
    
    return 0;
}       
  