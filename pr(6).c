#include<stdio.h>
void main(){
	char s[100];
	int i,k;
	int count=0;
	printf("Enter your Word :");
	scanf("%s",&s);
	while(s[count] != '\0'){
		count++;
	}
	for(i=0;i<count;i++){
		if(s==s[i]){
			k++;
			
		}else{
			k=1;
	}
		printf("%c =>%d\n",s[i],k);
	}
}
