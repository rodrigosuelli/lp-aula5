#include <stdio.h>

int main()
{
  int n;
  int qtd_pares = 0;

  for (int i = 0; i < 10; i++)
  {
    puts("Insira numero:");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
      qtd_pares++;
    }
  }

  printf("Pares: %d\n", qtd_pares);
}
