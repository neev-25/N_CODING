#include <stdio.h>

int main()
{
    int a, b;
    printf("enter number a : ");
    scanf("%d", &a);
    printf("enter number b : ");
    scanf("%d", &b);
    char opreator;

    getchar();
    printf("enter your opreator : ");
    scanf("%c", &opreator);

    switch (opreator)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;
    case '/':
        if (b != 0)
            printf("%d / %d = %.2f", a, b, (float)a / b);
        else
            printf("not possible");
        break;
    default:
        printf("invalid opreator");
        break;
    }

    return 0;
}