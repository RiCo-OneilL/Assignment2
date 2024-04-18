#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char UnitName[20];
    int UnitScore;
} Unit;

typedef struct {
    char Name[20];
    char ID_No[15];
    int No_of_Units;
    Unit *Units; // Pointer to store unit details
} Details;

int main() {
    int TotalStudents;
    printf("How many students are in the class?\n");
    scanf("%d", &TotalStudents);

    Details *ptr;
    ptr = (Details*)malloc(sizeof(Details) * TotalStudents);

    FILE *file = fopen("student_details.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < TotalStudents; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("\n\tName: ");
        scanf("%s", ptr[i].Name);
        printf("\tID No. :");
        scanf("%s", ptr[i].ID_No);
        printf("\tNumber of units: ");
        scanf("%d", &ptr[i].No_of_Units);

        ptr[i].Units = (Unit*)malloc(sizeof(Unit) * ptr[i].No_of_Units);
        for (int k = 0; k < ptr[i].No_of_Units; k++) {
            printf("\n\t\tEnter Unit %d's details\n", k + 1);
            printf("\t\t\tUnit Name: ");
            scanf("%s", ptr[i].Units[k].UnitName);
            printf("\t\t\tScore: ");
            scanf("%d", &ptr[i].Units[k].UnitScore);
        }
    }

    fprintf(file, "STUDENT DETAILS\n");
    for (int i = 0; i < TotalStudents; i++) {
        fprintf(file, "\nName: %s\n", ptr[i].Name);
        fprintf(file, "ID No.: %s\n", ptr[i].ID_No);
        fprintf(file, "Number of units: %d\n", ptr[i].No_of_Units);

        fprintf(file, "Unit Details for Student %d:\n", i + 1);
        for (int k = 0; k < ptr[i].No_of_Units; k++) {
            fprintf(file, "\tUnit Name: %s, Score: %d\n", ptr[i].Units[k].UnitName, ptr[i].Units[k].UnitScore);
        }

        free(ptr[i].Units); // Free memory allocated for unit details for this student
    }

    fclose(file);
    free(ptr); // Free memory allocated for student details
    return 0;
}
