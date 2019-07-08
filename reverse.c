#include <stdio.h>
 
void main()
{
int length, flag = 0;
char string[100], rev_string[100];
printf ("enter a string");
gets(string);
length = strlen(string);

for (i =0; i<= length; i++)
rev_string[i] = string [length - i];

printf(" reversed string = %s ", rev_string);

}
