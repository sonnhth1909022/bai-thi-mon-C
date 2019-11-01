#include <stdio.h>
int main ()
{
	int n=0;
	double S=0, r=0, l=0; 
	
	printf ("Nhap tong so von: ");
	scanf ("%lf", &S);
	printf ("Nhap lai suat: ");
	scanf ("%lf", &r);
	
	do {
		printf ("Nhap so nam: ");
	    scanf ("%d", &n);
	} while (n == 0);
	
	for (int i = 1; i <= n; i++)
	{
		l = S*(r/100);
		S += l;
		printf ("nam %d, lai %lf, tong von %lf \n", i,l,S);
	}
	
	return 0;
}
