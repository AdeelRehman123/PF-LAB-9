#include<stdio.h>
#include<string.h>
int func(int a,int b);
int func(int a,int b){
	int j=a+b;
	a=j-a;
	b=j-b;
	printf("After Swaping values\n");
	printf("n1=%d  and n2=%d",a,b);
}

int main(){
	int n1,n2;
	printf("Enter values below to SWAP\n");
	printf("Enter n1:");
	scanf("%d",&n1);
	printf("Enter n2:");
	scanf("%d",&n2);
	func(n1,n2);
	return 0;
}
