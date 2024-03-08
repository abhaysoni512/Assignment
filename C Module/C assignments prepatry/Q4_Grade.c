#include<stdio.h>
int main(){
    int s1,s2,s3,s4,s5,marks;
    printf("Enter subject s1 marks:");
    scanf("%d",&s1);
    printf("Enter subject s2 marks:");
    scanf("%d",&s2);
    printf("Enter subject s3 marks:");
    scanf("%d",&s3);
    printf("Enter subject s4 marks:");
    scanf("%d",&s4);
    printf("Enter subject s5 marks:");
    scanf("%d",&s5);
    marks = (s1+s2+s3+s4+s5)/5 ;
    if (marks>=90)  printf("Ex Grade");
    else if (marks>=80 && marks<90)  printf("A Grade");
    else if (marks>=70 && marks<80)  printf("B Grade");
    else if (marks>=60 && marks<70)  printf("C Grade");
    else  printf("F Grade");
    
    return 0;
    
}