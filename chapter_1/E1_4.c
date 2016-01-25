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
	printf("\n\nCelsius to Farenheit table\n");
	printf("  C\tF\n");  
	
	//print table
	while (celsius <= upper)
	{
		fahr = ((9*celsius)/5)+32; //reverse formula
		printf("%3.0f%6.1f\n",celsius, fahr);
		celsius = celsius + step; 	
	}
}

