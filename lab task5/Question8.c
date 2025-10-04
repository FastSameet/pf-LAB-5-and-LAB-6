#include <stdio.h>
int main(){
    int num, xorResult;
    printf("Enter the number:  ");
    scanf("%d",&num);
    xorResult = num ^ 2;
    printf("Result after toggling 2nd bit:  %d",xorResult);
    return 0;
}
