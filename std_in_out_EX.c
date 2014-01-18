#include <stdio.h>
int main ()
{
	int c;
	int flag = 0;
	while((c = fgetc(stdin)) != EOF)
	{
		if(c == ' ' || c == '	')
		{
			flag = 1;
			if(flag)
			{
				printf("\n");
			}
		}
		else
		{
			putchar(c);
			flag = 0;
		}
		if(c=='\n')
			break; 
	}
	return 0;
}
