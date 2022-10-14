#include <stdio.h>
int main() {

  int n, i, range;
  //printf("Enter an integer: ");
  scanf("%d", &n);

  // prompt user for positive range
  do {
    //printf("Enter the range (positive integer): ");
    scanf("%d", &range);
  } while (range <= 0);

  for (i = 1; i <= range; ++i) {
    if (i%2!=0)
       printf("%d x %d = %d
", n, i, n * i);
  }

  return 0;
}
