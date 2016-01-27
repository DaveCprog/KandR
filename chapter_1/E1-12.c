//count lines, words, and characters in put

#include <stdio.h> 

#define IN 	1
#define OUT 	0

main()
{
	int character, state; 
	
	state = OUT; 
	
	while ((character = getchar()) != EOF)
	{
		

		
		//if state is in and character is a letter, print the letter
		if (state == IN && !(character == ' ' || character == '\n' || character == '\t' || character == '.'))
		putchar(character); 		
		
		//if state is in and character is not a letter, set a new line, and set state to out
		if (state == IN && (character == ' ' || character == '\n' || character == '\t' || character == '.'))
		{
			putchar('\n'); 
			state = OUT; 		
		}

		

		//if state is out and character is not a letter, do nothing
		
		//if state is out and character is a letter, print the letter and set state to in		
		if (state == OUT && !(character == ' ' || character == '\n' || character == '\t' || character == '.'))
		{
			putchar(character);
			state = IN; 					
		}		
		

	}
}
