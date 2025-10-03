#include<stdio.h>
int main(){
	float marks;
	printf("enter your marks:");
	scanf("%f",&marks);
	if(marks>=50){
		if(marks>=85){
			printf("passed with distinction");
		}
		else{
			printf("just passed");
		}
	}
	else{
		printf("failed");
	}
	return 0;	
}
