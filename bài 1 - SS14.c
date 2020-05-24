#include<stdio.h>
#include<string.h>
int main(){
	char str[100],str1[100];
	int i,j,n;
	printf("Please enter any string : \n");
	gets(str);
	j=0;
	n=strlen(str);
	for(i=n-1;i>=0;i--){
		str1[j++]=str[i];
	}
	str1[i]='\0';
	printf("String affter reversing : %s",str1);
	return 0;
}
