#include <stdio.h>
int main ()
{
	int c;
	int inword = 0;
	while((c = fgetc(stdin)) != EOF)
	{
		if(c == ' ' || c == '	')
		{
			if(inword)
			{
				putchar(']');
				putchar('\n');
			}
			inword = 0;
		}
		else
		{
			putchar(c);
			inword = 1;
		}

		if(c=='\n')
			break; 
	}
	return 0;
}
