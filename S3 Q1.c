#include<stdio.h>
int main(){
	char words[5][10]={"hello","world","good","morning","bye"};
	char w[10];
	int i,count=0;
	printf("Enter word here:");
	scanf("%s",w);
	for(i=0;i<5;i++){
		if(strcmp(w,words[i])==0){
			printf("FOUND");
			count++;
			break;
		}
	}
	if(count==0){
		printf("NOT FOUND");
	}
	return 0;
}
