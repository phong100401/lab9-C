#include<stdio.h>
#include<string.h>
int main(){
	char *ptr;
	char word[10];
	int i,vowcnt=0;
	printf("Enter a word : \n");
	scanf("%s",word);
	ptr = &word[0];
	for(i=0;i<strlen(word);i++){
		if((*ptr=='a')||(*ptr=='i')||(*ptr=='u')||(*ptr=='e')||(*ptr=='o')||
		(*ptr=='A')||(*ptr=='I')||(*ptr=='U')||(*ptr=='E')||(*ptr=='O')){
			vowcnt++;
		}
		ptr++;
	}
	printf("The word is : %s \n The number of vowels in the word is : %d",word,vowcnt);
	return 0;
}
