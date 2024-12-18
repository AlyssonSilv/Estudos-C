#include <stdio.h>

int main()
{
    int a, b;
    char op;
    printf("Digite a operacao: ");
    scanf("%d %c %d", &a, &op, &b);
    switch (op)
    {
    case '+':
        printf("%d\n", a + b);
        break;
    case '-':
        printf("%d\n", a - b);
        break;
    case 'X':
        printf("%d\n", a * b);
        break;
    case '/':
        printf("%d\n", a / b);
        break;
    default:
        printf("Operacao invalida\n");
    }
    return 0;
}