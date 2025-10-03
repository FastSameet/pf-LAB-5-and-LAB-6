#include<stdio.h>
int main(){
	int a=2;
	int b;
	b=a++;
	printf("result with post increment:\n");
	printf("a=%d \n b=%d \n",a,b);
	a=2;
	b=++a;
	printf("result with pre increment:\n");
	printf("a=%d \n b=%d",a,b);
	return 0;
}
