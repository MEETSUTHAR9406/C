#include <stdio.h>

int fib(int num) {
    if(num == 0 || num == 1) {
        return num;
    } else {
        return fib(num - 1) + fib(num - 2);
    }
}

int main() {
    
    int num;
    
    printf("Enter terms to print fibonacci series up-to that terms: ");
    scanf("%d", &num);
    
    printf("Fibonacci series up to term %d:\n", num);
    for(int i = 0; i < num; i++) {
        printf("%d ", fib(i));
    }
    
    return 0;
}