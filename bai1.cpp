#include <stdio.h>
int main () 
{
	int a0 = 0;
	int a1 = 1;
	int a;
	
	printf ("fibonacci series between 1 and 100 are: \n");
	for (int i = 2; i <= 100; i++)
	{
		a = a0 + a1;
		a0 = a1;
		a1 = a;
		if (a > 1 && a < 100)
		{
		   printf ("%d\n", a);
		}		  
	}
	
	  return 0;
}
