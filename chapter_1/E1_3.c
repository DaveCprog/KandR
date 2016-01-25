#include <stdio.h>

/*print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300*/

main()
{
	float fahr, celsius; 
	int lower, upper, step; 

	lower = 0; // lower limit of temperatur table
	upper = 300; // upper limit
	step = 20; // step size

	fahr = lower; 

	//print heading
	printf("\n\nFarenheit to Celcius table\n");
	printf("  F\tC\n");  
	
	//print table
	while (fahr <= upper)
	{
		celsius = 5*(fahr-32)/9; 
		printf("%3.0f%6.1f\n",fahr,celsius);
		fahr = fahr + step; 	
	}
}

