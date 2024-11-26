'''1. Leitura e Impressão:
Leia uma string e a imprima na tela.
Leia duas strings e as imprima em linhas separadas.'''

#include <stdio.h>

int main()
{
    char palavra1[30];
    char palavra2[30], palavra3[30];

    printf("Digite uma string: ");
    scanf("%s", palavra1);
    printf("String digitada: %s\n\n\n", palavra1);

    printf("Digite a segunda string: ");
    scanf(" %s", palavra2);
    printf("Digite a terceira string: ");
    scanf(" %s", palavra3);

    printf("String 2: %s\nString 3: %s", palavra2, palavra3);
}
