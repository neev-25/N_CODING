#include <stdio.h>

int main()
{

    for (float i = 1; i <= 24; i++)
    {
        if (i >= 1 && i <= 12)
        {
            // printf("%f AM\n", i);
            if (i == 12)
            {
                printf("12 AM noon\n");
            }
            else
            {
                printf("%f AM\n", i);
            }
        }
        else
        {
            // printf("%f PM\n", i - 12);
            if (i == 24)
            {
                printf("12 PM night\n");
            }
            else
            {
                printf("%f PM\n", i - 12);
            }
        }
    }

    return 0;
}
