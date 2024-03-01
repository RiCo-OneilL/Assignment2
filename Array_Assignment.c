/*RICHARD ABUTO
  ENE212-0157/2021
*/
#include <stdio.h>
int main()
{
    int Insert;
    int Delete;
    int r;
    int Original[6]={2,3,5,7,9};
       printf("Original Array\n");
        for(int i=0; i<6 ; i++)
    {
        printf("%d,",Original[i]);
    }
    printf("\nEnter number to insert in the array\n");
    scanf("%d",&Insert);
    printf("In what index in the array would you like to place this number?\n");
    scanf("%d",&r);
    if (r>0 && r<5)
    {
        for (int i = 5; r < i ; i--)
        {
         Original[i] = Original[i-1];
        } 
    Original[r] = Insert;
    printf("New Array\n");
    for(int i=0; i<6 ; i++)
    {
        printf("%d,",Original[i]);
    }
    }
    else
    {
        printf("Invalid index! \n");
        return 1;
    }
    int tempStorage;

    for (int i = 0; i < 6; i++){;
        for (int j = i + 1; j < 6; j++){
            if (Original[j] < Original[i]){
                tempStorage = Original[j];
                Original[j] = Original[i];
                Original[i] = tempStorage;
            }
        }
    }
     printf("\nSorted array\n");
        for(int i=0; i<6 ; i++)
    {
        printf("%d,",Original[i]);
    }
    //Deletion process
    printf("\n What index would you like to delete its value?\n");
    scanf("%d", &Delete);
    if (Delete >= 0 && Delete <=6)
    {
     {
        for (Delete ; Delete < 6 ; Delete++)
        {
       Original[Delete] = Original[Delete+1];
        }
        Original[5]= 0;
     }
    
     printf("\nArray after deletion of the number\n");

     for(int i=0; i<6 ; i++)
        {
        printf("%d,",Original[i]);
        }
    }
     
     else
    {
        printf("Invalid index! \n");
        return 1;
    }
    

return 0;

}