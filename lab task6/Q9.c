#include <stdio.h>
int main() {
    int n, i , result;
    printf("enter a number:");
    scanf("%d",&n);
    printf("the table of %d is:\n",n);
      for(i=1;i<=10;i++){
      	 result=n*i;
      	 printf("%d x %d = %d\n",n,i,result);   	 
	  }
    return 0;
}
