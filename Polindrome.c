/*ENE 212-0157/2021
  RICHARD ABUTO*/
#include <stdio.h>
int main() 
{
  int Number;
  int Mirrored = 0;
  int Rem;
  int Initial;
    printf("Enter your number: \n");
    scanf("%d", &Number);
    Initial = Number;
    while (Number != 0) 
    {
        Rem = Number % 10;
        Mirrored = Mirrored * 10 + Rem;
        Number /= 10;
    }
    if (Initial == Mirrored)
        printf("Your number is a palindrome.");
    else
        printf("Your number is not a palindrome.");

    return 0;
} 