#include <stdio.h>
int main ()
{
	int c;
	int inword = 0;
	int inspace = 1;
	while((c = fgetc(stdin)) != EOF)
	{
		if(c == ' ' || c == '	' || c == '\n')
		{
			if(inword)
			{
				putchar(']');
				putchar('\n');
			}
			inword = 0;
			inspace = 1;
		}
		else
		{
			if(inspace)
			{
				putchar('[');
			}
			inspace = 0;
			putchar(c);
			inword = 1;

		}
	}
	return 0;
}
