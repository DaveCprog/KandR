//count lines, words, and characters in put

#include <stdio.h> 

#define IN 	1
#define OUT 	0

main()
{
	int character, state, numchar, largestnum, quant, x, y;
	int chararray[500]; 
	x = y = numchar = largestnum = quant = 0; 
	state = OUT; 
		
	for(x; x < 501; ++x) 
	chararray[x] = 0; 
	x = 0; 	
	
	while ((character = getchar()) != EOF)
	{
		
		
		//if state is in and character is a letter, incremenet numchar
		if (state == IN && !(character == ' ' || character == '\n' || character == '\t' || character == '.'))
		++numchar; 		
		
		//if state is in and character is not a letter, increment chararray, reset numchar, and set state to out
		if (state == IN && (character == ' ' || character == '\n' || character == '\t' || character == '.'))
		{
			++chararray[numchar];
			if (numchar > largestnum)
			largestnum = numchar; 			
			numchar = 0; 
			state = OUT;
		}
		

		//if state is out and character is not a letter, do nothing
		
		//if state is out and character is a letter, increment numchar and set state to in		
		if (state == OUT && !(character == ' ' || character == '\n' || character == '\t' || character == '.'))
		{
			++numchar;
			state = IN; 					
		}		
	}

	
	for (x = 0; x < largestnum + 1; ++x)
	{
		if (chararray[x] > quant)
			quant = chararray[x]; 
	}	

	for (x = quant; x > -1; --x) 
	{
				
		printf("\n"); 
		for (y = 0; y < largestnum; y++)
		{
			if(chararray[y] < x) 
			printf(" "); 
			else 
			printf("|"); 
		}
		
	
	}
	printf("\n"); 
	for (y = 0; y <largestnum+1; ++y)
		printf("%d",y); 
	printf("\n"); 	
}



























