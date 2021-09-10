#include <stdio.h>
#include <conio.h>

int main()
{
  int a,b;
  printf("Enter two values.");
  scanf("%d%d",&a,&b);          // Accept two values from the user first.
  // Now swap these variables values without taking 3rd variable. So, we need to use maths here.
  // Suppose, user enters 10 and 5.
  a = a + b;    // a = 15 b = 5
  b = a - b;    // a = 15 b = 10
  a = a - b;    // a = 5  b = 10
  printf("Values after swapping are %d and %d.\n",a,b);
  getch();
  return 0;
}
