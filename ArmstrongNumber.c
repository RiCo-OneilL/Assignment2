/*ENE 212-0157/2021
  RICHARD ABUTO*/
#include <stdio.h>
#include <math.h>

int main() 
{
   int Number;
   int InitialNum;
   int Rem;
   int i = 0;
   float Result = 0.0;

   printf("Enter your number: \n ");
   scanf("%d", &Number);
   InitialNum = Number;

   for (InitialNum = Number; InitialNum != 0; i++) 
   {
       InitialNum /= 10;
   }

   for (InitialNum = Number; InitialNum != 0; InitialNum /= 10) 
   {
      Rem = InitialNum % 10;
      Result += pow(Rem, i);
   }

   if ((int)Result == Number)
    printf("Your number is an Armstrong number.");
   else
    printf("Your number is not an Armstrong number.");
   return 0;
}