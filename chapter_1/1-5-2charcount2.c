//count characters in input; 1st version
//note CTRL+D to send EOF
#include <stdio.h> 

main()
{
	double nc; 
	
	nc = 0; 
	for (nc = 0; getchar() != EOF; ++nc); 
	printf("%.0f\n", nc);
}
