#include <stdio.h>

int main()
{
  int n, maior, menor;
  int soma = 0;

  for (int i = 0; i < 5; i++)
  {
    puts("Insira numero:");
    scanf("%d", &n);

    if (i == 0)
    {
      maior = n;
      menor = n;
    }

    if (n > maior)
    {
      maior = n;
    }
    else if (n < menor)
    {
      menor = n;
    }

    soma += n;
  }

  printf("Maior: %d\n", maior);
  printf("Menor: %d\n", menor);
  printf("Media: %.2f\n", soma / 5.0);
}
