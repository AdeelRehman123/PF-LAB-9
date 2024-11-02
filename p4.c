#include<stdio.h>
int main(){
	int n1,n2;
	int func(int a,int b);
	printf("Enter n1:");
	scanf("%d",&n1);
	printf("Enter n2:");
	scanf("%d",&n2);
	func(n1,n2);
	return 0;
}
int func(int a,int b){
	char opr;
	int ans;
	printf("Enter operator:");
	scanf("%s",&opr);
	switch(opr){
		case '*' :
			ans=a*b;
			printf("%d * %d = %d",a,b,ans);
			break;
		
		case '-' :
			ans=a-b;
			printf("%d - %d = %d",a,b,ans);
			break;
		
		case '+' :
			ans=a+b;
			printf("%d + %d = %d",a,b,ans);
			break;
		
		case '/' :
			if(b==0){
				printf("division by 0 is not possible");
				break;
			}
			ans=a/b;
			printf("%d / %d = %d",a,b,ans);
			break;
		
		default:
			printf("INVALID INPUT");
			break;
		
			
	}
}
