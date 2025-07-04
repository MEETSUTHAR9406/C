#include <stdio.h>

int main() {
    
    int choice, num;
    
    printf("What do you want to print?");
    printf("\n1. Triangular Pattern.");
    printf("\n2. Reversed Triangular Pattern.");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    
    printf("How many rows do you want to print?\n");
    scanf("%d", &num);
    
    switch(choice) {
        case 1:
            for(int i = 1; i <= num; i++) {
                for(int j = 0; j < i; j++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;
            
        case 2:
            for(int i = num; i >= 1; i--) {
                for(int j = 0; j < i; j++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;
                
    }
    
    return 0;
}