#include <stdio.h>
#include <stdlib.h>

int main()
{
  int value = (arc4random() % 10) + 1;
  int counter = 0;
  while (1) {
    int answer;
    printf("value = %d\n", value);
    printf("? ");
    counter++;
    scanf("%d", &answer);
    if (value == answer) {
      printf("%dChallenge!! Congratulations!!\n", counter);
      break;
    } else if (value < answer) {    // �������傫���Ƃ�
      printf("small...\n");
    } else if (answer < value) {                        // �������������Ƃ�
      printf("large...\n");
    } else {
      //fprintf();
      abort();
    }
  }
  return 0;
}