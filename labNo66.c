// 66. Develop a C program that prompts the user to enter two strings and
// concatenates them using the strcat function. Display the concatenated string.
#include <stdio.h>
#include <string.h>

int main() {
  char str1[100], str2[100];

  printf("Enter the first string: ");
  scanf("%s", str1);

  printf("Enter the second string: ");
  scanf("%s", str2);

  strcat(str1, str2);

  printf("Concatenated string: %s\n", str1);

  return 0;
}