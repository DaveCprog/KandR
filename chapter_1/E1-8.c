//count spaces, tabs, and newlines
#include <stdio.h>

main()
{
	int c, newlines, spaces, tabs; 
	
	newlines = spaces = tabs = 0; 

	while ((c = getchar()) != EOF)
	{	
		if (c == '\n')
    		++newlines; 
		else if (c == '\t')
		++tabs; 
		else if (c == ' ')
		++spaces; 
	}	
		
	printf("newlines:\t%d\n", newlines);
	printf("tabs:\t\t%d\n", tabs);
	printf("spaces:\t\t%d\n", spaces); 
}
