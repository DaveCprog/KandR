#include <stdio.h>

/*print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300*/


int f2c(int fahr)
{
	return (5*(fahr-32)/9);
}

main()
{
	int fahr; 
	int lower, upper, step; 

	lower = 0; // lower limit of temperatur table
	upper = 300; // upper limit
	step = 20; // step size

	fahr = lower; 
	while (fahr <= upper)
	{
		printf("%d\t%d\n",fahr,f2c(fahr));
		fahr = fahr + step; 	
	}
}

