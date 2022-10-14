//18.7	WAP to given string and find out the num of times 'a' is there in the string.

int main(int argc, char const *argv[])
{
    
    int i,count=0;
    char str[100];
    char n;
    printf("Enter String:");
    gets(str);
    puts(str);

   printf("Enter the charactor to be found N time :");
   scanf("%c",&n);

    for ( i = 0; str[i] !='\0'; i++)
    {
        if (str[i]==n)
        {
            
            count++;

        }
    }

    printf("Element found N time is: %d", count);
    

    


    return 0;
}

