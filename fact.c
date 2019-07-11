#include <stdio.h>
 
void fact()
{
  int i, n, fact = 1;
 
  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &n);
 
  for (i = 1; i <= n; i++)
    fact = fact * i;
 
  printf("Factorial of %d = %d\n\n", n, fact);
 
//  return 0;
}
