#include<stdio.h>
#include<stdlib.h>
int main(){
	float *calloc1,*calloc2;
	int i;
	calloc1 = (float*) calloc(3,sizeof(float));
	calloc2 = (float*) calloc(3,sizeof(float));
	if(calloc1 != NULL && calloc2 != NULL){
		for(i=0;i<3;i++){
			printf("calloc1[%d] holds %05.5f \n",i,calloc1[i]);
			printf("calloc2[%d] holds %05.5f \n",i,*(calloc2+i));
		}
		free(calloc1);
		free(calloc2);
		return 0;
	}
	else{
		printf("Not enough memory \n");
		return 1;
	}
}
