/*ENE 212-0157/2021
  RICHARD ABUTO*/
#include <stdio.h>
int main()
{
    int num1 =0;
    int num2 =1;
    int NextNum = num1 + num2;
    int term;
    printf("How many terms of the Fibonacci series would you like?\n");
    scanf("%d", &term);
    printf("%d,%d,",num1 , num2);
    for(int i = 3; i <= term; i++)
    {
    printf("%d,", NextNum);
    num1 = num2;
    num2 = NextNum;
    NextNum = num2 + num1;
    }
    return 0;
}