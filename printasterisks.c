#include <stdio.h>

void printAsterisks(int N)
{

    int i, j;

    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= N; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\nExit program..");
    getch();
}

int main()
{

    int N;
    do
    {
        printf("\nEnter an Integer (5 to 10 only):");
        scanf("%d", &N);

    } while (N < 5 || N > 10);
    printAsterisks(N);

    return 0;
}