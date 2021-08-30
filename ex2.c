#include <stdio.h>

int main()
{
  int n;
  int soma = 0;

  for (int i = 0; i < 20; i++)
  {
    puts("Insira numero:");
    scanf("%d", &n);

    if (n == 0)
    {
      break;
    }

    soma += n;
  }

  printf("Soma: %d\n", soma);
}
