#include <stdio.h>

int main()
{
  for (int i = 1; i <= 100; i++)
  {
    printf("%d °C = %.2f °F\n", i, (i * 9 / 5.0) + 32);
  }
}
