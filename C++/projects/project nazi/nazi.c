#include <stdio.h>

int main()
{

    printf("\n");

    int i, j;

    for (i = 0; i <= 10; i++)
    {
        printf("\t");

        if (i < 5 && i > 0)
        {
            printf("#");
        }

        if (i == 5 || i == 0 || i == 10)
            printf("");
        else
            printf("\t  #");

        if (i > 5 && i < 10)
        {
            printf("\t    #");
        }

        for (j = 0; j < 21; j += 2)
        {

            if (i == 0)
            {
                if (j == 0)
                {
                    printf("\t  # ");
                }
                else if (j > 10)
                {
                    printf("# ");
                };
            }

            if (i == 5)
                printf("# ");

            if (i == 10)
            {
                if (j < 11)
                {
                    printf("# ");
                }
            }
        };

        printf("\n");
    };

    printf("\n");

    return 0;
}