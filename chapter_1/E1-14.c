//count lines, words, and characters in put

#include <stdio.h> 

#define IN 	1
#define OUT 	0

main()
{
	int character, state, numchar, x, y, largestnum;
	int chararray[128]; 
	x = numchar = y = largestnum = 0;
	state = OUT; 

		
	//clear the buffer
	for(x; x < 128; ++x) 
	chararray[x] = 0; 
	x = 0; 	
	
	while ((character = getchar()) != EOF)
	{	
		//set int to 		
		int y = character;
		
		//increment char array corresponding to value		
		++chararray[y]; 		
	}
	
	
	for (x; x < 129; ++x)
	{
		y = 0; 		
		printf("%c:",x);	
		for (y; y < chararray[x]; ++y)
		printf("-");
		printf("\n");  		
	}
	
}
