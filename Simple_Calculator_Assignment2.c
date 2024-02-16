/*ENE 212-0157/2021
  RICHARD ABUTO*/
#include <stdio.h>
int Sum=0;
int Diff=0;
int Mult=0;
float Div;
int Even1, Even2;

void Summation(int num1, int num2)
{
Sum = num1 + num2 ;
}

void Difference(int num1, int num2)
{
    Diff= num1 - num2 ;
}

void Multiplication(int num1, int num2)
{
  Mult = num1 * num2 ;
}

void Division(float num1, float num2)
{
  Div = num1 / num2 ;
}

void EvenOddCheck(int num1, int num2)
{
  Even1 = num1 % 2;
  if(Even1 == 0)
  {
    printf("Your first number is even.\n");
  }
  else
  {
  printf("Your first number is odd.\n ");
  }

  Even2 = num2 % 2;
  if(Even2==0)
    {
      printf("Your second number is even. \n");
    }
  else
    {
    printf("Your second number is odd. \n");
    }
}

void MagnitudeCheck(int num1, int num2)
{
  if (num1 > num2)
  {
   printf("Your first number is greater than your second number.\n");
  }
  else if (num1 < num2)
  {
   printf("Your first number is less than your second number.\n");
  }
else
{
  printf("Your first number is equal to your second number.\n");
}
}

int main()
{
    int num1=0;
    int num2=0;
    printf("Enter your first number. \n ");
    scanf("%d", & num1);
    
    printf("Enter your second number. \n");
    scanf("%d", & num2);
    
    EvenOddCheck(num1, num2);
    MagnitudeCheck(num1, num2);
    Summation(num1, num2);
    Difference(num1, num2);
    Multiplication(num1, num2);
    Division(num1, num2);

    printf("The sum of your numbers is: %d \n",Sum);
    printf("The difference of your numbers is :%d \n", Diff);
    printf("The sum and difference of your numbers are %d and %d resepectively.\n" , Sum , Diff);
    printf("The product of your numbers is: %d\n", Mult);
    printf("The division of your numbers give : %f \n", Div);
    return 0;
}
