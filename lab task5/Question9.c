#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num & 1) {
        printf("your number is odd.");
    } else {
        printf("your number is even.");
    }
    return 0;
}
