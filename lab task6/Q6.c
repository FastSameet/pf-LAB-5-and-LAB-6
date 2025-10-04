#include<stdio.h>
int main(){
	int i, n=7, count=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		printf("%d is a prime number.",n);
	}
	else{
		printf("%d is not a prime number.",n);
	}	
	return 0;
}
