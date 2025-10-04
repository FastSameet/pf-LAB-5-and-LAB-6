#include <stdio.h>
int main() {
    int n = 121;      
    int original = n; 
    int reversed = 0, remainder;

    while (n != 0) {
        remainder = n % 10;             
        reversed = reversed * 10 + remainder; 
        n = n / 10;                     
    }

    if (original == reversed) {
        printf("%d is a Palindrome number\n", original);
    } else {
        printf("%d is Not a Palindrome number\n", original);
    }

    return 0;
}
