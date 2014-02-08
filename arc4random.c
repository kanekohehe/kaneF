#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int a = arc4random() % 99;
	printf("%d\n",a);
	return 0;
}