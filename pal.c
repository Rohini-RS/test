#include <stdio.h>
#include <string.h> 
void palindrome()
{
int length, flag = 0, i =0;
char string[100];
printf ("enter a string\n");
scanf("%s",&string);
length = strlen(string);

for (i=0; i <=length/2 ; i++)
	if (string[i] != string [length-i])
	{
		flag =0;
		break; 
	}

if (flag == 1)
	printf (" %s is a palindrome\n", string);	
else 
	printf (" %s is not a palindrome\n\n", string);

}
