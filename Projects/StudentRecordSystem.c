#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

struct Student Students[100];

void add(int num, FILE *file) {
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

    printf("\n");

    fseek(file, 0, SEEK_END);
    long filesize = ftell(file);
    if(filesize == 0) {
        fprintf(file, "%-20s\t%-10s\t%-10s\n", "Name", "Roll No", "Marks");
    }

    for(int i = 0; i < num; i++) {
        fprintf(file, "%-20s\t%-10d\t%-10.2f\n", Students[i].name, Students[i].roll_no, Students[i].marks);
    }
}

void display(int num) {
    FILE *fptr = fopen("StudentRecordSystem.txt", "r");

    if(fptr == NULL) {
        printf("Cannot open file.");
        exit(1);
    }

    char str[1000];
    printf("\n");
    while (fgets(str, 1000, fptr)) {
        printf("%s", str);
    }
}

void toLower(char *str) {
    for(int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

void search() {
    
    FILE *file = fopen("StudentRecordSystem.txt", "r");
    
    if(file == NULL) {
        printf("Cannot open file.");
        exit(1);
    }

    char line[100];
    char name[50], lineLower[100], nameLower[100];
    int found = 0;

    printf("Search your data by entering your name: ");
    scanf("%s", name);

    strcpy(nameLower, name);
    toLower(nameLower);
    
    while(fgets(line, sizeof(line), file)) {
        strcpy(lineLower, line);
        toLower(lineLower);

        if(strstr(lineLower, nameLower)) {
            printf("\nRecord found: %s", line);
            found = 1;
        }
    }

    if(!found) {
        printf("No record found for the name: %s\n", name);
        fclose(file);
        exit(1);
    }
    fclose(file);
}

void update() {

    FILE *file = fopen("StudentRecordSystem.txt", "r");

    if(file == NULL) {
        printf("Cannot open file.");
        exit(1);
    }

    FILE *temp = fopen("Temp.txt", "w");

    if(temp == NULL) {
        printf("Cannot open file.");
        exit(1);
    }

    char word[100], replace[100];
    char line[100];

    printf("Enter the word to find: ");
    getchar();
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    printf("Enter the words to replace it with: ");
    getchar();
    fgets(replace, sizeof(replace), stdin);
    replace[strcspn(replace, "\n")] = '\0';

    while(fgets(line, sizeof(line), file)) {
        char updated[2048] = "";
        const char *cursor = line;
        char *match;

        while((match = strstr(cursor, word)) != NULL) {
            strncat(updated, cursor, match - cursor);     
            strcat(updated, replace);               
            cursor = match + strlen(word);  
        }

        strcat(updated, cursor);
        fputs(updated, temp);
    }

    fclose(file);
    fclose(temp);

    remove("StudentRecordSystem.txt");
    rename("Temp.txt" ,"StudentRecordSystem.txt");

    printf("Update Completed.\n");
}

// void delte() {

// }

int main() {

    int num;
    int choice;

    FILE *file; 
    
    while(1) {
        printf("\nWhat operation you want to do?\n");
        printf("1. Add\n2. Display\n3. Search\n4. Update\n5. Delete\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        file = fopen("StudentRecordSystem.txt", "a+");

        if(file == NULL) {
            printf("Cannot open file.");
            exit(1);
        }
        switch(choice) {
            case 1:
                add(num, file);
                break;
    
            case 2:
                display(num);
                break;
    
            case 3:
                search();
                break;
    
            case 4:
                update();
                break;
    
            // case 5:
            //     delete();
            //     break;
    
            case 6:
                printf("Exiting the program.");
                exit(0);
    
            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
        fclose(file);
    }

    return 0;
}