#include <stdio.h>
main ()
{
	char st[123];
	int i; 
	// ����
	gets(st);
	//scanf("%s",st);
	// �o��
	printf("[");
	
	if(&st != " ")
	{
		printf(&st);
	}
	printf("]");

}