// 10.5	WAP to enter password and check password with entered password, if password is match then print ""

//

#include <stdio.h>

int main()
{
    int pass0, pass1;

    printf("Enter the Password");
    scanf("%d", &pass0);

    do
    {
        printf("Enter the Password");
        scanf("%d", &pass1);
        if (pass1 == pass0)
        {
            printf("Welcome\n");
        }

    } while (pass1 != pass0);

    return 0;
}