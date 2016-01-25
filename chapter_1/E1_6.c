//Demostrates that (getchar() != EOF) is either 1 or 0

#include <stdio.h>

main()
{
	int c; 
	while (c = (getchar() != EOF))
	{	
		printf("%d",c); //prints 1s for however many characters entered
	}
 	printf("%d",c); //prints a 0 before exit
}

