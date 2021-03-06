//print the longest input line

#include <stdio.h>
#define MAXLINE 10

int getlines (char s [], int lim); 
void copy(char to[], char from[]); 

main()
{
	int len; 		//current line length
	int max; 		//maximum line length so far
	int templen; 

	char c; 
	char line[MAXLINE]; 	//current input line
	char longest[MAXLINE];	//longest line saved here

	
	max = 0; 
	while ((len = getlines(line, MAXLINE)) > 0)
	{
		if(line[len-1] != '\n')	
			while (((c = getchar()) != EOF) && (c != '\n'))
				++len;
	
		
		if(len > max)
		{
			max = len; 
			copy(longest, line); 		
		}

			
	}
	if (max > 0)
	{
		printf("%s\n", longest); 
		printf("Length: %i\n", max); 
	}
	return 0; 	
}

//getline: read a line into s, return length
int getlines(char s[], int lim)
{
	int c, i; 
	
	for(i = 0; i < (lim - 1) && ((c = getchar()) != EOF) && (c != '\n'); ++i)
		s[i] = c; 

	if (c == '\n')
	{
		s[i] = c; 
		++i; 
	}
	s[i] = '\0'; 
	return i; 	
}

//copy: copy 'from' into 'to'; assume to is big enough
void copy(char to[], char from[])
{
	int i; 
	
	i = 0; 
	while((to[i] = from[i]) != '\0')
		++i; 
}
