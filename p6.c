#include<stdio.h>
int func(int n);
int main(){
	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	func(n);
    return 0;
}
int func(int n){
	int arr[n],i;
	for(i=0;i<n;i++){
		printf("element %d:",i+1);
		scanf("%d",&arr[i]);
	}
	int max=arr[0],min=arr[0];
	for(i=1;i<n;i++){
		if(arr[i]<=min){
			min=arr[i];
		}
		if(arr[i]>=max){
			max=arr[i];
		}
	}
	printf("MAXIMUM:%d\n",max);
	printf("MINIMUM:%d",min);
}
