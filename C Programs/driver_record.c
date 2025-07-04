#include <stdio.h>
#include <string.h>

struct agency
{
    char name[50];
    char DL[50];
    char Route[50];
    float KMS;
};

struct agency drivers[100];

int main()
{

    int num;

    printf("How many drivers you want to register?\n");
    printf("Enter the number: ");
    scanf("%d", &num);
    getchar();

    for (int i = 1; i <= num; i++)
    {
        printf("Enter the name of driver %d: ", i);
        fgets(drivers[i].name, sizeof(drivers[i].name), stdin);
        drivers[i].name[strcspn(drivers[i].name, "\n")] = '\0';

        printf("Enter the Driving Licence No. of driver %d: ", i);
        fgets(drivers[i].DL, sizeof(drivers[i].DL), stdin);
        drivers[i].DL[strcspn(drivers[i].DL, "\n")] = '\0';

        printf("Enter the Route of driver %d: ", i);
        fgets(drivers[i].Route, sizeof(drivers[i].Route), stdin);
        drivers[i].Route[strcspn(drivers[i].Route, "\n")] = '\0';

        printf("Enter the total KMS traveled for driver %d: ", i);
        scanf("%f", &drivers[i].KMS);
        getchar();
    }

    printf("\n%-20s %-20s %-20s %-10s\n", "Name", "Driving Licence No.", "Route", "KMS");
    for (int i = 1; i <= num; i++)
    {
        printf("%-20s %-20s %-20s %-10.2f\n", drivers[i].name, drivers[i].DL, drivers[i].Route, drivers[i].KMS);
    }

    return 0;
}
