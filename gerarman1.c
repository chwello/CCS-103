#include <stdio.h>

int main()
{

    int menu, n, i, j;
    int odd = 0, even = 0;
    int pin = 0, pin2 = 12345;
    char ch;

    do
    {
        do
        {

            system("CLS");
            printf("\t\t\t\t\t    Please choose one of the options below\n");
            printf("\t\t\t\t__________________________________________________________");
            printf("\n\t\t\t\t|                                                         |");
            printf("\n\t\t\t\t|                 [ 1 ]  Print asterisks                  |");
            printf("\n\t\t\t\t|                 [ 2 ]  Count Odd and Even               |");
            printf("\n\t\t\t\t|                 [ 3 ]  Validate a Password              |");
            printf("\n\t\t\t\t|                 [ 4 ]  Exit the program                 |");
            printf("\n\t\t\t\t|_________________________________________________________|");
            // menu

            printf("\n\n\t\t\t\tChoose from the following choices: ");
            scanf("%d", &menu);
            if (menu < 1 || menu > 4)
            {
                printf("\n\t\t\t\tINVALID");
                getch();
            } else if (menu==4){
                break;
            }
        } while (menu < 1 || menu > 4);

        system("CLS");
        if (menu == 1)
        {

            do
            {
                printf("\n\t\t\t\tEnter an Integer (5 to 10 only):");
                scanf("%d", &n);
                if (n < 5 || n > 10)
                {
                    printf("\n\t\t\t\tInvalid Number");
                }
            } while (n < 5 || n > 10);

            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= n; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
        }
        if (menu == 2)
        {

            n = 1;

            while (n != 0)
            {
                printf("\n\t\t\t\tEnter an Integer: ");
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

            printf("\n\t\t\t\tEven: %d", even);
            printf("\n\t\t\t\tOdd: %d", odd);
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
        }
        else if (menu == 3)
        {

            do
            {
                system("CLS");
                printf("\n\t\t\t\t_____________________________________");
                printf("\n\t\t\t\t       Enter your pin number:");
                scanf("%d", &pin);
                printf("\n\t\t\t\t_____________________________________");

                if (pin != pin2)
                {
                    printf("\n\t\t\t\tplease input again, password is incorrect.");
                    getch();
                }

            } while (pin != pin2);
            printf("\n\n\t\t\t\tAccess Granted!");
            getch();

            getch;
        }
        else
        {
            printf("\n\t\t\t\t_________________________________________________________________________________");
            printf("\n\t\t\t\t|                                                                                |");
            printf("\n\t\t\t\t|                               Exit program                                     |");
            printf("\n\t\t\t\t|                                                                                |");
            printf("\n\t\t\t\t|                                                                                |");
            printf("\n\t\t\t\t|                        Developed by: FRETCHEL GERARMAN                         |");
            printf("\n\t\t\t\t|________________________________________________________________________________|");
        }
    } while (menu != 4);
}