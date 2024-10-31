#include<stdio.h>
#include<string.h>
int main(){
	char des[100];
    char sor[100];
	int n;
	printf("ENTER Destination :");
	scanf("%s",&des);
	printf("ENTER SOURCE :");
	scanf("%s",&sor);
	printf("Enter the first n characters of the source string to Append:");
	scanf("%d",&n);
	strncat(des,sor,n);
	printf("Destination After Append : %s",des);
	return 0;
}
