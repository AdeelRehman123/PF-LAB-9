#include<stdio.h>
int main(){
	int evenodd(int b);
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	evenodd(a);
	return  0;
}
int evenodd(int b){
	if(b<0){
		printf("This number is negative");
	}
	else if(b%2==0){
		printf("This number is EVEN");
	}
	else
	{
		printf("This number is ODD");
    }
}