#include<stdio.h>
void main(){
	char s[100];
	printf("Enter your word :");
	scanf("%s",&s);
	int j,count=0;
	while(s[count] != '\0'){
		count++;
	}
	j=count-1;
	if(s[count-2]==s[count-j]){
		printf("Word is Palindrome");
	}else{
		printf("Word is not Palindrome");
	}
	}
