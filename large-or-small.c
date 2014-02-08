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
	counter += 1;
    scanf("%d", &answer);
    if (value == answer) {
      printf("%dChallenge!! Congratulations!!\n", counter);
      break;
    } else if (value < answer) {	// “š‚¦‚ª‘å‚«‚¢‚Æ‚«
      printf("small...\n");
    } else {						// “š‚¦‚ª¬‚³‚¢‚Æ‚«
      printf("large...\n");
    }
  }
  return 0;
}