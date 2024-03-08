#include<stdio.h>
void printbinary(int n){
    if (n==0) {
        printf("0");
        return;
    }
    int arr[32];
    int i=0;
    while (n>0)
    {
        arr[i]= n%2;
        n /=2;
        i++;
    }
    
    for(int j=i-1;j>=0;j--){
        printf("%d",arr[j]);
    }
    return;
    

}
int main(){
    int n;
    
    printf("Enter number");
    scanf("%d",&n);
    printf("%x is hexadecimal form of %d\n",n,n);
    printf("%o is octal form of %d\n",n,n);
    printf("Binary form of %d is :\n",n);
    printbinary(n);
    
    

    
    return 0;
}