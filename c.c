#include <stdio.h>
int main ()
{
	int a = 4;
	int b = 2;
	int c = (a | b);
	int d = (a || b);
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("c = %d\n",c);
	printf("d = %d\n",d);
	return 0;
}