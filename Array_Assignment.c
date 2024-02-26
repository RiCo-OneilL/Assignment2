/*RICHARD ABUTO
  ENE212-0157/2021
*/
#include <stdio.h>
int main()
{
    int Original[6]={2,3,5,7,9,0};
       printf("Original Array\n");
        for(int i=0; i<6 ; i++)
    {
        printf("%d,",Original[i]);
    }
    Original[5] = Original[4];
    Original[4]= Original[3];
    printf("\nEnter number to insert between 5 and 7 in the array\n");
    scanf("%d",&Original[3]);
    printf("New Array\n");
    for(int i=0; i<6 ; i++)
    {
        printf("%d,",Original[i]);
    }
    
    //Deletion process
     Original[3]= Original[4];
     Original[4]= Original[5];
     Original[5]= 0;
     printf("\nArray after deletion of the inserted number\n");

     for(int i=0; i<6 ; i++)
    {
        printf("%d,",Original[i]);
    }


return 0;

}