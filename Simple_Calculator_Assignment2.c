/*ENE 212-0157/2021
  RICHARD ABUTO*/
#include <stdio.h>
int Sum=0;
int Diff=0;

void Summation(int num1, int num2)
{
Sum = num1 + num2 ;
}

void Difference(int num1, int num2)
{
    Diff= num1 - num2 ;
}

int main()
{
    int num1=0;
    int num2=0;
    printf("Enter your first number. \n ");
    scanf("%d", & num1);
    
    printf("Enter your second number. \n");
    scanf("%d", & num2);
    
    Summation(num1, num2);
    Difference(num1, num2);

    printf("The sum of your numbers is: %d \n",Sum);
    printf("The diffrence of your numbers is :%d \n", Diff);
    printf("The sum and difference of your numbers are %d and %d resepectively." , Sum , Diff);

    return 0;
}
