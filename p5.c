#include<stdio.h>
#include<string.h>
void func(char str[]);
int main(){
	char str[100];
	printf("Enter string:");
	scanf("%s",str);
	printf("The reversed string: ");
	func(str);
	return 0;
}
void func(char str[]){
	int i;
	for(i=strlen(str)-1;i>=0;i--){
		printf("%c",str[i]);
	}
	
}
