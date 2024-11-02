#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i,j,count=0;
	printf("Enter Word here:");
	scanf("%s",str);
	for(i=0,j=strlen(str)-1;i<j;i++,j--){
		if(str[i]==str[j]){
			count++;
		}
		else{
			count=-100;
		}
	}
	if(count>0){
		printf("This word is Palindrome");
	}
	else{
		printf("This word is not Palindrome");
	}
	return 0;
}
