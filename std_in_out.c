#include <stdio.h>
int check(char c)
{
	if (c == '+'|c == '-'|c == '='|c == ' ')
		return 1;
	else
		return 0;
}
main ()
{
	int c;
	int i;
	char st[123];
	//st[0] = '[';						/*���̊���*/
	//i = 1;
    while ((c = getchar(  )) != EOF)	/* �����̓��� */
	{
		if (c == '\n')					/*Enter�Ŕ���*/
		{
			st[i] = ']';
            break;               
		}
		if (c == ' ')					/*SPACE*/
		{
		}
		else if (c == '+'|c == '-'|c == '=')/* + - = */
		{
			st[i] = '[';
			i++;
			st[i] = c;
			i++;
			st[i] = ']';
			i++;
		}
		else							/*����*/
		{
			if(i != 0)
			{
				if(check(st[i-1]))
				{
					st[i] = '[';
					i++;
				}
			}
			else
			{
				st[i] = '[';
				i++;
			}
			st[i] = c;
			i++;
		}
		
    }
	printf("%s",st); 
}