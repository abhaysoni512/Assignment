#include<stdio.h>
int main(){
    printf("a)Calcalte sum of two numbers: \n");
    printf("b)Reverse number :\n");
    printf("c)Number's pallindrom check :\n");
    printf("d)Armstrong check : \n");
    char choice;
    printf("Enter Choice : ");
    scanf("%c",&choice);
    switch (choice)
    {
    case 'a' :
    case 'A' :  {           
                            int n1,n2;
                            printf("Enter n1 : ");
                            scanf("%d",&n1);
                            printf("Enter n2 : ");
                            scanf("%d",&n2);
                            printf("sum = %d",n1+n2);
                            break;
                        }   
    case 'b' :
    case 'B' : {    
                    int n;
                    printf("Enter number : ");
                    scanf("%d",&n);
                    int rev =0;
                    while(n!=0){
                        int mod=n;
                        
                        mod%=10;
                        rev= rev*10+mod;
                        n/=10;
                        
                    }
                    printf("revere num : %d",rev);
                    break;
    }
    case 'C':
    case 'c' :{ 
                    int n;
                    printf("Enter number : ");
                    scanf("%d",&n);
                    int temp=n;
                    int rev =0;
                    while(temp!=0){
                        
                        
                        int mod=temp%10;
                        rev= rev*10+mod;
                        temp/=10;
                        
                    }
                    if(rev==n)  printf("Pallindrome\n");
                    else    printf("Not a pallindrome\n");
                    break;
    } 
    case 'D':   
    case 'd' :{ 
                int n;
                printf("Enter number : ");
                scanf("%d",&n);
                int temp =n;
                int sum=0;
                while (temp!=0)
                {   
                    int mod ,digit_cube;
                    mod=temp%10;
                    digit_cube=mod*mod*mod;
                    sum+=digit_cube;
                    temp/=10;

                    
                }
                if(sum==n)  printf("Armstrong number\n");
                else printf("not a Armstrong number\n");
                break;

    } 
                default: printf("Enter a valid choice");
                            break;
    }
    return 0;    
}