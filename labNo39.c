// 39. Write a Program to find the greatest among three input numbers
#include <stdio.h>

int main() {
  int num1, num2, num3;

  printf("Enter three numbers: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  if (num1 >= num2 && num1 >= num3) {
    printf("%d is the greatest number.", num1);
  } else if (num2 >= num1 && num2 >= num3) {
    printf("%d is the greatest number.", num2);
  } else {
    printf("%d is the greatest number.", num3);
  }

  return 0;
}
