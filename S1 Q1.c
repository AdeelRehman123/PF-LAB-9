
#include<stdio.h>
int main(){
	int product(int a,int b);
	int a,b;
	printf("Enter first num:");
	scanf("%d",&a);
	printf("Enter second num:");
	scanf("%d",&b);
	printf("The product of %d and %d is :%d",a,b,product(a,b));
	return 0;
}
int product(int a,int b){
	return a*b;
}
