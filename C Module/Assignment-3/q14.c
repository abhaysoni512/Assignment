#include<stdio.h>
int main(){
	int n;
  	printf("Enter number :	");
    scanf("%d",&n);
	
	for(int i=2;i<=n/2;i++){
	if(n%i!=0){
		printf("prime no\n");
		break;
	}	
	else{
		printf("Not a prime no");
		break;
	}
	

}
    return 0;    
}
