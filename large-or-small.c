#include <stdio.h>
#include <stdlib.h>

int main ()
{
	while(1)
	{
		int value = (arc4random() % 5) + 1;
		int answer;
		printf("?");
		scanf("%d",&answer);
		
		if(value == answer)
		{
			printf("Congratulations!!");
			break;
		}
		else if(value < answer)	// �������傫���Ƃ�
		{
			printf("small...");
		}
		else					// �������������Ƃ�
		{
			printf("large...");
		}

	}
	
	return 0;
}