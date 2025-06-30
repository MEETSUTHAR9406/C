#include <stdio.h>

int sumofnatural(int num) {
    if (num != 0) {
        return num + sumofnatural(num - 1);
     } else {
        return num;
     }
}

int main() {

    int number;
    
    printf("Enter the number: ");
    scanf("%d", &number);
    
    printf("Sum of %d Natural numbers is %d", number, sumofnatural(number));
  
    return 0;
}