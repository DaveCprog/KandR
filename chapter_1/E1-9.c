//Write a program to copy its input to its output, replacing each string of one or 
//spaces with a single space
#include <stdio.h>

main()
{
	int c, flag; 

	flag = 0; 
	
	while ((c = getchar()) != EOF)
	{	
		if (c != ' ')
		{	    	
		putchar(c);  
		flag = 0; 		
		}
		else if (c == ' ' && flag == 0)
		{		
		putchar(c); 
		flag = 1; 		
		}
	}	
		
}
