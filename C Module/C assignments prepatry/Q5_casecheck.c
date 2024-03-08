#include<stdio.h>
int main(){
    char input[100];
    
    int uc=0,lc=0,digits=0,others=0;
    printf("Enter string :");
    fgets(input,sizeof(input),stdin); //thanks to chatgpt fgets ka kaam reading line of texts from string hota h,
    /*In C, stdin is a standard input stream, and it's part of the standard I/O library (stdio.h). It represents the source from which your program reads input data. By default, stdin refers to the keyboard when your program is running interactively in a terminal or console environment. However, stdin can be redirected to read from other sources as well, such as files or pipes, using input redirection or other methods provided by the operating system.*/
    for(int i=1;input[i]!='\0';i++){
        if(input[i]>='A'&&input[i]<='Z'){
            uc++;
        }
        else if(input[i]>='a'&&input[i]<='z')
            lc++;
        else if (input[i]>='0'&&input[i]<='9')
        {
            digits++;
        }
        else{
            others;
        }
      
        
       
    } 
        printf("Upper case letters : %d",uc);   
        printf("lower case letters : %d",lc);
        printf("\ndigits : %d",digits);
        printf("\nothers : %d",others);

    return 0;
}