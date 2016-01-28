//count lines, words, and characters in put

#include <stdio.h> 

#define IN 	1
#define OUT 	0

main()
{
	int character, state, numchar, x, y;
	int chararray[21]; 
	x = 0;
	numchar = 0; 
	state = OUT; 
	y = 0; 	
		
	for(x; x < 21; ++x) 
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
	for (x; x < 21; ++x)
	{
		y = 0; 		
		printf("%d:",x);	
		for (y; y < chararray[x]; ++y)
		printf("-");
		printf("\n");  		
	}
	printf("\n"); 
	
}
