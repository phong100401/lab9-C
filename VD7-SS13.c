#include<stdio.h>
#include<stdlib.h>
void main(){
	int *a,i,n,sum=0;
	printf("%s%s\n","An array will be created dynamaically .\n\n"
	,"Input an array size n followed by integers :");
	scanf("%d",&n);
	a= (int*) calloc (n,sizeof(int));
	for(i=0;i<n;i++){
		printf("Enter %d value : ",n);
		scanf("%d",a+i);
	}
	for(i=0;i<n;i++){
		sum +=a[i];
	}
	free(a);
	printf("%s%7d\n%s%7d\n\n","Number of elements :",n,"Sum of the elements: ",sum);
	
}
