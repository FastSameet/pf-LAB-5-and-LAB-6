#include <stdio.h>
int main() {
    int n = 10;          
    int first = 0, second = 1, next, i;
    for (i = 1; i <= n; i++) {
        printf("%d ", first);   
        next = first + second;    
        first = second;           
        second = next;            
    }
    return 0;
}
