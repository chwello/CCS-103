#include <stdio.h>

void countEvenOdd(int even, int odd)
{

    printf("\nEven: %d", even);
    printf("\nOdd: %d", odd);
    printf("\nExit program..");
    getch();
}

int main()
{

    int n, even = 0, odd = 0;
    while (n != 0)
    {
        printf("\nEnter an Integer: ");
        scanf(" %d", &n);
        if (n == 0)
        {
            break;
        }
        if (n % 2 == 0)
        {
            ++even;
        }
        else
        {
            ++odd;
        }
    }

    countEvenOdd(even, odd);
}
