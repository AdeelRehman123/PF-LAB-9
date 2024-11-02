#include<stdio.h>
int main(){
	int n;
	int isprime(int a);
	printf("Enter number:");
	scanf("%d",&n);
	isprime(n);
	return 0;
	
}
int isprime(int a){
	int i,count=0;
	if(a<0){
		printf("This number is negative");
	}
	if(a==2 || a==3){
		printf("This number is prime");
		
	}
	for(i=2;i*i<=a;i++){
		if(a%i==0){
			count++;
		}
	}
	if(count==0 && a>4){
		printf("this number is prime");
	}
	else if(count>0 || a==0){
		printf("This number is not a prime" );
	}
}
