/* three.c */

#include <stdio.h>

int i;
void main() 
{
	for(i = 1; i <= 10; i++)
	{
		printf("%2d squared is %3d\n", i, i * i);
	}
	return(0);
}
