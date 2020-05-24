#include<stdio.h>
#include<string.h>
int main(){
	char *ptr[5];
	int i;
	int j;
	char cpyptr1[5][10],cpyptr2[5][10];
	char *temp;
	for(i=0;i<5;i++){
		printf("Enter a string :");
		scanf("%s",cpyptr1[i]);
		ptr[i]=cpyptr1[i];
	}
	for(i=0;i<5;i++){
		strcpy(cpyptr2[i],cpyptr1[i]);
	}
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(strcmp(ptr[i],ptr[j])>0){
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
	}
	printf("The original list is\n");
	for(i=0;i<5;i++){
		printf("%s\n",cpyptr2[i]);
		printf("The sorted list ís\n");
	}
	for(i=0;i<5;i++){
		printf("%s\n",ptr[i]);
	}
	return 0;
}
