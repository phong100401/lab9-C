#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
int main(){
	char name[10][20];
	char *ptr[10];
	int i;
	for(i=0;i<5;i++){
		printf("Nhap ten con vat %d: ",i+1);
		gets(name[i]);
		char *temp;
		temp=(char*)malloc(20*sizeof(char));
		strcpy(temp,"s");
		strcat(name[i],temp);
		ptr[i]=name[i];
	}
	printf("The plural name: \n");
	for(i=0;i<5;i++){
		printf("%s\n",ptr[i]);
	}
	return 0;
}
