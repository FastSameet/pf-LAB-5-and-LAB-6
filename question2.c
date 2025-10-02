#include<stdio.h>
#include<string.h>
int main(){
	int age;
	char gender[10];
	printf("enter your age:");
	scanf("%d", &age);
	if(age>=18){
		printf("enter your gender(male or female):");
		scanf("%s", &gender);
		if(strcmp(gender,"male")==0){
			printf("Adult Male");
		}
		else if(strcmp(gender,"female")==0){
			printf("Adult Female");
		}
		else{
			printf("invalid gender input.");
		}		
	}
	else{
		printf("Minor");
	}
	return 0;
}
