#include <stdio.h>
int TotalStudents;
int Units;
void EnterStudentDetails(int Details[TotalStudents][Units], int TotalStudents)
{
char StudentName;
for (int i=0; i < TotalStudents; i++){
     printf("Enter name for student %d\n", i+1);
     scanf("%c",&Details[i][1]);
    for (int j=1; j < Units; j++){
       printf("\nEnter score for unit %d :", j);
       scanf("%d",&Details[i][j]);
    }
}
}

void PrintDetails(int Details[TotalStudents][Units], int TotalStudents, int Units){
    for(int i = 0; i< TotalStudents; i++){
        for(int j=0; j<Units; j++){
        printf("%d" , Details[i][j]);
        }
    }
}
int main(){
        int TotalStudents = 0;
        int Units = 0;
        int Matrix[TotalStudents][Units];
    printf("Enter number of students\n");
    scanf("%d",&TotalStudents);
    printf("How nmany units does each student take?");
    scanf("%d", &Units);
    EnterStudentDetails(Matrix[TotalStudents][Units], TotalStudents);

    return 0;
}