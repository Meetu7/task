/*find odd even using for loop*/
#include <stdio.h>

int main()
{
    int i, n;

    printf("all even numbers ::");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: \n", n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    printf("all odd numbers ::");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: \n", n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}