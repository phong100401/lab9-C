#include<stdio.h>
#include<string.h>
int main(){
	char str1[10];
	char str2[10];
	printf("Enter String: ");
	scanf("%s",str1);
	strcpy(str2,str1);
	strrev(str2);/*dao nguoc chuoi*/
	if(strcmp(str1,str2)!=0){
		printf("String is not palindrome");
	}
	else 
	printf("String is palindrome");
    return 0;
}
