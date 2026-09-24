#include <stdio.h>

int main()
{
  int num;
  printf("Enter an number : ");
  scanf("%d",&num);
  if( num % 2 == 0)
  {
      printf("Even number = %d",num);
  }
  else
  {
      printf("Odd number = %d",num);
  }
  return 0;
}
