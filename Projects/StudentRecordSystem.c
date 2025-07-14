#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

struct Student Students[100];

void add(int num) {
    printf("How many students you want to enroll?\n");
    printf("Enter your choice: ");
    scanf("%d", &num);
    getchar();

    for(int i = 0; i < num; i++) {
        printf("Enter name for student %d: ", i + 1);
        fgets(Students[i].name, sizeof(Students[i].name), stdin);
        Students[i].name[strcspn(Students[i].name, "\n")] = '\0';

        printf("Enter student %d roll number: ", i + 1);
        scanf("%d", &Students[i].roll_no);
        getchar();

        printf("Enter total marks of student %d: ", i + 1);
        scanf("%f", &Students[i].marks);
        getchar();
    }
}

void display(FILE *file, int num) {
    fprintf(file, "\n%-20s\t%-10s\t%-10s\n", "Name", "Roll No", "Marks");

    for(int i = 0; i < num; i++) {
        fprintf(file, "%-20s\t%-10d\t%-10.2f\n", Students[i].name, Students[i].roll_no, Students[i].marks);
    }
}

int main() {

    int num;
    int choice;
    FILE *file = fopen("StudentRecordSystem.txt", "a");

    printf("What operation you want to do?\n");
    printf("1. Add\n2. Display\n3. Search\n4. Update\n5. Delete");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            add(num);
            break;

        case 2:
            display(file, num);
            break;

        default:
            printf("Operation failed.");
            break;
    }

    printf("\n");

    fclose(file);

    return 0;
}