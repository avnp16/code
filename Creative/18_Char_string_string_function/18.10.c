// 18.1	WAP to given string and display reverse order.

int main(int argc, char const *argv[])
{

    int i, count = 0;
    char str[100];
    char str1[100];

    printf("Enter String:");
    gets(str);
    // puts(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    for (i = count; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
