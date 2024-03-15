#include <stdio.h>

void GetMatrixElements(int matrix[][10], int row, int column, int n) {
   printf("\nEnter the matrix elements of matrix %d: \n",n);
    
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         printf("Enter a%d%d: ", i + 1, j + 1);
         scanf("%d", &matrix[i][j]);
      }
   }
}

void MultiplyMatrices(int FirstMatrix[][10],
                      int SecondMatrix[][10],
                      int Result[][10],
                      int r1, int c1, int r2, int c2)
    
     {
   
   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
        Result[i][j] = 0;
      }
   }

   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         for (int k = 0; k < c1; ++k) {
            Result[i][j] += FirstMatrix[i][k] * SecondMatrix[k][j];
         }
      }
   }
}

void Display(int Result[][10], int row, int column) {

   printf("\nThe output of the product of the matrices:\n");
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         printf("%d  ", Result[i][j]);
         if (j == column - 1)
            printf("\n");
      }
   }
}

int main() 
{
   int FirstMatrix[10][10], SecondMatrix[10][10], Result[10][10], r1, c1, r2, c2,n=1;
   printf("How many rows and columns does the first matrix have? \n ");
   printf("Rows: ");
   scanf("%d", &r1);
   printf("\n Columns: ");
   scanf("%d",&c1);
   printf("\n\nHow many rows and columns does the second matrix have? \n");
   printf("Rows: ");
   scanf("%d",&r2);
   printf("\n Columns: ");
   scanf("%d",&c2);

   while (c1 != r2) {
      printf("Error! Incompatible matrices!!\n");
      printf("Re-enter the number of rows and columns for the first matrix:\n");
      printf("Rows: ");
      scanf("%d",&r1);
      printf("\n Columns: ");
      scanf("%d",&c1);
      printf("\n\n Re-enter the number of rows and column for the second matrix: \n");
      printf("Rows: ");
      scanf("%d",&r2);
      printf("\n Columns: ");
      scanf("%d",&c2);
   }

   GetMatrixElements(FirstMatrix, r1, c1, n);
    n++;
   GetMatrixElements(SecondMatrix, r2, c2, n);
   MultiplyMatrices(FirstMatrix, SecondMatrix, Result, r1, c1, r2, c2);
   Display(Result, r1, c2);

   return 0;
}