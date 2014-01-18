#include <stdio.h>
int main ()
{
	int a = 1;
	int b = 2;
	int c = (a | b);
	int d = (a || b);
	printf("a = %d\n",a);
	printf("a = %d\n",b);
	printf("a = %d\n",c);
	printf("a = %d\n",d);
	return 0;
}