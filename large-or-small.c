#include <stdio.h>
#include <stdlib.h>

int main()
{
	int value = (arc4random() % 5) + 1;
	while (1) {
		int answer;
		printf("value = %d\n", value);
		printf("? ");
		scanf("%d", &answer);
		if (value == answer) {
		  printf("Congratulations!!\n");
		  break;
		} else if (value < answer) {	// 答えが大きいとき
		  printf("small...\n");
		} else {						// 答えが小さいとき
		  printf("large...\n");
		}
	}
	return 0;
}