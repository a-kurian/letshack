#include<stdio.h>
int main()
{
  char input_string[35];
  fgets(input_string, sizeof(input_string),stdin);
  printf("Hello, World.\n");
  puts(input_string);
  return 0;
}
