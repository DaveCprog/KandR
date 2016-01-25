//count characters in input; 1st version
//note CTRL+D to send EOF
#include <stdio.h> 

main()
{
	long nc; 
	
	nc = 0; 
	while (getchar() != EOF)
		++nc; 
	printf("%ld\n", nc);
}
