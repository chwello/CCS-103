#include <stdio.h>

#define defaultPassword 12345

int validatePassword(password)
{

    int pin2 = defaultPassword;

    do
    {

        printf("\n\nEnter your pin number:");
        scanf("%d", &password);

        if (password != pin2)
        {
            printf("\nplease input again, password is incorrect.");
        }

    } while (password != pin2);
    printf("\nAccess Granted!");
}

int main(void)
{

    int password;

    validatePassword();

    return 0;
}
