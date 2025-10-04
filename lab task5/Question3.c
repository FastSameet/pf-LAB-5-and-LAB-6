#include<stdio.h>
int main(){
	int device, subp, subl;
	printf("1. for Phone\n");
	printf("2. for Laptop\n");
	printf("enter your choice:");
	scanf("%d",&device);
	switch(device){
		case 1:
			printf("1. for Samsung\n");
			printf("2. for Apple\n");
			printf("enter your choice:\n");
			scanf("%d",&subp);
				switch(subp){
					case 1:
						printf("You have selected Samsung Phone.");
						break;
					case 2:
					 	printf("You have selected Apple phone.");
						 break;	
					default:
					printf("invalid input, try again.");
					break;	 
				}
				break;
		case 2:
			printf("1. for Dell\n");
			printf("2. for HP\n");
			printf("enter your choice:\n");
			scanf("%d",&subl);
				switch(subl){
					case 1:
						printf("You have selected Dell laptop.");
						break;
					case 2:
						printf("You have selected HP laptop.");
						break;
					default:
					printf("invalid input, try again.");
					break;	
				}
	}
	return 0;
}
