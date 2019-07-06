#include <stdio.h>
 
void main()
{
int length, flag = 0;
char string[100];
printf ("enter a string");
gets(string);
length = strlen(string);

for (i=0; i <=length/2 , i++)
	if (string[i] != string [length-i])
	{
		flag =0;
		break(); 
	}

if (flag == 1)
	printf (" %s is a palindrome", string);	
else 
	printf (" %s is not a palindrome", string);

}
