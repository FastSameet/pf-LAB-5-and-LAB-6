#include <stdio.h>
int main() {
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    while(num!=0){
    	printf("enter a number:");
    	scanf("%d",&num);
	}
	printf("congratulations! you have entered 0.");
	return 0;
}
