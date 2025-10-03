#include<stdio.h>
#include<string.h>
int main(){
	char conti[20];
	int cont, country;
	printf("enter the continent(asia or europe):");
	scanf("%s",&conti);
	if(strcmp(conti,"asia")==0){
		cont=1;
	}
	else if (strcmp(conti,"europe")==0){
		cont=2;
	}
	else{
		printf("invalid input, enter the continent either asia or europe!");
	}
	switch(cont){
		case 1:
			printf("1. for Pakistan\n");
			printf("2. for India\n");
			printf("enter your country in asia:\n");
			scanf("%d",&country);
				switch(country){
					case 1:
						printf("You have selected Pakistan.");
						break;
					case 2:
					 	printf("You have selected india.");
						 break;	
					default:
					printf("invalid input, enter the country in asia(pakistan or india).");
					break;	 
				}
				break;
		case 2:
			printf("1. for France\n");
			printf("2. for germany\n");
			printf("enter your country in europe\n");
			scanf("%d",&country);
				switch(country){
					case 1:
						printf("You have selected France.");
						break;
					case 2:
						printf("You have selected Germany.");
						break;
					default:
					printf("invalid input, enter the country in europe(France or germany).");
					break;	
				}
	}
	return 0;
}
