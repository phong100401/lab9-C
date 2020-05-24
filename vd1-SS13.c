#include<stdio.h>
void main(){
	int var =500,*ptr_var;/*var duoc khai báo là so nguyen va ptr_var la con tro tro den
so nguyen*/
	ptr_var = &var;/*luu tru dia chi cua var trong ptr_var*/
	printf("Gia tri %d duoc luu tru : %u: \n",var,&var);/* In gia tri cua bien (var) và dia chi noi var duoc luu tru*/
	printf("Gia tri %u duoc luu tru : %u\n",ptr_var,&ptr_var);/*In gia tri duoc luu tru trong bien ptr (ptr_var) và dia chi noi ptr_var
duoc luu tru*/
	printf("Gia tri %d duoc luu tru : %u\n",*ptr_var,ptr_var);/*In gia tri cya bien (var) và dia chi noi var duoc luu tru, su dung
con tro toi bien*/
}
