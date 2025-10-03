#include<stdio.h>
int main(){
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(num% 2==0 && num% 3==0){
		printf("your number is divisible by both 2 and 3");
	}
	else{
		printf("your number is not divisible by both 2 and 3");
	}
	return 0;
}
