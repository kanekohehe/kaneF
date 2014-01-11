#include <stdio.h>
main ()
{
	char st[123];
	int i; 
	// “ü—Í
	gets(st);
	//scanf("%s",st);
	// o—Í
	printf("[");
	
	if(&st != " ")
	{
		printf(&st);
	}
	printf("]");

}