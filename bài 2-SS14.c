#include<stdio.h>
int main(){
	int i,j,rows,columns,a[10][10],b[10][10];
	int tong[10][10];
	printf("Please enter number of rows and cloumns : \n");
	scanf("%d%d",&i,&j);
	printf("Please enter the first matrix elements \n");
	for(rows=0;rows<i;rows++){
		for(columns=0;columns<j;columns++){
			scanf("%d",&a[rows][columns]);
		}
	}
	printf("Please enter the second matrix elements \n");
	for(rows=0;rows<i;rows++){
		for(columns=0;columns<j;columns++){
			scanf("%d",&b[rows][columns]);
		}
	}
	for(rows=0;rows<i;rows++){
		for(columns=0;columns<j;columns++){
			tong[rows][columns]=a[rows][columns]+b[rows][columns];
		}
	}
	printf("The Sum of tow matrix a and b = a + b \n");
	for(rows=0;rows<i;rows++){
		for(columns=0;columns<j;columns++){
			printf("%d\t",tong[rows][columns]);
		}
	}
	printf("\n");
	return 0;
}
	
