#include<stdio.h>
int main(){
	int num, shift, result;
		printf("enter your number:\n");
		scanf("%d",&num);
		printf("enter the shift number:");
		scanf("%d",&shift);
	result=num<<shift;
	  printf("left shift is:%d\n",result);
	result=num>>shift;
	  printf("right shift is:%d",result);
	return 0;
}
