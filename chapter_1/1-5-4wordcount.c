//count lines, words, and characters in put

#include <stdio.h> 

#define IN 	1
#define OUT 	0

main()
{
	int character, numword, numlines, numcharacter, state; 
	
	state = OUT; 
	numlines = numword = numcharacter = 0; 
	
	while ((character = getchar()) != EOF)
	{
		++numcharacter; 
		
		
		if (character == '\n') 
		++numlines; 
		
		if (character == ' ' || character == '\n' || character == '\t')
		state = OUT; 
		
		else if  (state == OUT)
		{
			state = IN; 		
			++numword; 		
		}	
	}
	
	printf("%d %d %d\n", numlines, numword, numcharacter); 
}
