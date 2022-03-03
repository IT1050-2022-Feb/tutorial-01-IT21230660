/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int i,n,num,sum;

  printf("Enter the number of numbers:");
  scanf("%d",&n);

  printf("Enter the %d integers\n",n);
  
  for(i=1;i<=n;i++)
    {
      scanf("%d",&num);
      sum=sum+num;
    }

  printf("Sum of the integers: %d",sum);
  
  return 0;
}

