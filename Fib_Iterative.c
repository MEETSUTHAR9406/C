#include <stdio.h>

int main() {
    
    int num;
    int t1 = 0, t2 = 1, nextTerm;
    
    printf("Enter terms to print fibonacci series up-to that terms: ");
    scanf("%d", &num);
    
    for(int i = 0; i < num; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;  
        t2 = t1;
        t1 = nextTerm;
    }
    
    return 0;
}