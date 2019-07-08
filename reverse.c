#include <stdio.h>
#include <string.h> 
void reverse_str()
{
int length,i, flag = 0;
char string[100], rev_string[100];
printf ("enter a string\n");
scanf("%s", &string);
length = strlen(string);

for (i =0; i<= length; i++)
rev_string[i] = string [length - i];

printf("Reverse of string = %s \n\n", rev_string);

}
