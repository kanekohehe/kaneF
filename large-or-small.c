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
    } else if (value < answer) {	// �������傫���Ƃ�
      printf("small...\n");
    } else {						// �������������Ƃ�
      printf("large...\n");
    }
  }
  return 0;
}